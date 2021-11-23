#include "Lessive.h"

Lessive::Lessive() : Produit()
{
}

Lessive::Lessive(string code, double prix) : Produit(code, prix)
{
}

void Lessive::affecterPromotion(int promo)
{
	int newPromotion;
	if (promo > 60)
	{
		newPromotion = 60;
	}
	else
	{
		newPromotion = promo;
	}

	// On peut appeler la methode mere pour afficher le message...
	Produit::affecterPromotion(newPromotion);
}