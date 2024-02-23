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
	using namespace System::Threading;

	/// <summary>
	/// Resumen de PrintMainForm
	/// </summary>
	public ref class PrintMainForm : public System::Windows::Forms::Form
	{
	public:
		Thread^ myThread;
		static User^ userG;
		PrintMainForm(void)
		{

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->IsMdiContainer = true;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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

	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ impresiónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ billeteraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ordenesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadisticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;










	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->miCuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->impresiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->impresiónToolStripMenuItem, this->billeteraToolStripMenuItem, this->ordenesToolStripMenuItem, this->usuariosToolStripMenuItem,
					this->estadisticasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(774, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// miCuentaToolStripMenuItem
			// 
			this->miCuentaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->actualizarDatosToolStripMenuItem,
					this->cerrarSesiónToolStripMenuItem
			});
			this->miCuentaToolStripMenuItem->Name = L"miCuentaToolStripMenuItem";
			this->miCuentaToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->miCuentaToolStripMenuItem->Text = L"Mi cuenta";
			// 
			// actualizarDatosToolStripMenuItem
			// 
			this->actualizarDatosToolStripMenuItem->Name = L"actualizarDatosToolStripMenuItem";
			this->actualizarDatosToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->actualizarDatosToolStripMenuItem->Text = L"Actualizar datos";
			this->actualizarDatosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::actualizarDatosToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::cerrarSesiónToolStripMenuItem_Click);
			// 
			// impresiónToolStripMenuItem
			// 
			this->impresiónToolStripMenuItem->Checked = true;
			this->impresiónToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->impresiónToolStripMenuItem->Name = L"impresiónToolStripMenuItem";
			this->impresiónToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->impresiónToolStripMenuItem->Text = L"Documentos";
			this->impresiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::impresiónToolStripMenuItem_Click);
			// 
			// billeteraToolStripMenuItem
			// 
			this->billeteraToolStripMenuItem->Name = L"billeteraToolStripMenuItem";
			this->billeteraToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->billeteraToolStripMenuItem->Text = L"Billetera";
			this->billeteraToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::billeteraToolStripMenuItem_Click);
			// 
			// ordenesToolStripMenuItem
			// 
			this->ordenesToolStripMenuItem->Name = L"ordenesToolStripMenuItem";
			this->ordenesToolStripMenuItem->Size = System::Drawing::Size(63, 20);
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
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::usuariosToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::clientesToolStripMenuItem_Click);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::empleadosToolStripMenuItem_Click);
			// 
			// estadisticasToolStripMenuItem
			// 
			this->estadisticasToolStripMenuItem->Name = L"estadisticasToolStripMenuItem";
			this->estadisticasToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->estadisticasToolStripMenuItem->Text = L"Estadísticas";
			this->estadisticasToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrintMainForm::estadisticasToolStripMenuItem_Click);
			// 
			// PrintMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 612);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PrintMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bienvenido a AutoPrint Connect";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &PrintMainForm::PrintMainForm_FormClosing);
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
		inicio->ShowDialog(); //Se muestra como un diálogo.
		myThread = gcnew Thread(gcnew ThreadStart(this, &PrintMainForm::MyRun));
		if (userG != nullptr) {

			Dni_Ahora = userG->Dni;
			if (userG->GetType() == Customer::typeid) {
				EnableCustomerPermission();
			}
			else
				if (userG->GetType() == Employee::typeid) {
					EnableEmployeePermission();
					myThread->Start();
				}
				else
					if (userG->GetType() == Boss::typeid) {
						EnableBossPermission();
					}
		}

	}
		   delegate void MyDelegate();

		   void MyRun() {
			   Random^ rnd = gcnew Random();
			   while (true) {
				   try {
					   double expo = -180.0 * Math::Log(rnd->NextDouble());
					   int waitTime = (int)expo * 1000; // Convertir a milisegundos
					   myThread->Sleep(waitTime);
					   ShowPrinterErrorMessageBox();
				   }
				   catch (Exception^ ex) {
					   return;
				   }
			   }
		   }

		   void ShowPrinterErrorMessageBox() {
			   MessageBox::Show("La impresora se atascó. Por favor, una vez solucionado, presiona Aceptar.", "Atasco de la impresora", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		   }
	private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Application::Exit();
		Application::Restart();
	}
	private: System::Void impresiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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


		}
		void EnableBossPermission() {
			this->usuariosToolStripMenuItem->Visible = true;
			this->estadisticasToolStripMenuItem->Visible = true;
			this->actualizarDatosToolStripMenuItem->Visible = true;
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
	private: System::Void PrintMainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		// Detener el hilo myThread antes de cerrar la ventana principal
		if (myThread != nullptr && myThread->IsAlive) {
			myThread->Abort();
		}
	}
};
}
