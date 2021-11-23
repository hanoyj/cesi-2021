#include <iostream>

#include "ListData.h"

// Afin de simplifier l'écriture à la librairie standard
// std::cout -> cout
using namespace std;

// Constante taille max
static int TAILLE_MAX = 1024;


ListData::ListData() 
{
	cout << "Construction d'une liste" << endl;
	this->nombreDonnee = 0;
	this->liste = new int[TAILLE_MAX];
}

ListData::ListData(int premiereDonnee)
{
	cout << "Construction d'une liste" << endl;
	this->nombreDonnee = 0;
	this->liste = new int[TAILLE_MAX];
	ajouter(premiereDonnee);
}

ListData::~ListData()
{
	cout << "Destruction d'une liste" << endl;
	this->nombreDonnee = 0;
	delete[] this->liste;
}

// Ajout d'une donnée dans la liste
void ListData::ajouter(int data)
{
	// Vérification de la taille max lors de l'ajout d'un élément
	if (nombreDonnee > TAILLE_MAX) {
		cout << "[Erreur] la liste est pleine !" << endl;
		return;
	}

	// Ajout en fin de liste
	liste[nombreDonnee++] = data;
}

// Lecture de la taille de la liste (nombre de données)
int ListData::taille()
{
	return nombreDonnee;
}

// Calcul de la somme des données
int ListData::somme()
{
	int somme = 0;
	// Parcours toutes les données de la liste
	for (int i = 0; i < nombreDonnee; i++) {
		// Ajout de la donnée courante (indice i)
		somme += liste[i];
	}
	return somme;
}

// Calcul de la moyenne des données
double ListData::moyenne()
{
	// Récupération de la somme des éléments
	double somme = this->somme();
	// L'attribut nombre est un entier => cast en double
	return somme / (double)nombreDonnee;
}

// Calcul du min des données
int ListData::min()
{
	// Si aucun élément alors min = 0
	// On initialise le min de la liste avec la première donnée => Parcours de la liste à partir de la 2è donnée
	int min = nombreDonnee > 0 ? liste[0] : 0;
	for (int i = 1; i < nombreDonnee; i++) {
		min = (min < liste[i]) ? min : liste[i];
	}
	return min;
}

// Calcul du max des données
int ListData::max()
{
	int max = -10000000;
	for (int i = 0; i < nombreDonnee; i++) {
		max = (max > liste[i]) ? max : liste[i];
	}
	return max;
}

// Calcul de l'espace de variation max
int ListData::variationMax()
{
	// Peut aussi s'écrire return max() - min()
	return this->max() - this->min();		
}

// Affichage des données de la liste
void ListData::afficher() 
{
	cout << "[";
	// Parcours toutes les données de la liste
	for (int i = 0; i < nombreDonnee; i++) {
		if (i != 0) {
			cout << ", ";
		}

		cout << liste[i];
	}
	cout << "]" << endl;
}
