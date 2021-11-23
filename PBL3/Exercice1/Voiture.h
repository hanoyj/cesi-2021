#pragma once

/*
*	Classe de Voiture générique
*	Pour plus de lisibilité du code, je préfixe les champs de la classe par "m" (pour membre), les paramètres des fonctions par "p" (pour parametre), les membres statique par "s".
	C'est un exemple de regle de codage...
*/
class Voiture
{
public:
	// Constructeur par defaut de la classe
	Voiture();

	// Constructeur de la classe Voiture à partir d'une vitesse max et d'une acceleration
	Voiture(int pVitesseMax, int pAcceleration);

	// Fonction permettant de faire accelerer la voiture jusqu'à la vitesse max
	// le mot clé "virtual" permettra de surcharger cette fonction par les classes qui heritent de la classe Voiture
	virtual void accelerer();

protected:

	// Vitesse max de la voiture
	int mVitesseMax;

	// Vitesse courante de la voiture
	int mVitesse;

	// Acceleration de la voiture
	int mAcceleration;

	// fonction permettant d'initialiser l'objet Voiture
	void ini_obj(int pVitesseMax, int pAcceleration);

	// Membre static de la classe Voiture permettant de compter le nombre d'instance de la classe Voiture créé
	// Un membre statique est un membre qui a une porté unique et qui "existe" une seule fois pour toutes les instances de classe Voiture
	static int sNbVoiture;

private:

	// les champs privé ne sont pas accesibles par les classes qui héritent de la classe Voiture

};