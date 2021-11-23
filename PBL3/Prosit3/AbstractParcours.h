#pragma once

#include "IParcours.h"
#include "CLPoint.h"

/*
* Classe abstraite d'un parcours. Elle contient des fonctions virtuelles avec une implementation de base, elle peut etre derviee
* 
* Définition : une classe abstraite est une classe dont l'implémentation n'est pas complète et qui n'est pas instanciable. Elle sert de base à d'autres classes dérivées. 
* 
* Ici, je la nomme Abstract mais ce n'est pas totalement vrai, puisque la classe peut être instanciée (aucune methode virtuelle pure restante)
*/
class AbstractParcours: public IParcours
{
public:
	// Constructeur de parcours prenant en parametre la taille du parcours
	AbstractParcours(int taille);

	// Permet d'ajouter un point au parcours
	virtual void ajouterPoint(CLPoint* p);

	// Calcul la distance du parcours
	// La fonction est virtuelle. toute classe derinvant la classe AbstractParcours peut re-implementer cette fonction
	virtual double calculDistance();

	// Affiche un message specifique au parcours
	// La fonction est virtuelle. toute classe derinvant la classe AbstractParcours peut re-implementer cette fonction
	virtual void message();

protected:
	// Liste des points realisant le parcours, c'est un tableau de point
	CLPoint* parcours;

	// Taille du parcours
	int taille;

	// Index courant
	int index;

	// Distance du parcours
	double distance;
};
