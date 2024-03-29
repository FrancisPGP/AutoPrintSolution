#pragma once
#include "Inicio.h"

#include "MyProfile.h"
#include "PrintForm.h"
#include "WalletForm.h"
#include "OrdenForm.h"
#include "UserTableForm.h"
#include "BossGraphicsForm.h"
#include "Empleados.h"

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Threading;

	/// <summary>
	/// Resumen de PrintMainForm
	/// </summary>
	public ref class PrintMainForm : public System::Windows::Forms::Form
	{
	public:
		//Thread^ myThread;
		static User^ userG;
		PrintMainForm(void)
		{

			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			this->IsMdiContainer = true;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~PrintMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ miCuentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ actualizarDatosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesi�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ impresi�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ billeteraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ordenesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;










	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->miCuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesi�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->impresi�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->billeteraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadisticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->miCuentaToolStripMenuItem,
					this->impresi�nToolStripMenuItem, this->billeteraToolStripMenuItem, this->ordenesToolStripMenuItem, this->usuariosToolStripMenuItem,
					this->estadisticasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1032, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// miCuentaToolStripMenuItem
			// 
			this->miCuentaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->actualizarDatosToolStripMenuItem,
					this->cerrarSesi�nToolStripMenuItem
			});
			this->miCuentaToolStripMenuItem->Name = L"miCuentaToolStripMenuItem";
			this->miCuentaToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->miCuentaToolStripMenuItem->Text = L"Mi cuenta";
			// 
			// actualizarDatosToolStripMenuItem
			// 
			this->actualizarDatosToolStripMenuItem->Name = L"actualizarDatosToolStripMenuItem";
			this->actualizarDatosToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->actualizarDatosToolStripMenuItem->Text = L"Actualizar datos";
			this->actualizarDatosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::actualizarDatosToolStripMenuItem_Click);
			// 
			// cerrarSesi�nToolStripMenuItem
			// 
			this->cerrarSesi�nToolStripMenuItem->Name = L"cerrarSesi�nToolStripMenuItem";
			this->cerrarSesi�nToolStripMenuItem->Size = System::Drawing::Size(199, 26);
			this->cerrarSesi�nToolStripMenuItem->Text = L"Cerrar sesi�n";
			this->cerrarSesi�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::cerrarSesi�nToolStripMenuItem_Click);
			// 
			// impresi�nToolStripMenuItem
			// 
			this->impresi�nToolStripMenuItem->Checked = true;
			this->impresi�nToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->impresi�nToolStripMenuItem->Name = L"impresi�nToolStripMenuItem";
			this->impresi�nToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->impresi�nToolStripMenuItem->Text = L"Documentos";
			this->impresi�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::impresi�nToolStripMenuItem_Click);
			// 
			// billeteraToolStripMenuItem
			// 
			this->billeteraToolStripMenuItem->Name = L"billeteraToolStripMenuItem";
			this->billeteraToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->billeteraToolStripMenuItem->Text = L"Billetera";
			this->billeteraToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::billeteraToolStripMenuItem_Click);
			// 
			// ordenesToolStripMenuItem
			// 
			this->ordenesToolStripMenuItem->Name = L"ordenesToolStripMenuItem";
			this->ordenesToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->ordenesToolStripMenuItem->Text = L"Ordenes";
			this->ordenesToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::ordenesToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->clientesToolStripMenuItem,
					this->empleadosToolStripMenuItem
			});
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::usuariosToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::clientesToolStripMenuItem_Click);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::empleadosToolStripMenuItem_Click);
			// 
			// estadisticasToolStripMenuItem
			// 
			this->estadisticasToolStripMenuItem->Name = L"estadisticasToolStripMenuItem";
			this->estadisticasToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->estadisticasToolStripMenuItem->Text = L"Estad�sticas";
			this->estadisticasToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::estadisticasToolStripMenuItem_Click);
			// 
			// PrintMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 753);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"PrintMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bienvenido a AutoPrint Connect";
			this->Load += gcnew System::EventHandler(this, &PrintMainForm::PrintMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PrintMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Inicio^ inicio = gcnew Inicio();
		inicio->ControlBox = false;
		inicio->ShowDialog(); //Se muestra como un di�logo.
		if (userG != nullptr) {

			Dni_Ahora = userG->Dni;
			if (userG->GetType() == Customer::typeid) {
				EnableCustomerPermission();
			}
			else
				if (userG->GetType() == Employee::typeid) {
					EnableEmployeePermission();
				}
				else
					if (userG->GetType() == Boss::typeid) {
						EnableBossPermission();
					}
		}

	}
	private: System::Void cerrarSesi�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Application::Exit();
		Application::Restart();
	}
	private: System::Void impresi�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintForm^ printForm = gcnew PrintForm();
		printForm->MdiParent = this;
		printForm->Show();
	}
	private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void billeteraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		WalletForm^ walletForm = gcnew WalletForm();
		walletForm->MdiParent = this;
		walletForm->Show();
	}
	private: System::Void actualizarDatosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyProfile^ myperfil = gcnew MyProfile();
		myperfil->MdiParent = this;
		myperfil->Show();
	}
	public:
		void EnableEmployeePermission() {
			this->usuariosToolStripMenuItem->Visible = true;
			this->estadisticasToolStripMenuItem->Visible = false;
			this->actualizarDatosToolStripMenuItem->Visible = true;
			this->clientesToolStripMenuItem->Visible = true;
			this->empleadosToolStripMenuItem->Visible = false;
			this->billeteraToolStripMenuItem->Visible = false;
			this->impresi�nToolStripMenuItem->Visible = false;

		}
		void EnableBossPermission() {
			this->usuariosToolStripMenuItem->Visible = true;
			this->estadisticasToolStripMenuItem->Visible = true;
			this->actualizarDatosToolStripMenuItem->Visible = true;
			this->billeteraToolStripMenuItem->Visible = false;
			this->impresi�nToolStripMenuItem->Visible = false;

		}
		void EnableCustomerPermission() {
			this->usuariosToolStripMenuItem->Visible = false;
			this->estadisticasToolStripMenuItem->Visible = false;
			this->actualizarDatosToolStripMenuItem->Visible = true;
			this->ordenesToolStripMenuItem->Visible = false;
		}
	private: System::Void ordenesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OrdenForm^ ordenForm = gcnew OrdenForm();
		ordenForm->MdiParent = this;
		ordenForm->Show();
	}
	private: System::Void estadisticasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BossGraphicsForm^ boss = gcnew BossGraphicsForm();
		boss->MdiParent = this;
		boss->Show();
	}
	private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		UserTableForm^ usertableForm = gcnew UserTableForm();
		usertableForm->MdiParent = this;
		usertableForm->Show();
	}
	private: System::Void empleadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Empleados^ emp = gcnew  Empleados();
		emp->MdiParent = this;
		emp->Show();
	}
	/*private: System::Void PrintMainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		// Detener el hilo myThread antes de cerrar la ventana principal
		if (myThread != nullptr && myThread->IsAlive) {
			myThread->Abort();
		}
	}*/
};
}
