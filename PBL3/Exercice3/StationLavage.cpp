#include "StationLavage.h"

StationLavage::StationLavage(int pNbrEmplacement)
{
    // On cree un tableau de pointeur de vehicule 
    mEmplacements = new Voiture * [pNbrEmplacement];
    mNbrEmplacement = pNbrEmplacement;
    mIndex = 0;
}

void StationLavage::ajouter(Voiture* pVoiture)
{
    mEmplacements[mIndex] = pVoiture;
    mIndex++;
}

void StationLavage::mettreAJour(int pIndex, Voiture* pVoiture)
{
    mEmplacements[pIndex] = pVoiture;
}

void StationLavage::laverLeParc()
{
    int i;
    for (i = 0; i < mNbrEmplacement; i++)
    {
        mEmplacements[i]->lavage();
    }
}