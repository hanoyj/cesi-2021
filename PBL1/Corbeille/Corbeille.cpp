// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "ListData.h"

int main()
{
	std::cout << "Allocation statique " << std::endl;
	// Instanciation statique d'une liste
	ListData liste;

	// Ajout données 3, 9, 13, -1
	liste.ajouter(3);
	liste.ajouter(9);
	liste.ajouter(13);
	liste.ajouter(-1);

	// Calcul moyenne
	std::cout << "Moyenne = " << liste.moyenne() << std::endl;

	// Ajout valeur 0
	liste.ajouter(0);

	// Calcul du min
	std::cout << "Valeur min = " << liste.min() << std::endl;


	std::cout << std::endl << "Allocation dynamique" << std::endl;
	// Instanciation dynamique d'une liste
	ListData* listeDynamique = new ListData();

	// Ajout données 3, 9, 13, -1
	listeDynamique->ajouter(3);
	listeDynamique->ajouter(9);
	listeDynamique->ajouter(13);
	listeDynamique->ajouter(-1);

	// Calcul moyenne
	std::cout << "Moyenne = " << listeDynamique->moyenne() << std::endl;

	// Ajout valeur 0
	listeDynamique->ajouter(0);

	// Calcul du min
	std::cout << "Valeur min = " << listeDynamique->min() << std::endl << std::endl;

	// Libération mémoire
	delete listeDynamique;



	ListData ld;
	ld.ajouter(3);
	ld.ajouter(9);
	ld.ajouter(13);
	ld.ajouter(-1);
	ListData* ld2 = new ListData();
	ld2->ajouter(-5);
	ld2->ajouter(-2);
	ld2->ajouter(-13);
	int moy1 = ld.moyenne();
	int moy2 = ld2->moyenne();
	delete ld2;
	if (moy1 == moy2) {
		std::cout << "Les moyennes sont identiques" << std::endl;
	}
	else {
		std::cout << "Les moyennes ne sont pas identiques" << std::endl;
	}

	return 0;
}
