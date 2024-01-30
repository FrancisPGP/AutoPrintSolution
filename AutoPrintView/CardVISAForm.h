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
	/// Resumen de CardVISAForm
	/// </summary>
	public ref class CardVISAForm : public System::Windows::Forms::Form
	{
	public:
		CardVISAForm(void)
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
	private: System::Windows::Forms::TextBox^ txtCardCVVvisa;



	private: System::Windows::Forms::TextBox^ txtCardExpirationVisa;

	private: System::Windows::Forms::TextBox^ txtCardNumberVisa;

	private: System::Windows::Forms::Label^ lblPropietor;
	private: System::Windows::Forms::Label^ lblCVV;
	private: System::Windows::Forms::Label^ lblMonthYear;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPrintCardVisa;



















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
			this->dgvCardVisa = (gcnew System::Windows::Forms::DataGridView());
			this->Card_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_Titular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Card_NumCard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtCardOwnerVisa = (gcnew System::Windows::Forms::TextBox());
			this->txtCardCVVvisa = (gcnew System::Windows::Forms::TextBox());
			this->txtCardExpirationVisa = (gcnew System::Windows::Forms::TextBox());
			this->txtCardNumberVisa = (gcnew System::Windows::Forms::TextBox());
			this->lblPropietor = (gcnew System::Windows::Forms::Label());
			this->lblCVV = (gcnew System::Windows::Forms::Label());
			this->lblMonthYear = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPrintCardVisa = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCardVisa))->BeginInit();
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
			this->Card_NumCard->HeaderText = L"N�mero de tarjeta";
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
			// 
			// txtCardExpirationVisa
			// 
			this->txtCardExpirationVisa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCardExpirationVisa->Location = System::Drawing::Point(17, 128);
			this->txtCardExpirationVisa->MaxLength = 5;
			this->txtCardExpirationVisa->Name = L"txtCardExpirationVisa";
			this->txtCardExpirationVisa->Size = System::Drawing::Size(69, 28);
			this->txtCardExpirationVisa->TabIndex = 50;
			this->txtCardExpirationVisa->Text = L"MM/AA";
			this->txtCardExpirationVisa->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->label1->Text = L"N�mero de tarjeta";
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
			// 
			// CardVISAForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(668, 397);
			this->Controls->Add(this->dgvCardVisa);
			this->Controls->Add(this->txtCardOwnerVisa);
			this->Controls->Add(this->txtCardCVVvisa);
			this->Controls->Add(this->txtCardExpirationVisa);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCardVisa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPrintCardVisa_Click(System::Object^ sender, System::EventArgs^ e) {
		Card^ newCardVisa = gcnew Card(); //instanciamos la nueva tarjeta a emplear

		newCardVisa->account_number = txtCardNumberVisa->Text;
		newCardVisa->cvv = txtCardCVVvisa->Text;
		newCardVisa->dueDate = txtCardExpirationVisa->Text;

		Close();
	}
};
}
