#include <iostream>

using namespace std;

// 1: déclaration d'une fonction
void fonction1(void)
{
    cout << "Appel Fonction 1 par pointeur" << endl;
}

// 2: déclaration du type de pointeur de fonction, même signature de la fonction ci-dessus : void(*pointeurFonction) (void)
typedef void(*PointeurFonction) (void);


int main(void)
{
    int pause = 0;
    // 3: déclaration d'une variable de ce type (pointeur de fonction)
    PointeurFonction pFonction;
    // 4: affectation de la fonction "fonction" à la variable
    pFonction = &fonction1;
    // 5: appel via le pointeur de fonction
    pFonction();

    cin >> pause;
    return pause;
}