#include <iostream>
#include <string>

using namespace std;

// 1: déclaration de la structure personne
struct Personne
{
	int age = 0;
	string prenom = "INCONNU";
	Personne* NEXT = NULL;
};

// définition du type P via typedef
typedef Personne P;

P* save;
P* liste;

void afficher(P* liste)
{
	liste = save;
	while (liste != NULL)
	{
		cout << "Prenom= " << liste->prenom << ", age= " << liste->age << ", maillon suivant= " << liste->NEXT << endl;
		liste = liste->NEXT;
	}
}

void ajouter(P* maillon)
{
	if (liste == NULL)
	{
		// cas du premier élément : affectation du la liste
		liste = maillon;
		// stockage du premier élément
		save = maillon;
	}
	else
	{
		// affectation du maillon suivant
		liste->NEXT = maillon;
		liste = liste->NEXT;
	}
}

int main(void)
{
	int pause;
	// instanciation des 5 struct de type Personne
	P p1, p2, p3, p4, p5;
	p1.age = 10; p1.prenom = "AA"; p1.NEXT = NULL;
	p2.age = 20; p2.prenom = "BB"; p2.NEXT = NULL;
	p3.age = 30; p3.prenom = "CC"; p3.NEXT = NULL;
	p4.age = 40; p4.prenom = "DD"; p4.NEXT = NULL;
	p5.age = 50; p5.prenom = "EE"; p5.NEXT = NULL;

	// construction du liste chaînées
	ajouter(&p1);
	ajouter(&p2);
	ajouter(&p3);
	ajouter(&p4);
	ajouter(&p5);

	// affichage de la liste des personnes
	afficher(liste);

	cin >> pause;
	return pause;
}