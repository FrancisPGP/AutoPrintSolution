#pragma once
#include "LoginForm.h"

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace AutoPrintModel;
	using namespace AutoPrintController;

	/// <summary>
	/// Resumen de WalletForm
	/// </summary>
	public ref class WalletForm : public System::Windows::Forms::Form
	{
	public:
		WalletForm(void)
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
		~WalletForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ txtAmountToRechange;

















	private: System::Windows::Forms::Label^ lblOpctionBalance;
	private: System::Windows::Forms::Label^ lblBalanceUser;
	private: System::Windows::Forms::Label^ lblBalance;
	private: System::Windows::Forms::Button^ btnRecharge;
	private: System::Windows::Forms::TextBox^ txtOwnerWallet;
	private: System::Windows::Forms::TextBox^ txtCVVWallet;

	private: System::Windows::Forms::TextBox^ txtCardNumberWallet;
	private: System::Windows::Forms::Label^ lblPropietor;
	private: System::Windows::Forms::Label^ lblCVV;
	private: System::Windows::Forms::Label^ lblMonthYear;
	private: System::Windows::Forms::Label^ lblCardNumber;
	private: System::Windows::Forms::DataGridView^ dgvWallet;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_Titular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_NumCard;


	private: System::Windows::Forms::PictureBox^ pbGuideCard;
	private: System::Windows::Forms::DateTimePicker^ txtMMAAWallet;



	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WalletForm::typeid));
			this->txtAmountToRechange = (gcnew System::Windows::Forms::TextBox());
			this->lblOpctionBalance = (gcnew System::Windows::Forms::Label());
			this->lblBalanceUser = (gcnew System::Windows::Forms::Label());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->btnRecharge = (gcnew System::Windows::Forms::Button());
			this->txtOwnerWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCVVWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCardNumberWallet = (gcnew System::Windows::Forms::TextBox());
			this->lblPropietor = (gcnew System::Windows::Forms::Label());
			this->lblCVV = (gcnew System::Windows::Forms::Label());
			this->lblMonthYear = (gcnew System::Windows::Forms::Label());
			this->lblCardNumber = (gcnew System::Windows::Forms::Label());
			this->dgvWallet = (gcnew System::Windows::Forms::DataGridView());
			this->Card_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_Titular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_NumCard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbGuideCard = (gcnew System::Windows::Forms::PictureBox());
			this->txtMMAAWallet = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWallet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGuideCard))->BeginInit();
			this->SuspendLayout();
			// 
			// txtAmountToRechange
			// 
			this->txtAmountToRechange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtAmountToRechange->Location = System::Drawing::Point(33, 60);
			this->txtAmountToRechange->Name = L"txtAmountToRechange";
			this->txtAmountToRechange->Size = System::Drawing::Size(185, 28);
			this->txtAmountToRechange->TabIndex = 32;
			this->txtAmountToRechange->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtAmountToRechange->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WalletForm::txtAmountToRechange_MouseClick);
			// 
			// lblOpctionBalance
			// 
			this->lblOpctionBalance->AutoSize = true;
			this->lblOpctionBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOpctionBalance->Location = System::Drawing::Point(28, 30);
			this->lblOpctionBalance->Name = L"lblOpctionBalance";
			this->lblOpctionBalance->Size = System::Drawing::Size(220, 25);
			this->lblOpctionBalance->TabIndex = 20;
			this->lblOpctionBalance->Text = L"Monto a recargar (S/.) : ";
			this->lblOpctionBalance->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblBalanceUser
			// 
			this->lblBalanceUser->AutoSize = true;
			this->lblBalanceUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBalanceUser->Location = System::Drawing::Point(321, 27);
			this->lblBalanceUser->Name = L"lblBalanceUser";
			this->lblBalanceUser->Size = System::Drawing::Size(230, 29);
			this->lblBalanceUser->TabIndex = 19;
			this->lblBalanceUser->Text = L"Saldo disponible: S/";
			this->lblBalanceUser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblBalance
			// 
			this->lblBalance->AutoSize = true;
			this->lblBalance->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBalance->Location = System::Drawing::Point(557, 27);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(29, 31);
			this->lblBalance->TabIndex = 33;
			this->lblBalance->Text = L"0";
			this->lblBalance->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnRecharge
			// 
			this->btnRecharge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRecharge->Location = System::Drawing::Point(277, 444);
			this->btnRecharge->Name = L"btnRecharge";
			this->btnRecharge->Size = System::Drawing::Size(113, 37);
			this->btnRecharge->TabIndex = 26;
			this->btnRecharge->Text = L"Recargar";
			this->btnRecharge->UseVisualStyleBackColor = true;
			this->btnRecharge->Click += gcnew System::EventHandler(this, &WalletForm::btnRecharge_Click);
			// 
			// txtOwnerWallet
			// 
			this->txtOwnerWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOwnerWallet->Location = System::Drawing::Point(33, 300);
			this->txtOwnerWallet->MaxLength = 40;
			this->txtOwnerWallet->Name = L"txtOwnerWallet";
			this->txtOwnerWallet->Size = System::Drawing::Size(215, 28);
			this->txtOwnerWallet->TabIndex = 42;
			this->txtOwnerWallet->Text = L"NOMBRE APELLIDO";
			this->txtOwnerWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtOwnerWallet->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WalletForm::txtOwnerWallet_MouseClick);
			// 
			// txtCVVWallet
			// 
			this->txtCVVWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCVVWallet->Location = System::Drawing::Point(33, 380);
			this->txtCVVWallet->MaxLength = 3;
			this->txtCVVWallet->Name = L"txtCVVWallet";
			this->txtCVVWallet->Size = System::Drawing::Size(54, 28);
			this->txtCVVWallet->TabIndex = 41;
			this->txtCVVWallet->Text = L"XXX";
			this->txtCVVWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCVVWallet->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WalletForm::txtCVVWallet_MouseClick);
			// 
			// txtCardNumberWallet
			// 
			this->txtCardNumberWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCardNumberWallet->Location = System::Drawing::Point(33, 140);
			this->txtCardNumberWallet->MaxLength = 19;
			this->txtCardNumberWallet->Name = L"txtCardNumberWallet";
			this->txtCardNumberWallet->Size = System::Drawing::Size(224, 28);
			this->txtCardNumberWallet->TabIndex = 39;
			this->txtCardNumberWallet->Text = L"XXXX-XXXX-XXXX-XXXX";
			this->txtCardNumberWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCardNumberWallet->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WalletForm::txtCardNumberWallet_MouseClick);
			// 
			// lblPropietor
			// 
			this->lblPropietor->AutoSize = true;
			this->lblPropietor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPropietor->Location = System::Drawing::Point(28, 270);
			this->lblPropietor->Name = L"lblPropietor";
			this->lblPropietor->Size = System::Drawing::Size(171, 25);
			this->lblPropietor->TabIndex = 38;
			this->lblPropietor->Text = L"Titular de la tarjeta";
			this->lblPropietor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblCVV
			// 
			this->lblCVV->AutoSize = true;
			this->lblCVV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCVV->Location = System::Drawing::Point(28, 350);
			this->lblCVV->Name = L"lblCVV";
			this->lblCVV->Size = System::Drawing::Size(55, 25);
			this->lblCVV->TabIndex = 37;
			this->lblCVV->Text = L"CVV";
			this->lblCVV->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblMonthYear
			// 
			this->lblMonthYear->AutoSize = true;
			this->lblMonthYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMonthYear->Location = System::Drawing::Point(28, 190);
			this->lblMonthYear->Name = L"lblMonthYear";
			this->lblMonthYear->Size = System::Drawing::Size(189, 25);
			this->lblMonthYear->TabIndex = 36;
			this->lblMonthYear->Text = L"Fecha de caducidad";
			this->lblMonthYear->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblCardNumber
			// 
			this->lblCardNumber->AutoSize = true;
			this->lblCardNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCardNumber->Location = System::Drawing::Point(28, 110);
			this->lblCardNumber->Name = L"lblCardNumber";
			this->lblCardNumber->Size = System::Drawing::Size(166, 25);
			this->lblCardNumber->TabIndex = 35;
			this->lblCardNumber->Text = L"Número de tarjeta";
			this->lblCardNumber->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvWallet
			// 
			this->dgvWallet->AllowUserToAddRows = false;
			this->dgvWallet->AllowUserToResizeRows = false;
			this->dgvWallet->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWallet->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Card_id, this->Card_Titular,
					this->Card_NumCard
			});
			this->dgvWallet->Location = System::Drawing::Point(298, 119);
			this->dgvWallet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvWallet->Name = L"dgvWallet";
			this->dgvWallet->ReadOnly = true;
			this->dgvWallet->RowHeadersVisible = false;
			this->dgvWallet->RowHeadersWidth = 82;
			this->dgvWallet->RowTemplate->Height = 33;
			this->dgvWallet->Size = System::Drawing::Size(372, 254);
			this->dgvWallet->TabIndex = 43;
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
			// pbGuideCard
			// 
			this->pbGuideCard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbGuideCard.Image")));
			this->pbGuideCard->Location = System::Drawing::Point(288, 109);
			this->pbGuideCard->Name = L"pbGuideCard";
			this->pbGuideCard->Size = System::Drawing::Size(391, 271);
			this->pbGuideCard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbGuideCard->TabIndex = 46;
			this->pbGuideCard->TabStop = false;
			// 
			// txtMMAAWallet
			// 
			this->txtMMAAWallet->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->txtMMAAWallet->CalendarTitleForeColor = System::Drawing::SystemColors::GrayText;
			this->txtMMAAWallet->CustomFormat = L"MM/yy";
			this->txtMMAAWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMMAAWallet->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->txtMMAAWallet->Location = System::Drawing::Point(33, 220);
			this->txtMMAAWallet->MinDate = System::DateTime(2024, 2, 26, 0, 0, 0, 0);
			this->txtMMAAWallet->Name = L"txtMMAAWallet";
			this->txtMMAAWallet->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtMMAAWallet->ShowUpDown = true;
			this->txtMMAAWallet->Size = System::Drawing::Size(100, 28);
			this->txtMMAAWallet->TabIndex = 56;
			this->txtMMAAWallet->Value = System::DateTime(2024, 2, 26, 0, 0, 0, 0);
			// 
			// WalletForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(710, 512);
			this->Controls->Add(this->txtMMAAWallet);
			this->Controls->Add(this->pbGuideCard);
			this->Controls->Add(this->dgvWallet);
			this->Controls->Add(this->txtOwnerWallet);
			this->Controls->Add(this->txtCVVWallet);
			this->Controls->Add(this->txtCardNumberWallet);
			this->Controls->Add(this->lblPropietor);
			this->Controls->Add(this->lblCVV);
			this->Controls->Add(this->lblMonthYear);
			this->Controls->Add(this->lblCardNumber);
			this->Controls->Add(this->lblBalance);
			this->Controls->Add(this->txtAmountToRechange);
			this->Controls->Add(this->btnRecharge);
			this->Controls->Add(this->lblOpctionBalance);
			this->Controls->Add(this->lblBalanceUser);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"WalletForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Billetera";
			this->Load += gcnew System::EventHandler(this, &WalletForm::WalletForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWallet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbGuideCard))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int checkFill = 0;
		double total;

	private: System::Void btnRecharge_Click(System::Object^ sender, System::EventArgs^ e) {
		Card^ newCardWallet = gcnew Card(); //instanciamos la nueva tarjeta a emplear

		newCardWallet->account_number = txtCardNumberWallet->Text;
		newCardWallet->cvv = txtCVVWallet->Text;
		newCardWallet->dueDate = txtMMAAWallet->Text;
		// Obtener la fecha actual
		DateTime fechaActual = DateTime::Now;

		int dni_wallet = Dni_Ahora;
		Customer^ user_wallet = AutoPrintController::Controller::QueryCustomerByDNI(dni_wallet);

		if (user_wallet == nullptr) {
			Employee^ emp_user_wallet = AutoPrintController::Controller::QueryEmployeeByDNI(dni_wallet);

			if ((txtAmountToRechange->Text == "") || (Int32::Parse(txtCVVWallet->Text) < 100) || (txtCardNumberWallet->Text == "") || (txtOwnerWallet->Text == "") ||
				(txtCardNumberWallet->Text == "XXXX-XXXX-XXXX-XXXX") || (txtCVVWallet->Text == "XXX") || (txtOwnerWallet->Text == "NOMBRE APELLIDO")) {

				MessageBox::Show("Debe rellenar correctamente las casillas");
			}
			else if (txtMMAAWallet->Value <= fechaActual) {
				MessageBox::Show("Su tarjeta está vencida.");
			}
			else {
				if (1 <= Int32::Parse(txtAmountToRechange->Text)) {
					user_wallet->Money_in_wallet = user_wallet->Money_in_wallet + Convert::ToDouble(txtAmountToRechange->Text);
					lblBalance->Text = Convert::ToString(user_wallet->Money_in_wallet);
					Controller::UpdateCostumer(user_wallet);
					txtAmountToRechange->Text = "";
					txtCardNumberWallet->Text = "XXXX-XXXX-XXXX-XXXX";
					//txtMMAAWallet->Text = "MM/AA";
					txtCVVWallet->Text = "XXX";
					txtOwnerWallet->Text = "NOMBRE APELLIDO";
				}
				else {
					MessageBox::Show("El monto mínimo a recargar es de S/1.");
				}
			}
		}
		else {
			if ((txtAmountToRechange->Text == "") || (Int32::Parse(txtCVVWallet->Text) < 100) || (txtCardNumberWallet->Text == "") || (txtOwnerWallet->Text == "") ||
				(txtCardNumberWallet->Text == "XXXX-XXXX-XXXX-XXXX") || (txtCVVWallet->Text == "XXX") || (txtOwnerWallet->Text == "NOMBRE APELLIDO")) {

				MessageBox::Show("Debe rellenar correctamente las casillas");
			}
			else if (txtMMAAWallet->Value <= fechaActual) {
				MessageBox::Show("Su tarjeta está vencida.");
			}
			else {
				if (1 <= Int32::Parse(txtAmountToRechange->Text)) {
					user_wallet->Money_in_wallet = user_wallet->Money_in_wallet + Convert::ToDouble(txtAmountToRechange->Text);
					lblBalance->Text = Convert::ToString(user_wallet->Money_in_wallet);
					Controller::UpdateCostumer(user_wallet);
					txtAmountToRechange->Text = "";
					txtCardNumberWallet->Text = "XXXX-XXXX-XXXX-XXXX";
					//txtMMAAWallet->Text = "MM/AA";
					txtCVVWallet->Text = "XXX";
					txtOwnerWallet->Text = "NOMBRE APELLIDO";
				}
				else {
					MessageBox::Show("El monto mínimo a recargar es de S/1.");
				}
			}
		}
	}

		   void FillOut() {
			   if (txtCardNumberWallet->Text == "" && checkFill != 1) {
				   txtCardNumberWallet->Text = "XXXX-XXXX-XXXX-XXXX";
			   }
			   if (txtMMAAWallet->Text == "" && checkFill != 2) {
				   //txtMMAAWallet->Text = "MM/AA";
			   }
			   if (txtOwnerWallet->Text == "" && checkFill != 3) {
				   txtOwnerWallet->Text = "NOMBRE APELLIDO";
			   }
			   if (txtCVVWallet->Text == "" && checkFill != 4) {
				   txtCVVWallet->Text = "XXX";
			   }
		   }

	private: System::Void txtCardNumberWallet_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtCardNumberWallet->Text == "XXXX-XXXX-XXXX-XXXX") {
			txtCardNumberWallet->Text = "";
		}
		checkFill = 1;
		FillOut();
		checkFill = 0;
	}
	private: System::Void txtMMAAWallet_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtMMAAWallet->Text == "MM/AA") {
			//txtMMAAWallet->Text = "";
		}
		checkFill = 2;
		FillOut();
		checkFill = 0;
	}
	private: System::Void txtOwnerWallet_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtOwnerWallet->Text == "NOMBRE APELLIDO") {
			txtOwnerWallet->Text = "";
		}
		checkFill = 3;
		FillOut();
		checkFill = 0;
	}
	private: System::Void txtCVVWallet_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (txtCVVWallet->Text == "XXX") {
			txtCVVWallet->Text = "";
		}
		checkFill = 4;
		FillOut();
		checkFill = 0;
	}
	private: System::Void txtAmountToRechange_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		checkFill = 5;
		FillOut();
		checkFill = 0;
	}
	private: System::Void WalletForm_Load(System::Object^ sender, System::EventArgs^ e) {
		txtMMAAWallet->MinDate = DateTime::Now;
		int dni_wallet = Dni_Ahora;
		Customer^ user_wallet = AutoPrintController::Controller::QueryCustomerByDNI(dni_wallet);
		if (user_wallet == nullptr) {
			Employee^ emp_user_wallet = AutoPrintController::Controller::QueryEmployeeByDNI(dni_wallet);
			lblBalance->Text = Convert::ToString(emp_user_wallet->Money_in_wallet);
		}
		else {
			lblBalance->Text = Convert::ToString(user_wallet->Money_in_wallet);
		}
	}
	};
}