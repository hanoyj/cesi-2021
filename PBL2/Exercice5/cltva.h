#ifndef CLTVA_H
#define CLTVA_H

// On utile un namespace pour ranger par categorie nos classes
namespace NS_Composants
{
	// Cette classe est un composant reponsable des calculs de TVA
	class CLtva
	{
	private:
		// Valeur constante de la TVA appliquée
		const double TVA = 1.20;
	public:
		// Retourne la TVA d'un prix
		double calculTVA(double);
	};
}

#endif