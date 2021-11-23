#include "StationRadio.h"
#include "Message.h"

// constructeur
StationRadio::StationRadio(int identifiant) 
{
	this->identifiant = identifiant;
}

// méthode d'émission d'un message
void StationRadio::emmettre(const string& message)
{
	// l'affectation de l'identifiant de la station radio pour routage est réalisée 
	// par l'instance de la station radio (définie lors de l'instanciation)
	MSG* msg = new MSG;
	msg->data = message;
	msg->multiplexeur = this->identifiant;

	cout << "----> Emmission d'un signal Hertzien[" << msg->multiplexeur << "] en cours: " << msg->data << endl;
	// appel du pointeur de fonction pour enregistrement du message
	espaceHertzien(msg);
}
