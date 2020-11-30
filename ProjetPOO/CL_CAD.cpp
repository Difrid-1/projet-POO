#include "CL_CAD.h"

void NS_Componants::CL_CAD::setSQL(String^ requete)
{
	this->Request = requete; //stock la requête à exécuter
	
}

NS_Componants::CL_CAD::CL_CAD()
{
	this->Request = "NULL";
	this->Connect = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=Projet;Persist Security Info=True;"; // chaîne de connection à la base de données
	this->SQLconnect = gcnew SqlConnection(this->Connect);// connexion à la base
	this->SQLcommand = gcnew SqlCommand(this->Request, this->SQLconnect);//mise en place de l'exécution de requête, cette objet sera appeler pour exécuter une requête
	this->SQLcommand->CommandType = CommandType::Text; //nous entrons du texte dans les requête
}

int NS_Componants::CL_CAD::actionRowsID(String^ Request)
{
	int Identifiant;
	this->setSQL(Request); // stock la requête
	this->SQLcommand->CommandText = this->Request;// la charge
	this->SQLconnect->Open();
	Identifiant = Convert::ToInt32(this->SQLcommand->ExecuteScalar());//exécution de la requête et permet le retour d'une donnée
	this->SQLconnect->Close();
	return Identifiant;
}

void NS_Componants::CL_CAD::actionRows(String^ Request)
{
	
	this->setSQL(Request);
	this->SQLcommand->CommandText = this->Request;
	this->SQLconnect->Open();
	this->SQLcommand->ExecuteNonQuery();//exécution de la requête sans retour
	this->SQLconnect->Close();
	
}

DataSet^ NS_Componants::CL_CAD::getRows(String^ Request, String^ Table)
{
	this->setSQL(Request);
	this->SQLdataadapter = gcnew SqlDataAdapter(this->SQLcommand);//exécution en récupérant des résultat en tableau
	this->SQLcommand->CommandText = this->Request;
	this->DS = gcnew DataSet();
	this->SQLdataadapter->Fill(this->DS, Table);//rentre le tableau dans un dataset qui est exploitable en C++
	return this->DS;
}

