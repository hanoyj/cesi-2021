#ifndef CLEXEC_H
#define CLEXEC_H

namespace CryptoClients
{
	// Classe permettant l'interaction avec un utilisateur
	class CLExec
	{
	public:
		// Fonction principale de traitement
		static void run();
		// Affichage d'un entete
		static void enTete();
		// Affichage d'un menu
		static void menu();
	};
}

#endif