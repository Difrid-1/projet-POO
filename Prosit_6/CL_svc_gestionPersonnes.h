#pragma once
#include "CL_CAD.h"
#include "CL_map_TBPERSONNE.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;



namespace NS_svc {
	ref class CL_svc_gestionPersonnes
	{
	private:
		NS_Componants::CL_CAD^ CAD;
		NS_Componants::CL_map_TBPERSONNE^ MAP_TBPERSONNE;
		DataSet^ DS;

	public:
		CL_svc_gestionPersonnes();
		DataSet^ ListePersonnes(String^);
		int ajouter(String^, String^);
		void modifier(int, String^, String^);
		void supprimer(int);
	};

}
