#include "ihm.h"

#include <iostream>

using namespace NS_Clients;
using namespace std;

Ihm::Ihm()
{
	this->calcul = new NS_Services::ServiceCalcul();
	this->fichier = new NS_Services::ServiceFichier();
}

void Ihm::run()
{
	int nbArticle;
	double* prixDesArticles;
	double* grille;
	int i;
	int prix;

	cout << "Combien d'article(s) dans la commande ?" << endl;
	cin >> nbArticle;

	prixDesArticles = new double[nbArticle];
	for (i = 0; i < nbArticle; i++)
	{
		cout << "Quel est le priw de l'article " << i + 1 << " ?" << endl;
		cin >> prix;
		prixDesArticles[i] = prix;
	}

	cout << "Nous allons proceder au calcul h.t. de la commande..." << endl;
	grille = this->calcul->calculerMontantTTC(prixDesArticles, nbArticle);

	cout << "Le montant TTC de la facture est de : " << grille[2] << " E" << endl;

	cout << "Nous allons proceder à l'impression de votre facture" << endl;
	this->fichier->imprimerFacture(grille[0], grille[1], grille[2]);
	
	cout << "Le traitement est termine" << endl;
}
