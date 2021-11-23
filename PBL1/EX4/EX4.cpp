// EX4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "CLvoiture.h"
#include <iostream>

using namespace std;

int main()
{
    // Instanciation des voitures
    CLvoiture v1(20, 1);
    CLvoiture v2(300, 10);
    CLvoiture* v3 = new CLvoiture(160, 2);

    // Accélération des voitures
    v1.accelerer();
    v2.accelerer();
    v3->accelerer();

    // Libération mémoire
    delete v3;
    return 0;
}
