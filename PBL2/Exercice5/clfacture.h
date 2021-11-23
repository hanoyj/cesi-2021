#ifndef CLFACTURE_H
#define CLFACTURE_H

// On utile un namespace pour ranger par categorie nos classes
namespace NS_Composants
{
	// Cette classe est un composant pour l'impression d'une facture
	class CLfacture
	{
	public:
		// Stocke dans un fichier les élements d'une facture
		void imprimerFacture(double, double, double);
	};
}

#endif