#include <iostream>

using namespace std;

// définition du type (fx) de pointeur de fonction (void XXX(void))
typedef void(*fx)(void);
// variable globale de ce pointeur de fonction
fx event;

class A
{
public:
	void m(void)
	{
		cout << "A" << endl;
		// appel du pointeur de fonction
		event();
	}
};

class B
{
public:
	B(void)
	{
		// affectation du pointeur de fonction (ie méthode statique de la classe)
		event = &B::m;
	}

	static void m(void)
	{
		cout << "B" << endl;
	}
};


int main(void)
{
	int pause;

	// instanciation des 2 objets
	A oA;
	B oB;

	// appel de la méthode m() sur l'objet A
	oA.m();

	cin >> pause;
	return pause;
}