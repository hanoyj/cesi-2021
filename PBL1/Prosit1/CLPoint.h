#pragma once

class CLPoint
{
public:
	// Constructeurs
	CLPoint();
	CLPoint(double x, double y);
	CLPoint(const CLPoint& point);

	// Accesseurs en lecture & écriture
	double getX() const;
	void setX(double);
	double getY() const;
	void setY(double);

	// Méthode d'affichage des coordonnées du point
	void afficher();
	// Méthode de calcul de la distance avec un autre point
	double calculerDistance(const CLPoint& point);

private:
	// Attributs
	double y;
	double x;

	// Méthode d'initialisation
	void iniObj(double, double);
};

