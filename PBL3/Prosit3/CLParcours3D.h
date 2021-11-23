#pragma once

#include "AbstractParcours.h"

/*
* Classe definissant un parcours de point 3D. Elle implemente la classe abstraite AbstractParcours et doit donc implementer les fonctions virtuelles pures.
* On dit que CLParcours3D specialise la classe AbstractParcours, et que le classe AbstractParcours généralise la classe CLParcours3D
*/
class CLParcours3D : public AbstractParcours
{
public:
	// Constructeur de parcours prenant en parametre la taille du parcours
	CLParcours3D(int taille);

	// Calcul la distance du parcours 3D (cf fonction virtuelle de la classe AbstractParcours)
	double calculDistance();

	// Affiche un message specifique au parcours 3D (cf fonction virtuelle de la classe AbstractParcours)
	void message();
};

