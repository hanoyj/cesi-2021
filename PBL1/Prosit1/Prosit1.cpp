
#include <iostream>
#include "CLPoint.h"

using namespace std;


int main()
{
	// Instanciation objets
	CLPoint p1;
	CLPoint p2(1, 1);
	CLPoint* p3 = new CLPoint(0, 0);
	CLPoint* p4 = new CLPoint(1, 1);
	CLPoint p5(p2);

	cout << "Point 1: ";
	p1.afficher();
	cout << "Point 2: ";
	p2.afficher();
	cout << "Point 3: ";
	p3->afficher();
	cout << "Point 4: ";
	p4->afficher();
	cout << "Point 5: ";
	p5.afficher();

	cout << "La distance entre P1 et P2 est de : " << p1.calculerDistance(p2) << endl;
	cout << "La distance entre P3 et P4 est de : " << p3->calculerDistance(*p4) << endl;

	// Libération mémoire
	delete p3;
	delete p4;

	return 0;
}
