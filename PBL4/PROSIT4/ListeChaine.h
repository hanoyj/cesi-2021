#pragma once
#include <iostream>

using namespace std;


// structure template d'un noeud de la liste chainée
// permet d'avoir une liste chainée non spécialisée avec le type MSG d'un message radio
template <class T>
struct Noeud
{
public:
    Noeud<T>* next = NULL;      // noeud suivant
    T data;                     // donnée du noeud
};

// classe template d'une liste chainée
// objectif : l'implémentation de la liste chainée est donc isolée ici
template <class T>
class ListeChainee
{
private:
    int length;             // taille de la liste chainée
    Noeud<T>* head;         // tête de la liste chainée (ie dernier élément ajouté)
    Noeud<T>* first;         // premier élément ajouté

public:
    // constructeur
    ListeChainee();
    // destructeur
    ~ListeChainee();

    // méthode d'ajout d'un élément dans la liste chainée
    void add(const T& data);
    // méthode d'affichage du contenu de la liste chainée
    void print();

    // méthode permettant de récupérer l'élement à la postion index
    T get(const int index);

    // méthode retournant la taille de la liste (ie nombre d'éléments)
    inline int size() const { return this->length; }
};



// constructeur
template <class T>
ListeChainee<T>::ListeChainee() {
    this->length = 0;
    this->head = NULL;
    this->first = NULL;
}

// destructeur
template <class T>
ListeChainee<T>::~ListeChainee() {
    cout << "Destruction de la liste chainee" << endl;

    // détruit l'ensemble des noeuds de la liste chainée
    Noeud<T>* next = head;
    Noeud<T>* cur = NULL;
    while (next != NULL) {
        cur = next;
        next = next->next;
        delete cur;
    }
}

// méthode d'ajout d'un élément en tête de liste
template <class T>
void ListeChainee<T>::add(const T& data) {
    Noeud<T>* node = new Noeud<T>();
    node->data = data;
    node->next = NULL;

    if (this->head == NULL)
    {
        // cas du premier élément : affectation du la liste
        this->head = node;
        // stockage du premier élément
        this->first = node;
    }
    else
    {
        // affectation du maillon suivant
        this->head->next = node;
        this->head = this->head->next;

    }
    this->head = node;
    this->length++;
}

// méthode d'affichage du contenu de la liste
template <class T>
void ListeChainee<T>::print() {
    // on commence à partir du premier élément
    Noeud<T>* head = this->first;
    int i = 1;
    // parcourt de l'ensemble des noeuds
    while (head) {
        cout << i << ": " << head->data << endl;
        head = head->next;
        i++;
    }
}

// méthode permettant d'accéder à l'élément positionné à un index particuler dans la liste
template <class T>
T ListeChainee<T>::get(int index) {
    Noeud<T>* curr = this->first;
    for (int i = 0; i < index; ++i) {
        curr = curr->next;
    }
    return curr->data;
}

