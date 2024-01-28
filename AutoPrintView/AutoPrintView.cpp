#include "pch.h"
//#include "Inicio.h"
#include "PrintMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Main(array<System::String^>^ args)
{
    Application::EnableVisualStyles(); //Application nos lo da "System::Windows::Forms" y ahora habilitaremos los estilos visuales
    Application::SetCompatibleTextRenderingDefault(false); //Ponemos false para que el renderizado sea autom�tico

    //AutoPrintView::Inicio form;//Luego de haber creado la instancia..
    AutoPrintView::PrintMainForm form;
    Application::Run(% form); //Run har� que las interfaces funcionen tal que cuando reci�n se cierre la ventana principal pasar� a la l�nea 14 (% form es para que saque la direcci�n)

    return 0;
}