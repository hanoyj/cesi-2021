
#include "Instrument.h"
#include <iostream>

using namespace std;

int main()
{
    // On initialise notre pointeur
    IInstrument* instrument = 0;
    // ou c'est la même chose
    // IInstrument* instrument = NULL;

    int choix;
    cout << " De quel instument voulez-vous jouer (1 : piano, 2 : saxo) ?" << endl;
    cin >> choix;
    // pour eviter de faire des if/else if... code un peu plus lisible et elegant
    switch (choix)
    {
    case 1:
        instrument = new Piano();
        break;

    case 2:
        instrument = new Saxo();
        break;

    default:
        cout << "Instrument inconnu" << endl;
        break;
    }

    // On appelle ici la methode virtuelle pure, en fonction de l'instanciation de la classe, le compilateur sait qu'elle implementation il doit executer
    // Ici, l'utilisateur ou le codeur ne connait pas forcement l'implementation, il sait juste qu'il y une methode commune pour tous
    if (instrument != 0)
    {
        instrument->jouer();

        delete instrument;
    }

    return 0;
}

