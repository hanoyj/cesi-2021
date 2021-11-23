#include "clfacture.h"

#include <iostream>
#include <fstream>

using namespace NS_Composants;
using namespace std;

void CLfacture::imprimerFacture(double montantHT, double montantTVA, double montantTTC)
{
	ofstream flux("C:\\Users\\HOME-GB\\facture.txt");
	flux << "Le montant total HT est de : " << montantHT << "\n";
	flux << "Le montant de la TVA est de : " << montantTVA << "\n";
	flux << "Le montant total TTC est de : " << montantTTC;
	flux.close();
}