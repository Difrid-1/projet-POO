#include "CL_CAD.h"

void NS_Componants::CL_CAD::setSQL(String^ requete)
{
	this->Request = requete; //stock la requ�te � ex�cuter
	
}

NS_Componants::CL_CAD::CL_CAD()
{
	this->Request = "NULL";
	this->Connect = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=Projet;Persist Security Info=True;"; // cha�ne de connection � la base de donn�es
	this->SQLconnect = gcnew SqlConnection(this->Connect);// connexion � la base
	this->SQLcommand = gcnew SqlCommand(this->Request, this->SQLconnect);//mise en place de l'ex�cution de requ�te, cette objet sera appeler pour ex�cuter une requ�te
	this->SQLcommand->CommandType = CommandType::Text; //nous entrons du texte dans les requ�te
}

int NS_Componants::CL_CAD::actionRowsID(String^ Request)
{
	int Identifiant;
	this->setSQL(Request); // stock la requ�te
	this->SQLcommand->CommandText = this->Request;// la charge
	this->SQLconnect->Open();
	Identifiant = Convert::ToInt32(this->SQLcommand->ExecuteScalar());//ex�cution de la requ�te et permet le retour d'une donn�e
	this->SQLconnect->Close();
	return Identifiant;
}

void NS_Componants::CL_CAD::actionRows(String^ Request)
{
	
	this->setSQL(Request);
	this->SQLcommand->CommandText = this->Request;
	this->SQLconnect->Open();
	this->SQLcommand->ExecuteNonQuery();//ex�cution de la requ�te sans retour
	this->SQLconnect->Close();
	
}

DataSet^ NS_Componants::CL_CAD::getRows(String^ Request, String^ Table)
{
	this->setSQL(Request);
	this->SQLdataadapter = gcnew SqlDataAdapter(this->SQLcommand);//ex�cution en r�cup�rant des r�sultat en tableau
	this->SQLcommand->CommandText = this->Request;
	this->DS = gcnew DataSet();
	this->SQLdataadapter->Fill(this->DS, Table);//rentre le tableau dans un dataset qui est exploitable en C++
	return this->DS;
}

