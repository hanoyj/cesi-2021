#include "clgestioncrypt.h"

using namespace CryptoServices;
using namespace CryptoComponents;

CLGestionCrypt::CLGestionCrypt()
{
	this->crypt1 = NULL;
	this->crypt2 = NULL;
	this->fichier = NULL;
	this->message = "void";
}

string CLGestionCrypt::cryptN1(string pathSource, string pathDestination)
{
	this->message.clear();
	this->crypt1 = new CLCryptN1();
	this->fichier = new CLFichier();

	this->message = this->fichier->read(pathSource);
	this->message = this->crypt1->getCrypt(this->message);
	this->fichier->write(this->message, pathDestination);

	delete this->crypt1;
	delete this->fichier;
	return this->message;
}

string CLGestionCrypt::cryptN2(string pathSource, string pathDestination, string psw)
{
	int tailleBF;
	const char* t = &pathDestination[0];
	this->message.clear();
	this->crypt2 = new CLCryptN2();
	this->fichier = new CLFichier();

	this->message = this->fichier->read(pathSource);
	tailleBF = this->message.length();
	this->message = this->crypt2->get(this->message, psw);
	this->fichier->writeBIN(this->message, t, tailleBF);
	
	delete this->crypt2;
	delete this->fichier;
	return this->message;
}

string CLGestionCrypt::cryptN3(string pathSource, string pathDestination, string psw)
{
	int tailleBF;
	const char* t = &pathDestination[0];
	this->message.clear();
	this->crypt1 = new CLCryptN1();
	this->crypt2 = new CLCryptN2();
	this->fichier = new CLFichier();

	this->message = this->fichier->read(pathSource);
	tailleBF = this->message.length();

	this->message = this->crypt1->getCrypt(this->message);
	this->message = this->crypt2->get(this->message, psw);
	this->fichier->writeBIN(this->message, t, tailleBF);

	delete this->crypt1;
	delete this->crypt2;
	delete this->fichier;
	return this->message;
}

string CLGestionCrypt::deCryptN1(string pathSource, string pathDestination)
{
	this->message.clear();
	this->crypt1 = new CLCryptN1();
	this->fichier = new CLFichier();

	this->message = this->fichier->read(pathSource);
	this->message = this->crypt1->getClear(this->message);
	this->fichier->write(this->message, pathDestination);

	delete this->crypt1;
	delete this->fichier;
	return this->message;
}

string CLGestionCrypt::deCryptN2(string pathSource, string pathDestination, string psw)
{
	int tailleBF;
	const char* t = &pathSource[0];
	this->message.clear();
	this->crypt2 = new CLCryptN2();
	this->fichier = new CLFichier();

	this->message = this->fichier->read(pathSource);
	tailleBF = this->message.length();

	this->message = this->fichier->readBIN(t, tailleBF);
	this->message = this->crypt2->get(this->message, psw);
	this->fichier->writeBIN(this->message, t, tailleBF);
	
	delete this->crypt2;
	delete this->fichier;
	return this->message;
}

string CLGestionCrypt::deCryptN3(string pathSource, string pathDestination, string psw)
{
	int tailleBF;
	const char* t = &pathSource[0];
	this->message.clear();
	this->crypt1 = new CLCryptN1();
	this->crypt2 = new CLCryptN2();
	this->fichier = new CLFichier();

	this->message = this->fichier->read(pathSource);
	tailleBF = this->message.length();
	this->message = this->fichier->readBIN(t, tailleBF);
	this->message = this->crypt2->get(this->message, psw);
	this->message = this->crypt1->getClear(this->message);
	this->fichier->write(this->message, pathDestination);

	delete this->crypt1;
	delete this->crypt2;
	delete this->fichier;
	return this->message;
}