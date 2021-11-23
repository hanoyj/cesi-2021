// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CLa.h"


int main()
{
	// Allocation statique
	CLa o1;
	// Allocation dynamique
	CLa* o2 = new CLa();

	// Affichage des 2 instances
	o1.afficher();
	o2->afficher();

	std::cout << "Adresse de o1 : " << &o1 << std::endl;
	std::cout << "Adresse de o2 : " << &o2 << std::endl;
	std::cout << "Adresse pointee par o2 : " << o2 << std::endl;
	std::cout << "Taille type : " << sizeof(CLa) << " Octets" << std::endl;
	std::cout << "Taille o1 : " << sizeof(o1) << " Octets" << std::endl;
	std::cout << "Taille o2 : " << sizeof(o2) << " Octets" << std::endl;
	
	// Libération mémoire
	delete o2;
	return 0;
}
