#ifndef SERVICEFICHIER_H
#define SERVICEFICHIER_H

#include "clfacture.h"

namespace NS_Services
{
	class ServiceFichier
	{
	private:
		NS_Composants::CLfacture* facture;
	public:
		ServiceFichier();
		void imprimerFacture(double, double, double);
	};
}

#endif