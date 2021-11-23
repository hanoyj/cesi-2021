#include "servicefichier.h"

using namespace NS_Services;

ServiceFichier::ServiceFichier()
{
	this->facture = new NS_Composants::CLfacture();
}

void ServiceFichier::imprimerFacture(double montantHT, double montantTVA, double montantTTC)
{
	this->facture->imprimerFacture(montantHT, montantTVA, montantTTC);
}