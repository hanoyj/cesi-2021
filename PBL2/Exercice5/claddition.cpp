#include "claddition.h"

double NS_Composants::CLaddition::addition(double* prix, int taille)
{
	double r;
	int i;
	r = 0;
	for (i = 0; i < taille; i++)
	{
		r += prix[i];
	}
	return r;
}