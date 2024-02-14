#include "pch.h"
#include "LoginForm.h"
#include"PrintMainForm.h"
using namespace AutoPrintView;
System::Void AutoPrintView::LoginForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Antes debemos ver si los items est�n llenos :
	if ((txtDNI->Text == "") || (txtPassword->Text == "")) {
		MessageBox::Show("No ingreso usuario o contrase�a");
		return;
	}

	int enteredDni = Int32::Parse(txtDNI->Text);
	String^ enteredPassword = txtPassword->Text;
	Dni_Ahora = enteredDni;

	User^ us = Controller::Login(enteredDni, enteredPassword);
	if (us != nullptr) {
		PrintMainForm::userG = us;
		Close();
	}
	else {
		MessageBox::Show("Usuario o contrase�a incorrectos.");

	}
}
