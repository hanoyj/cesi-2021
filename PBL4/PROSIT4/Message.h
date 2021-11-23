#pragma once
#include <iostream>

using namespace std;


// déclaration du message émis par une station radio
typedef struct Message
{
	int multiplexeur = 0;		// contient l'identifiant de la station radio à l'origine de l'émission du message
	string data;				// le contenu du message

	// définition de l'opérateur d'assignation =
	Message& operator=(Message other)
	{
		this->multiplexeur = other.multiplexeur;
		this->data = string(other.data);
		return *this;
	}

} MSG;

// déclaration du pointeur de fonction pour l'émission d'un message
typedef void(*pf) (MSG*);

// déclaration uniquement du pointeur de fonction
extern pf espaceHertzien;