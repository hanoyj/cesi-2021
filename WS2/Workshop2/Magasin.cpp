#include "Magasin.h"
#include <iostream>

Magasin::Magasin(int nbrProduit) : nbrProduit( nbrProduit)
{
	produits = new IProduit* [nbrProduit];
	indexCourant = 0;

	// Pour savoir qu'il n'y a pas de produit dans la liste, on va initialiser les pointeurs de produit à NULL
	for (int i = 0; i < nbrProduit; i++)
	{
		produits[i] = NULL;
	}
}

Magasin::~Magasin()
{
	// On libere la memoire en supprimant un a un les produits de la liste
	// Note : de mon point de vue, ce n'est pas très cohérent de supprimer de la memoire des objets qui n'ont pas ete
	// crees dans la classe Magasin. La responsabilite de chaque classe est importante.
	for (int i = 0; i < nbrProduit; i++)
	{
		if (produits[i] != NULL)
		{
			delete produits[i];
			produits[i] = NULL;
		}
	}

	// On libere la memoire en suuprimant la liste des produits (liste de pointeur)
	delete [] produits;
}

void Magasin::ajouterProduit(IProduit* p)
{
	if (indexCourant < nbrProduit)
	{
		produits[indexCourant] = p;
		indexCourant++;
	}
}

void Magasin::remplacerProduit(int index, IProduit* p)
{
	if (index < nbrProduit)
	{
		produits[index] = p;
	}
}

void Magasin::afficherProduits()
{
	for (int i = 0; i < nbrProduit; i++)
	{
		if (produits[i] != NULL)
		{
			produits[i]->afficherPrix();
		}
	}
}

void Magasin::modifierPromotion(int index, int promo)
{
	if (index < nbrProduit)
	{
		if (produits[index] != NULL)
		{
			produits[index]->affecterPromotion(promo);
		}
	}
}