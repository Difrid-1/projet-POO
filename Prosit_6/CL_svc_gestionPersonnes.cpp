#include "CL_svc_gestionPersonnes.h"

NS_svc::CL_svc_gestionPersonnes::CL_svc_gestionPersonnes()
{
    this->CAD = gcnew NS_Componants::CL_CAD();
    this->MAP_TBPERSONNE = gcnew NS_Componants::CL_map_TBPERSONNE();
    this->DS = gcnew Data::DataSet();
}

DataSet^ NS_svc::CL_svc_gestionPersonnes::ListePersonnes(String^ Table)
{
    this->DS->Clear();
    this->DS = this->CAD->getRows(this->MAP_TBPERSONNE->SELECT(), Table);
    return this->DS;
    
}

int NS_svc::CL_svc_gestionPersonnes::ajouter(String^ Prenom, String^ Nom)
{
    int id;

    this->MAP_TBPERSONNE->setNom_personne(Nom);
    this->MAP_TBPERSONNE->setPrenom_personne(Prenom);
    return id = this->CAD->actionRowsID(this->MAP_TBPERSONNE->CREATE());

}

void NS_svc::CL_svc_gestionPersonnes::modifier(int ID, String^ Prenom, String^ Nom)
{
    this->MAP_TBPERSONNE->setid_personne(ID);
    this->MAP_TBPERSONNE->setPrenom_personne(Prenom);
    this->MAP_TBPERSONNE->setNom_personne(Nom);
    
    this->CAD->actionRows(this->MAP_TBPERSONNE->UPDATE());
}

void NS_svc::CL_svc_gestionPersonnes::supprimer(int ID)
{
    this->MAP_TBPERSONNE->setid_personne(ID);
    this->CAD->actionRows(this->MAP_TBPERSONNE->DELETE());

}
