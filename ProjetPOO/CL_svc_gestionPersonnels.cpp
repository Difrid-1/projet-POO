#include "CL_svc_gestionPersonnels.h"

NS_svc::CL_svc_gestionPersonnels::CL_svc_gestionPersonnels()
{
    this->CAD = gcnew NS_Componants::CL_CAD();// attribution de mémoire
    this->MAP_PERSONNELS = gcnew NS_Componants::CL_map_personnel();
    this->DS = gcnew Data::DataSet();
}

DataSet^ NS_svc::CL_svc_gestionPersonnels::ListePersonnels(String^ Table)
{
    this->DS->Clear();
    this->DS = this->CAD->getRows(this->MAP_PERSONNELS->SELECT(), Table); // charge toute les données de la table dans un DataSet
    return this->DS;
    
}

int NS_svc::CL_svc_gestionPersonnels::ajouter(String^ Prenom, String^ Nom, String^ Adresse, String^ DateEmbauche,int ID_SUP)
{
    int id;

    this->MAP_PERSONNELS->setNom_personnel(Nom);//Mise en place des differents attributes
    this->MAP_PERSONNELS->setPrenom_personnel(Prenom);
    this->MAP_PERSONNELS->setAdresse_personnel(Adresse);
    this->MAP_PERSONNELS->setDate_personnel(DateEmbauche);
    this->MAP_PERSONNELS->setIdSuperieur_personnel(ID_SUP);

    return id = this->CAD->actionRowsID(this->MAP_PERSONNELS->CREATE()); //exécution de la requête pour créer

}


int NS_svc::CL_svc_gestionPersonnels::ajouter(String^ Prenom, String^ Nom,String^ Adresse, String^ DateEmbauche)
{
    int id;

    this->MAP_PERSONNELS->setNom_personnel(Nom);//Mise en place des differents attributes
    this->MAP_PERSONNELS->setPrenom_personnel(Prenom);
    this->MAP_PERSONNELS->setAdresse_personnel(Adresse);
    this->MAP_PERSONNELS->setDate_personnel(DateEmbauche);
    this->MAP_PERSONNELS->setIdSuperieur_personnel(0);

    return id = this->CAD->actionRowsID(this->MAP_PERSONNELS->CREATE()); //exécution de la requête pour créer

}

void NS_svc::CL_svc_gestionPersonnels::modifier(int ID, String^ Prenom, String^ Nom, String^ Adresse, String^ DateEmbauche, int ID_SUP)
{
    this->MAP_PERSONNELS->setid_personnel(ID);//Mise en place des differents attributes
    this->MAP_PERSONNELS->setNom_personnel(Nom);
    this->MAP_PERSONNELS->setPrenom_personnel(Prenom);
    this->MAP_PERSONNELS->setAdresse_personnel(Adresse);
    this->MAP_PERSONNELS->setDate_personnel(DateEmbauche);
    this->MAP_PERSONNELS->setIdSuperieur_personnel(ID_SUP);

    this->CAD->actionRows(this->MAP_PERSONNELS->UPDATE());//exécution de la requête pour modifier 
}

void NS_svc::CL_svc_gestionPersonnels::modifier(int ID, String^ Prenom, String^ Nom, String^ Adresse, String^ DateEmbauche)
{
    this->MAP_PERSONNELS->setid_personnel(ID);//Mise en place des differents attributes
    this->MAP_PERSONNELS->setNom_personnel(Nom);
    this->MAP_PERSONNELS->setPrenom_personnel(Prenom);
    this->MAP_PERSONNELS->setAdresse_personnel(Adresse);
    this->MAP_PERSONNELS->setDate_personnel(DateEmbauche);
    this->MAP_PERSONNELS->setIdSuperieur_personnel(0);
    
    this->CAD->actionRows(this->MAP_PERSONNELS->UPDATE());//exécution de la requête pour modifier 
}

void NS_svc::CL_svc_gestionPersonnels::supprimer(int ID)
{
    this->MAP_PERSONNELS->setid_personnel(ID);//Mise en place de l'ID qu'on va supprimer
    this->CAD->actionRows(this->MAP_PERSONNELS->DELETE_CONSTAINT()); //exécution de la requête pour le supprimer
    this->CAD->actionRows(this->MAP_PERSONNELS->DELETE()); //exécution de la requête pour le supprimer

}
