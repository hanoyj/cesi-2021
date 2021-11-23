#pragma once

#include "Produit.h"

class Lessive : public Produit
{
public:

	Lessive();
	Lessive(string code, double prix);

	// On redefinit la methode afin de prendre en compte la reduction maximale d'un produit de type Lessive
	void affecterPromotion(int promo);
};