#pragma once

#include "IProduit.h"
#include <string>

using namespace std;

/*
* Classe generique d'un produit, elle implemente l'interface IProduit, elle doit donc implementer toutes les fonctions virtuelles pures
*/
class Produit : public IProduit
{
public:
	// Constructeur par defaut
	Produit();

	// Constructeur prenant en parametre le code et le prix de base du produit
	Produit(string code, double prix);

	// Destructeur
	virtual ~Produit();

	// Permet d'afficher le prix du produit en prenant en ompte la promotion eventuelle
	void afficherPrix();

	// Permet d'afficher le code d'un produit
	void afficherCode();

	// Affecte une promotion à un produit. Elle est virtuelle afin de permettre le polymorphisme sur les classes filles.
	virtual void affecterPromotion(int promo);

protected:
	// Le code du produit
	string code;

	// le prix du produit
	double prix;

	// Le promotion eventuelle du produit
	int promotion;
};