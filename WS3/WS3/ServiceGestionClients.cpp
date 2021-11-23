#include "ServiceGestionClients.h"

namespace Services
{
	ServiceGestionClients::ServiceGestionClients(void)
	{
		this->gestionBdd = gcnew ComposantsBDD::GestionBDD();
		this->personne = gcnew ComposantsBDD::MappingTablePersonne();
		this->adresse = gcnew ComposantsBDD::MappingTableAdresse();
	}


	DataSet^ ServiceGestionClients::listeClients(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->gestionBdd->getRows(this->personne->SELECT(), dataTableName);
		return this->ds;
	}

	DataSet^ ServiceGestionClients::adressesClient(int id_personne, String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->adresse->setIdPersonne(id_personne);
		this->ds = this->gestionBdd->getRows(this->adresse->SELECTByIdPersonne(), dataTableName);
		return this->ds;
	}

	void ServiceGestionClients::ajouter(String^ nom, String^ prenom, array<String^>^ lesAdresses)
	{
		int id;
		int i;
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		id = this->gestionBdd->actionRowsID(this->personne->INSERT());
		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->adresse->setIdPersonne(id);
			this->gestionBdd->actionRows(this->adresse->INSERT());
		}
	}

	void ServiceGestionClients::ServiceGestionClients::modifier(int id_personne, String^ nom, String^ prenom, array<String^>^ lesAdresses)
	{
		int i;
		this->personne->setID(id_personne);
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->gestionBdd->actionRows(this->personne->UPDATE());
		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setIdAdresse(Convert::ToInt32(lesAdresses[i])); i++;
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->gestionBdd->actionRows(this->adresse->UPDATE());
		}
	}

	void ServiceGestionClients::supprimer(int idPersonne)
	{
		this->personne->setID(idPersonne);
		// suppression des adresses liées au client
		DataSet^ adresses = this->adressesClient(idPersonne, "adresses");
		for (int i = 0; i < adresses->Tables["adresses"]->Rows->Count; ++i) {
			this->adresse->setIdAdresse(Convert::ToInt32(adresses->Tables["adresses"]->Rows[i]->ItemArray[0]));
			this->gestionBdd->actionRows(this->adresse->DELETE());
		}
		// suppression de la personne de la BDD
		this->gestionBdd->actionRows(this->personne->DELETE());
	}
}
