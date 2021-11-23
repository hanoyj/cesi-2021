#include "CLimages.h"

using namespace System;

namespace NS_composants
{
	System::Drawing::Bitmap^ CLimages::acquisitionImage(String^ fichier)
	{
		try {
			return gcnew System::Drawing::Bitmap(fichier);
		}
		catch (const System::ArgumentException^ e) {
			// Si le fichier n'est pas une image
			return nullptr;
		}
	}
}