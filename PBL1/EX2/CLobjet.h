#pragma once
class CLobjet
{
public:
	// Calcul de l’énergie cinétique d’un objet
	void calculer(void);
	// Accesseurs lecture et écriture vitesse
	double getVitesse(void) const;
	void setVitesse(double vitesse);
	// Accesseurs lecture et écriture masse
	double getMasse(void) const;
	void setMasse(double masse);
	// Accesseurs lecture énergie cinétique
	// La méthode est "const" car elle ne modifie pas l'objet (également valable pour tous les accesseurs en lecture)
	double getEc(void) const;

private:
	// Attributs
	double masse;
	double vitesse;
	double ec;
};

