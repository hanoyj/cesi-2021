#include "PointeurFonction.h"
#include "ListeChainee.h"
#include "Produit.h"
#include "Lessive.h"
#include "Smartphone.h"
#include "Magasin.h"

#include <iostream>

int main()
{
    int choixExercice;
    cout << "Selectionner l'exercice a lancer: (1-4)" << endl;
    cin >> choixExercice;

    // Attention, switch ne fonctionne que sur des entiers...(int, bool, long)
    switch (choixExercice)
    {
    case 1:
    {
        Produit* p1 = new Produit("000000001", 12.0);
        Produit* p2 = new Lessive("123456789", 24.0);
        Produit* p3 = new Smartphone("987654321", 250);

        p1->afficherPrix();
        p2->afficherPrix();
        p3->afficherPrix();

        p1->affecterPromotion(80);
        p2->affecterPromotion(50);
        p3->affecterPromotion(100);

        p1->afficherPrix();
        p2->afficherPrix();
        p3->afficherPrix();

        p1 = p3;
        p1->afficherPrix();

        // Pb ici, en fait, on delete p3 pas p1
        delete p1;
        delete p2;
        // On ne peut pas a nouveau appeler delete sur p3, ca a ete deja fait
        //delete p3;
        break;
    }

    case 2:
    {
        Magasin* magasin = new Magasin(4);

        IProduit* p1 = new Produit("000000001", 12.0);
        IProduit* p2 = new Lessive("123456789", 24.0);
        IProduit* p3 = new Smartphone("987654321", 250);
        cout << "Adresse memoire p1 " << p1 << endl;
        cout << "Adresse memoire p2 " << p2 << endl;
        cout << "Adresse memoire p3 " << p3 << endl;

        magasin->ajouterProduit(p1);
        magasin->ajouterProduit(p2);
        magasin->ajouterProduit(p3);
 
        magasin->afficherProduits();
        cout << "-------------------" << endl;

        magasin->remplacerProduit(2, p1);
        magasin->remplacerProduit(0, p3);

        magasin->afficherProduits();
        cout << "-------------------" << endl;

        magasin->modifierPromotion(1, 50);
        magasin->afficherProduits();
        cout << "-------------------" << endl;

        delete magasin;

        // Erreur, les produits ont été supprimé
        //p1->afficherPrix();

        cout << "Fin du programme" << endl;
        break;
    }
    case 3:
    {
        N* premiereAdresse;
        N o1, o2, o3;

        o1.n = 10;
        o2.n = 20;
        o3.n = 30;

        premiereAdresse = &o1;
        o1.suivant = &o2;
        o2.suivant = &o3;
        o3.suivant = NULL;

        ListeChainee liste;
        liste.afficher(premiereAdresse);

        break;
    }

    case 4:
    {
        EnvoiMsg a;
        ReceptionMsg b, c;

        a.envoyer(b, "message 1");
        a.envoyer(c, "message 2");
        break;
    }
    }

    return 0;
}

