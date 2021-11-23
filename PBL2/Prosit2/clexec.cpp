#include "clexec.h"
#include "clgestioncrypt.h"
#include <iostream>

using namespace CryptoClients;
using namespace std;

void CLExec::run()
{
	int choix;
	string pathSource;
	string pathDestination;
	string message;
	CryptoServices::CLGestionCrypt* cryptProcess;
	choix = 0;
	do {
		CLExec::enTete();
		cout << endl;

		CLExec::menu();
		cout << endl;

		cout << "Votre choix :" << endl;
		cin >> choix;

		if (choix == 1)
		{
			cryptProcess = new CryptoServices::CLGestionCrypt();
			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "C:\\Users\\HOME-GB\\cryptN1.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "C:\\Users\\HOME-GB\\cryptN1-result.txt";
			//cin >> pathDestination;

			message = cryptProcess->cryptN1(pathSource, pathDestination);
			cout << "\nFin du traitement" << endl;
			delete cryptProcess;
		}
		else if(choix == 2)
		{
			//char* psw;
			string psw;
			cryptProcess = new CryptoServices::CLGestionCrypt();

			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "C:\\Users\\HOME-GB\\cryptN2.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "C:\\Users\\HOME-GB\\cryptN2-result.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			//psw = "psw";
			cin >> psw;

			message = cryptProcess->cryptN2(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
			delete cryptProcess;
		}
		else if (choix == 3)
		{
			//char* psw;
			string psw;
			cryptProcess = new CryptoServices::CLGestionCrypt();

			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "C:\\Users\\HOME-GB\\cryptN3.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "C:\\Users\\HOME-GB\\cryptN3-result.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			// psw = "psw";
			cin >> psw;

			message = cryptProcess->cryptN3(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
			delete cryptProcess;
		}
		else if (choix == 4)
		{
			cryptProcess = new CryptoServices::CLGestionCrypt();

			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "C:\\Users\\HOME-GB\\cryptN1-result.txt";
			//cin >> pathSource;
			
			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "C:\\Users\\HOME-GB\\decryptN1.txt";
			//cin >> pathDestination;

			message = cryptProcess->deCryptN1(pathSource, pathDestination);
			cout << "\nFin du traitement" << endl;
			delete cryptProcess;
		}
		else if (choix == 5)
		{
			//char* psw;
			string psw;
			cryptProcess = new CryptoServices::CLGestionCrypt();

			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "C:\\Users\\HOME-GB\\cryptN2-result.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "C:\\Users\\HOME-GB\\decryptN2.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			//psw = "psw";
			cin >> psw;

			message = cryptProcess->cryptN2(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
			delete cryptProcess;
		}
		else if (choix == 6)
		{
			//char* psw;
			string psw;
			cryptProcess = new CryptoServices::CLGestionCrypt();
			
			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "C:\\Users\\HOME-GB\\cryptN3-result.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "C:\\Users\\HOME-GB\\decryptN3-result.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			//psw = "psw";
			cin >> psw;

			message = cryptProcess->deCryptN3(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
			delete cryptProcess;
		}
		if (choix != 9) 
		{ 
			cout << "Resultat de sortie de traitement : " << message << endl; 
			system("PAUSE"); 
			system("CLS"); 
		}
	} while (choix != 9);
}

void CLExec::enTete()
{
	cout << "********************************************" << endl;
	cout << "** **" << endl;
	cout << "** CRYPTO PROGRAMME **" << endl;
	cout << "** **" << endl;
	cout << "***************** v1.0 *********************" << endl;
}

void CLExec::menu()
{
	cout << "(1) Crypter un fichier en niveau 1" << endl;
	cout << "(2) Crypter un fichier en niveau 2" << endl;
	cout << "(3) Crypter un fichier en niveau 3" << endl;
	cout << "(4) Derypter un fichier en niveau 1" << endl;
	cout << "(5) Derypter un fichier en niveau 2" << endl;
	cout << "(6) Derypter un fichier en niveau 3" << endl;
	//cout << "(7) Lire un fichier" << endl;
	//cout << "(8) Ecrire un fichier" << endl;
	cout << "(9) Quitter" << endl;
}