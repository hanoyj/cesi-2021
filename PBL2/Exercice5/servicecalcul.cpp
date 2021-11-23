#include "servicecalcul.h"

using namespace NS_Services;

ServiceCalcul::ServiceCalcul()
{
	this->addition = new NS_Composants::CLaddition();
	this->tva = new NS_Composants::CLtva();
}

double* ServiceCalcul::calculerMontantTTC(double* montantsHT, int taille)
{
	double montantTotalHT;
	double montantTotalTTC;
	double montantTVA;

	montantTotalHT = this->addition->addition(montantsHT, taille);
	montantTotalTTC = this->tva->calculTVA(montantTotalHT);
	montantTVA = montantTotalTTC - montantTotalHT;

	this->grilleCouts[0] = montantTotalHT; 
	this->grilleCouts[1] = montantTVA; 
	this->grilleCouts[2] = montantTotalTTC;

	return this->grilleCouts;
}