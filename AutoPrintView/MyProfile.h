#pragma once
#include "LoginForm.h"
namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml::Serialization;
	using namespace AutoPrintModel;
	using namespace AutoPrintController;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de MyProfile
	/// </summary>
	public ref class MyProfile : public System::Windows::Forms::Form
	{
	public:
		MyProfile(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtCorreoP;
	private: System::Windows::Forms::TextBox^ txtNUMP;
	private: System::Windows::Forms::TextBox^ txtConP;



	private: System::Windows::Forms::TextBox^ txtDNIP;

	private: System::Windows::Forms::TextBox^ txtlastP;
	private: System::Windows::Forms::TextBox^ txtNameP;



	private: System::Windows::Forms::Button^ btn_modificar_perfil;
	private: System::Windows::Forms::Button^ btn_foto_perfil;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtCorreoP = (gcnew System::Windows::Forms::TextBox());
			this->txtNUMP = (gcnew System::Windows::Forms::TextBox());
			this->txtConP = (gcnew System::Windows::Forms::TextBox());
			this->txtDNIP = (gcnew System::Windows::Forms::TextBox());
			this->txtlastP = (gcnew System::Windows::Forms::TextBox());
			this->txtNameP = (gcnew System::Windows::Forms::TextBox());
			this->btn_modificar_perfil = (gcnew System::Windows::Forms::Button());
			this->btn_foto_perfil = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Firebrick;
			this->label1->Location = System::Drawing::Point(237, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mi Perfil";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pbPhoto
			// 
			this->pbPhoto->BackColor = System::Drawing::Color::Transparent;
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbPhoto->Location = System::Drawing::Point(517, 150);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(4);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(210, 210);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 1;
			this->pbPhoto->TabStop = false;
			this->pbPhoto->Click += gcnew System::EventHandler(this, &MyProfile::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 150);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre:";
			this->label2->Click += gcnew System::EventHandler(this, &MyProfile::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(75, 200);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Apellidos:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(75, 250);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"DNI:";
			this->label4->Click += gcnew System::EventHandler(this, &MyProfile::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(75, 300);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 29);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(75, 350);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Numero:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(75, 400);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 29);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Contraseña:";
			// 
			// txtCorreoP
			// 
			this->txtCorreoP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCorreoP->Location = System::Drawing::Point(245, 300);
			this->txtCorreoP->Margin = System::Windows::Forms::Padding(4);
			this->txtCorreoP->Name = L"txtCorreoP";
			this->txtCorreoP->Size = System::Drawing::Size(197, 30);
			this->txtCorreoP->TabIndex = 8;
			// 
			// txtNUMP
			// 
			this->txtNUMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNUMP->Location = System::Drawing::Point(245, 350);
			this->txtNUMP->Margin = System::Windows::Forms::Padding(4);
			this->txtNUMP->Name = L"txtNUMP";
			this->txtNUMP->Size = System::Drawing::Size(197, 30);
			this->txtNUMP->TabIndex = 9;
			// 
			// txtConP
			// 
			this->txtConP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConP->Location = System::Drawing::Point(245, 400);
			this->txtConP->Margin = System::Windows::Forms::Padding(4);
			this->txtConP->Name = L"txtConP";
			this->txtConP->Size = System::Drawing::Size(197, 30);
			this->txtConP->TabIndex = 10;
			// 
			// txtDNIP
			// 
			this->txtDNIP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDNIP->Location = System::Drawing::Point(246, 250);
			this->txtDNIP->Margin = System::Windows::Forms::Padding(4);
			this->txtDNIP->MaxLength = 8;
			this->txtDNIP->Name = L"txtDNIP";
			this->txtDNIP->Size = System::Drawing::Size(196, 30);
			this->txtDNIP->TabIndex = 11;
			// 
			// txtlastP
			// 
			this->txtlastP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtlastP->Location = System::Drawing::Point(246, 200);
			this->txtlastP->Margin = System::Windows::Forms::Padding(4);
			this->txtlastP->Name = L"txtlastP";
			this->txtlastP->Size = System::Drawing::Size(196, 30);
			this->txtlastP->TabIndex = 12;
			// 
			// txtNameP
			// 
			this->txtNameP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNameP->Location = System::Drawing::Point(246, 150);
			this->txtNameP->Margin = System::Windows::Forms::Padding(4);
			this->txtNameP->Name = L"txtNameP";
			this->txtNameP->Size = System::Drawing::Size(196, 30);
			this->txtNameP->TabIndex = 13;
			// 
			// btn_modificar_perfil
			// 
			this->btn_modificar_perfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_modificar_perfil->Location = System::Drawing::Point(296, 479);
			this->btn_modificar_perfil->Margin = System::Windows::Forms::Padding(4);
			this->btn_modificar_perfil->Name = L"btn_modificar_perfil";
			this->btn_modificar_perfil->Size = System::Drawing::Size(125, 46);
			this->btn_modificar_perfil->TabIndex = 14;
			this->btn_modificar_perfil->Text = L"Modificar";
			this->btn_modificar_perfil->UseVisualStyleBackColor = true;
			this->btn_modificar_perfil->Click += gcnew System::EventHandler(this, &MyProfile::btn_modificar_perfil_Click);
			// 
			// btn_foto_perfil
			// 
			this->btn_foto_perfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_foto_perfil->Location = System::Drawing::Point(548, 381);
			this->btn_foto_perfil->Margin = System::Windows::Forms::Padding(4);
			this->btn_foto_perfil->Name = L"btn_foto_perfil";
			this->btn_foto_perfil->Size = System::Drawing::Size(147, 49);
			this->btn_foto_perfil->TabIndex = 15;
			this->btn_foto_perfil->Text = L"Agregar foto";
			this->btn_foto_perfil->UseVisualStyleBackColor = true;
			this->btn_foto_perfil->Click += gcnew System::EventHandler(this, &MyProfile::btn_foto_perfil_Click);
			// 
			// MyProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(780, 555);
			this->Controls->Add(this->btn_foto_perfil);
			this->Controls->Add(this->btn_modificar_perfil);
			this->Controls->Add(this->txtNameP);
			this->Controls->Add(this->txtlastP);
			this->Controls->Add(this->txtDNIP);
			this->Controls->Add(this->txtConP);
			this->Controls->Add(this->txtNUMP);
			this->Controls->Add(this->txtCorreoP);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyProfile";
			this->Text = L"Actualizar datos";
			this->Load += gcnew System::EventHandler(this, &MyProfile::MyProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void FillTextBoxes(User^ u) {
			txtNameP->Text = u->Name;
			txtlastP->Text = u->LastName;
			txtDNIP->Text = Convert::ToString(u->Dni);
			txtCorreoP->Text = u->Email;
			txtNUMP->Text = u->Phone_number;
			txtConP->Text = u->Password;
			if (u->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(u->Photo);
				pbPhoto->Image = Image::FromStream(ms);
			}
			else {
				pbPhoto->Image = nullptr;
				pbPhoto->Invalidate();
			}
		}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
		private: System::Void MyProfile_Load(System::Object^ sender, System::EventArgs^ e) {
			int dniP = Dni_Ahora;
			Customer^ currentUser =Controller::QueryCustomerByDNI(dniP);
			Employee^ currentEmployee = Controller::QueryEmployeeByDNI(dniP);
			Boss^ currentBoss = Controller::QueryBossByDNI(dniP);
			if (currentUser != nullptr) {
				FillTextBoxes(currentUser);
			}
			if (currentEmployee != nullptr) {
				FillTextBoxes(currentEmployee);
			}
			if (currentBoss != nullptr) {
				FillTextBoxes(currentBoss);
			}

		}
	private: System::Void btn_modificar_perfil_Click(System::Object^ sender, System::EventArgs^ e) {
		//Para que no se borre lo que no se modifica se requiere de dnic
		int dnic=Dni_Ahora;
		Customer^ actUser = Controller::QueryCustomerByDNI(dnic);
		Employee^ actEmp = Controller::QueryEmployeeByDNI(dnic);
		Boss^ actBos = Controller::QueryBossByDNI(dnic);
		if (actUser != nullptr) {
			Customer^ currentUser = gcnew Customer();
			currentUser->Email = txtCorreoP->Text;
			currentUser->Phone_number = txtNUMP->Text;
			currentUser->Password = txtConP->Text;

			currentUser->Name = actUser->Name;
			currentUser->LastName = actUser->LastName;
			currentUser->Dni = actUser->Dni;
			currentUser->Birthdate = actUser->Birthdate;
			currentUser->Photo = actUser->Photo;
			currentUser->Gender = actUser->Gender;

			if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				currentUser->Photo = ms->ToArray();
			}
			Controller::UpdateCostumer(currentUser);
			FillTextBoxes(currentUser);
			MessageBox::Show("Perfil actualizado");
			Close();

		}
		if (actEmp != nullptr) {
			Employee^ currentUser = gcnew Employee();
			currentUser->Email = txtCorreoP->Text;
			currentUser->Phone_number = txtNUMP->Text;
			currentUser->Password = txtConP->Text;

			currentUser->Name = actEmp->Name;
			currentUser->LastName = actEmp->LastName;
			currentUser->Dni = actEmp->Dni;
			currentUser->Birthdate = actEmp->Birthdate;
			currentUser->Photo = actEmp->Photo;
			currentUser->Gender = actEmp->Gender;

			if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				currentUser->Photo = ms->ToArray();
			}
			Controller::UpdateEmployee(currentUser);
			FillTextBoxes(currentUser);
			MessageBox::Show("Perfil actualizado");
			Close();

		}
		if (actBos != nullptr) {
			Boss^ currentUser = gcnew Boss();
			currentUser->Email = txtCorreoP->Text;
			currentUser->Phone_number = txtNUMP->Text;
			currentUser->Password = txtConP->Text;

			currentUser->Name = actBos->Name;
			currentUser->LastName = actBos->LastName;
			currentUser->Dni = actBos->Dni;
			currentUser->Birthdate = actBos->Birthdate;
			currentUser->Photo = actBos->Photo;
			currentUser->Gender = actBos->Gender;

			if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				currentUser->Photo = ms->ToArray();
			}
			Controller::UpdateBoss(currentUser);
			FillTextBoxes(currentUser);
			MessageBox::Show("Perfil actualizado");
			Close();

		}
		
	}
private: System::Void btn_foto_perfil_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image File (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbPhoto->Image = gcnew Bitmap(ofd->FileName);
	}
}
};
}
