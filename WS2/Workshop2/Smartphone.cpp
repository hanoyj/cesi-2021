#include "Smartphone.h"

Smartphone::Smartphone() : Produit()
{
}

Smartphone::Smartphone(string code, double prix) : Produit(code, prix)
{
}

void Smartphone::affecterPromotion(int promo)
{
	int newPromotion;
	if (promo > 30)
	{
		newPromotion = 30;
	}
	else
	{
		newPromotion = promo;
	}
	// On peut appeler la methode mere pour afficher le message...
	Produit::affecterPromotion(newPromotion);
}