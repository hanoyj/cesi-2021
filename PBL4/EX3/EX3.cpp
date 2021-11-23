#include <iostream>

using namespace std;


// 1: déclaration de 3 fonctions basiques
void fx1(void)
{
	cout << "FX1" << endl;
}

void fx2(void)
{
	cout << "FX2" << endl;
}

void fx3(void)
{
	cout << "FX3" << endl;
}

// 2: déclaration du pointeur de fonction
typedef void(*fx) (void);


int main(void)
{
	int pause;

	// 2: déclaration d'un tableau de ce pointeur de fonction par allocation dynamique
	fx* pf = new fx[3];

	// 3: assignation des fonctions aux points de fonctions
	pf[0] = &fx1;
	pf[1] = &fx2;
	pf[2] = &fx3;

	// 4: appel de l'ensemble des fonctions par itération
	for (int i = 0; i < 3; i++)
	{
		pf[i]();
	}

	// libération des ressources
	delete[] pf;

	cin >> pause;
	return pause;
}