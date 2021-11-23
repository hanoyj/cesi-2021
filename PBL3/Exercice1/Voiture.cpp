#include "Voiture.h"

#include <iostream>

// Initialisation du membre statique, l'initialisation est faite hors constructeur et fonction
// On voit bien le caractère global et unique de ce membre
int Voiture::sNbVoiture = 0;

Voiture::Voiture()
{
    // par defaut toute voiture aura une vitesse max de 100 et une acceleration de 3
    // this est simplement le pointeur sur notre objet instancidé, ici la classe Voiture
    // equivalent à :
    // init_obj(100, 3);
    this->ini_obj(100, 3);
}

Voiture::Voiture(int pVitesseMax, int pAcceleration)
{
    ini_obj(pVitesseMax, pAcceleration);
}

void Voiture::ini_obj(int pVitesseMax, int pAcceleration)
{
    std::cout << "Voiture::ini_obj" << std::endl;

    if (pVitesseMax > 100)
    {
        // si le vitesse demandée est superieure à 100, je la borne à 100
        // on pourrait aussi ecrire : this->mVitesseMax = 100;
        mVitesseMax = 100;
    }
    else
    {
        mVitesseMax = pVitesseMax;
    }

    if (pAcceleration > 3)
    {
        this->mAcceleration = 3;
    }
    else
    {
        // si j'avais nommé le champ acceleration au lieu de mAccceleration et pAcceleration, la seule facon que le compilateur sache de quelle variable on parle est d''utiliser this->
        this->mAcceleration = pAcceleration;
    }

    // J'incrémente le nombre de voiture créé. Comme c'est un membre statique, la prochaine fois que je passerai dans cette methode, meme si mon instance est supprimée, la valeur 
    // sera encore à jour
    Voiture::sNbVoiture++;

    this->mVitesse = 0;

    // Comme je n'ai pas déclaré la fonction "using namespace std" dans cette classe, je suis obligé de spécifie le namespace à l'appel de la fonction
    std::cout << "Creation de l'objet : " << Voiture::sNbVoiture << std::endl;
}

void Voiture::accelerer()
{
    int i;
    for (i = 0; mVitesse < mVitesseMax; i++)
    {
        std::cout << "Vitesse : " << mVitesse << std::endl;
        mVitesse += mAcceleration;
    }
}
