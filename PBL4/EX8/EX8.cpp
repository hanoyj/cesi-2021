#include <iostream>

using namespace std;

class A
{
private:
	int* t;
public:
	A(int tailleTab)
	{
		t = new int[tailleTab];
	}
	// il faut un destructeur pour libérer la mémoire allouée dynamiquement dans le constructeur (attribut t)
	~A(void)
	{
		delete[]t;
		cout << "Destruction de A" << endl;
	}
};


int main(void)
{
	int pause;

	A* p;
	for (int i = 0; i < 100000; i++)
	{
		p = new A(10000);
		// destruction de l'instance car elle n'est plus utilisée
		delete p;
	}


	cin >> pause;
	return pause;
}