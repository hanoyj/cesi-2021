#include "CLobjet.h"

#include <iostream>
#include <math.h>

using namespace std;


double CLobjet::getMasse(void) const
{
	return this->masse;
}
void CLobjet::setMasse(double masse)
{
	// La masse doit être strictement supérieure à 0
	if (masse <= 0)
	{
		this->masse = 1;
	}
	else
	{
		this->masse = masse;
	}
}

double CLobjet::getVitesse(void) const
{
	return this->vitesse;
}
void CLobjet::setVitesse(double vitesse)
{
	// La vitesse doit être strictement supérieure à 0
	if (vitesse <= 0)
	{
		this->vitesse = 1;
	}
	else
	{
		this->vitesse = vitesse;
	}
}

double CLobjet::getEc(void) const
{
	return this->ec;
}


void CLobjet::calculer(void)
{
	this->ec = 0.5 * this->getMasse() * pow(this->getVitesse(), 2);
	cout << "Resultat : " << this->ec << endl;
}