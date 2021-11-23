#include "CLobjet.h"

#include <iostream>
#include <math.h>

using namespace std;


// Constructeur par défaut
CLobjet::CLobjet(void)
{
	this->ini_obj(0.00, 0.00);
}

// Constructeur paramétré (vitesse et masse)
CLobjet::CLobjet(double vitesse, double masse)
{
	ini_obj(vitesse, masse);
}

// Constructeur par recopie
CLobjet::CLobjet(const CLobjet& obj)
{
	cout << "constructeur par recopie" << endl;
	this->ini_obj(obj.getVitesse(), obj.getMasse());
}

// Méthode d'initialisation
void CLobjet::ini_obj(double vitesse, double masse)
{
	this->setVitesse(vitesse);
	this->setMasse(masse);
}


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