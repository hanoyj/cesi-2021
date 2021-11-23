#pragma once

#include <string>
using namespace std;

// une classe qui permet de recevoir un message
class ReceptionMsg
{
public:
    void recevoir(string message);
};

// on definit un pointeur de fonction de la classe Reception ptr qui prend en parametre un string et qui retourne void
typedef void (ReceptionMsg::* ptr)(string);

// classe d'envoi de message
class EnvoiMsg
{
public:
    void envoyer(ReceptionMsg obj, string message);
};
