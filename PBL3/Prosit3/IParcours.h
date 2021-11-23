#pragma once

class CLPoint;

/*
* Classe virtuelle pure, ou interface. Elle contient des fonctions virtuelles pure, cette classe ne peut pas etre instanciée.
* 
* Définition : une classe virtuelle est une classe qui est composée uniquement de fonction virtuelle pure (équivalent interface en Java ou C#).
*/
class IParcours
{
public:
	// Permet d'ajouter un point au parcours
	// La fonction est virtuelle pure. toute classe implementant l'interface IParcours devra obligatoirement implementer cette fonction
	virtual void ajouterPoint(CLPoint* p) = 0;

	// Calcul la distance du parcours
	// La fonction est virtuelle pure. toute classe implementant l'interface IParcours devra obligatoirement implementer cette fonction
	virtual double calculDistance() = 0;

	// Affiche un message specifique au parcours
	// La fonction est virtuelle pure. toute classe implementant l'interface IParcours devra obligatoirement implementer cette fonction
	virtual void message() = 0;
};