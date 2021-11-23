#include "clcorbeille2.h"

int main()
{
    CLcorbeille2* fichier;
    string path;
    string message;
    int buffLenght;

    fichier = new CLcorbeille2();

    path = "C:\\Users\\HOME-GB\\myfile2.txt";
    message = "bonjour";
    buffLenght = message.length();

    fichier->ecrireBIN(message, path, buffLenght);
    system("PAUSE");

    message = fichier->lireBIN(path, buffLenght);
    cout << message << endl;

    delete fichier;
    return 0;
}

