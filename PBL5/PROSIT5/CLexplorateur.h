#pragma once

using namespace System::IO;
using namespace System;

namespace NS_composants
{
	ref class CLfichier
	{
	public:
		array<String^>^ explorerUnDossier(String^);		// problème 1
		void effacer(String^);
		void copier(String^, String^);
	};
}

