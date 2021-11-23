#include "Voiture.h"
#include "Moto.h"
#include "StationLavage.h"

#include <iostream>

using namespace std;

int main()
{
    Voiture* v1 = NULL;
    Voiture* v2 = NULL;
    Voiture* m1 = NULL;

    // On cree une station de lavage à trois emplacements
    StationLavage station(3);

    v1 = new Voiture();
    v2 = new Voiture();
    m1 = new Moto();

    station.ajouter(v1);
    station.ajouter(v2);
    station.ajouter(m1);

    // La station lave le parc de vehicule mais ne fait pas la distinction entre une voiture ou une moto
    station.laverLeParc();

    cout << "................." << endl;

    // On pointe desormais le pointeur de voiture sur la moto
    v1 = m1;

    // On met à jour l'emplacement (on recopie le pointeur)
    station.mettreAJour(0, v1);
    station.laverLeParc();
}
