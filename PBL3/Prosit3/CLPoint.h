#pragma once

/*
*	Classe CLPoint representant un point
*/
class CLPoint
{
public:
	// Constructeur par defaut
	CLPoint();

	// Constructeur prenant en parametre la valeur x et la valeur y du point
	CLPoint(double x, double y);

	// Constructeur par recopie d'un autre point
	// le mot const permet de dire que le parametre p ne pourra pas être modifié lors de l'appel de ce constructeur
	CLPoint(const CLPoint& p);

	// Fonction permettant de déplacer le point à gauche
	void gauche();

	// Fonction permettant de déplacer le point à droite
	void droite();

	// Fonction permettant de déplacer le point en haut
	void haut();

	// Fonction permettant de déplacer le point en bas
	void bas();

	// Fonction permettant d'affecter la valeur x
	void setX(double);

	// Fonction permettant d'affecter la valeur y
	void setY(double);

	// Fonction permettant de retourner la valeur x
	// le mot const permet de dire que cette fonction peut être appele par un objet déclaré "const CLPoint". 
	double getX() const;

	// Fonction permettant de retourner la valeur y
	// le mot const permet de dire que cette fonction peut être appele par un objet déclaré "const CLPoint". 
	double getY() const;

	// Fonction permettant d'affecter la valeur z
	void setZ(double);

	// Fonction permettant de retourner la valeur z
	double getZ() const;

	// Fonction permettan d'afficher le point
	virtual void afficher() const;

	// Par rapport au prosit1, je supprime cette methode parce que nous voulons generaliser le calcul de distance pour un parcours de plusieurs points 
//	double calculDistance();

protected:

	// Valeur de la composante x
	double x;

	// Valeur de la composante y
	double y;

	// Valeur de la composante en z
	double z;

	// Fonction d'initialisation de l'objet
	void iniObj(double x, double y);
};

