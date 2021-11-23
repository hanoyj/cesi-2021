#pragma once

#include "GestionBDD.h"
#include "MappingTablePersonne.h"
#include "MappingTableAdresse.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace Services
{
	ref class ServiceGestionClients
	{
	private:
		ComposantsBDD::GestionBDD^ gestionBdd;
		ComposantsBDD::MappingTablePersonne^ personne;
		ComposantsBDD::MappingTableAdresse^ adresse;
		DataSet^ ds;

	public:
		ServiceGestionClients(void);

		DataSet^ listeClients(String^);
		DataSet^ adressesClient(int, String^);

		void ajouter(String^, String^, array<String^>^);
		void modifier(int, String^, String^, array<String^>^);
		void supprimer(int);
	};
}