#ifndef CLCRYPTN2_H
#define CLCRYPTN2_H

#include <string>

using namespace std;

namespace CryptoComponents
{
	// Classe permettant de crypter un message en utilisant xOR
	class CLCryptN2
	{
	public:
		// Retourne un message crypter/decrypter en fonction d'un mot de passe
		string get(string, string);
	};
}

#endif