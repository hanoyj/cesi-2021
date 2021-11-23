#pragma once

#include "AbstractParcours.h"

/*
* Classe definissant un parcours de point 2D. Elle implemente la classe abstraite AbstractParcours et doit donc implementer les fonctions virtuelles pures.
* On dit que CLParcours2D specialise la classe AbstractParcours, et que le classe AbstractParcours généralise la classe CLParcours2D
*/
class CLParcours2D : public AbstractParcours
{
public:
	// Constructeur de parcours prenant en parametre la taille du parcours
	CLParcours2D(int taille);

	// Calcul la distance du parcours 2D (cf fonction virtuelle de la classe AbstractParcours)
	double calculDistance();

	// Affiche un message specifique au parcours 2D (cf fonction virtuelle de la classe AbstractParcours)
	void message();
};
