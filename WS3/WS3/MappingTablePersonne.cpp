#include "MappingTablePersonne.h"

namespace ComposantsBDD
{
	MappingTablePersonne::MappingTablePersonne(void)
	{
		this->id_personne = -1;
		this->nom = "RIEN";
		this->prenom = "RIEN";
	}
	String^ MappingTablePersonne::SELECT(void)
	{
		return "SELECT id_personne, nom, prenom " +
			"FROM TB_PERSONNE;";
	}
	String^ MappingTablePersonne::INSERT(void)
	{
		return "INSERT INTO TB_PERSONNE " +
			"(nom, prenom) " +
			"VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
	}
	String^ MappingTablePersonne::UPDATE(void)
	{
		return "UPDATE TB_PERSONNE " +
			"SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
			"WHERE(id_personne = " + this->getId() + ");";
	}
	String^ MappingTablePersonne::DELETE(void)
	{
		return "DELETE FROM TB_PERSONNE " +
			"WHERE(id_personne = " + this->getId() + ");";
	}
	void MappingTablePersonne::setID(int id_personne)
	{
		if (id_personne > 0)
		{
			this->id_personne = id_personne;
		}
	}
	void MappingTablePersonne::setPrenom(String^ prenom)
	{
		if (prenom != "")
		{
			this->prenom = prenom;
		}
	}
	void MappingTablePersonne::setNom(String^ nom)
	{
		if (nom != "")
		{
			this->nom = nom;
		}
	}
	int MappingTablePersonne::getId(void)
	{
		return this->id_personne;
	}
	String^ MappingTablePersonne::getNom(void)
	{
		return this->nom;
	}
	String^ MappingTablePersonne::getPrenom(void)
	{
		return this->prenom;
	}
}