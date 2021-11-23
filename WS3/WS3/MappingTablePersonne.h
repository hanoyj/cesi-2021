#pragma once

using namespace System;

namespace ComposantsBDD
{
	ref class MappingTablePersonne
	{
	private:
		int id_personne;
		String^ nom;
		String^ prenom;

	public:
		MappingTablePersonne(void);

		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		
		void setID(int);
		void setPrenom(String^);
		void setNom(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
	};
}