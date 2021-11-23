#ifndef CLCRYPTN1_H
#define CLCRYPTN1_H

#include <string>

using namespace std;

namespace CryptoComponents
{
	// Classe permettant de crypter un message en utilisant cesar
	class CLCryptN1
	{
	private:
		// L'alphabet clair
		char alphabetClear[27];
		// L'alphabet crypte
		char alphabetCrypt[27];
	public:
		// Constructeur permettant d'initialiser les alphabets
		CLCryptN1();

		// Retourne un message decode
		string getClear(string);

		// Retourne un message code
		string getCrypt(string);
	};
}

#endif