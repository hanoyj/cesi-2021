#pragma once

class CLcalcul
{
private:
	int n;
	void ini(int);

	// Compteur du nombre d'instance d'object CLcalcul
	static int cpteObj;

public:
	// Constructeurs
	CLcalcul(void);
	CLcalcul(int);

	// Méthode calculant le carré
	void carre();

	// Accesseurs
	void setN(int);
	int getN(void);
};

