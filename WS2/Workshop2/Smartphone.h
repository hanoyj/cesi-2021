#pragma once

#include "Produit.h"

class Smartphone : public Produit
{
public:

	Smartphone();
	Smartphone(string code, double prix);

	// On redefinit la methode afin de prendre en compte la reduction maximale d'un produit de type Smartphone
	void affecterPromotion(int promo);
};
