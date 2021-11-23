#include "CLPoint3D.h"

#include <iostream>
using namespace std;

CLPoint3D::CLPoint3D() : CLPoint()
{
	this->iniObj(0);
}

CLPoint3D::CLPoint3D(double x, double y, double z) : CLPoint(x, y)
{
	this->iniObj(z);
}

CLPoint3D::CLPoint3D(const CLPoint& p) : CLPoint(p)
{
	this->iniObj(p.getZ());
}

void CLPoint3D::iniObj(double z)
{
	setZ(z);
}

void CLPoint3D::afficher() const
{
	CLPoint::afficher();
	cout << "(Z = " << this->getZ() << ")" << endl;
}
