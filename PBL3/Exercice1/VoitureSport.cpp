#include "VoitureSport.h"

#include <iostream>

// je n'aurais pas besoin de prefixe mes methodes inclues dans iostream par std:: 
using namespace std;

VoitureSport::VoitureSport()
{
	this->ini_obj(200, 8);
}

VoitureSport::VoitureSport(int pVitesseMax, int pAcceleration)
{
	this->ini_obj(pVitesseMax, pAcceleration);
}

void VoitureSport::ini_obj(int pVitesseMax, int pAcceleration)
{
    cout << "VoitureSport::ini_obj" << endl;

    if (pVitesseMax > 200)
    {
        this->mVitesseMax = 200;
    }
    else
    {
        this->mVitesseMax = pVitesseMax;
    }
    if (pAcceleration > 8)
    {
        this->mAcceleration = 8;
    }
    else
    {
        this->mAcceleration = pAcceleration;
    }
}

/*void VoitureSport::accelerer()
{
    cout << "Je roule en mode sport" << endl;
    Voiture::accelerer();
}*/