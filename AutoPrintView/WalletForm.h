#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ lblBalanceUser;
	private: System::Windows::Forms::Label^ lblOpctionBalance;



	private: System::Windows::Forms::Label^ lblCardNumber;
	private: System::Windows::Forms::Label^ lblMonthYear;
	private: System::Windows::Forms::Label^ lblCVV;
	private: System::Windows::Forms::Label^ lblNameProprietor;
	private: System::Windows::Forms::Label^ lblLastNameProprietor;
	private: System::Windows::Forms::Button^ btnRecharge;

	private: System::Windows::Forms::TextBox^ txtCardNumberWallet;
	private: System::Windows::Forms::TextBox^ txtMMAAWallet;
	private: System::Windows::Forms::TextBox^ txtCVVWallet;
	private: System::Windows::Forms::TextBox^ txtNameProprietorWallet;
	private: System::Windows::Forms::TextBox^ txtLastNameProprietorWallet;

	private: System::Windows::Forms::TextBox^ txtAmountToRechange;
	private: System::Windows::Forms::DataGridView^ dgvBalance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BalanceWallet;














	protected:

	protected:

	protected:

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
			this->lblBalanceUser = (gcnew System::Windows::Forms::Label());
			this->lblOpctionBalance = (gcnew System::Windows::Forms::Label());
			this->lblCardNumber = (gcnew System::Windows::Forms::Label());
			this->lblMonthYear = (gcnew System::Windows::Forms::Label());
			this->lblCVV = (gcnew System::Windows::Forms::Label());
			this->lblNameProprietor = (gcnew System::Windows::Forms::Label());
			this->lblLastNameProprietor = (gcnew System::Windows::Forms::Label());
			this->btnRecharge = (gcnew System::Windows::Forms::Button());
			this->txtCardNumberWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtMMAAWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtCVVWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtNameProprietorWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtLastNameProprietorWallet = (gcnew System::Windows::Forms::TextBox());
			this->txtAmountToRechange = (gcnew System::Windows::Forms::TextBox());
			this->dgvBalance = (gcnew System::Windows::Forms::DataGridView());
			this->BalanceWallet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBalance))->BeginInit();
			this->SuspendLayout();
			// 
			// lblBalanceUser
			// 
			this->lblBalanceUser->AutoSize = true;
			this->lblBalanceUser->Location = System::Drawing::Point(411, 32);
			this->lblBalanceUser->Name = L"lblBalanceUser";
			this->lblBalanceUser->Size = System::Drawing::Size(112, 16);
			this->lblBalanceUser->TabIndex = 0;
			this->lblBalanceUser->Text = L"Saldo disponible:";
			// 
			// lblOpctionBalance
			// 
			this->lblOpctionBalance->AutoSize = true;
			this->lblOpctionBalance->Location = System::Drawing::Point(39, 77);
			this->lblOpctionBalance->Name = L"lblOpctionBalance";
			this->lblOpctionBalance->Size = System::Drawing::Size(219, 16);
			this->lblOpctionBalance->TabIndex = 1;
			this->lblOpctionBalance->Text = L"Ingrese la cantidad a recargar (S/) : ";
			// 
			// lblCardNumber
			// 
			this->lblCardNumber->AutoSize = true;
			this->lblCardNumber->Location = System::Drawing::Point(64, 230);
			this->lblCardNumber->Name = L"lblCardNumber";
			this->lblCardNumber->Size = System::Drawing::Size(114, 16);
			this->lblCardNumber->TabIndex = 5;
			this->lblCardNumber->Text = L"Número de tarjeta";
			// 
			// lblMonthYear
			// 
			this->lblMonthYear->AutoSize = true;
			this->lblMonthYear->Location = System::Drawing::Point(332, 230);
			this->lblMonthYear->Name = L"lblMonthYear";
			this->lblMonthYear->Size = System::Drawing::Size(51, 16);
			this->lblMonthYear->TabIndex = 6;
			this->lblMonthYear->Text = L"MM/AA";
			// 
			// lblCVV
			// 
			this->lblCVV->AutoSize = true;
			this->lblCVV->Location = System::Drawing::Point(561, 230);
			this->lblCVV->Name = L"lblCVV";
			this->lblCVV->Size = System::Drawing::Size(34, 16);
			this->lblCVV->TabIndex = 7;
			this->lblCVV->Text = L"CVV";
			// 
			// lblNameProprietor
			// 
			this->lblNameProprietor->AutoSize = true;
			this->lblNameProprietor->Location = System::Drawing::Point(74, 348);
			this->lblNameProprietor->Name = L"lblNameProprietor";
			this->lblNameProprietor->Size = System::Drawing::Size(56, 16);
			this->lblNameProprietor->TabIndex = 8;
			this->lblNameProprietor->Text = L"Nombre";
			// 
			// lblLastNameProprietor
			// 
			this->lblLastNameProprietor->AutoSize = true;
			this->lblLastNameProprietor->Location = System::Drawing::Point(323, 348);
			this->lblLastNameProprietor->Name = L"lblLastNameProprietor";
			this->lblLastNameProprietor->Size = System::Drawing::Size(57, 16);
			this->lblLastNameProprietor->TabIndex = 9;
			this->lblLastNameProprietor->Text = L"Apellido";
			// 
			// btnRecharge
			// 
			this->btnRecharge->Location = System::Drawing::Point(326, 451);
			this->btnRecharge->Name = L"btnRecharge";
			this->btnRecharge->Size = System::Drawing::Size(75, 23);
			this->btnRecharge->TabIndex = 10;
			this->btnRecharge->Text = L"Recargar";
			this->btnRecharge->UseVisualStyleBackColor = true;
			this->btnRecharge->Click += gcnew System::EventHandler(this, &WalletForm::btnRecharge_Click);
			// 
			// txtCardNumberWallet
			// 
			this->txtCardNumberWallet->Location = System::Drawing::Point(67, 268);
			this->txtCardNumberWallet->Name = L"txtCardNumberWallet";
			this->txtCardNumberWallet->Size = System::Drawing::Size(100, 22);
			this->txtCardNumberWallet->TabIndex = 11;
			// 
			// txtMMAAWallet
			// 
			this->txtMMAAWallet->Location = System::Drawing::Point(301, 268);
			this->txtMMAAWallet->Name = L"txtMMAAWallet";
			this->txtMMAAWallet->Size = System::Drawing::Size(100, 22);
			this->txtMMAAWallet->TabIndex = 12;
			// 
			// txtCVVWallet
			// 
			this->txtCVVWallet->Location = System::Drawing::Point(534, 268);
			this->txtCVVWallet->Name = L"txtCVVWallet";
			this->txtCVVWallet->Size = System::Drawing::Size(100, 22);
			this->txtCVVWallet->TabIndex = 13;
			// 
			// txtNameProprietorWallet
			// 
			this->txtNameProprietorWallet->Location = System::Drawing::Point(67, 397);
			this->txtNameProprietorWallet->Name = L"txtNameProprietorWallet";
			this->txtNameProprietorWallet->Size = System::Drawing::Size(100, 22);
			this->txtNameProprietorWallet->TabIndex = 14;
			// 
			// txtLastNameProprietorWallet
			// 
			this->txtLastNameProprietorWallet->Location = System::Drawing::Point(301, 397);
			this->txtLastNameProprietorWallet->Name = L"txtLastNameProprietorWallet";
			this->txtLastNameProprietorWallet->Size = System::Drawing::Size(100, 22);
			this->txtLastNameProprietorWallet->TabIndex = 15;
			// 
			// txtAmountToRechange
			// 
			this->txtAmountToRechange->Location = System::Drawing::Point(78, 108);
			this->txtAmountToRechange->Name = L"txtAmountToRechange";
			this->txtAmountToRechange->Size = System::Drawing::Size(100, 22);
			this->txtAmountToRechange->TabIndex = 17;
			// 
			// dgvBalance
			// 
			this->dgvBalance->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBalance->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->BalanceWallet });
			this->dgvBalance->Location = System::Drawing::Point(534, 32);
			this->dgvBalance->Name = L"dgvBalance";
			this->dgvBalance->RowHeadersWidth = 51;
			this->dgvBalance->RowTemplate->Height = 24;
			this->dgvBalance->Size = System::Drawing::Size(161, 70);
			this->dgvBalance->TabIndex = 18;
			// 
			// BalanceWallet
			// 
			this->BalanceWallet->HeaderText = L"SaldoDisponible";
			this->BalanceWallet->MinimumWidth = 6;
			this->BalanceWallet->Name = L"BalanceWallet";
			this->BalanceWallet->Width = 125;
			// 
			// WalletForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(721, 523);
			this->Controls->Add(this->dgvBalance);
			this->Controls->Add(this->txtAmountToRechange);
			this->Controls->Add(this->txtLastNameProprietorWallet);
			this->Controls->Add(this->txtNameProprietorWallet);
			this->Controls->Add(this->txtCVVWallet);
			this->Controls->Add(this->txtMMAAWallet);
			this->Controls->Add(this->txtCardNumberWallet);
			this->Controls->Add(this->btnRecharge);
			this->Controls->Add(this->lblLastNameProprietor);
			this->Controls->Add(this->lblNameProprietor);
			this->Controls->Add(this->lblCVV);
			this->Controls->Add(this->lblMonthYear);
			this->Controls->Add(this->lblCardNumber);
			this->Controls->Add(this->lblOpctionBalance);
			this->Controls->Add(this->lblBalanceUser);
			this->Name = L"WalletForm";
			this->Text = L"Billetera";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBalance))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnRecharge_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		monto = monto + a;
		a = 0;
		*/
	}
};
}
