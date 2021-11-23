// EX3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CLobjet.h"

void comparer(const CLobjet& obj1, const CLobjet& obj2);
void comparer(const CLobjet* obj3, const CLobjet* obj4);


int main()
{
	CLobjet o1;
	CLobjet o2(2, 2);
	CLobjet* o3 = new CLobjet(4, 32);
	CLobjet* o4 = new CLobjet(*o3);
	std::cout << o4->getMasse() << " - " << o4->getVitesse() << std::endl;

	o1.calculer();
	o2.calculer();
	comparer(o1, o2);

	o3->calculer();
	o4->calculer();
	comparer(o3, o4);

	// Libération mémoire
	delete o3;
	delete o4;
	return 0;
}


void comparer(const CLobjet& obj1, const CLobjet& obj2)
{
	if (obj1.getEc() > obj2.getEc())
	{
		std::cout << "L objet 1 a plus d'energie que l'objet 2" << std::endl;
	}
	else if (obj1.getEc() < obj2.getEc())
	{
		std::cout << "L objet 2 a plus d'energie que l'objet 1" << std::endl;
	}
	else
	{
		std::cout << "L objet 1 et l'objet 2 ont même energie" << std::endl;
	}
}

void comparer(const CLobjet* obj3, const CLobjet* obj4)
{
	if (obj3->getEc() > obj4->getEc())
	{
		std::cout << "L objet 3 a plus d'energie que l'objet 4" << std::endl;
	}
	else if (obj3->getEc() < obj4->getEc())
	{
		std::cout << "L objet 4 a plus d'energie que l'objet 3" << std::endl;
	}
	else
	{
		std::cout << "L objet 3 et l'objet 4 ont même energie" << std::endl;
	}
}