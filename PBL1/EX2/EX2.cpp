// EX2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CLobjet.h"

using namespace std;

// Déclaration méthode de comparaison des énergies cinétiques
void comparer(const CLobjet, const CLobjet);

int main()
{
	CLobjet obj1;
	CLobjet obj2;

	// Init obj1
	obj1.setMasse(100);
	obj1.setVitesse(10);
	// Calcul énergie cinétique obj1
	obj1.calculer();

	// Init obj2
	obj2.setMasse(10);
	obj2.setVitesse(100);
	// Calcul énergie cinétique obj2
	obj2.calculer();

	// Comparaison des énergies cinétiques
	comparer(obj1, obj2);
	return 0;
}


void comparer(const CLobjet o1, const CLobjet o2)
{
	if (o1.getEc() > o2.getEc())
	{
		cout << "L objet 1 a plus d'energie que l'objet 2" << endl;
	}
	else
	{
		cout << "L objet 2 a plus d'energie que l'objet 1" << endl;
	}
}
