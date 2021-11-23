#ifndef IHM_H
#define IHM_H

#include "servicecalcul.h"
#include "servicefichier.h"

namespace NS_Clients
{
	class Ihm
	{
	public:
		Ihm();
		void run();

	private:
		NS_Services::ServiceCalcul* calcul;
		NS_Services::ServiceFichier* fichier;
	};
}

#endif