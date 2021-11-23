#include "AbstractParcours.h"

AbstractParcours::AbstractParcours(int taille)
{
	this->taille = taille;
	this->index = 0;

	// Les [] permettent de creer un tableau de CLPoint
	this->parcours = new CLPoint[this->taille];
	this->distance = 0.0;
}

void AbstractParcours::ajouterPoint(CLPoint* p)
{
	this->parcours[this->index] = *p;
	this->index = this->index + 1;
}

double AbstractParcours::calculDistance()
{
	return 0;
}

void AbstractParcours::message()
{
}