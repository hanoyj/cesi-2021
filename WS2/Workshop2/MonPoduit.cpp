#include "MonProduit.h"
#include <iostream>

using namespace std;

MonProduit::MonProduit() : taille(0), poids(0)
{
}

void MonProduit::afficherPrix()
{
	cout << "Mon produit n'a pas de prix" << endl;
}

void MonProduit::afficherCode()
{
	cout << "Mon produit n'a pas de prix" << endl;
}

void MonProduit::affecterPromotion(int promo)
{
	cout << "Mon produit n'a pas de promotion" << endl;
}