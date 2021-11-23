#include "Message.h"

int main()
{	// Allocation sur la pile
	Message m1;
	Message m2("Re-bonjour");
	// Allocation sur le tas
	Message* m3 = new Message("Bonjour 2");

	m1.afficher();
	m2.afficher();
	m3->afficher();
	(*m3).afficher();

	return 0;
}