#include <iostream>

#include "StationRadio.h"
#include "PosteFM.h"

using namespace std;

const int NRJ_ID = 1;	// identifiant de la station NRJ
const int FUN_ID = 2;	// identifiant de la station FUN


int main(void)
{
	int pause;
	// instanciation des stations radios
	StationRadio NRJ(NRJ_ID);
	StationRadio FunRadio(FUN_ID);

	// instanciation de 2 postes FM
	PosteFM* poste1 = new PosteFM(new int[1]{ NRJ_ID }, 1, "Manu");
	PosteFM* poste2 = new PosteFM(new int[2]{ NRJ_ID, FUN_ID }, 2, "Marina");

	// émission du 1er message sur station NRJ
	NRJ.emmettre("Musique NRJ #1");
	// émission du 1er message sur station FUNRadio
	FunRadio.emmettre("Musique Fun Radio #1");
	// émission du 2è message sur station FUNRadio
	FunRadio.emmettre("Musique Fun Radio #2");

	// écoute du poste 1 & 2
	poste1->ecouter();
	//poste2->ecouter();

	// émission du 2è message sur station NRJ
	NRJ.emmettre("Musique NRJ #2");

	// écoute du poste 1 & 2
	poste1->ecouter();
	poste2->ecouter();

	// émission du 3è message sur station FUNRadio
	FunRadio.emmettre("Musique Fun Radio #3");

	// écoute du poste 1 & 2
	poste1->ecouter();
	poste2->ecouter();

	// libération des ressources
	delete poste1;
	delete poste2;

	cin >> pause;
	return pause;
}