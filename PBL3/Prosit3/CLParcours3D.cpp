#include "CLParcours3D.h"

#include <iostream>
using namespace std;

CLParcours3D::CLParcours3D(int taille) : AbstractParcours(taille)
{
}

double CLParcours3D::calculDistance()
{
    int i;
    for (i = 0; i < taille - 1; i++)
    {
        distance += sqrt(pow(parcours[i+1].getX() - parcours[i].getX(), 2) + pow(parcours[i+1].getY() - parcours[i].getY(), 2) + pow(parcours[i+1].getZ() - parcours[i].getZ(), 2));
    }
    return distance;
}

void CLParcours3D::message()
{
    cout << "Calcul d'un parcours de type 3D" << endl;
}