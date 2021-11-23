#include "Moto.h"

#include <iostream>
using namespace std;

// J'appelle ici le constructeur par defaut de la classe Voiture
Moto::Moto()
	: Voiture()
{
}

void Moto::lavage()
{
	// on affiche egalement la valeur du pointeur de notre classe (this), c'est un entier en fait
	std::cout << "Moto lavee : " << this << std::endl;
}