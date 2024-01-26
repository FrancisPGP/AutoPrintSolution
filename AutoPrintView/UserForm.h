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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ txtGender;
	private: System::Windows::Forms::TextBox^ txtDateOfBirth;
	private: System::Windows::Forms::TextBox^ txtDNI;




	private: System::Windows::Forms::TextBox^ txtCellphoneNumber;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;
	private: System::Windows::Forms::Button^ btnContinue;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label11;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->txtGender = (gcnew System::Windows::Forms::TextBox());
			this->txtDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtCellphoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			this->label1->Click += gcnew System::EventHandler(this, &UserForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 140);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellidos:";
			this->label2->Click += gcnew System::EventHandler(this, &UserForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 250);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Genero: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 360);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(263, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Fecha de nacimiento:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 470);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 29);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Correo electr�nico: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(399, 30);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(236, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"N�mero de celular:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(399, 140);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 29);
			this->label7->TabIndex = 7;
			this->label7->Text = L"N�mero de DNI:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(399, 250);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 29);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Contrase�a:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(399, 360);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(260, 29);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Confirma contrase�a:";
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->ForeColor = System::Drawing::SystemColors::MenuText;
			this->txtName->Location = System::Drawing::Point(50, 75);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(172, 30);
			this->txtName->TabIndex = 10;
			// 
			// txtMail
			// 
			this->txtMail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMail->Location = System::Drawing::Point(50, 515);
			this->txtMail->Margin = System::Windows::Forms::Padding(4);
			this->txtMail->Name = L"txtMail";
			this->txtMail->Size = System::Drawing::Size(172, 30);
			this->txtMail->TabIndex = 11;
			// 
			// txtSurname
			// 
			this->txtSurname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->Location = System::Drawing::Point(50, 185);
			this->txtSurname->Margin = System::Windows::Forms::Padding(4);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(172, 30);
			this->txtSurname->TabIndex = 12;
			// 
			// txtGender
			// 
			this->txtGender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGender->Location = System::Drawing::Point(50, 295);
			this->txtGender->Margin = System::Windows::Forms::Padding(4);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(172, 30);
			this->txtGender->TabIndex = 13;
			// 
			// txtDateOfBirth
			// 
			this->txtDateOfBirth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtDateOfBirth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDateOfBirth->Location = System::Drawing::Point(50, 405);
			this->txtDateOfBirth->Margin = System::Windows::Forms::Padding(4);
			this->txtDateOfBirth->Name = L"txtDateOfBirth";
			this->txtDateOfBirth->Size = System::Drawing::Size(172, 30);
			this->txtDateOfBirth->TabIndex = 14;
			// 
			// txtDNI
			// 
			this->txtDNI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtDNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDNI->Location = System::Drawing::Point(404, 185);
			this->txtDNI->Margin = System::Windows::Forms::Padding(4);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(172, 30);
			this->txtDNI->TabIndex = 15;
			// 
			// txtCellphoneNumber
			// 
			this->txtCellphoneNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtCellphoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCellphoneNumber->Location = System::Drawing::Point(404, 75);
			this->txtCellphoneNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtCellphoneNumber->Name = L"txtCellphoneNumber";
			this->txtCellphoneNumber->Size = System::Drawing::Size(172, 30);
			this->txtCellphoneNumber->TabIndex = 16;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(404, 295);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(172, 30);
			this->txtPassword->TabIndex = 17;
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmPassword->Location = System::Drawing::Point(404, 405);
			this->txtConfirmPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(172, 30);
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
			this->btnContinue->Location = System::Drawing::Point(404, 498);
			this->btnContinue->Margin = System::Windows::Forms::Padding(4);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(195, 62);
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
			this->pictureBox1->Location = System::Drawing::Point(700, 127);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(433, 475);
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
			this->label11->Location = System::Drawing::Point(763, 13);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(303, 98);
			this->label11->TabIndex = 23;
			this->label11->Text = L"AUTOPRINT\r\n  CONNECT";
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1163, 633);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtCellphoneNumber);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtDateOfBirth);
			this->Controls->Add(this->txtGender);
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
//-----------------------------------------------------------------------------------------------------------------CAMBIOS DE LUIS-----------------------------------------------------------------------
	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) { //FUNCIONALIDAD DEL BOT�N PARA TERMINAR DE REGISTRARSE
		User^ newUser = gcnew User(); //instanciamos al nuevo usuario
		
		newUser->Name = txtName->Text;
		newUser->LastName = txtSurname->Text;
		newUser->Gender = txtGender->Text;
		newUser->Birthdate = Int32::Parse(txtDateOfBirth->Text);
		newUser->Email = txtMail->Text;
		newUser->Phone_number = txtCellphoneNumber->Text;
		newUser->Dni = txtDNI->Text;
		newUser->Password = txtPassword->Text;
		newUser->Password = txtConfirmPassword->Text; //Ac� no estoy seguro si deber�amos colocar otro atributo que almacene la misma contrase�a para comparar y asegurar que sea la misma
		
		//Ya cargados los datos, lo pasamos como par�metro al m�todo AddCustomer
		Controller::AddCustomer(newUser); //A�adimos al usuario
		Close(); //Una vez a�adido el nuevo usario, cerramos esa pesta�a

	}//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};
}
