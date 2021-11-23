#include "CLParcours2D.h"

#include <iostream>
using namespace std;

CLParcours2D::CLParcours2D(int taille): AbstractParcours(taille)
{
}

double CLParcours2D::calculDistance()
{
    int i;
    for (i = 0; i < taille - 1; i++)
    {
        distance += sqrt(pow(parcours[i+1].getX() - parcours[i].getX(), 2) + pow(parcours[i+1].getY() - parcours[i].getY(), 2));
    }
    return distance;
}

void CLParcours2D::message()
{
    cout << "Calcul d'un parcours de type 2D" << endl;
}