#ifndef CLCORBEILLE2_H
#define CLCORBEILLE2_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
* Definition de la classe CLcorbeille2
*/
class CLcorbeille2
{
private:
	string message;
	ifstream f_in;
	ofstream f_out;
public:
	// Fonction pour ecrire un message dans un fichier
	void ecrire(string, string);
	// Fonction pour lire un message à partir d'un fichier
	string lire(string);
};

#endif