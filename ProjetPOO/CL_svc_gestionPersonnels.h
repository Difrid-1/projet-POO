#pragma once
#include "CL_CAD.h"
#include "CL_map_personnel.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;



namespace NS_svc {
	ref class CL_svc_gestionPersonnels
	{
	private:
		NS_Componants::CL_CAD^ CAD;
		NS_Componants::CL_map_personnel^ MAP_PERSONNELS;
		DataSet^ DS;

	public:
		CL_svc_gestionPersonnels();
		DataSet^ ListePersonnels(String^);
		int ajouter(String^, String^,String^,String^,int);
		int ajouter(String^, String^, String^, String^);
		void modifier(int, String^, String^, String^, String^, int);
		void modifier(int, String^, String^, String^, String^);
		void supprimer(int);
	};

}
