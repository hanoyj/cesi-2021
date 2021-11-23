#include "ListeChainee.h"

#include <iostream>
using namespace std;

void ListeChainee::afficher(N* liste)
{
    // Un pointeur NULL est un pointeur qui ne pointe sur rien (equivalent à 0)
    while (liste != NULL)
    {
        cout << liste->n << " ";

        // Comme suivant est aussi un nombre (cf la structure nombre)
        liste = liste->suivant;
    }
}