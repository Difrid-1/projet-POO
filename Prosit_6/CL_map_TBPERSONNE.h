#pragma once
using namespace System;


namespace NS_Componants {
	ref class CL_map_TBPERSONNE
	{
	private:
		int id_personne;
		String^ Nom;
		String^ prenom;
	public:
		CL_map_TBPERSONNE();
		String^ CREATE();
		String^ UPDATE();
		String^ DELETE();
		String^ SELECT();
		int getid_personne();
		void setid_personne(int);
		String^ getPrenom_personne();
		void setPrenom_personne(String^);
		String^ getNom_personne();
		void setNom_personne(String^);

	};
}
