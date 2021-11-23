#pragma once

/*
* Interface ou classe virtuelle de produit. Toutes les fonctions sont virtuelles pures
*/
class IProduit
{
public:
	// Permet d'afficher le prix d'un produit
	virtual void afficherPrix() = 0;

	// Permet d'afficher le code d'un produit
	virtual void afficherCode() = 0;

	// Permet d'affecter une promotion a un produit
	virtual void affecterPromotion(int promo) = 0;
};