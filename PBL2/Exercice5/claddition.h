#ifndef CLADDITION_H
#define CLADDITION_H

// On utile un namespace pour ranger par categorie nos classes
namespace NS_Composants
{
	// Cette classe est un composant pour les fonctions d'addition
	class CLaddition
	{
	public:
		// Retourne la somme d'un tableau de valeur
		double addition(double*, int);
	};
}

#endif