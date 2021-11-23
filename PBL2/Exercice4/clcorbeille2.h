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
	// Le message à lire
	string message;

	ifstream f_in;
	ofstream f_out;
	FILE* file;

	// Alphabet en clair
	char alphabetCL[27];
	// Alphabet crypte
	char alphabetCR[27];
public:
	// Constructeur de la classe
	CLcorbeille2();

	// Fonction permettant de recuperer la lettre en clair
	char getCL(char);
	// Fonction permettant de recuperer la lettre cryptee
	char getCR(char);

	// Fonction de chiffrement de type xOR
	char applyXOR(char, char);

	// Fonction pour ecrire un message dans un fichier texte
	void ecrire(string, string);
	// Fonction pour lire un message à partir d'un fichier texte
	string lire(string);

	// Fonction pour ecrire un message dans un fichier binaire
	void ecrireBIN(string, string, int);
	// Fonction pour ecrire un message à partir d'un fichier binaire
	string lireBIN(string, int);
};

#endif