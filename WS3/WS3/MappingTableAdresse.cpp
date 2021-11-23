#include "MappingTableAdresse.h"

namespace ComposantsBDD
{
	MappingTableAdresse::MappingTableAdresse(void)
	{
		this->id_adresse = -1;
		this->adresse = "RIEN";
		this->cp = "RIEN";
		this->ville = "RIEN";
		this->id_personne = -1;
	}
	String^ MappingTableAdresse::SELECTByIdPersonne(void)
	{
		return "SELECT id_adresse, adresse, ville, cp, id_personne " +
			"FROM TB_ADRESSE " +
			"WHERE(id_personne = " + this->id_personne + ");";
	}
	String^ MappingTableAdresse::INSERT(void)
	{
		return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
			"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";
	}
	String^ MappingTableAdresse::UPDATE(void)
	{
		return "UPDATE TB_ADRESSE " +
			"SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
			"WHERE(id_adresse = " + this->id_adresse + "); ";
	}
	String^ MappingTableAdresse::DELETE(void)
	{
		return "DELETE FROM TB_ADRESSE " +
			"WHERE(id_adresse = " + this->id_adresse + ");";
	}
	void MappingTableAdresse::setIdAdresse(int IdAdresse)
	{
		if (IdAdresse > 0)this->id_adresse = IdAdresse;
	}
	void MappingTableAdresse::setAdresse(String^ Adresse)
	{
		if (Adresse != "")this->adresse = Adresse;
	}
	void MappingTableAdresse::setCp(String^ Cp)
	{
		if (Cp != "")this->cp = Cp;
	}
	void MappingTableAdresse::setVille(String^ Ville)
	{
		if (Ville != "")this->ville = Ville;
	}
	void MappingTableAdresse::setIdPersonne(int IdPersonne)
	{
		if (IdPersonne > 0)this->id_personne = IdPersonne;
	}
	int MappingTableAdresse::getIdAdresse(void)
	{
		return this->id_adresse;
	}
	String^ MappingTableAdresse::getAdresse(void)
	{
		return this->adresse;
	}
	String^ MappingTableAdresse::getCp(void)
	{
		return this->cp;
	}
	String^ MappingTableAdresse::getVille(void)
	{
		return this->ville;
	}
	int MappingTableAdresse::getIdPersonne(void)
	{
		return this->id_personne;
	}
}