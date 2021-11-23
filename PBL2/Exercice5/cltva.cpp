#include "cltva.h"

using namespace NS_Composants;

double CLtva::calculTVA(double prixTotalHt)
{
	return TVA * prixTotalHt;
}
