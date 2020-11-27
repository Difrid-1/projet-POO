#include "CL_svc_gestionPersonnes.h"

NS_svc::CL_svc_gestionPersonnes::CL_svc_gestionPersonnes()
{
    this->CAD = gcnew NS_Componants::CL_CAD();// attribution de mémoire
    this->MAP_TBPERSONNE = gcnew NS_Componants::CL_map_TBPERSONNE();
    this->DS = gcnew Data::DataSet();
}

DataSet^ NS_svc::CL_svc_gestionPersonnes::ListePersonnes(String^ Table)
{
    this->DS->Clear();
    this->DS = this->CAD->getRows(this->MAP_TBPERSONNE->SELECT(), Table); // charge toute les données de la table dans un DataSet
    return this->DS;
    
}

int NS_svc::CL_svc_gestionPersonnes::ajouter(String^ Prenom, String^ Nom)
{
    int id;

    this->MAP_TBPERSONNE->setNom_personne(Nom);//Mise en place des differents attributes
    this->MAP_TBPERSONNE->setPrenom_personne(Prenom);
    return id = this->CAD->actionRowsID(this->MAP_TBPERSONNE->CREATE()); //exécution de la requête pour créer

}

void NS_svc::CL_svc_gestionPersonnes::modifier(int ID, String^ Prenom, String^ Nom)
{
    this->MAP_TBPERSONNE->setid_personne(ID);//Mise en place des differents attributes
    this->MAP_TBPERSONNE->setPrenom_personne(Prenom);
    this->MAP_TBPERSONNE->setNom_personne(Nom);
    
    this->CAD->actionRows(this->MAP_TBPERSONNE->UPDATE());//exécution de la requête pour modifier 
}

void NS_svc::CL_svc_gestionPersonnes::supprimer(int ID)
{
    this->MAP_TBPERSONNE->setid_personne(ID);//Mise en place de l'ID qu'on va supprimer
    this->CAD->actionRows(this->MAP_TBPERSONNE->DELETE()); //exécution de la requête pour le supprimer

}
