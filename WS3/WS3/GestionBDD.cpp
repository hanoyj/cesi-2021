#include "GestionBDD.h"

namespace ComposantsBDD
{
	GestionBDD::GestionBDD(void)
	{
		this->rq_sql = "RIEN";
		this->cnx = "Data Source=DESKTOP-K75N7D0\\MSSQL_CESI;" +
			"Initial Catalog=CESI_BDD;" +
			"Persist Security Info=True;" +
			"User ID=cesi;" +
			"Password=azerty;";
		this->CNX = gcnew SqlConnection(this->cnx);
		this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = Data::CommandType::Text;
	}

	int GestionBDD::actionRowsID(String^ rq_sql)
	{
		int id;
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}

	void GestionBDD::actionRows(String^ rq_sql)
	{
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}

	DataSet^ GestionBDD::getRows(String^ rq_sql, String^ dataTableName)
	{
		this->setSQL(rq_sql);
		this->DA = gcnew Data::SqlClient::SqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew Data::DataSet();
		this->DA->Fill(this->DS, dataTableName);
		return this->DS;
	}

	void GestionBDD::setSQL(String^ rq_sql)
	{
		if (rq_sql == "" || rq_sql == "RIEN")
		{
			this->rq_sql = "RIEN";
		}
		else
		{
			this->rq_sql = rq_sql;
		}
	}
}
