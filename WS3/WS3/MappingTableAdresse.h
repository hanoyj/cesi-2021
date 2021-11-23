#pragma once

using namespace System;

namespace ComposantsBDD
{
	ref class MappingTableAdresse
	{
	private:
		int id_adresse;
		String^ adresse;
		String^ cp;
		String^ ville;
		int id_personne;

	public:
		MappingTableAdresse(void);
		
		String^ SELECTByIdPersonne(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		
		void setIdAdresse(int);
		void setAdresse(String^);
		void setCp(String^);
		void setVille(String^);
		void setIdPersonne(int);
		int getIdAdresse(void);
		String^ getAdresse(void);
		String^ getCp(void);
		String^ getVille(void);
		int getIdPersonne(void);
	};
}

