#include "CLvoiture.h"
#include <iostream>
#include <math.h>

using namespace std;

// Initialisation de l'ID partagé à 0
int CLvoiture::idVoiture = 0;

CLvoiture::CLvoiture(void)
{
	this->ini_obj(0, 0);
}

CLvoiture::CLvoiture(int vitesseMax, int acceleration)
{
	this->ini_obj(vitesseMax, acceleration);
}

CLvoiture::CLvoiture(const CLvoiture& voiture)
{
	this->ini_obj(voiture.getVitesseMax(), voiture.getAcceleration());
}

void CLvoiture::ini_obj(int vitesseMax, int acceleration)
{
	// Incrémentation du compteur partagé d'ID
	CLvoiture::idVoiture++;
	this->vitesse = 0;
	this->idV = CLvoiture::idVoiture;
	this->setVitesseMax(vitesseMax);
	this->setAcceleration(acceleration);
	cout << "Creation de la voiture : " << this->getID() << endl;
}


void CLvoiture::accelerer(void)
{
	for (int i = 0; this->vitesse < this->getVitesseMax(); i++)
	{
		cout << "La voiture : " << this->getID() << " roule a la vitesse de : " << this->vitesse << " km/h en " << i << " unite de temps." << endl;
		this->vitesse = this->vitesse + this->getAcceleration();
	}

	double performance = ((double)this->getVitesseMax()) / ((double)this->getAcceleration());
	cout << "La perfomance de la voiture " << this->getID() << " est de : " << performance << endl;
}


int CLvoiture::getID() const
{
	return this->idV;
}

int CLvoiture::getVitesseMax() const
{
	return this->vitesseMax;
}
void CLvoiture::setVitesseMax(int vitesseMax)
{
	// La vitesse max doit être > 0
	if (vitesseMax > 0)
	{
		this->vitesseMax = vitesseMax;
	}
	else
	{
		this->vitesseMax = 1;
	}
}

int CLvoiture::getAcceleration() const
{
	return this->acceleration;
}
void CLvoiture::setAcceleration(int acceleration)
{
	// L'accéleration doit être > 0
	if (acceleration > 0)
	{
		this->acceleration = acceleration;
	}
	else
	{
		this->acceleration = 1;
	}
}