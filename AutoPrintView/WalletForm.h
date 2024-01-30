#pragma once

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ txtMMAAWallet;
	private: System::Windows::Forms::TextBox^ txtCardNumberWallet;
	private: System::Windows::Forms::Label^ lblPropietor;
	private: System::Windows::Forms::Label^ lblCVV;
	private: System::Windows::Forms::Label^ lblMonthYear;
	private: System::Windows::Forms::Label^ lblCardNumber;
	private: System::Windows::Forms::DataGridView^ dgvUserTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_Titular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Card_NumCard;


	protected:



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtAmountToRechange = (gcnew System::Windows::Forms::TextBox());
			this->lblOpctionBalance = (gcnew System::Windows::Forms::Label());
			this->lblBalanceUser = (gcnew System::Windows::Forms::Label());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->btnRecharge = (gcnew System::Windows::Forms::Button());
			this->txtOwnerWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCVVWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtMMAAWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCardNumberWallet = (gcnew System::Windows::Forms::TextBox());
			this->lblPropietor = (gcnew System::Windows::Forms::Label());
			this->lblCVV = (gcnew System::Windows::Forms::Label());
			this->lblMonthYear = (gcnew System::Windows::Forms::Label());
			this->lblCardNumber = (gcnew System::Windows::Forms::Label());
			this->dgvUserTable = (gcnew System::Windows::Forms::DataGridView());
			this->Card_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_Titular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_NumCard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->BeginInit();
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
			this->btnRecharge->Location = System::Drawing::Point(281, 439);
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
			this->txtOwnerWallet->Size = System::Drawing::Size(185, 28);
			this->txtOwnerWallet->TabIndex = 42;
			this->txtOwnerWallet->Text = L"NOMBRE APELLIDO";
			this->txtOwnerWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// 
			// txtMMAAWallet
			// 
			this->txtMMAAWallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMMAAWallet->Location = System::Drawing::Point(33, 220);
			this->txtMMAAWallet->MaxLength = 5;
			this->txtMMAAWallet->Name = L"txtMMAAWallet";
			this->txtMMAAWallet->Size = System::Drawing::Size(69, 28);
			this->txtMMAAWallet->TabIndex = 40;
			this->txtMMAAWallet->Text = L"MM/AA";
			this->txtMMAAWallet->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->lblCardNumber->Text = L"N�mero de tarjeta";
			this->lblCardNumber->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dgvUserTable
			// 
			this->dgvUserTable->AllowUserToAddRows = false;
			this->dgvUserTable->AllowUserToResizeRows = false;
			this->dgvUserTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUserTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Card_id,
					this->Card_Titular, this->Card_NumCard
			});
			this->dgvUserTable->Location = System::Drawing::Point(298, 119);
			this->dgvUserTable->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvUserTable->Name = L"dgvUserTable";
			this->dgvUserTable->RowHeadersVisible = false;
			this->dgvUserTable->RowHeadersWidth = 82;
			this->dgvUserTable->RowTemplate->Height = 33;
			this->dgvUserTable->Size = System::Drawing::Size(372, 254);
			this->dgvUserTable->TabIndex = 43;
			// 
			// Card_id
			// 
			this->Card_id->HeaderText = L"Id";
			this->Card_id->MinimumWidth = 10;
			this->Card_id->Name = L"Card_id";
			this->Card_id->Visible = false;
			this->Card_id->Width = 50;
			// 
			// Card_Titular
			// 
			this->Card_Titular->HeaderText = L"Titular";
			this->Card_Titular->MinimumWidth = 10;
			this->Card_Titular->Name = L"Card_Titular";
			this->Card_Titular->Width = 200;
			// 
			// Card_NumCard
			// 
			this->Card_NumCard->HeaderText = L"N�mero de tarjeta";
			this->Card_NumCard->MinimumWidth = 10;
			this->Card_NumCard->Name = L"Card_NumCard";
			this->Card_NumCard->Width = 200;
			// 
			// WalletForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(710, 512);
			this->Controls->Add(this->dgvUserTable);
			this->Controls->Add(this->txtOwnerWallet);
			this->Controls->Add(this->txtCVVWallet);
			this->Controls->Add(this->txtMMAAWallet);
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
			this->Name = L"WalletForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Billetera";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnRecharge_Click(System::Object^ sender, System::EventArgs^ e) {
		Card^ newCardWallet = gcnew Card(); //instanciamos la nueva tarjeta a emplear

		newCardWallet->account_number = txtCardNumberWallet->Text;
		newCardWallet->cvv = txtCVVWallet->Text;
		newCardWallet->dueDate = txtMMAAWallet->Text;

		int a = Int32::Parse(lblBalance->Text);
		int b = Int32::Parse(txtAmountToRechange->Text);
		int total = a + b;

		lblBalance->Text = total.ToString();

	}
	};
}