#include "CL_CAD.h"

void NS_Componants::CL_CAD::setSQL(String^ requete)
{
	this->Request = requete;
	
}

NS_Componants::CL_CAD::CL_CAD()
{
	this->Request = "NULL";
	this->Connect = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=Prosit_6;Persist Security Info=True;";
	this->SQLconnect = gcnew SqlConnection(this->Connect);
	this->SQLcommand = gcnew SqlCommand(this->Request, this->SQLconnect);
	this->SQLcommand->CommandType = CommandType::Text;
}

int NS_Componants::CL_CAD::actionRowsID(String^ Request)
{
	int Identifiant;
	this->setSQL(Request);
	this->SQLcommand->CommandText = this->Request;
	this->SQLconnect->Open();
	Identifiant = Convert::ToInt32(this->SQLcommand->ExecuteScalar());
	this->SQLconnect->Close();
	return Identifiant;
}

void NS_Componants::CL_CAD::actionRows(String^ Request)
{
	
	this->setSQL(Request);
	this->SQLcommand->CommandText = this->Request;
	this->SQLconnect->Open();
	this->SQLcommand->ExecuteNonQuery();
	this->SQLconnect->Close();
	
}

DataSet^ NS_Componants::CL_CAD::getRows(String^ Request, String^ Table)
{
	this->setSQL(Request);
	this->SQLdataadapter = gcnew SqlDataAdapter(this->SQLcommand);
	this->SQLcommand->CommandText = this->Request;
	this->DS = gcnew DataSet();
	this->SQLdataadapter->Fill(this->DS, Table);
	return this->DS;
}

