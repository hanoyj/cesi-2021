#include "clcryptn2.h"

using namespace CryptoComponents;

string CLCryptN2::get(string chaine, string psw)
{
	int i;
	int ii;
	int tailleChaine;
	int taillePsw;
	string s;
	char cX;
	string reponse;
	tailleChaine = chaine.length();
	taillePsw = psw.length();
	ii = 0;
	for (i = 0; i < tailleChaine; i++)
	{
		cX = chaine[i] ^ psw[ii];
		s = cX;
		reponse.append(s);
		if (ii == taillePsw - 1)
		{
			ii = 0;
		}
		else
		{
			ii++;
		}
	}
	return reponse;
}