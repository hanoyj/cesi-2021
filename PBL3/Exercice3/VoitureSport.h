#pragma once

#include "Voiture.h"

/*
* Classe VoitureSport qui herite de la classe Voiture donc tous les champs de la classe Voiture sont disponibles dans la classe VoitureSport
*/
class VoitureSport : public Voiture
{
public:
	// Constructeur par defaut 
	VoitureSport();

	// Constructeur de la classe VoitureSport à partir d'une vitesse max et d'une acceleration
	VoitureSport(int pVitesseMax, int pAcceleration);

	// Comme la fonction accelerer de la classe Voiture est virtual, je peux si je le veux surcharger, la methode pour en faire une particulierer
	//void accelerer();

private:

	// fonction permettant d'initialiser l'objet VoitureSport
	// ici on ne surchage pas la fonction de la classe Voiture, les deux fonctions seront appelées
	void ini_obj(int pVitesseMax, int pAcceleration);
};