#include "CL_map_personnel.h"

NS_Componants::CL_map_personnel::CL_map_personnel()
{
    this->id_personnel = 0;
    this->Nom = "NULL";
    this->prenom = "NULL";
    this->Adresse = "NULL";
    this->DateEmbauche = "NULL";
    this->id_personnel_sup = 0;
}
//les strings ci-dessous représente des requête SQL
String^ NS_Componants::CL_map_personnel::CREATE()
{
    String^ request;
    if (this->id_personnel_sup != 0) 
    {
        request = "INSERT INTO Personnel (Prenom,Nom,Adresse,dateEmbauche,idPersonnel_1)\nVALUES (" + "'" + this->prenom + "','" + this->Nom + "','" + this->Adresse + "','" + this->DateEmbauche + "','" + this->id_personnel_sup + "');SELECT @@IDENTITY;";
    }
    else request = "INSERT INTO Personnel (Prenom,Nom,Adresse,dateEmbauche)\nVALUES (" + "'" + this->prenom + "','" + this->Nom + "','" + this->Adresse + "','" + this->DateEmbauche +"');SELECT @@IDENTITY;";
    return request;
}

String^ NS_Componants::CL_map_personnel::UPDATE()
{
    String^ request;
    if (this->id_personnel_sup != 0) 
    {
        request = "UPDATE Personnel\nSET Prenom ='" + this->prenom + "',Nom ='" + this->Nom + "',Adresse='" + this->Adresse + "',dateEmbauche='" + this->DateEmbauche + "',idPersonnel_1='"+ this->id_personnel_sup + "'\nWHERE idPersonnel =" + this->id_personnel;
    }
    else request = "UPDATE Personnel\nSET Prenom ='" + this->prenom + "',Nom ='" + this->Nom + "',Adresse='" + this->Adresse + "',dateEmbauche='" + this->DateEmbauche + "',idPersonnel_1=null\nWHERE idPersonnel =" + this->id_personnel;
    return request;
}

String^ NS_Componants::CL_map_personnel::DELETE()
{
    String^ request;
    request = "DELETE FROM Personnel \nWHERE idPersonnel =" + this->id_personnel;
    return request;
}

String^ NS_Componants::CL_map_personnel::DELETE_CONSTAINT()
{
    String^ request;
    request = "UPDATE Personnel\nSET idPersonnel_1=null\nWHERE idPersonnel_1=" + this->id_personnel;
    return request;
}

String^ NS_Componants::CL_map_personnel::SELECT()
{
    String^ request;
    request = "SELECT * FROM Personnel";
    return request;
}

int NS_Componants::CL_map_personnel::getid_personnel()
{
    return this->id_personnel;
}

void NS_Componants::CL_map_personnel::setid_personnel(int id_personnel)
{
    this->id_personnel = id_personnel;
}

String^ NS_Componants::CL_map_personnel::getPrenom_personnel()
{
    return this->prenom;
}

void NS_Componants::CL_map_personnel::setPrenom_personnel(String^ prenom)
{
    this->prenom = prenom;
}

String^ NS_Componants::CL_map_personnel::getNom_personnel()
{
    return this->Nom;
}

void NS_Componants::CL_map_personnel::setNom_personnel(String^ nom)
{
    this->Nom = nom;
}

String^ NS_Componants::CL_map_personnel::getAdresse_personnel()
{
    return this->Adresse;
}

void NS_Componants::CL_map_personnel::setAdresse_personnel(String^ Adresse)
{
    this->Adresse = Adresse;

}

String^ NS_Componants::CL_map_personnel::getDate_personnel()
{
    return this->DateEmbauche;
}

void NS_Componants::CL_map_personnel::setDate_personnel(String^ Date)
{
    this->DateEmbauche = Date;
}

int NS_Componants::CL_map_personnel::getIdSuperieur_personnel()
{
    return this->id_personnel_sup;
}

void NS_Componants::CL_map_personnel::setIdSuperieur_personnel(int id_sup)
{
    this->id_personnel_sup = id_sup;
}
