#pragma once

class ListData
{
public:
	// Constructeur par défaut
	ListData();
	// Constructeur avec premier valeur de la liste
	ListData(int premiereDonnee);
	// Destructeur
	~ListData();

	// Methodes
	// 
	// Ajout d'une donnée dans la liste
	void ajouter(int data);
	// Calcul de la somme des données
	int somme();
	// Calcul de la moyenne des données
	double moyenne();
	// Calcul du min des données
	int min();
	// Calcul du max des données
	int max();
	// Calcul de l'espace de variation max
	int variationMax();
	// Lecture de la taille de la liste (nombre de données)
	int taille();
	// Affichage des données de la liste
	void afficher();

private:
	// Attributs
	int* liste;
	// Nombre d'éléments dans la liste
	int nombreDonnee;
};
