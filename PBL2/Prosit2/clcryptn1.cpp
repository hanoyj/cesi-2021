#include "clcryptn1.h"

using namespace CryptoComponents;

CLCryptN1::CLCryptN1()
{
	int i;
	char c;
	c = 'a';
	for (i = 0; i < 26; i++)
	{
		// On remplit le tableau avec l'alphabet classique
		this->alphabetClear[i] = c;
		c++;
	}
	c = 'a';
	for (i = 0; i < 26; i++)
	{
		// On remplit le tableau avec l'alphabet decale
		c++;
		this->alphabetCrypt[i] = c;
	}
	this->alphabetClear[26] = ' ';
	this->alphabetCrypt[26] = '*';
	this->alphabetCrypt[25] = 'a';
}

string CLCryptN1::getClear(string chaineCryptN1)
{
	string reponse;
	string s;
	int i;
	int ii;
	int tailleChaineCrypt;
	int tailleAlphabetCrypt;
	tailleChaineCrypt = chaineCryptN1.length();
	tailleAlphabetCrypt = 27;

	for (i = 0; i < tailleChaineCrypt; i++)
	{
		for (ii = 0; ii < tailleAlphabetCrypt; ii++)
		{
			if (chaineCryptN1[i] == this->alphabetCrypt[ii])
			{
				s = this->alphabetClear[ii];
				reponse.append(s);
			}
		}
	}
	return reponse;
}

string CLCryptN1::getCrypt(string chaineClearN1)
{
	string reponse;
	string s;
	int i;
	int ii;
	int tailleChaineClearN1;
	int tailleAlphabet;
	tailleChaineClearN1 = chaineClearN1.length();
	tailleAlphabet = 27;
	for (i = 0; i < tailleChaineClearN1; i++)
	{
		for (ii = 0; ii < tailleAlphabet; ii++)
		{
			if (chaineClearN1[i] == this->alphabetClear[ii])
			{
				s = this->alphabetCrypt[ii];
				reponse.append(s);
			}
		}
	}
	return reponse;
}