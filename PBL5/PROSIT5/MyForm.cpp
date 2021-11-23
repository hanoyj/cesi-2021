#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


// Modèle mono-thread cloisonné pour WinForms
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    // Enabling Windows XP visual effects before any controls are created
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    PROSIT5::MyForm monFormulaire;
    Application::Run(% monFormulaire);      // problème 10
    return 0;
}
