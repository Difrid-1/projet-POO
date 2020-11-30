#pragma once
using namespace System;


namespace NS_Componants {
	ref class CL_map_personnel
	{
	private:
		int id_personnel;
		String^ Nom;
		String^ prenom;
		String^ Adresse;
		String^ DateEmbauche;
		int id_personnel_sup;

	public:
		CL_map_personnel();
		String^ CREATE();
		String^ UPDATE();
		String^ DELETE();
		String^ DELETE_CONSTAINT();
		String^ SELECT();
		int getid_personnel();
		void setid_personnel(int);
		String^ getPrenom_personnel();
		void setPrenom_personnel(String^);
		String^ getNom_personnel();
		void setNom_personnel(String^);
		String^ getAdresse_personnel();
		void setAdresse_personnel(String^);
		String^ getDate_personnel();
		void setDate_personnel(String^);
		int getIdSuperieur_personnel();
		void setIdSuperieur_personnel(int);
	};
}
