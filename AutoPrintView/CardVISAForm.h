#pragma once
#include"LoginForm.h"
#include <ctime>
#include <cstdlib>
#include <windows.h>

#include <vcclr.h>

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace AutoPrintModel;
	using namespace AutoPrintController;
	using namespace System::Collections::Generic;


	using namespace System::Web;
	using namespace System::Net::Mail;

	static bool ValidationCardVisa = false;

	/// <summary>
	/// Resumen de CardVISAForm
	/// </summary>
	public ref class CardVISAForm : public System::Windows::Forms::Form
	{
	public:
		CardVISAForm(void)
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
		~CardVISAForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvCardVisa;
	protected:









	protected:



	protected:

	protected:












	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_Titular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_NumCard;
	private: System::Windows::Forms::TextBox^ txtCardOwnerVisa;






	private: System::Windows::Forms::TextBox^ txtCardNumberVisa;

	private: System::Windows::Forms::Label^ lblPropietor;
	private: System::Windows::Forms::Label^ lblCVV;
	private: System::Windows::Forms::Label^ lblMonthYear;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPrintCardVisa;
	private: System::Windows::Forms::PictureBox^ pbGuideCard;
	private: System::Windows::Forms::DateTimePicker^ txtCardExpirationVisa;

	private: System::Windows::Forms::TextBox^ txtCardCVVvisa;























	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CardVISAForm::typeid));
			this->dgvCardVisa = (gcnew System::Windows::Forms::DataGridView());
			this->Card_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_Titular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_NumCard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtCardOwnerVisa = (gcnew System::Windows::Forms::TextBox());
			this->txtCardNumberVisa = (gcnew System::Windows::Forms::TextBox());
			this->lblPropietor = (gcnew System::Windows::Forms::Label());
			this->lblCVV = (gcnew System::Windows::Forms::Label());
			this->lblMonthYear = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPrintCardVisa = (gcnew System::Windows::Forms::Button());
			this->pbGuideCard = (gcnew System::Windows::Forms::PictureBox());
			this->txtCardExpirationVisa = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtCardCVVvisa = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCardVisa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGuideCard))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvCardVisa
			// 
			this->dgvCardVisa->AllowUserToAddRows = false;
			this->dgvCardVisa->AllowUserToResizeRows = false;
			this->dgvCardVisa->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCardVisa->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Card_id,
					this->Card_Titular, this->Card_NumCard
			});
			this->dgvCardVisa->Location = System::Drawing::Point(278, 29);
			this->dgvCardVisa->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvCardVisa->Name = L"dgvCardVisa";
			this->dgvCardVisa->ReadOnly = true;
			this->dgvCardVisa->RowHeadersVisible = false;
			this->dgvCardVisa->RowHeadersWidth = 82;
			this->dgvCardVisa->RowTemplate->Height = 33;
			this->dgvCardVisa->Size = System::Drawing::Size(372, 254);
			this->dgvCardVisa->TabIndex = 53;
			// 
			// Card_id
			// 
			this->Card_id->HeaderText = L"Id";
			this->Card_id->MinimumWidth = 10;
			this->Card_id->Name = L"Card_id";
			this->Card_id->ReadOnly = true;
			this->Card_id->Visible = false;
			this->Card_id->Width = 50;
			// 
			// Card_Titular
			// 
			this->Card_Titular->HeaderText = L"Titular";
			this->Card_Titular->MinimumWidth = 10;
			this->Card_Titular->Name = L"Card_Titular";
			this->Card_Titular->ReadOnly = true;
			this->Card_Titular->Width = 200;
			// 
			// Card_NumCard
			// 
			this->Card_NumCard->HeaderText = L"Número de tarjeta";
			this->Card_NumCard->MinimumWidth = 10;
			this->Card_NumCard->Name = L"Card_NumCard";
			this->Card_NumCard->ReadOnly = true;
			this->Card_NumCard->Width = 200;
			// 
			// txtCardOwnerVisa
			// 
			this->txtCardOwnerVisa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCardOwnerVisa->Location = System::Drawing::Point(17, 208);
			this->txtCardOwnerVisa->MaxLength = 40;
			this->txtCardOwnerVisa->Name = L"txtCardOwnerVisa";
			this->txtCardOwnerVisa->Size = System::Drawing::Size(215, 28);
			this->txtCardOwnerVisa->TabIndex = 52;
			this->txtCardOwnerVisa->Text = L"NOMBRE APELLIDO";
			this->txtCardOwnerVisa->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCardOwnerVisa->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CardVISAForm::txtCardOwnerVisa_MouseClick);
			// 
			// txtCardNumberVisa
			// 
			this->txtCardNumberVisa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCardNumberVisa->Location = System::Drawing::Point(18, 48);
			this->txtCardNumberVisa->MaxLength = 19;
			this->txtCardNumberVisa->Name = L"txtCardNumberVisa";
			this->txtCardNumberVisa->Size = System::Drawing::Size(224, 28);
			this->txtCardNumberVisa->TabIndex = 49;
			this->txtCardNumberVisa->Text = L"XXXX-XXXX-XXXX-XXXX";
			this->txtCardNumberVisa->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCardNumberVisa->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CardVISAForm::txtCardNumberVisa_MouseClick);
			// 
			// lblPropietor
			// 
			this->lblPropietor->AutoSize = true;
			this->lblPropietor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPropietor->Location = System::Drawing::Point(12, 178);
			this->lblPropietor->Name = L"lblPropietor";
			this->lblPropietor->Size = System::Drawing::Size(171, 25);
			this->lblPropietor->TabIndex = 48;
			this->lblPropietor->Text = L"Titular de la tarjeta";
			this->lblPropietor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblCVV
			// 
			this->lblCVV->AutoSize = true;
			this->lblCVV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCVV->Location = System::Drawing::Point(12, 258);
			this->lblCVV->Name = L"lblCVV";
			this->lblCVV->Size = System::Drawing::Size(55, 25);
			this->lblCVV->TabIndex = 47;
			this->lblCVV->Text = L"CVV";
			this->lblCVV->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblMonthYear
			// 
			this->lblMonthYear->AutoSize = true;
			this->lblMonthYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMonthYear->Location = System::Drawing::Point(12, 98);
			this->lblMonthYear->Name = L"lblMonthYear";
			this->lblMonthYear->Size = System::Drawing::Size(189, 25);
			this->lblMonthYear->TabIndex = 46;
			this->lblMonthYear->Text = L"Fecha de caducidad";
			this->lblMonthYear->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 25);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Número de tarjeta";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnPrintCardVisa
			// 
			this->btnPrintCardVisa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnPrintCardVisa->Location = System::Drawing::Point(278, 336);
			this->btnPrintCardVisa->Name = L"btnPrintCardVisa";
			this->btnPrintCardVisa->Size = System::Drawing::Size(113, 37);
			this->btnPrintCardVisa->TabIndex = 44;
			this->btnPrintCardVisa->Text = L"Pagar";
			this->btnPrintCardVisa->UseVisualStyleBackColor = true;
			this->btnPrintCardVisa->Click += gcnew System::EventHandler(this, &CardVISAForm::btnPrintCardVisa_Click);
			// 
			// pbGuideCard
			// 
			this->pbGuideCard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbGuideCard.Image")));
			this->pbGuideCard->Location = System::Drawing::Point(265, 21);
			this->pbGuideCard->Name = L"pbGuideCard";
			this->pbGuideCard->Size = System::Drawing::Size(396, 278);
			this->pbGuideCard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbGuideCard->TabIndex = 54;
			this->pbGuideCard->TabStop = false;
			// 
			// txtCardExpirationVisa
			// 
			this->txtCardExpirationVisa->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->txtCardExpirationVisa->CalendarTitleForeColor = System::Drawing::SystemColors::GrayText;
			this->txtCardExpirationVisa->CustomFormat = L"MM/yy";
			this->txtCardExpirationVisa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCardExpirationVisa->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->txtCardExpirationVisa->Location = System::Drawing::Point(17, 128);
			this->txtCardExpirationVisa->MinDate = System::DateTime(2024, 2, 26, 0, 0, 0, 0);
			this->txtCardExpirationVisa->Name = L"txtCardExpirationVisa";
			this->txtCardExpirationVisa->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtCardExpirationVisa->Size = System::Drawing::Size(100, 28);
			this->txtCardExpirationVisa->TabIndex = 55;
			this->txtCardExpirationVisa->Value = System::DateTime(2024, 2, 26, 0, 0, 0, 0);
			// 
			// txtCardCVVvisa
			// 
			this->txtCardCVVvisa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCardCVVvisa->Location = System::Drawing::Point(17, 288);
			this->txtCardCVVvisa->MaxLength = 3;
			this->txtCardCVVvisa->Name = L"txtCardCVVvisa";
			this->txtCardCVVvisa->Size = System::Drawing::Size(54, 28);
			this->txtCardCVVvisa->TabIndex = 51;
			this->txtCardCVVvisa->Text = L"XXX";
			this->txtCardCVVvisa->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCardCVVvisa->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CardVISAForm::txtCardCVVvisa_MouseClick);
			// 
			// CardVISAForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(668, 397);
			this->Controls->Add(this->txtCardExpirationVisa);
			this->Controls->Add(this->pbGuideCard);
			this->Controls->Add(this->dgvCardVisa);
			this->Controls->Add(this->txtCardOwnerVisa);
			this->Controls->Add(this->txtCardCVVvisa);
			this->Controls->Add(this->txtCardNumberVisa);
			this->Controls->Add(this->lblPropietor);
			this->Controls->Add(this->lblCVV);
			this->Controls->Add(this->lblMonthYear);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPrintCardVisa);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"CardVISAForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pagar con VISA";
			this->Load += gcnew System::EventHandler(this, &CardVISAForm::CardVISAForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCardVisa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGuideCard))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int checkFill = 0;		

	private: System::Void btnPrintCardVisa_Click(System::Object^ sender, System::EventArgs^ e) {
		ProbErrorTARJ(); //Chance de que ocurra un atasco en la impresora
		Card^ newCardWallet = gcnew Card(); //instanciamos la nueva tarjeta a emplear

		newCardWallet->account_number = txtCardNumberVisa->Text;
		newCardWallet->cvv = txtCardCVVvisa->Text;
		newCardWallet->dueDate = txtCardExpirationVisa->Text;
		// Obtener la fecha actual
		DateTime fechaActual = DateTime::Now;

		if ((txtCardNumberVisa->Text == "") || (txtCardCVVvisa->Text == "") || (txtCardOwnerVisa->Text == "") ||
			(txtCardNumberVisa->Text == "XXXX-XXXX-XXXX-XXXX") || (txtCardCVVvisa->Text == "XXX") || (txtCardOwnerVisa->Text == "NOMBRE APELLIDO") ||
			(Int32::Parse(txtCardCVVvisa->Text) < 100)) {
			MessageBox::Show("Debe rellenar todas las casillas");
		}
		else if (txtCardExpirationVisa->Value <= fechaActual) {
			MessageBox::Show("Su tarjeta está vencida.");
		}
		else {
			email_tarjeta();
			ValidationCardVisa = true;
			Close();
			
		}
	}
		   void ProbErrorTARJ() {
			   srand(static_cast<unsigned int>(time(nullptr))); //Genera un número aleatorio con el tiempo actual
			   int random = (rand() % 10) + 1; //Se crea el número aleatorio entre 1 a 10

			   if (random == 1 || random == 2) { //Si coincide con 1 o 2 (probabilidad del 20%), mostrará el mensaje de error
				   MessageBox::Show("Error: La impresora está atascada. En breve se solucionará el problema para que se proceda al pago.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

		   void FillOut() {
			   if (txtCardNumberVisa->Text == "" && checkFill != 1) {
				   txtCardNumberVisa->Text = "XXXX-XXXX-XXXX-XXXX";
			   }
			   if (txtCardExpirationVisa->Text == "" && checkFill != 2) {
				   //txtCardExpirationVisa->Text = "MM/AA";
			   }
			   if (txtCardOwnerVisa->Text == "" && checkFill != 3) {
				   txtCardOwnerVisa->Text = "NOMBRE APELLIDO";
			   }
			   if (txtCardCVVvisa->Text == "" && checkFill != 4) {
				   txtCardCVVvisa->Text = "XXX";
			   }
		   }

	private: System::Void txtCardNumberVisa_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtCardNumberVisa->Text == "XXXX-XXXX-XXXX-XXXX") {
			txtCardNumberVisa->Text = "";
		}
		checkFill = 1;
		FillOut();
		checkFill = 0;
	}

	private: System::Void txtCardExpirationVisa_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtCardExpirationVisa->Text == "MM/AA") {
			//txtCardExpirationVisa->Text = "";
		}
		checkFill = 2;
		FillOut();
		checkFill = 0;
	}
	private: System::Void txtCardOwnerVisa_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtCardOwnerVisa->Text == "NOMBRE APELLIDO") {
			txtCardOwnerVisa->Text = "";
		}
		checkFill = 3;
		FillOut();
		checkFill = 0;
	}
	private: System::Void txtCardCVVvisa_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtCardCVVvisa->Text == "XXX") {
			txtCardCVVvisa->Text = "";
		}
		checkFill = 4;
		FillOut();
		checkFill = 0;
		
	}
	public:
			void email_tarjeta() {
				int dniP = Dni_Ahora;
				String^ dnic = "" + dniP;
				double pago;
				
				List<Order^>^ orders = Controller::QueryAllFiles();
				for (int i = 0; i < orders->Count; i++) {
					if (orders[i]->dni_history == dniP&& i==((orders->Count)-1)) {
						pago = orders[i]->price;
					}
				}
					String^ pagoc = "" + pago;

				Customer^ currentUser = Controller::QueryCustomerByDNI(dniP);
				String^ correo = currentUser->Email;
						  MailMessage^ mail = gcnew MailMessage("AutoprintConnect@outlook.com", correo,
							  "Recibo Electronico de Impresion", 
							  "Constancia de Pago\n Se ha registrado con exito el pago de su impresion\n DNI:"+dnic+"\n Pago total:"+pagoc+"\n AUTOPRINT CONNECT");
						  SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
						  client->Port = 587;
						  client->Credentials = gcnew System::Net::NetworkCredential("AutoprintConnect@outlook.com", "Autoprint123");
						  client->EnableSsl = true;
						  client->Send(mail);
					
		  }
	private: System::Void CardVISAForm_Load(System::Object^ sender, System::EventArgs^ e) {
		txtCardExpirationVisa->MinDate = DateTime::Now;
	}
};

}
