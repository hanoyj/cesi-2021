#pragma once

#include "Voiture.h"

/*
* Classe StationLavage 
*/
class StationLavage
{
public:
    // Constructeur prenant en compte le nombre d'emplacement disponible dans la station
    StationLavage(int pNbrEmplacement);

    // Fonction permettant d'ajouter une voiture à la station
    void ajouter(Voiture* pVoiture);

    // Fonction permettant de mettre à jour un emplacement avec un autre vehicule
    void mettreAJour(int pIndex, Voiture* pVoiture);

    // Fonction permettant de laver tous les vehicules présents dans la station de lavage
    void laverLeParc();

private:
    // Liste des vehicules presents dans la station de lavage
    Voiture** mEmplacements;

    // Nombre d'emplacement disponible dans la station de lavage
    int mNbrEmplacement;

    // Index sur un emplacement libre
    int mIndex; 
};
