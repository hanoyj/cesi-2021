#include "CLPoint.h"

#include <iostream>

using namespace std;


// Constructeurs
CLPoint::CLPoint(void)
{
	this->iniObj(0, 0);
}

CLPoint::CLPoint(double x, double y)
{
	this->iniObj(x, y);
}

CLPoint::CLPoint(const CLPoint& p)
{
	this->iniObj(p.getX(), p.getY());
}


// Méthode d'initialisation
void CLPoint::iniObj(double x, double y)
{
	this->setX(x);
	this->setY(y);
}


// Accesseurs
double CLPoint::getX() const
{
	return this->x;
}
void CLPoint::setX(double x)
{
	if (x < 0)
	{
		this->x = 0;
	}
	else
	{
		this->x = x;
	}
}

double CLPoint::getY() const
{
	return this->y;
}
void CLPoint::setY(double y)
{
	if (y < 0)
	{
		this->y = 0;
	}
	else
	{
		this->y = y;
	}
}


void CLPoint::afficher()
{
	cout << this->getX() << "-" << this->getY() << endl;
}

double CLPoint::calculerDistance(const CLPoint& p2)
{
	return sqrt(pow(p2.getX() - this->getX(), 2) + pow(p2.getX() - this->getX(), 2));
}