#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//MODIFICACIONES DE LUIS------------------------------------------
	using namespace AutoPrintModel;
	using namespace AutoPrintController;
	//----------------------------------------------------------------

	/// <summary>
	/// Resumen de UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtMail;


	private: System::Windows::Forms::TextBox^ txtSurname;

	private: System::Windows::Forms::TextBox^ txtDateOfBirth;
	private: System::Windows::Forms::TextBox^ txtDNI;




	private: System::Windows::Forms::TextBox^ txtCellphoneNumber;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;
	private: System::Windows::Forms::Button^ btnContinue;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ txtGender;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtMail = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtCellphoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtGender = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellidos:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Genero: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Fecha de nacimiento:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 382);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Correo electrónico: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(299, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Número de celular:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(299, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Número de DNI:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(299, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(122, 24);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Contraseña:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(299, 292);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(208, 24);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Confirma contraseña:";
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->ForeColor = System::Drawing::SystemColors::MenuText;
			this->txtName->Location = System::Drawing::Point(38, 61);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(130, 26);
			this->txtName->TabIndex = 10;
			// 
			// txtMail
			// 
			this->txtMail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMail->Location = System::Drawing::Point(38, 418);
			this->txtMail->Name = L"txtMail";
			this->txtMail->Size = System::Drawing::Size(130, 26);
			this->txtMail->TabIndex = 11;
			// 
			// txtSurname
			// 
			this->txtSurname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->Location = System::Drawing::Point(38, 150);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(130, 26);
			this->txtSurname->TabIndex = 12;
			// 
			// txtDateOfBirth
			// 
			this->txtDateOfBirth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtDateOfBirth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDateOfBirth->Location = System::Drawing::Point(38, 329);
			this->txtDateOfBirth->Name = L"txtDateOfBirth";
			this->txtDateOfBirth->Size = System::Drawing::Size(130, 26);
			this->txtDateOfBirth->TabIndex = 14;
			// 
			// txtDNI
			// 
			this->txtDNI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtDNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDNI->Location = System::Drawing::Point(303, 150);
			this->txtDNI->MaxLength = 8;
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(130, 26);
			this->txtDNI->TabIndex = 15;
			// 
			// txtCellphoneNumber
			// 
			this->txtCellphoneNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtCellphoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCellphoneNumber->Location = System::Drawing::Point(303, 61);
			this->txtCellphoneNumber->Name = L"txtCellphoneNumber";
			this->txtCellphoneNumber->Size = System::Drawing::Size(130, 26);
			this->txtCellphoneNumber->TabIndex = 16;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(303, 240);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(130, 26);
			this->txtPassword->TabIndex = 17;
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmPassword->Location = System::Drawing::Point(303, 329);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(130, 26);
			this->txtConfirmPassword->TabIndex = 18;
			// 
			// btnContinue
			// 
			this->btnContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnContinue->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->btnContinue->FlatAppearance->BorderColor = System::Drawing::Color::Violet;
			this->btnContinue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinue->Location = System::Drawing::Point(303, 405);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(146, 50);
			this->btnContinue->TabIndex = 19;
			this->btnContinue->Text = L"Siguiente";
			this->btnContinue->UseVisualStyleBackColor = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &UserForm::btnContinue_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(524, 102);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(325, 386);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(572, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(249, 82);
			this->label11->TabIndex = 23;
			this->label11->Text = L"AUTOPRINT\r\nCONNECT";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtGender
			// 
			this->txtGender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->txtGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGender->FormattingEnabled = true;
			this->txtGender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Femenino", L"Masculino", L"Indefinido" });
			this->txtGender->Location = System::Drawing::Point(38, 240);
			this->txtGender->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(130, 28);
			this->txtGender->TabIndex = 36;
			// 
			// UserForm
			// 
			this->AcceptButton = this->btnContinue;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(872, 514);
			this->Controls->Add(this->txtGender);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtCellphoneNumber);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtDateOfBirth);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->txtMail);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"UserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Crear cuenta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//-----------------------------------------------------------------------------------------------------------------CAMBIOS DE LUIS-----------------------------------------------------------------------
	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) { //FUNCIONALIDAD DEL BOTÓN PARA TERMINAR DE REGISTRARSE
		try {
			Customer^ newUser = gcnew Customer(); //instanciamos al nuevo usuario

			//Antes debemos ver si los items están llenos:
			if ((txtName->Text == "") || (txtCellphoneNumber->Text == "") || (txtSurname->Text == "") || (txtDNI->Text == "") || (txtGender->Text == "")
				|| (txtPassword->Text == "") || (txtDateOfBirth->Text == "") || (txtConfirmPassword->Text == "") || (txtMail->Text == "")) {
				MessageBox::Show("Falta colocar algunos datos");
				return;
			}

			newUser->Name = txtName->Text;
			newUser->LastName = txtSurname->Text;
			newUser->Gender = txtGender->Text;
			newUser->Birthdate = txtDateOfBirth->Text;
			newUser->Email = txtMail->Text;
			newUser->Phone_number = txtCellphoneNumber->Text;
			newUser->Dni = Int32::Parse(txtDNI->Text);
			newUser->Password = txtPassword->Text;
			newUser->Password = txtConfirmPassword->Text; //Acá no estoy seguro si deberíamos colocar otro atributo que almacene la misma contraseña para comparar y asegurar que sea la misma
			newUser->Money_in_wallet = 0;
			//Ya cargados los datos, lo pasamos como parámetro al método AddCustomer
			Controller::AddCostumer(newUser); //Añadimos al usuario
			Close(); //Una vez añadido el nuevo usario, cerramos esa pestaña
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString());
		}

	}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};
}
