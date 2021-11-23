
#include "CLPoint.h"
#include "CLPoint3D.h"
#include "CLParcours2D.h"
#include "CLParcours3D.h"

#include <iostream>

using namespace std;

int main()
{
	CLPoint* p1;
	CLPoint* p2;
	CLPoint* p3;

	//AbstractParcours* parcours;
	// ou aussi plus élégant si on une interface
	IParcours* parcours;

	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint(1.0, 1.0);
	p3 = new CLPoint(2.0, 2.0);
	parcours = new CLParcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	parcours->message();
	cout << parcours->calculDistance() << endl;

	cout << "------------------" << endl;

	p1 = new CLPoint3D(0.0, 0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);
	p3 = new CLPoint3D(2.0, 2.0, 2.2);
	parcours = new CLParcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	parcours->message();
	cout << parcours->calculDistance() << endl;

	cout << "------------------" << endl;

	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficher();
}

