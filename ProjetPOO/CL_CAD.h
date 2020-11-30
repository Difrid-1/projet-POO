#pragma once

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Componants {
	ref class CL_CAD
	{
	private: 
		String^ Connect;
		String^ Request;
		SqlConnection^ SQLconnect;
		SqlCommand^ SQLcommand;
		SqlDataAdapter^ SQLdataadapter;
		DataSet^ DS;
		void setSQL(String^);
	public:
		CL_CAD();
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);

	};
}

