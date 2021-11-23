#pragma once
class CLobjet
{
public:
	// Constructeur par défaut
	CLobjet(void);
	// Constructeur paramétré (vitesse et masse)
	CLobjet(double vitesse, double masse);
	// Constructeur par recopie
	CLobjet(const CLobjet&);

	// Calcul de l’énergie cinétique d’un objet
	void calculer(void);
	// Accesseurs lecture et écriture vitesse
	double getVitesse(void) const;
	void setVitesse(double vitesse);
	// Accesseurs lecture et écriture masse
	double getMasse(void) const;
	void setMasse(double masse);
	// Accesseurs lecture énergie cinétique
	double getEc(void) const;

private:
	// Attributs
	double masse;
	double vitesse;
	double ec;

	// Méthode d'initialisation
	void ini_obj(double vitesse, double masse);
};

