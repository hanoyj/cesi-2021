#pragma once
class CLvoiture
{
public:
	// ID commun pour unicité
	static int idVoiture;
	
	// Constructeur par défaut
	CLvoiture(void);
	CLvoiture(int vitesseMax, int acceleration);
	CLvoiture(const CLvoiture&);

	// Méthode d'accélération
	void accelerer(void);

	// Accesseur en lecture à l'ID
	int getID() const;
	// Accesseurs en lecture et écriture vitesse max
	int getVitesseMax() const;
	void setVitesseMax(int vitesseMax);
	// Accesseurs en lecture et écriture accélération
	int getAcceleration() const;
	void setAcceleration(int acceleration);

private:
	// Attributs
	int idV;
	int vitesseMax;
	int acceleration;
	int vitesse;

	// Méthode d'initialisation
	void ini_obj(int, int);
};

