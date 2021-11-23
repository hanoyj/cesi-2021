#include "PosteFM.h"

// affectation du pointeur de fonction (doit être fait une seule fois)
pf espaceHertzien = &PosteFM::antennePhysique;

// initialisation de la liste chainée des messages
ListeChainee<MSG> PosteFM::messages;


// constructeur
PosteFM::PosteFM(int* multiplexeur, int taille, string nomUtilisateur)
{
	this->multiplexeur = multiplexeur;
	this->nomUtilisateur = nomUtilisateur;
	this->taille = taille;
	this->currentMessage = 0;
}

// destructeur
PosteFM::~PosteFM(void)
{
	cout << "liberation de canaux d'ecoutes" << endl;
	delete[] multiplexeur;
}

// méthode d'écoute des messages radios reçus
void PosteFM::ecouter(void)
{
	// nombre de message de la liste chainée
	int nbMessage = PosteFM::messages.size();
	// parcourt des messages à partir de l'indice courant du poste FM (ie dernière lecture des messages)
	for (int i = this->currentMessage; i < nbMessage; ++i) {
		const MSG msg = PosteFM::messages.get(i);
		// parcourt la liste des émetteur radio
		for (int j = 0; j < this->taille; ++j)
		{
			// test si l'émetteur radio fait parti de ceux que l'on écoute
			if (msg.multiplexeur == this->multiplexeur[j])
			{
				cout << "Je suis le poste de : " << this->nomUtilisateur << endl;
				cout << "\tstation= " << msg.multiplexeur << ", message= " << msg.data << endl;
			}
		}
	}

	// stockage de l'index courant de la liste chainée
	// ceci afin de ne pas relire tous les messages depuis le début
	// -> propre à une instance de PosteFM
	this->currentMessage = nbMessage;
}

// réception des messages physiques => stockage dans une liste chaînée
void PosteFM::antennePhysique(MSG* signal)
{
	// ajout du message dans la liste chainée
	PosteFM::messages.add(*signal);
	// libération du message hertzien (il est stocké par valeur dans les noeuds de la liste chainées)
	delete signal;
}