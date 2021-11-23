#ifndef CLGESTIONCRYPT_H
#define CLGESTIONCRYPT_H

#include "clcryptn1.h"
#include "clcryptn2.h"
#include "clfichier.h"
#include <string>

using namespace std;

namespace CryptoServices
{
	// Classe de gestion de cryptographie
	class CLGestionCrypt
	{
	private:
		// Permet d'acceder aux fonctions de cryptage de niveau 1
		CryptoComponents::CLCryptN1* crypt1;
		// Permet d'acceder aux fonctions de cryptage de niveau 2
		CryptoComponents::CLCryptN2* crypt2;
		// Permet d'acceder aux fonctions de gestion de fichier
		CryptoComponents::CLFichier* fichier;
		// Message à crypter/decrypter
		string message;

	public:
		// Constructeur
		CLGestionCrypt();
		// Fonction permettant de crypter en niveau 1
		string cryptN1(string, string);
		// Fonction permettant de crypter en niveau 2
		string cryptN2(string, string, string);
		// Fonction permettant de crypter en niveau 3
		string cryptN3(string, string, string);

		// Fonction permettant de decrypter en niveau 1
		string deCryptN1(string, string);
		// Fonction permettant de decrypter en niveau 2
		string deCryptN2(string, string, string);
		// Fonction permettant de decrypter en niveau 3
		string deCryptN3(string, string, string);
	};
}

#endif