#pragma once

#include "IProduit.h"

/*
* Classe magasin qui stocke un ensemble de produits
*/
class Magasin
{
public:
	// Constructeur
	Magasin(int nbrProduit);

	// Destructeur 
	// Attention : ce destructeur libere egalement la memoire de chaque produit
	~Magasin();

	// Permet d'ajouter un produit
	void ajouterProduit(IProduit* p);

	// Permet de remplacer un produit
	void remplacerProduit(int index, IProduit* p);

	// Modifie la promotion d'un produit
	void modifierPromotion(int index, int promo);

	// Affiche les produits disponibles
	void afficherProduits();

private:
	// Liste de pointeur de produit
	IProduit** produits;

	// Nbr produit maximum
	int nbrProduit;

	// Index courant dans la liste de produit
	int indexCourant;
};