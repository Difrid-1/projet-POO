#include "CL_map_TBPERSONNE.h"

NS_Componants::CL_map_TBPERSONNE::CL_map_TBPERSONNE()
{
    this->id_personne = 0;
    this->Nom = "NULL";
    this->prenom = "NULL";
}

String^ NS_Componants::CL_map_TBPERSONNE::CREATE()
{
    String^ request;
    request = "INSERT INTO TB_PERSONNE (Prenom,Nom)\nVALUES ("+ "'" + this->prenom + "','" + this->Nom + "');SELECT @@IDENTITY;";
    return request;
}

String^ NS_Componants::CL_map_TBPERSONNE::UPDATE()
{
    String^ request;
    request = "UPDATE TB_PERSONNE\nSET Prenom =" + "'" + this->prenom + "'," + "Nom =" + "'"+ this->Nom + "'" + "\nWHERE id_personne =" + this->id_personne;
    return request;
}

String^ NS_Componants::CL_map_TBPERSONNE::DELETE()
{
    String^ request;
    request = "DELETE FROM TB_PERSONNE \nWHERE id_personne =" + this->id_personne;
    return request;
}

String^ NS_Componants::CL_map_TBPERSONNE::SELECT()
{
    String^ request;
    request = "SELECT * FROM TB_PERSONNE";
    return request;
}

int NS_Componants::CL_map_TBPERSONNE::getid_personne()
{
    return this->id_personne;
}

void NS_Componants::CL_map_TBPERSONNE::setid_personne(int id_personne)
{
    this->id_personne = id_personne;
}

String^ NS_Componants::CL_map_TBPERSONNE::getPrenom_personne()
{
    return this->prenom;
}

void NS_Componants::CL_map_TBPERSONNE::setPrenom_personne(String^ prenom)
{
    this->prenom = prenom;
}

String^ NS_Componants::CL_map_TBPERSONNE::getNom_personne()
{
    return this->Nom;
}

void NS_Componants::CL_map_TBPERSONNE::setNom_personne(String^ nom)
{
    this->Nom = nom;
}
