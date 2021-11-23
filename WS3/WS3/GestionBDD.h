#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

namespace ComposantsBDD
{
	ref class GestionBDD
	{
	private:
		String^ cnx;
		String^ rq_sql;
		
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA;
		DataSet^ DS;

		void setSQL(String^);
	public:
		GestionBDD(void);

		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}
