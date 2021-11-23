#pragma once

#include "Produit.h"
#include <iostream>

Produit::Produit() : code(""), prix(0.0), promotion(0)
{
}

Produit::Produit(string code, double prix) : code(code), prix(prix), promotion(0)
{
}

Produit::~Produit()
{
}

void Produit::afficherPrix()
{
	double prixPromo = prix * (1.0 - promotion / 100.0);
	cout << "Le prix du produit " << code << " est de " << prixPromo << " avec une promotion de " << promotion << endl;
}

void Produit::afficherCode()
{
	cout << "Le code du produit " << code << " est " << code << endl;
}

void Produit::affecterPromotion(int promo)
{
	promotion = promo;
	cout << "La nouvelle promotion du produit " << code << " est " << promotion << endl;
}