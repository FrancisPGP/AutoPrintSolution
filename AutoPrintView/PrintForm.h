#pragma once

#include "CardVISAForm.h"
#include "WalletForm.h"
#include <ctime>

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
	using namespace AutoPrintModel;

	using namespace System::Diagnostics;
	using namespace System::Threading;

	//Agregamos variable universal para tener el monto a pagar en otra pestaña
	static double Total_a_apagar;

	/// <summary>
	/// Resumen de PrintForm
	/// </summary>
	public ref class PrintForm : public System::Windows::Forms::Form
	{
	public:
		PrintForm(void)
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
		~PrintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ TPage_impre;

	protected:


	private: System::Windows::Forms::Button^ BT_pagarBILL;











	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ TPage_historial;
	private: System::Windows::Forms::Button^ BT_pagarTARJ;




	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ MontoPago;


	private: System::Windows::Forms::DataGridView^ dgvHistorial_Files;







	private: System::Windows::Forms::ComboBox^ cmbTipoHoja;
	private: System::Windows::Forms::ComboBox^ cmbTamaHoja;

	private: System::Windows::Forms::ComboBox^ cmbLocal;

	private: System::Windows::Forms::ComboBox^ cmbTinta;
	private: System::Windows::Forms::ComboBox^ cmbNUMcopias;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_orderId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gdv_hojatipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_tamano;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_tinta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_copias;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_local;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_precio;
	private: System::Windows::Forms::Button^ BT_SubirPDF;





	private: System::Windows::Forms::WebBrowser^ WB_PDF_imprimir;
	private: System::Windows::Forms::WebBrowser^ WB_PDF_historial;


















































































































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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->TPage_impre = (gcnew System::Windows::Forms::TabPage());
			this->WB_PDF_imprimir = (gcnew System::Windows::Forms::WebBrowser());
			this->BT_SubirPDF = (gcnew System::Windows::Forms::Button());
			this->cmbNUMcopias = (gcnew System::Windows::Forms::ComboBox());
			this->cmbLocal = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTinta = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTamaHoja = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTipoHoja = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->MontoPago = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BT_pagarTARJ = (gcnew System::Windows::Forms::Button());
			this->BT_pagarBILL = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TPage_historial = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->WB_PDF_historial = (gcnew System::Windows::Forms::WebBrowser());
			this->dgvHistorial_Files = (gcnew System::Windows::Forms::DataGridView());
			this->dgv_orderId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gdv_hojatipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_tamano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_tinta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_copias = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_local = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->TPage_impre->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial_Files))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->TPage_impre);
			this->tabControl1->Controls->Add(this->TPage_historial);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(932, 543);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::tabControl1_MouseMove);
			// 
			// TPage_impre
			// 
			this->TPage_impre->Controls->Add(this->WB_PDF_imprimir);
			this->TPage_impre->Controls->Add(this->BT_SubirPDF);
			this->TPage_impre->Controls->Add(this->cmbNUMcopias);
			this->TPage_impre->Controls->Add(this->cmbLocal);
			this->TPage_impre->Controls->Add(this->cmbTinta);
			this->TPage_impre->Controls->Add(this->cmbTamaHoja);
			this->TPage_impre->Controls->Add(this->cmbTipoHoja);
			this->TPage_impre->Controls->Add(this->label10);
			this->TPage_impre->Controls->Add(this->MontoPago);
			this->TPage_impre->Controls->Add(this->label8);
			this->TPage_impre->Controls->Add(this->label7);
			this->TPage_impre->Controls->Add(this->BT_pagarTARJ);
			this->TPage_impre->Controls->Add(this->BT_pagarBILL);
			this->TPage_impre->Controls->Add(this->label5);
			this->TPage_impre->Controls->Add(this->label4);
			this->TPage_impre->Controls->Add(this->label3);
			this->TPage_impre->Controls->Add(this->label2);
			this->TPage_impre->Controls->Add(this->label1);
			this->TPage_impre->Location = System::Drawing::Point(4, 25);
			this->TPage_impre->Name = L"TPage_impre";
			this->TPage_impre->Padding = System::Windows::Forms::Padding(3);
			this->TPage_impre->Size = System::Drawing::Size(924, 514);
			this->TPage_impre->TabIndex = 0;
			this->TPage_impre->Text = L"Imprimir";
			this->TPage_impre->UseVisualStyleBackColor = true;
			this->TPage_impre->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			// 
			// WB_PDF_imprimir
			// 
			this->WB_PDF_imprimir->Dock = System::Windows::Forms::DockStyle::Right;
			this->WB_PDF_imprimir->Location = System::Drawing::Point(497, 3);
			this->WB_PDF_imprimir->MinimumSize = System::Drawing::Size(20, 20);
			this->WB_PDF_imprimir->Name = L"WB_PDF_imprimir";
			this->WB_PDF_imprimir->ScrollBarsEnabled = false;
			this->WB_PDF_imprimir->Size = System::Drawing::Size(424, 508);
			this->WB_PDF_imprimir->TabIndex = 41;
			// 
			// BT_SubirPDF
			// 
			this->BT_SubirPDF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_SubirPDF->Location = System::Drawing::Point(17, 15);
			this->BT_SubirPDF->Name = L"BT_SubirPDF";
			this->BT_SubirPDF->Size = System::Drawing::Size(234, 44);
			this->BT_SubirPDF->TabIndex = 38;
			this->BT_SubirPDF->Text = L"Suba aquí su PDF";
			this->BT_SubirPDF->UseVisualStyleBackColor = true;
			this->BT_SubirPDF->Click += gcnew System::EventHandler(this, &PrintForm::BT_SubirPDF_Click);
			// 
			// cmbNUMcopias
			// 
			this->cmbNUMcopias->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbNUMcopias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbNUMcopias->FormattingEnabled = true;
			this->cmbNUMcopias->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->cmbNUMcopias->Location = System::Drawing::Point(246, 234);
			this->cmbNUMcopias->Name = L"cmbNUMcopias";
			this->cmbNUMcopias->Size = System::Drawing::Size(163, 33);
			this->cmbNUMcopias->TabIndex = 37;
			// 
			// cmbLocal
			// 
			this->cmbLocal->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbLocal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbLocal->FormattingEnabled = true;
			this->cmbLocal->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ciencias Sociales", L"E.E.G.G.L.L." });
			this->cmbLocal->Location = System::Drawing::Point(17, 344);
			this->cmbLocal->Name = L"cmbLocal";
			this->cmbLocal->Size = System::Drawing::Size(163, 33);
			this->cmbLocal->TabIndex = 36;
			// 
			// cmbTinta
			// 
			this->cmbTinta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbTinta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbTinta->FormattingEnabled = true;
			this->cmbTinta->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Color", L"Blanco y negro" });
			this->cmbTinta->Location = System::Drawing::Point(17, 234);
			this->cmbTinta->Name = L"cmbTinta";
			this->cmbTinta->Size = System::Drawing::Size(163, 33);
			this->cmbTinta->TabIndex = 35;
			// 
			// cmbTamaHoja
			// 
			this->cmbTamaHoja->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbTamaHoja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbTamaHoja->FormattingEnabled = true;
			this->cmbTamaHoja->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"A4", L"A3", L"A2", L"Carta" });
			this->cmbTamaHoja->Location = System::Drawing::Point(246, 124);
			this->cmbTamaHoja->Name = L"cmbTamaHoja";
			this->cmbTamaHoja->Size = System::Drawing::Size(163, 33);
			this->cmbTamaHoja->TabIndex = 34;
			// 
			// cmbTipoHoja
			// 
			this->cmbTipoHoja->BackColor = System::Drawing::Color::White;
			this->cmbTipoHoja->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbTipoHoja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbTipoHoja->FormattingEnabled = true;
			this->cmbTipoHoja->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Hoja Bond", L"Papel Fotográfico" });
			this->cmbTipoHoja->Location = System::Drawing::Point(17, 124);
			this->cmbTipoHoja->Name = L"cmbTipoHoja";
			this->cmbTipoHoja->Size = System::Drawing::Size(163, 33);
			this->cmbTipoHoja->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(246, 347);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 25);
			this->label10->TabIndex = 32;
			this->label10->Text = L"S/";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			// 
			// MontoPago
			// 
			this->MontoPago->AutoSize = true;
			this->MontoPago->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MontoPago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MontoPago->Location = System::Drawing::Point(284, 347);
			this->MontoPago->Name = L"MontoPago";
			this->MontoPago->Size = System::Drawing::Size(58, 27);
			this->MontoPago->TabIndex = 31;
			this->MontoPago->Text = L"Total";
			this->MontoPago->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MontoPago->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(262, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(168, 36);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Color:   S/0.50\r\nBlanco y Negro:   S/0.30";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(241, 299);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 29);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Monto a Pagar:";
			this->label7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			// 
			// BT_pagarTARJ
			// 
			this->BT_pagarTARJ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_pagarTARJ->Location = System::Drawing::Point(37, 422);
			this->BT_pagarTARJ->Name = L"BT_pagarTARJ";
			this->BT_pagarTARJ->Size = System::Drawing::Size(154, 74);
			this->BT_pagarTARJ->TabIndex = 27;
			this->BT_pagarTARJ->Text = L"Pagar con Tarjeta";
			this->BT_pagarTARJ->UseVisualStyleBackColor = true;
			this->BT_pagarTARJ->Click += gcnew System::EventHandler(this, &PrintForm::BT_pagarTARJ_Click);
			// 
			// BT_pagarBILL
			// 
			this->BT_pagarBILL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_pagarBILL->Location = System::Drawing::Point(246, 422);
			this->BT_pagarBILL->Name = L"BT_pagarBILL";
			this->BT_pagarBILL->Size = System::Drawing::Size(154, 74);
			this->BT_pagarBILL->TabIndex = 26;
			this->BT_pagarBILL->Text = L"Pagar con Billetera";
			this->BT_pagarBILL->UseVisualStyleBackColor = true;
			this->BT_pagarBILL->Click += gcnew System::EventHandler(this, &PrintForm::BT_pagarBILL_Click);
			this->BT_pagarBILL->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(201, 29);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Local de recojo:";
			this->label5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(241, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 29);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Número de copias:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(241, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Tamaño de hoja:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 29);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Tinta:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 29);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Tipo de hoja:";
			// 
			// TPage_historial
			// 
			this->TPage_historial->Location = System::Drawing::Point(4, 25);
			this->TPage_historial->Name = L"TPage_historial";
			this->TPage_historial->Padding = System::Windows::Forms::Padding(3);
			this->TPage_historial->Size = System::Drawing::Size(924, 514);
			this->TPage_historial->TabIndex = 1;
			this->TPage_historial->Text = L"Cola";
			this->TPage_historial->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->WB_PDF_historial);
			this->tabPage1->Controls->Add(this->dgvHistorial_Files);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(924, 514);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Historial";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// WB_PDF_historial
			// 
			this->WB_PDF_historial->AllowNavigation = false;
			this->WB_PDF_historial->Dock = System::Windows::Forms::DockStyle::Right;
			this->WB_PDF_historial->Location = System::Drawing::Point(543, 3);
			this->WB_PDF_historial->MinimumSize = System::Drawing::Size(20, 20);
			this->WB_PDF_historial->Name = L"WB_PDF_historial";
			this->WB_PDF_historial->ScrollBarsEnabled = false;
			this->WB_PDF_historial->Size = System::Drawing::Size(378, 508);
			this->WB_PDF_historial->TabIndex = 42;
			// 
			// dgvHistorial_Files
			// 
			this->dgvHistorial_Files->AllowUserToAddRows = false;
			this->dgvHistorial_Files->AllowUserToResizeRows = false;
			this->dgvHistorial_Files->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvHistorial_Files->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHistorial_Files->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dgv_orderId,
					this->gdv_hojatipo, this->dgv_tamano, this->dgv_tinta, this->dgv_copias, this->dgv_local, this->dgv_precio
			});
			this->dgvHistorial_Files->Location = System::Drawing::Point(6, 6);
			this->dgvHistorial_Files->Name = L"dgvHistorial_Files";
			this->dgvHistorial_Files->ReadOnly = true;
			this->dgvHistorial_Files->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dgvHistorial_Files->RowHeadersVisible = false;
			this->dgvHistorial_Files->RowHeadersWidth = 51;
			this->dgvHistorial_Files->RowTemplate->Height = 24;
			this->dgvHistorial_Files->Size = System::Drawing::Size(481, 330);
			this->dgvHistorial_Files->TabIndex = 2;
			this->dgvHistorial_Files->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PrintForm::dgvHistorial_Files_CellClick);
			// 
			// dgv_orderId
			// 
			this->dgv_orderId->FillWeight = 59.57447F;
			this->dgv_orderId->HeaderText = L"Código";
			this->dgv_orderId->MinimumWidth = 8;
			this->dgv_orderId->Name = L"dgv_orderId";
			this->dgv_orderId->ReadOnly = true;
			this->dgv_orderId->Width = 50;
			// 
			// gdv_hojatipo
			// 
			this->gdv_hojatipo->FillWeight = 87.38197F;
			this->gdv_hojatipo->HeaderText = L"Tipo de Hoja";
			this->gdv_hojatipo->MinimumWidth = 8;
			this->gdv_hojatipo->Name = L"gdv_hojatipo";
			this->gdv_hojatipo->ReadOnly = true;
			this->gdv_hojatipo->Width = 70;
			// 
			// dgv_tamano
			// 
			this->dgv_tamano->FillWeight = 130.1627F;
			this->dgv_tamano->HeaderText = L"Tamaño";
			this->dgv_tamano->MinimumWidth = 8;
			this->dgv_tamano->Name = L"dgv_tamano";
			this->dgv_tamano->ReadOnly = true;
			this->dgv_tamano->Width = 65;
			// 
			// dgv_tinta
			// 
			this->dgv_tinta->FillWeight = 122.8809F;
			this->dgv_tinta->HeaderText = L"Tinta";
			this->dgv_tinta->MinimumWidth = 8;
			this->dgv_tinta->Name = L"dgv_tinta";
			this->dgv_tinta->ReadOnly = true;
			this->dgv_tinta->Width = 65;
			// 
			// dgv_copias
			// 
			this->dgv_copias->HeaderText = L"Número de Copias";
			this->dgv_copias->MinimumWidth = 8;
			this->dgv_copias->Name = L"dgv_copias";
			this->dgv_copias->ReadOnly = true;
			this->dgv_copias->Width = 60;
			// 
			// dgv_local
			// 
			this->dgv_local->HeaderText = L"Local de recojo";
			this->dgv_local->MinimumWidth = 8;
			this->dgv_local->Name = L"dgv_local";
			this->dgv_local->ReadOnly = true;
			this->dgv_local->Width = 125;
			// 
			// dgv_precio
			// 
			this->dgv_precio->HeaderText = L"Precio (S/)";
			this->dgv_precio->MinimumWidth = 8;
			this->dgv_precio->Name = L"dgv_precio";
			this->dgv_precio->ReadOnly = true;
			this->dgv_precio->Width = 50;
			// 
			// PrintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 543);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"PrintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Documentos";
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			this->tabControl1->ResumeLayout(false);
			this->TPage_impre->ResumeLayout(false);
			this->TPage_impre->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial_Files))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		double monto = 0;
		double numpage = 1;

	private: System::Void BT_pagarTARJ_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NotEmpty()) {
			UpOrder();
			ShowOrderFiles();
			//if(el usuario paga)
			CardVISAForm^ cardVISAForm = gcnew CardVISAForm();
			cardVISAForm->ControlBox = true;
			cardVISAForm->ShowDialog();
			//RefreshPage();
			PrintPDF();
			Close();
		}

	}
	private: System::Void BT_pagarBILL_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NotEmpty()) {
			double monto = Convert::ToDouble(MontoPago->Text);
			int dni_wallet = Dni_Ahora;
			Customer^ user_wallet = AutoPrintController::Controller::QueryCustomerByDNI(dni_wallet);
			if (user_wallet->Money_in_wallet >= monto) {
				UpOrder();
				ShowOrderFiles();
				user_wallet->Money_in_wallet = user_wallet->Money_in_wallet - monto;
				Controller::UpdateCostumer(user_wallet);
				MessageBox::Show("Operación exitosa. El documento se encuentra en cola.");
				//RefreshPage();
				PrintPDF();
				Close();
			}
			else {
				MessageBox::Show("Saldo insuficiente. Se le redirigirá a la pestaña de recarga.");
				WalletForm^ walletForm = gcnew WalletForm();
				walletForm->Show();
			}
		}
	}

		   bool NotEmpty() {
			   //WB_PDF_imprimir->DocumentStream == nullptr || WB_PDF_imprimir->Url == nullptr
			   if (WB_PDF_imprimir->Url == nullptr) {
				   MessageBox::Show("Suba su PDF");
				   return false;
			   }
			   if ((cmbTipoHoja->Text == "") || (cmbTamaHoja->Text == "") || (cmbTinta->Text == "") || (cmbNUMcopias->Text == "") || (cmbLocal->Text == "")) {
				   MessageBox::Show("Debe llenar todas las casillas");
				   return false;
			   }
			   else {
				   return true;
			   }
		   }
		   void UpOrder() {
			   //valor inicial
			   int ordenId = 1;
			   //QueryFileById
			   List<Order^>^ orderfiles = Controller::QueryAllFiles();
			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   ordenId = 1 + orderfiles->Count;
			   }

			   if (cmbTinta->Text == "Color") {
				   monto = 0.5 * numpage * (Int32::Parse(cmbNUMcopias->Text));
			   }
			   else if (cmbTinta->Text == "Blanco y negro") {
				   monto = 0.3 * numpage * (Int32::Parse(cmbNUMcopias->Text));
			   }

			   //Contenidos de dgvs (No entendí lo que dijo el profe)
			   //AGREGUÉ using namespace AutoPrintModel; para poder usar la clase Order
			   Order^ File_order = gcnew Order();
			   //Atributos de Vehicule: Id,Type,Company,License_Plate
			   //Estos datos son del dgv
			   File_order->order_id = ordenId;
			   File_order->sheet_type = cmbTipoHoja->Text;
			   File_order->sheet_size = cmbTamaHoja->Text;
			   File_order->color_page = cmbTinta->Text;
			   File_order->num_copies = Int32::Parse(cmbNUMcopias->Text);
			   File_order->Location = cmbLocal->Text;
			   File_order->price = monto;
			   time_t now = time(0);
			   tm* time = localtime(&now);
			   int dia = time->tm_wday;
			   if(dia==0){
				   File_order->date = "Domingo";

			   }
			   else  if (dia == 1) {
				   File_order->date = "Lunes";

			   } else if (dia == 2) {
				   File_order->date = "Martes";

			   }else if (dia == 3) {
				   File_order->date = "Miercoles";

			   } else if (dia == 4) {
				   File_order->date = "Jueves";

			   } else if (dia == 5) {
				   File_order->date = "Viernes";

			   }else if (dia == 6) {
				   File_order->date = "Sabado";

			   }



			   /*if (PB_PDF_imprimir != nullptr && PB_PDF_imprimir->Image != nullptr) {
				   System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				   PB_PDF_imprimir->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				   File_order->File = ms->ToArray();
			   }*/
			   // Verificar si hay algún documento en el WebBrowser
			   if (WB_PDF_imprimir->Url != nullptr) {
				   // Obtener la URL del PDF
				   File_order->PDF_URL = WB_PDF_imprimir->Url->ToString();
				   // Obtener la ruta local del archivo PDF
				   String^ pdfPath = WB_PDF_imprimir->Url->LocalPath;

				   // Verificar si el archivo PDF existe antes de intentar guardarlo
				   if (System::IO::File::Exists(pdfPath)) {
					   // Leer el contenido del archivo PDF en un array de bytes y Asignar el array de bytes al atributo PDF
					   File_order->PDF = System::IO::File::ReadAllBytes(pdfPath);
				   }
			   }


			   AutoPrintController::Controller::AddOrder(File_order);
		   }
		   void ShowOrderFiles() {
			   List<Order^>^ orderfiles = Controller::QueryAllFiles();
			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   dgvHistorial_Files->Rows->Clear();
				   for (int i = 0; i < orderfiles->Count; i++) {
					   Order^ File_order = orderfiles[i];
					   //dgvHistorial_Files es el nombre de la tabla de historial
					   dgvHistorial_Files->Rows->Add(gcnew array<String^>{
						   "" + File_order->order_id,
							   File_order->sheet_type,
							   File_order->sheet_size,
							   File_order->color_page,
							   "" + File_order->num_copies,
							   File_order->Location,
							   "" + File_order->price
					   });
				   }
			   }
		   }
		   Void ShowPrice() {
			   monto = 0;
			   if (cmbNUMcopias->Text != "") {
				   if (cmbTinta->Text == "Color") {
					   monto = 0.5 * numpage * (Int32::Parse(cmbNUMcopias->Text));
				   }
				   else if (cmbTinta->Text == "Blanco y negro") {
					   monto = 0.3 * numpage * (Int32::Parse(cmbNUMcopias->Text));
				   }
				   MontoPago->Text = (monto).ToString();
			   }
			   else if (cmbTinta->Text != "") {
				   MontoPago->Text = (monto).ToString();
			   }
		   }
		   Void PrintPDF() {
			   try {
				   // Verifica si la propiedad Url no es nula
				   if (WB_PDF_imprimir->Url != nullptr) {
					   // Obtiene la ruta del archivo desde la propiedad AbsolutePath de la Url
					   String^ pdfFilePath = WB_PDF_imprimir->Url->AbsolutePath;

					   /*// Abre la ventana de "Dispositivos e impresoras"
					   Process::Start("control", "/name Microsoft.DevicesAndPrinters");
					   // Espera un momento para que la ventana se abra completamente (ajusta según sea necesario)
					   System::Threading::Thread::Sleep(2000);
					   // Imprime el archivo PDF utilizando el visor de PDF predeterminado en Windows
					   Process::Start("print", pdfFilePath);*/

					   PrintDialog^ dialog = gcnew PrintDialog();
					   dialog->ShowDialog();

					   ProcessStartInfo^ printProcessInfo = gcnew ProcessStartInfo();
					   printProcessInfo->Verb = "print";
					   printProcessInfo->CreateNoWindow = true;
					   printProcessInfo->FileName = pdfFilePath;
					   printProcessInfo->WindowStyle = ProcessWindowStyle::Hidden;

					   Process^ printProcess = gcnew Process();
					   printProcess->StartInfo = printProcessInfo;
					   printProcess->Start();
					   printProcess->WaitForInputIdle();
					   Thread::Sleep(3000);

					   if (!printProcess->CloseMainWindow()) {
						   printProcess->Kill();
					   }
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("La utilidad no está disponible en su sistema operativo");
			   }
		   }
		   /*void RefreshPage() {
			   // Limpiar valores de ComboBox
			   cmbTipoHoja->SelectedIndex = -1;
			   cmbTamaHoja->SelectedIndex = -1;
			   cmbTinta->SelectedIndex = -1;
			   cmbNUMcopias->SelectedIndex = -1;
			   cmbLocal->SelectedIndex = -1;
			   MontoPago->Text = "0";

			   // Limpiar el WebBrowser
			   WB_PDF_imprimir->();
		   }*/

	private: System::Void dgvHistorial_Files_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvHistorial_Files->SelectedCells->Count > 0 &&
			dgvHistorial_Files->Rows[dgvHistorial_Files->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr &&
			!String::IsNullOrEmpty(dgvHistorial_Files->Rows[dgvHistorial_Files->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString())) {

			// Solo ejecutar si hay una celda seleccionada y el valor no es nulo o vacío
			int orderId = Int32::Parse(dgvHistorial_Files->Rows[dgvHistorial_Files->SelectedCells[0]->RowIndex]
				->Cells[0]->Value->ToString());

			Order^ File_order = Controller::QueryFileById(orderId);

			if (File_order->PDF_URL != nullptr) {
				WB_PDF_historial->Navigate(File_order->PDF_URL);
				//MessageBox::Show(File_order->PDF_URL);
			}
			else {
				WB_PDF_historial->Navigate("");
				WB_PDF_historial->Invalidate();
			}
		}
		else {
			//Si el valor es nulo/vacío
			MessageBox::Show("Seleccione una fila con un código existente");
		}
	}

	private: System::Void TPage_impre_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Actualiza el monto
		ShowPrice();
	}
	private: System::Void tabControl1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		ShowOrderFiles();
	}
	/*private: System::Void PB_PDF_imprimir_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Precargado
		OpenFileDialog^ opfd = gcnew OpenFileDialog();
		opfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PB_PDF_imprimir->Image = gcnew Bitmap(opfd->FileName);
		}
	}*/
	private: System::Void BT_SubirPDF_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialogoPDF = gcnew OpenFileDialog();
		dialogoPDF->Filter = "Archivos PDF|*.pdf";
		if (dialogoPDF->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Configurar la ruta del archivo PDF en el control WebBrowser
			WB_PDF_imprimir->Navigate(dialogoPDF->FileName);
		}
	}
		   int GetNumberOfPages(String^ pdfFilePath) {
			   try {
				   // Use pdftk to get the number of pages in the PDF
				   Process^ pdftkProcess = gcnew Process();
				   pdftkProcess->StartInfo->FileName = "pdftk"; // Assuming pdftk is in the system PATH
				   pdftkProcess->StartInfo->Arguments = "\"" + pdfFilePath + "\" dump_data | grep NumberOfPages";
				   pdftkProcess->StartInfo->RedirectStandardOutput = true;
				   pdftkProcess->StartInfo->UseShellExecute = false;
				   pdftkProcess->StartInfo->CreateNoWindow = true;

				   pdftkProcess->Start();
				   String^ output = pdftkProcess->StandardOutput->ReadToEnd();
				   pdftkProcess->WaitForExit();

				   // Extract the number of pages from the output
				   int numberOfPages = 0;
				   if (output->Contains("NumberOfPages")) {
					   int index = output->IndexOf("NumberOfPages") + 15;
					   String^ pagesSubstring = output->Substring(index, output->IndexOf("\n", index) - index);
					   numberOfPages = System::Convert::ToInt32(pagesSubstring);
				   }

				   return numberOfPages;
			   }
			   catch (Exception^ ex) {
				   // Handle exceptions as needed
				   MessageBox::Show("Error al obtener el número de páginas del PDF: " + ex->Message);
				   return -1; // Devolver -1 para indicar un error
			   }
		   }
};
}