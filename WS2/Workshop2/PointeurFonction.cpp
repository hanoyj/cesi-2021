#pragma once

#include "PointeurFonction.h"
#include <iostream>

void ReceptionMsg::recevoir(string message)
{
	cout << "Reception du signal : " << message << endl;
}

// on definit un signal de type ptr qui pointe sur la fonction recevoir de la classe Reception
// Il faut que la signature du pointeur de fonction soit identique à la signature de la fonction de classe Reception
// Le & permet de recupere l'adresse memoire de la fonction recevoir, donc un pointeur de memoire
ptr signal = &ReceptionMsg::recevoir;

void EnvoiMsg::envoyer(ReceptionMsg obj, string message)
{
	// on appelle de facon anonyme la fonction recevoir de la classe ReceptionMsg
	(obj.*signal)(message);
}