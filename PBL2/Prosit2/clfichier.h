#ifndef CLFICHIER_H
#define CLFICHIER_H

#include <string>

using namespace std;

namespace CryptoComponents
{
	// Classe de gestion de lecture/ecriture de fichier
	class CLFichier
	{
	public:
		// Fonction permettant de lire un fichier texte
		string read(string);
		// Fonction permettant d'ecrire dans un fichier texte
		void write(string, string);

		// Fonction permettant de lire un fichier binaire
		string readBIN(const char*, int);
		// Fonction permettant d'ecrire dans un fichier binaire
		void writeBIN(string, const char*, int);
	};
}

#endif