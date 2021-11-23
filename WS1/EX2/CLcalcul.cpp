#include "CLcalcul.h"
#include <iostream>

using namespace std;

int CLcalcul::cpteObj = 0;

CLcalcul::CLcalcul(void)
{
	this->ini(0);
}
CLcalcul::CLcalcul(int n)
{
	this->ini(n);
}

void CLcalcul::ini(int n)
{
	this->setN(n);

	// On incrémente le nombre d'instance de cette classe
	++CLcalcul::cpteObj;
	cout << "Nombre d'objet(s) : " << CLcalcul::cpteObj << endl;
}

void CLcalcul::setN(int n)
{
	if (n < 0)
	{
		this->n = 0;
	}
	else
	{
		this->n = n;
	}
}
int CLcalcul::getN(void)
{
	return n;
}

void CLcalcul::carre(void)
{
	// Equivalent à this->n = this->n * this->n;
	this->n *= n;
}
