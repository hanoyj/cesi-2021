#include "CLcalcul.h"
#include <iostream>

using namespace std;

int main(void)
{
	int pause;
	// Allocations sur la pile
	CLcalcul o1;
	CLcalcul o2(2);

	// Allocations sur le tas
	CLcalcul* p1;
	CLcalcul* p2;
	p1 = new CLcalcul();
	p2 = new CLcalcul(3);

	o1.carre(); o2.carre();
	cout << o1.getN() << endl;
	cout << o2.getN() << endl;

	p1->carre(); p2->carre();
	cout << p1->getN() << endl;
	cout << p2->getN() << endl;
	cin >> pause;

	return 0;
}