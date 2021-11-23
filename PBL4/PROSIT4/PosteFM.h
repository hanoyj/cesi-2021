#pragma once
#include "Message.h"
#include "ListeChaine.h"

class PosteFM
{
private:
	// définition de la structure de la liste chaînée => globale à toutes les instances
	// les messages sont tous conservés en mémoire
	static ListeChainee<MSG> messages;

	int* multiplexeur;			// définit la liste des identifiants des stations radio à écouter
	int taille;					// nombre de station radio à écouter
	string nomUtilisateur;		// nom d'utilisateur
	int currentMessage;			// index du dernier message écouté afin de ne pas relire l'ensemble des messages depuis le début

public:
	// contructeur
	PosteFM(int* multiplexeur, int taille, string nomUtilisateur);
	// destructeur
	~PosteFM(void);

	// méthode d'écoute des messages émis par les sations radio
	void ecouter(void);

	// utiliser pour le pointeur de fonction (membre statique)
	static void antennePhysique(MSG* signal);
};

