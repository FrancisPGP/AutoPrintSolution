#pragma once

#include <iostream>
#include "LoginForm.h"
#include <fstream>
#include <sstream>
#include <string>
#include <msclr/marshal_cppstd.h>

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

	using namespace System::Diagnostics;
	using namespace System::Threading;

	using namespace System::Web;
	using namespace System::Net::Mail;

	//Agregamos variable universal para tener el monto a pagar en otra pesta�a
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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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







	private: System::Windows::Forms::Button^ BT_SubirPDF;





	private: System::Windows::Forms::WebBrowser^ WB_PDF_imprimir;
	private: System::Windows::Forms::WebBrowser^ WB_PDF_historial;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ LB_Time1;

	private: System::Windows::Forms::Label^ LB_NameDoc1;
	private: System::Windows::Forms::Label^ LB_Pos1;
	private: System::Windows::Forms::Label^ LB_Pos2;
	private: System::Windows::Forms::Label^ LB_Pos3;




	private: System::Windows::Forms::Label^ LB_Time2;




private: System::Windows::Forms::Label^ LB_NameDoc2;
private: System::Windows::Forms::Label^ LB_NameDoc8;


private: System::Windows::Forms::Label^ LB_NameDoc7;

private: System::Windows::Forms::Label^ LB_NameDoc6;

private: System::Windows::Forms::Label^ LB_NameDoc5;
private: System::Windows::Forms::Label^ LB_Time4;


private: System::Windows::Forms::Label^ LB_Time3;
private: System::Windows::Forms::Label^ LB_Pos6;


private: System::Windows::Forms::Label^ LB_Pos5;


private: System::Windows::Forms::Label^ LB_Pos4;


private: System::Windows::Forms::Label^ LB_NameDoc4;


private: System::Windows::Forms::Label^ LB_NameDoc3;
private: System::Windows::Forms::Label^ LB_Time10;


private: System::Windows::Forms::Label^ LB_Time9;

private: System::Windows::Forms::Label^ LB_Time8;

private: System::Windows::Forms::Label^ LB_Time7;

private: System::Windows::Forms::Label^ LB_Time6;

private: System::Windows::Forms::Label^ LB_Time5;
private: System::Windows::Forms::Label^ LB_Pos8;


private: System::Windows::Forms::Label^ LB_Pos7;



private: System::Windows::Forms::Label^ LB_NameDoc10;


private: System::Windows::Forms::Label^ LB_NameDoc9;
private: System::Windows::Forms::Label^ LB_Pos10;


private: System::Windows::Forms::Label^ LB_Pos9;
private: System::Windows::Forms::PictureBox^ pictureBox1;










private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ LB_NumPage;
private: System::Windows::Forms::Button^ BT_DeletePDFs;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_orderId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ gdv_namedoc;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_local;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_precio;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ gdv_status;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_tinta;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_copias;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ gdv_hojatipo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_tamano;










































	private: System::ComponentModel::IContainer^ components;


















































































































	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PrintForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->TPage_impre = (gcnew System::Windows::Forms::TabPage());
			this->LB_NumPage = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->LB_NameDoc10 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc9 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos10 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos9 = (gcnew System::Windows::Forms::Label());
			this->LB_Time10 = (gcnew System::Windows::Forms::Label());
			this->LB_Time9 = (gcnew System::Windows::Forms::Label());
			this->LB_Time8 = (gcnew System::Windows::Forms::Label());
			this->LB_Time7 = (gcnew System::Windows::Forms::Label());
			this->LB_Time6 = (gcnew System::Windows::Forms::Label());
			this->LB_Time5 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos8 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos7 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc8 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc7 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc6 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc5 = (gcnew System::Windows::Forms::Label());
			this->LB_Time4 = (gcnew System::Windows::Forms::Label());
			this->LB_Time3 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos6 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos5 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos4 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc4 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc3 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos3 = (gcnew System::Windows::Forms::Label());
			this->LB_Time2 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc2 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos2 = (gcnew System::Windows::Forms::Label());
			this->LB_Time1 = (gcnew System::Windows::Forms::Label());
			this->LB_NameDoc1 = (gcnew System::Windows::Forms::Label());
			this->LB_Pos1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->BT_DeletePDFs = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->WB_PDF_historial = (gcnew System::Windows::Forms::WebBrowser());
			this->dgvHistorial_Files = (gcnew System::Windows::Forms::DataGridView());
			this->dgv_orderId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gdv_namedoc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_local = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gdv_status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_tinta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_copias = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gdv_hojatipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_tamano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->TPage_impre->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->TPage_historial->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->TPage_impre->Controls->Add(this->LB_NumPage);
			this->TPage_impre->Controls->Add(this->pictureBox1);
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
			// LB_NumPage
			// 
			this->LB_NumPage->AutoSize = true;
			this->LB_NumPage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NumPage->Location = System::Drawing::Point(246, 383);
			this->LB_NumPage->Name = L"LB_NumPage";
			this->LB_NumPage->Size = System::Drawing::Size(0, 25);
			this->LB_NumPage->TabIndex = 43;
			this->LB_NumPage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LB_NumPage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(493, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(431, 108);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
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
			this->BT_SubirPDF->Text = L"Suba aqu� su PDF";
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
			this->cmbTipoHoja->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Hoja Bond", L"Papel Fotogr�fico" });
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
			this->label4->Text = L"N�mero de copias:";
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
			this->label3->Text = L"Tama�o de hoja:";
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
			this->TPage_historial->Controls->Add(this->LB_NameDoc10);
			this->TPage_historial->Controls->Add(this->LB_NameDoc9);
			this->TPage_historial->Controls->Add(this->LB_Pos10);
			this->TPage_historial->Controls->Add(this->LB_Pos9);
			this->TPage_historial->Controls->Add(this->LB_Time10);
			this->TPage_historial->Controls->Add(this->LB_Time9);
			this->TPage_historial->Controls->Add(this->LB_Time8);
			this->TPage_historial->Controls->Add(this->LB_Time7);
			this->TPage_historial->Controls->Add(this->LB_Time6);
			this->TPage_historial->Controls->Add(this->LB_Time5);
			this->TPage_historial->Controls->Add(this->LB_Pos8);
			this->TPage_historial->Controls->Add(this->LB_Pos7);
			this->TPage_historial->Controls->Add(this->LB_NameDoc8);
			this->TPage_historial->Controls->Add(this->LB_NameDoc7);
			this->TPage_historial->Controls->Add(this->LB_NameDoc6);
			this->TPage_historial->Controls->Add(this->LB_NameDoc5);
			this->TPage_historial->Controls->Add(this->LB_Time4);
			this->TPage_historial->Controls->Add(this->LB_Time3);
			this->TPage_historial->Controls->Add(this->LB_Pos6);
			this->TPage_historial->Controls->Add(this->LB_Pos5);
			this->TPage_historial->Controls->Add(this->LB_Pos4);
			this->TPage_historial->Controls->Add(this->LB_NameDoc4);
			this->TPage_historial->Controls->Add(this->LB_NameDoc3);
			this->TPage_historial->Controls->Add(this->LB_Pos3);
			this->TPage_historial->Controls->Add(this->LB_Time2);
			this->TPage_historial->Controls->Add(this->LB_NameDoc2);
			this->TPage_historial->Controls->Add(this->LB_Pos2);
			this->TPage_historial->Controls->Add(this->LB_Time1);
			this->TPage_historial->Controls->Add(this->LB_NameDoc1);
			this->TPage_historial->Controls->Add(this->LB_Pos1);
			this->TPage_historial->Controls->Add(this->label11);
			this->TPage_historial->Controls->Add(this->label9);
			this->TPage_historial->Controls->Add(this->label6);
			this->TPage_historial->Location = System::Drawing::Point(4, 25);
			this->TPage_historial->Name = L"TPage_historial";
			this->TPage_historial->Padding = System::Windows::Forms::Padding(3);
			this->TPage_historial->Size = System::Drawing::Size(924, 514);
			this->TPage_historial->TabIndex = 1;
			this->TPage_historial->Text = L"Cola";
			this->TPage_historial->UseVisualStyleBackColor = true;
			// 
			// LB_NameDoc10
			// 
			this->LB_NameDoc10->AutoSize = true;
			this->LB_NameDoc10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc10->Location = System::Drawing::Point(182, 439);
			this->LB_NameDoc10->Name = L"LB_NameDoc10";
			this->LB_NameDoc10->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc10->TabIndex = 51;
			this->LB_NameDoc10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc9
			// 
			this->LB_NameDoc9->AutoSize = true;
			this->LB_NameDoc9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc9->Location = System::Drawing::Point(182, 399);
			this->LB_NameDoc9->Name = L"LB_NameDoc9";
			this->LB_NameDoc9->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc9->TabIndex = 50;
			this->LB_NameDoc9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos10
			// 
			this->LB_Pos10->AutoSize = true;
			this->LB_Pos10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos10->Location = System::Drawing::Point(31, 439);
			this->LB_Pos10->Name = L"LB_Pos10";
			this->LB_Pos10->Size = System::Drawing::Size(0, 29);
			this->LB_Pos10->TabIndex = 49;
			this->LB_Pos10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos9
			// 
			this->LB_Pos9->AutoSize = true;
			this->LB_Pos9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos9->Location = System::Drawing::Point(31, 399);
			this->LB_Pos9->Name = L"LB_Pos9";
			this->LB_Pos9->Size = System::Drawing::Size(0, 29);
			this->LB_Pos9->TabIndex = 48;
			this->LB_Pos9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time10
			// 
			this->LB_Time10->AutoSize = true;
			this->LB_Time10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time10->Location = System::Drawing::Point(636, 439);
			this->LB_Time10->Name = L"LB_Time10";
			this->LB_Time10->Size = System::Drawing::Size(0, 29);
			this->LB_Time10->TabIndex = 47;
			this->LB_Time10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time9
			// 
			this->LB_Time9->AutoSize = true;
			this->LB_Time9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time9->Location = System::Drawing::Point(636, 399);
			this->LB_Time9->Name = L"LB_Time9";
			this->LB_Time9->Size = System::Drawing::Size(0, 29);
			this->LB_Time9->TabIndex = 46;
			this->LB_Time9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time8
			// 
			this->LB_Time8->AutoSize = true;
			this->LB_Time8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time8->Location = System::Drawing::Point(636, 359);
			this->LB_Time8->Name = L"LB_Time8";
			this->LB_Time8->Size = System::Drawing::Size(0, 29);
			this->LB_Time8->TabIndex = 45;
			this->LB_Time8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time7
			// 
			this->LB_Time7->AutoSize = true;
			this->LB_Time7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time7->Location = System::Drawing::Point(636, 319);
			this->LB_Time7->Name = L"LB_Time7";
			this->LB_Time7->Size = System::Drawing::Size(0, 29);
			this->LB_Time7->TabIndex = 44;
			this->LB_Time7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time6
			// 
			this->LB_Time6->AutoSize = true;
			this->LB_Time6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time6->Location = System::Drawing::Point(636, 279);
			this->LB_Time6->Name = L"LB_Time6";
			this->LB_Time6->Size = System::Drawing::Size(0, 29);
			this->LB_Time6->TabIndex = 41;
			this->LB_Time6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time5
			// 
			this->LB_Time5->AutoSize = true;
			this->LB_Time5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time5->Location = System::Drawing::Point(636, 239);
			this->LB_Time5->Name = L"LB_Time5";
			this->LB_Time5->Size = System::Drawing::Size(0, 29);
			this->LB_Time5->TabIndex = 40;
			this->LB_Time5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos8
			// 
			this->LB_Pos8->AutoSize = true;
			this->LB_Pos8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos8->Location = System::Drawing::Point(31, 359);
			this->LB_Pos8->Name = L"LB_Pos8";
			this->LB_Pos8->Size = System::Drawing::Size(0, 29);
			this->LB_Pos8->TabIndex = 39;
			this->LB_Pos8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos7
			// 
			this->LB_Pos7->AutoSize = true;
			this->LB_Pos7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos7->Location = System::Drawing::Point(31, 319);
			this->LB_Pos7->Name = L"LB_Pos7";
			this->LB_Pos7->Size = System::Drawing::Size(0, 29);
			this->LB_Pos7->TabIndex = 38;
			this->LB_Pos7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc8
			// 
			this->LB_NameDoc8->AutoSize = true;
			this->LB_NameDoc8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc8->Location = System::Drawing::Point(182, 359);
			this->LB_NameDoc8->Name = L"LB_NameDoc8";
			this->LB_NameDoc8->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc8->TabIndex = 37;
			this->LB_NameDoc8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc7
			// 
			this->LB_NameDoc7->AutoSize = true;
			this->LB_NameDoc7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc7->Location = System::Drawing::Point(182, 319);
			this->LB_NameDoc7->Name = L"LB_NameDoc7";
			this->LB_NameDoc7->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc7->TabIndex = 36;
			this->LB_NameDoc7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc6
			// 
			this->LB_NameDoc6->AutoSize = true;
			this->LB_NameDoc6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc6->Location = System::Drawing::Point(182, 279);
			this->LB_NameDoc6->Name = L"LB_NameDoc6";
			this->LB_NameDoc6->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc6->TabIndex = 35;
			this->LB_NameDoc6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc5
			// 
			this->LB_NameDoc5->AutoSize = true;
			this->LB_NameDoc5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc5->Location = System::Drawing::Point(182, 239);
			this->LB_NameDoc5->Name = L"LB_NameDoc5";
			this->LB_NameDoc5->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc5->TabIndex = 34;
			this->LB_NameDoc5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time4
			// 
			this->LB_Time4->AutoSize = true;
			this->LB_Time4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time4->Location = System::Drawing::Point(636, 199);
			this->LB_Time4->Name = L"LB_Time4";
			this->LB_Time4->Size = System::Drawing::Size(0, 29);
			this->LB_Time4->TabIndex = 33;
			this->LB_Time4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time3
			// 
			this->LB_Time3->AutoSize = true;
			this->LB_Time3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time3->Location = System::Drawing::Point(636, 159);
			this->LB_Time3->Name = L"LB_Time3";
			this->LB_Time3->Size = System::Drawing::Size(0, 29);
			this->LB_Time3->TabIndex = 32;
			this->LB_Time3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos6
			// 
			this->LB_Pos6->AutoSize = true;
			this->LB_Pos6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos6->Location = System::Drawing::Point(31, 279);
			this->LB_Pos6->Name = L"LB_Pos6";
			this->LB_Pos6->Size = System::Drawing::Size(0, 29);
			this->LB_Pos6->TabIndex = 31;
			this->LB_Pos6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos5
			// 
			this->LB_Pos5->AutoSize = true;
			this->LB_Pos5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos5->Location = System::Drawing::Point(31, 239);
			this->LB_Pos5->Name = L"LB_Pos5";
			this->LB_Pos5->Size = System::Drawing::Size(0, 29);
			this->LB_Pos5->TabIndex = 30;
			this->LB_Pos5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos4
			// 
			this->LB_Pos4->AutoSize = true;
			this->LB_Pos4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos4->Location = System::Drawing::Point(31, 199);
			this->LB_Pos4->Name = L"LB_Pos4";
			this->LB_Pos4->Size = System::Drawing::Size(0, 29);
			this->LB_Pos4->TabIndex = 29;
			this->LB_Pos4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc4
			// 
			this->LB_NameDoc4->AutoSize = true;
			this->LB_NameDoc4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc4->Location = System::Drawing::Point(182, 199);
			this->LB_NameDoc4->Name = L"LB_NameDoc4";
			this->LB_NameDoc4->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc4->TabIndex = 28;
			this->LB_NameDoc4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc3
			// 
			this->LB_NameDoc3->AutoSize = true;
			this->LB_NameDoc3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc3->Location = System::Drawing::Point(182, 159);
			this->LB_NameDoc3->Name = L"LB_NameDoc3";
			this->LB_NameDoc3->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc3->TabIndex = 27;
			this->LB_NameDoc3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos3
			// 
			this->LB_Pos3->AutoSize = true;
			this->LB_Pos3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos3->Location = System::Drawing::Point(31, 159);
			this->LB_Pos3->Name = L"LB_Pos3";
			this->LB_Pos3->Size = System::Drawing::Size(0, 29);
			this->LB_Pos3->TabIndex = 26;
			this->LB_Pos3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time2
			// 
			this->LB_Time2->AutoSize = true;
			this->LB_Time2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time2->Location = System::Drawing::Point(636, 119);
			this->LB_Time2->Name = L"LB_Time2";
			this->LB_Time2->Size = System::Drawing::Size(0, 29);
			this->LB_Time2->TabIndex = 25;
			this->LB_Time2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc2
			// 
			this->LB_NameDoc2->AutoSize = true;
			this->LB_NameDoc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc2->Location = System::Drawing::Point(182, 119);
			this->LB_NameDoc2->Name = L"LB_NameDoc2";
			this->LB_NameDoc2->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc2->TabIndex = 24;
			this->LB_NameDoc2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos2
			// 
			this->LB_Pos2->AutoSize = true;
			this->LB_Pos2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos2->Location = System::Drawing::Point(31, 119);
			this->LB_Pos2->Name = L"LB_Pos2";
			this->LB_Pos2->Size = System::Drawing::Size(0, 29);
			this->LB_Pos2->TabIndex = 23;
			this->LB_Pos2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Time1
			// 
			this->LB_Time1->AutoSize = true;
			this->LB_Time1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Time1->Location = System::Drawing::Point(636, 79);
			this->LB_Time1->Name = L"LB_Time1";
			this->LB_Time1->Size = System::Drawing::Size(0, 29);
			this->LB_Time1->TabIndex = 22;
			this->LB_Time1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_NameDoc1
			// 
			this->LB_NameDoc1->AutoSize = true;
			this->LB_NameDoc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_NameDoc1->Location = System::Drawing::Point(182, 79);
			this->LB_NameDoc1->Name = L"LB_NameDoc1";
			this->LB_NameDoc1->Size = System::Drawing::Size(0, 29);
			this->LB_NameDoc1->TabIndex = 21;
			this->LB_NameDoc1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LB_Pos1
			// 
			this->LB_Pos1->AutoSize = true;
			this->LB_Pos1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Pos1->Location = System::Drawing::Point(31, 79);
			this->LB_Pos1->Name = L"LB_Pos1";
			this->LB_Pos1->Size = System::Drawing::Size(0, 29);
			this->LB_Pos1->TabIndex = 20;
			this->LB_Pos1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(633, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(255, 29);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Tiempo estimado (s)";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(182, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(280, 29);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Nombre de documento";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 29);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Posici�n";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->BT_DeletePDFs);
			this->tabPage1->Controls->Add(this->pictureBox2);
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
			// BT_DeletePDFs
			// 
			this->BT_DeletePDFs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_DeletePDFs->Location = System::Drawing::Point(112, 446);
			this->BT_DeletePDFs->Name = L"BT_DeletePDFs";
			this->BT_DeletePDFs->Size = System::Drawing::Size(234, 44);
			this->BT_DeletePDFs->TabIndex = 44;
			this->BT_DeletePDFs->Text = L"Eliminar historial";
			this->BT_DeletePDFs->UseVisualStyleBackColor = true;
			this->BT_DeletePDFs->Click += gcnew System::EventHandler(this, &PrintForm::BT_DeletePDFs_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(493, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(431, 108);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 43;
			this->pictureBox2->TabStop = false;
			// 
			// WB_PDF_historial
			// 
			this->WB_PDF_historial->Dock = System::Windows::Forms::DockStyle::Right;
			this->WB_PDF_historial->Location = System::Drawing::Point(497, 3);
			this->WB_PDF_historial->MinimumSize = System::Drawing::Size(20, 20);
			this->WB_PDF_historial->Name = L"WB_PDF_historial";
			this->WB_PDF_historial->ScrollBarsEnabled = false;
			this->WB_PDF_historial->Size = System::Drawing::Size(424, 508);
			this->WB_PDF_historial->TabIndex = 42;
			// 
			// dgvHistorial_Files
			// 
			this->dgvHistorial_Files->AllowUserToAddRows = false;
			this->dgvHistorial_Files->AllowUserToResizeRows = false;
			this->dgvHistorial_Files->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvHistorial_Files->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHistorial_Files->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dgv_orderId,
					this->gdv_namedoc, this->dgv_local, this->dgv_precio, this->gdv_status, this->dgv_tinta, this->dgv_copias, this->gdv_hojatipo,
					this->dgv_tamano
			});
			this->dgvHistorial_Files->Location = System::Drawing::Point(0, 0);
			this->dgvHistorial_Files->Name = L"dgvHistorial_Files";
			this->dgvHistorial_Files->ReadOnly = true;
			this->dgvHistorial_Files->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dgvHistorial_Files->RowHeadersVisible = false;
			this->dgvHistorial_Files->RowHeadersWidth = 51;
			this->dgvHistorial_Files->RowTemplate->Height = 24;
			this->dgvHistorial_Files->Size = System::Drawing::Size(481, 426);
			this->dgvHistorial_Files->TabIndex = 2;
			this->dgvHistorial_Files->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PrintForm::dgvHistorial_Files_CellClick);
			// 
			// dgv_orderId
			// 
			this->dgv_orderId->FillWeight = 59.57447F;
			this->dgv_orderId->HeaderText = L"C�digo";
			this->dgv_orderId->MinimumWidth = 8;
			this->dgv_orderId->Name = L"dgv_orderId";
			this->dgv_orderId->ReadOnly = true;
			this->dgv_orderId->Width = 50;
			// 
			// gdv_namedoc
			// 
			this->gdv_namedoc->HeaderText = L"Documento";
			this->gdv_namedoc->MinimumWidth = 8;
			this->gdv_namedoc->Name = L"gdv_namedoc";
			this->gdv_namedoc->ReadOnly = true;
			this->gdv_namedoc->Width = 110;
			// 
			// dgv_local
			// 
			this->dgv_local->HeaderText = L"Local de recojo";
			this->dgv_local->MinimumWidth = 8;
			this->dgv_local->Name = L"dgv_local";
			this->dgv_local->ReadOnly = true;
			this->dgv_local->Width = 120;
			// 
			// dgv_precio
			// 
			this->dgv_precio->HeaderText = L"Precio (S/)";
			this->dgv_precio->MinimumWidth = 8;
			this->dgv_precio->Name = L"dgv_precio";
			this->dgv_precio->ReadOnly = true;
			this->dgv_precio->Width = 50;
			// 
			// gdv_status
			// 
			this->gdv_status->HeaderText = L"Estado";
			this->gdv_status->MinimumWidth = 8;
			this->gdv_status->Name = L"gdv_status";
			this->gdv_status->ReadOnly = true;
			this->gdv_status->Width = 80;
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
			this->dgv_copias->HeaderText = L"N�mero de Copias";
			this->dgv_copias->MinimumWidth = 8;
			this->dgv_copias->Name = L"dgv_copias";
			this->dgv_copias->ReadOnly = true;
			this->dgv_copias->Width = 60;
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
			this->dgv_tamano->HeaderText = L"Tama�o";
			this->dgv_tamano->MinimumWidth = 8;
			this->dgv_tamano->Name = L"dgv_tamano";
			this->dgv_tamano->ReadOnly = true;
			this->dgv_tamano->Width = 65;
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
			this->Load += gcnew System::EventHandler(this, &PrintForm::PrintForm_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PrintForm::TPage_impre_MouseMove);
			this->tabControl1->ResumeLayout(false);
			this->TPage_impre->ResumeLayout(false);
			this->TPage_impre->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->TPage_historial->ResumeLayout(false);
			this->TPage_historial->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial_Files))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		double monto = 0;
		int numpage = 0;
		int position = 1;
		int delete_orderId = 0;
		int tiempo_print = 5;

		int tiempo1 = 0;
		int tiempo2 = 0;
		int tiempo3 = 0;
		int tiempo4 = 0;
		int tiempo5 = 0;
		int tiempo6 = 0;
		int tiempo7 = 0;
		int tiempo8 = 0;
		int tiempo9 = 0;
		int tiempo10 = 0;

	private: System::Void PrintForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_1 = Controller::QueryFileByPosition(1);
		Order^ time_2 = Controller::QueryFileByPosition(2);
		Order^ time_3 = Controller::QueryFileByPosition(3);
		Order^ time_4 = Controller::QueryFileByPosition(4);
		Order^ time_5 = Controller::QueryFileByPosition(5);
		Order^ time_6 = Controller::QueryFileByPosition(6);
		Order^ time_7 = Controller::QueryFileByPosition(7);
		Order^ time_8 = Controller::QueryFileByPosition(8);
		Order^ time_9 = Controller::QueryFileByPosition(9);
		Order^ time_10 = Controller::QueryFileByPosition(10);

		if (time_1 != nullptr) {
			// Configura el intervalo del temporizador en milisegundos (1 segundo)
			Timer1->Interval = 1000 * tiempo_print;
			// Asocia el evento Tick con el manejador timer1_Tick
			Timer1->Tick += gcnew EventHandler(this, &PrintForm::timer1_Tick);
			// Inicia el temporizador
			Timer1->Start();
		}
		if (time_2 != nullptr) {
			Timer2->Interval = 1000 * tiempo_print;
			Timer2->Tick += gcnew EventHandler(this, &PrintForm::timer2_Tick);
			Timer2->Start();
		}
		if (time_3 != nullptr) {
			Timer3->Interval = 1000 * tiempo_print;
			Timer3->Tick += gcnew EventHandler(this, &PrintForm::timer3_Tick);
			Timer3->Start();
		}
		if (time_4 != nullptr) {
			Timer4->Interval = 1000 * tiempo_print;
			Timer4->Tick += gcnew EventHandler(this, &PrintForm::timer4_Tick);
			Timer4->Start();
		}
		if (time_5 != nullptr) {
			Timer5->Interval = 1000 * tiempo_print;
			Timer5->Tick += gcnew EventHandler(this, &PrintForm::timer5_Tick);
			Timer5->Start();
		}
		if (time_6 != nullptr) {
			Timer6->Interval = 1000 * tiempo_print;
			Timer6->Tick += gcnew EventHandler(this, &PrintForm::timer6_Tick);
			Timer6->Start();
		}
		if (time_7 != nullptr) {
			Timer7->Interval = 1000 * tiempo_print;
			Timer7->Tick += gcnew EventHandler(this, &PrintForm::timer7_Tick);
			Timer7->Start();
		}
		if (time_8 != nullptr) {
			Timer8->Interval = 1000 * tiempo_print;
			Timer8->Tick += gcnew EventHandler(this, &PrintForm::timer8_Tick);
			Timer8->Start();
		}
		if (time_9 != nullptr) {
			Timer9->Interval = 1000 * tiempo_print;
			Timer9->Tick += gcnew EventHandler(this, &PrintForm::timer9_Tick);
			Timer9->Start();
		}
		if (time_10 != nullptr) {
			Timer10->Interval = 1000 * tiempo_print;
			Timer10->Tick += gcnew EventHandler(this, &PrintForm::timer10_Tick);
			Timer10->Start();
		}
		delete_orderId = 0;
		ShowOrderFiles();
	}
	private: System::Void BT_pagarTARJ_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NotEmpty()) {
			Order^ time_order = Controller::QueryFileByPosition(10);
			if (time_order != nullptr) {
				MessageBox::Show("Hay 10 PDFs en cola. Est�s en el l�mite");
			}
			else {
				UpOrder();
				//if(el usuario paga)
				CardVISAForm^ cardVISAForm = gcnew CardVISAForm();
				cardVISAForm->ControlBox = true;
				cardVISAForm->ShowDialog();
				MessageBox::Show("Operaci�n exitosa. El documento se encuentra en cola.");				
				PrintPDF();
				IniciarReloj();
				RefreshPage();
				//email();
			}
		}
	}
	private: System::Void BT_pagarBILL_Click(System::Object^ sender, System::EventArgs^ e) {
		if (NotEmpty()) {
			Order^ time_order = Controller::QueryFileByPosition(10);
			if (time_order != nullptr) {
				MessageBox::Show("Hay 10 PDFs en cola. Est�s en el l�mite");
			}
			else {
				double monto = Convert::ToDouble(MontoPago->Text);
				Total_a_apagar = monto;
				int dni_wallet = Dni_Ahora;
				Customer^ user_wallet = AutoPrintController::Controller::QueryCustomerByDNI(dni_wallet);

				if (user_wallet == nullptr) {
					Employee^ emp_user_wallet = AutoPrintController::Controller::QueryEmployeeByDNI(dni_wallet);

					if (emp_user_wallet->Money_in_wallet >= monto) {
						UpOrder();
						ProbErrorBILL();
						emp_user_wallet->Money_in_wallet = emp_user_wallet->Money_in_wallet - monto;
						Controller::UpdateEmployee(emp_user_wallet);
						MessageBox::Show("Operaci�n exitosa. El documento se encuentra en cola.");
						PrintPDF();
						IniciarReloj();
						RefreshPage();
						//email();
					}
					else {
						MessageBox::Show("Saldo insuficiente. Se le redirigir� a la pesta�a de recarga.");
						WalletForm^ walletForm = gcnew WalletForm();
						walletForm->Show();
					}
				}
				else {
					if (user_wallet->Money_in_wallet >= monto) {
						UpOrder();
						//if (NotPosition10()) {
						ProbErrorBILL();
						user_wallet->Money_in_wallet = user_wallet->Money_in_wallet - monto;
						Controller::UpdateCostumer(user_wallet);
						MessageBox::Show("Operaci�n exitosa. El documento se encuentra en cola.");
						PrintPDF();
						IniciarReloj();
						RefreshPage();
						email();

						//}
					}
					else {
						MessageBox::Show("Saldo insuficiente. Se le redirigir� a la pesta�a de recarga.");
						WalletForm^ walletForm = gcnew WalletForm();
						walletForm->Show();
					}
				}
			}
		}
	}

		   void ProbErrorBILL() {
			   srand(static_cast<unsigned int>(time(nullptr))); //Genera un n�mero aleatorio con el tiempo actual
			   int random = (rand() % 10) + 1; //Se crea el n�mero aleatorio entre 1 a 10

			   if (random == 1 || random == 2) //Si coincide con 1 o 2 (probabilidad del 20%), mostrar� el mensaje de error
			   {
				   MessageBox::Show("Error: La impresora est� atascada. En breve se solucionar� el problema para que se proceda a la impresi�n.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
		   void IniciarReloj() {
			   if (position == 1) {
				   // Configura el intervalo del temporizador en milisegundos (1 segundo)
				   Timer1->Interval = 1000 * tiempo_print;
				   // Asocia el evento Tick con el manejador timer1_Tick
				   Timer1->Tick += gcnew EventHandler(this, &PrintForm::timer1_Tick);
				   // Inicia el temporizador
				   Timer1->Start();
			   }
			   else if (position == 2) {
				   Timer2->Interval = 1000 * tiempo_print;
				   Timer2->Tick += gcnew EventHandler(this, &PrintForm::timer2_Tick);
				   Timer2->Start();
			   }
			   else if (position == 3) {
				   Timer3->Interval = 1000 * tiempo_print;
				   Timer3->Tick += gcnew EventHandler(this, &PrintForm::timer3_Tick);
				   Timer3->Start();
			   }
			   else if (position == 4) {
				   Timer4->Interval = 1000 * tiempo_print;
				   Timer4->Tick += gcnew EventHandler(this, &PrintForm::timer4_Tick);
				   Timer4->Start();
			   }
			   else if (position == 5) {
				   Timer5->Interval = 1000 * tiempo_print;
				   Timer5->Tick += gcnew EventHandler(this, &PrintForm::timer5_Tick);
				   Timer5->Start();
			   }
			   else if (position == 6) {
				   Timer6->Interval = 1000 * tiempo_print;
				   Timer6->Tick += gcnew EventHandler(this, &PrintForm::timer6_Tick);
				   Timer6->Start();
			   }
			   else if (position == 7) {
				   Timer7->Interval = 1000 * tiempo_print;
				   Timer7->Tick += gcnew EventHandler(this, &PrintForm::timer7_Tick);
				   Timer7->Start();
			   }
			   else if (position == 8) {
				   Timer8->Interval = 1000 * tiempo_print;
				   Timer8->Tick += gcnew EventHandler(this, &PrintForm::timer8_Tick);
				   Timer8->Start();
			   }
			   else if (position == 9) {
				   Timer9->Interval = 1000 * tiempo_print;
				   Timer9->Tick += gcnew EventHandler(this, &PrintForm::timer9_Tick);
				   Timer9->Start();
			   }
			   else if (position == 10) {
				   Timer10->Interval = 1000 * tiempo_print;
				   Timer10->Tick += gcnew EventHandler(this, &PrintForm::timer10_Tick);
				   Timer10->Start();
			   }
		   }


/***************************************************************************************************************************************************/
		   void UpOrder() {
			   //valor inicial
			   int ordenId = 1;
			   int TimePrint = 0;
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

			   //Contenidos de dgvs (No entend� lo que dijo el profe)
			   //AGREGU� using namespace AutoPrintModel; para poder usar la clase Order
			   Order^ File_order = gcnew Order();
			   //Atributos de Vehicule: Id,Type,Company,License_Plate
			   //Estos datos son del dgv

			   int dni_wallet = Dni_Ahora;

			   File_order->dni_history = dni_wallet;
			   File_order->order_id = ordenId;
			   File_order->sheet_type = cmbTipoHoja->Text;
			   File_order->sheet_size = cmbTamaHoja->Text;
			   File_order->color_page = cmbTinta->Text;
			   File_order->num_copies = Int32::Parse(cmbNUMcopias->Text);
			   File_order->Location = cmbLocal->Text;
			   File_order->price = monto;
			   File_order->status_order = "Imprimiendo";

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

			   } else if (dia == 3) {
				   File_order->date = "Miercoles";

			   } else if (dia == 4) {
				   File_order->date = "Jueves";

			   } else if (dia == 5) {
				   File_order->date = "Viernes";

			   } else if (dia == 6) {
				   File_order->date = "Sabado";

			   }

			   /*if (PB_PDF_imprimir != nullptr && PB_PDF_imprimir->Image != nullptr) {
				   System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				   PB_PDF_imprimir->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				   File_order->File = ms->ToArray();
			   }*/
			   // Verificar si hay alg�n documento en el WebBrowser
			   if (WB_PDF_imprimir->Url != nullptr) {
				   // Obtener la URL del PDF
				   File_order->PDF_URL = WB_PDF_imprimir->Url->ToString();
				   // Obtener la ruta local del archivo PDF
				   String^ pdfPath = WB_PDF_imprimir->Url->LocalPath;
				   File_order->PDF_NAME = System::IO::Path::GetFileNameWithoutExtension(File_order->PDF_URL);

				   // Verificar si el archivo PDF existe antes de intentar guardarlo
				   if (System::IO::File::Exists(pdfPath)) {
					   // Leer el contenido del archivo PDF en un array de bytes y Asignar el array de bytes al atributo PDF
					   File_order->PDF = System::IO::File::ReadAllBytes(pdfPath);
				   }
			   }

			   position = 1;

			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   for (int i = 0; i < orderfiles->Count; i++) {
					   Order^ position_order = orderfiles[i];
					   if (position_order->num_spooler == 1) {
						   position++;
					   }
					   else if (position_order->num_spooler == 2) {
						   position++;
					   }
					   else if (position_order->num_spooler == 3) {
						   position++;
					   }
					   else if (position_order->num_spooler == 4) {
						   position++;
					   }
					   else if (position_order->num_spooler == 5) {
						   position++;
					   }
					   else if (position_order->num_spooler == 6) {
						   position++;
					   }
					   else if (position_order->num_spooler == 7) {
						   position++;
					   }
					   else if (position_order->num_spooler == 8) {
						   position++;
					   }
					   else if (position_order->num_spooler == 9) {
						   position++;
					   }
					   else if (position_order->num_spooler == 10) {
						   return;
					   }
				   }
			   }

			   File_order->num_spooler = position;

			   if (position == 1) {
				   tiempo1 = tiempo_print * numpage;
				   File_order->time_print = tiempo1;
			   }
			   else if (position == 2) {
				   Order^ time_order = Controller::QueryFileByPosition(1);
				   tiempo2 = tiempo_print * numpage + time_order->time_print;
				   File_order->time_print = tiempo2;
			   }
			   else if (position == 3) {
				   Order^ time_order = Controller::QueryFileByPosition(2);
				   tiempo3 = tiempo_print * numpage + time_order->time_print;
				   File_order->time_print = tiempo3;
			   }
			   else if (position == 4) {
				   Order^ time_order = Controller::QueryFileByPosition(3);
				   tiempo4 = tiempo_print * numpage + time_order->time_print;
				   File_order->time_print = tiempo4;
			   }
			   else if (position == 5) {
				   Order^ time_order = Controller::QueryFileByPosition(4);
				   tiempo5 = tiempo_print * numpage + time_order->time_print;
				   File_order->time_print = tiempo5;
			   }
			   else if (position == 6) {
				   Order^ time_order = Controller::QueryFileByPosition(5);
				   tiempo6 = tiempo_print * numpage + time_order->time_print;
				   File_order->time_print = tiempo6;
			   }
			   else if (position == 7) {
				   Order^ time_order = Controller::QueryFileByPosition(6);
				   tiempo7 = tiempo_print * numpage + time_order->time_print;
				   File_order->time_print = tiempo7;
			   }
			   else if (position == 8) {
				   Order^ time_order = Controller::QueryFileByPosition(7);
				   tiempo8 = tiempo_print * numpage + time_order->time_print;
				   File_order->time_print = tiempo8;
			   }
			   else if (position == 9) {
				   Order^ time_order = Controller::QueryFileByPosition(8);
				   tiempo9 = tiempo_print * numpage + time_order->time_print;
			   }
			   else if (position == 10) {
				   Order^ time_order = Controller::QueryFileByPosition(9);
				   tiempo10 = tiempo_print * numpage + time_order->time_print;
			   }

			   AutoPrintController::Controller::AddOrder(File_order);
			   ShowOrderFiles();
		   }
/******************************************************************************************************************************************************/
		   void ShowOrderFiles() {
			   List<Order^>^ orderfiles = Controller::QueryAllFiles();
			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   dgvHistorial_Files->Rows->Clear();
				   for (int i = 0; i < orderfiles->Count; i++) {
					   Order^ File_order = orderfiles[i];
					   //dgvHistorial_Files es el nombre de la tabla de historial
					   if (File_order->dni_history == Dni_Ahora) {
						   dgvHistorial_Files->Rows->Add(gcnew array<String^>{
							   "" + File_order->order_id,
								   File_order->PDF_NAME,
								   File_order->Location,
								   "" + File_order->price,
								   File_order->status_order,
								   File_order->color_page,
								   "" + File_order->num_copies,
								   File_order->sheet_type,
								   File_order->sheet_size
						   });
					   }
				   }
			   }
		   }
		   Void ShowPrice() {
			   monto = 0;
			   if (cmbNUMcopias->Text != "" && numpage != 0) {
				   if (cmbTinta->Text == "Color") {
					   monto = 0.5 * numpage * (Int32::Parse(cmbNUMcopias->Text));
				   }
				   else if (cmbTinta->Text == "Blanco y negro") {
					   monto = 0.3 * numpage * (Int32::Parse(cmbNUMcopias->Text));
				   }
				   MontoPago->Text = (monto).ToString();
			   }
			   else if (cmbTinta->Text != "" && numpage != 0) {
				   MontoPago->Text = (monto).ToString();
			   }
			   if (cmbTinta->Text != "" && cmbNUMcopias->Text != "" && numpage != 0) {
				   LB_NumPage->Text = "por " + numpage + " p�ginas";
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
					   // Espera un momento para que la ventana se abra completamente (ajusta seg�n sea necesario)
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
				   MessageBox::Show("La impresora no est� disponible en su sistema operativo");
			   }
		   }
		   void RefreshPage() {
			   // Limpiar el WebBrowser
			   WB_PDF_imprimir->Navigate("");
			   //about;blank
			   // Limpiar valores de ComboBox
			   cmbTipoHoja->SelectedIndex = -1;
			   cmbTamaHoja->SelectedIndex = -1;
			   cmbTinta->SelectedIndex = -1;
			   cmbNUMcopias->SelectedIndex = -1;
			   cmbLocal->SelectedIndex = -1;
			   MontoPago->Text = "0";
			   LB_NumPage->Text = "0";
		   }

	private: System::Void dgvHistorial_Files_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
		if (dgvHistorial_Files->SelectedCells->Count > 0 &&
			dgvHistorial_Files->Rows[dgvHistorial_Files->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr &&
			!String::IsNullOrEmpty(dgvHistorial_Files->Rows[dgvHistorial_Files->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString())) {

			// Solo ejecutar si hay una celda seleccionada y el valor no es nulo o vac�o
			int orderId = Int32::Parse(dgvHistorial_Files->Rows[dgvHistorial_Files->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			Order^ File_order = Controller::QueryFileById(orderId);

			delete_orderId = orderId;
			// Cargar el contenido del PDF en el control WebBrowser
			LoadPdfContent(File_order);
		}
		else {
			//Si el valor es nulo/vac�o
			MessageBox::Show("Seleccione una fila con un c�digo existente");
		}
	}

		   // Funci�n para cargar el contenido del PDF en el control WebBrowser (WB_PDF_historial)
		   void LoadPdfContent(Order^ order) {
			   if (order != nullptr) {
				   // Verificar si el contenido del PDF est� disponible
				   if (order->PDF != nullptr && order->PDF->Length > 0) {
					   try {
						   // Guardar el contenido del PDF en un archivo temporal
						   String^ tempPdfPath = System::IO::Path::GetTempFileName() + ".pdf";
						   System::IO::File::WriteAllBytes(tempPdfPath, order->PDF);

						   // Navegar al control WebBrowser al archivo PDF temporal
						   WB_PDF_historial->Navigate(tempPdfPath);
					   }
					   catch (Exception^ ex) {
						   throw ex;
					   }
				   }
				   else if (!String::IsNullOrEmpty(order->PDF_URL)) {
					   // Si el contenido del PDF no est� disponible, navegar a la URL del PDF
					   WB_PDF_historial->Navigate(order->PDF_URL);
				   }
				   else {
					   // Si no hay contenido ni URL del PDF disponibles, limpiar el control WebBrowser
					   WB_PDF_historial->Navigate("about:blank");
					   WB_PDF_historial->Invalidate();
				   }
			   }
		   }

	private: System::Void TPage_impre_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Actualiza el monto
		ShowPrice();
	}
	private: System::Void tabControl1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//ShowOrderFiles();
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
			std::string rutaPDF = msclr::interop::marshal_as<std::string>(dialogoPDF->FileName);
			numpage = GetNumberOfPages(rutaPDF);
		}
		else {
			MessageBox::Show("El archivo PDF no existe en la ruta especificada.");
		}
	}
	private: System::Void BT_DeletePDFs_Click(System::Object^ sender, System::EventArgs^ e) {
		if (delete_orderId !=0) {
			Controller::DeleteOrder(delete_orderId);
			ShowOrderFiles();
			delete_orderId = 0;
		}
	}

		   int GetNumberOfPages(const std::string& rutaPDF) {
			   try {
				   std::ifstream archivoPDF(rutaPDF, std::ios::binary);

				   // Buscar el n�mero de p�ginas en el archivo PDF
				   std::stringstream contenidoPDF;
				   contenidoPDF << archivoPDF.rdbuf();

				   std::size_t posInicio = contenidoPDF.str().find("/Count ");
				   if (posInicio == std::string::npos) {
					   return -1;
				   }

				   std::size_t posFin = contenidoPDF.str().find_first_of("0123456789", posInicio);
				   if (posFin == std::string::npos) {
					   return -1;
				   }

				   std::string countString = contenidoPDF.str().substr(posFin);
				   int numeroDePaginas = std::stoi(countString);

				   return numeroDePaginas;
			   }
			   catch (Exception^ ex) {
				   // Handle exceptions as needed
				   MessageBox::Show("Error al obtener el n�mero de p�ginas del PDF: " + ex->Message);
				   return -1; // Devolver -1 para indicar un error
			   }
		   }

		   void SpoolerMinus() {
			   Order^ time_order11 = Controller::QueryFileByPosition(1);
			   Order^ order11 = gcnew Order();
			   order11->num_spooler = -1;
			   order11->time_print = -1;

			   order11->dni_history = time_order11->dni_history;
			   order11->order_id = time_order11->order_id;//Identificador
			   order11->status_order = time_order11->status_order;
			   order11->sheet_type = time_order11->sheet_type;
			   order11->sheet_size = time_order11->sheet_size;
			   order11->color_page = time_order11->color_page;
			   order11->num_copies = time_order11->num_copies;
			   order11->Location = time_order11->Location;
			   order11->price = time_order11->price;
			   order11->date = time_order11->date;
			   order11->PDF_NAME = time_order11->PDF_NAME;
			   order11->PDF_URL = time_order11->PDF_URL;
			   order11->PDF = time_order11->PDF;

			   Controller::UpdateCola(order11);
		   }

		   System::Windows::Forms::Timer^ Timer1 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer2 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer3 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer4 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer5 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer6 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer7 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer8 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer9 = gcnew System::Windows::Forms::Timer();
		   System::Windows::Forms::Timer^ Timer10 = gcnew System::Windows::Forms::Timer();

/*------------------------------------------------------111111111111111111111111111111111----------------------------------------------------------*/
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {		
		String^ Documento_name;
		Order^ time_order = Controller::QueryFileByPosition(1);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time1->Text = (order->time_print).ToString();
			LB_Pos1->Text = "1";
			LB_NameDoc1->Text = time_order->PDF_NAME;

			if (order->time_print <= 0) {
				order->time_print = - 1;
				LB_Time1->Text = "Listo para recoger";
				order->num_spooler = -1;
				//Documento_name = time_order->PDF_NAME;
				order->status_order = "Listo";
				//MessageBox::Show("Su documento " + time_order->PDF_NAME + " est� listo para recoger.");
			}
			Controller::UpdateCola(order);
		}
		else {
			LB_Time1->Text = "1111";
			LB_Pos1->Text = "1111";
			LB_NameDoc1->Text = "1111";
			// Det�n el temporizador si est� en marcha
			Timer1->Stop();
			// Elimina todos los manejadores de eventos Tick
			Timer1->Tick -= gcnew EventHandler(this, &PrintForm::timer1_Tick);
		}
	}/*---------------------------------------------------222222222222222222222222222222222222222222222-------------------------------------------*/
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(2);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time2->Text = (order->time_print).ToString();
			LB_Pos2->Text = "2";
			LB_NameDoc2->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer1->Stop();
				Timer1->Tick -= gcnew EventHandler(this, &PrintForm::timer1_Tick);
				
				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;
				
				Controller::UpdateCola(order);
				
				Timer1->Tick += gcnew EventHandler(this, &PrintForm::timer1_Tick);
				Timer1->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time2->Text = "2222";
			LB_Pos2->Text = "2222";
			LB_NameDoc2->Text = "2222";
			Timer2->Stop();
			Timer2->Tick -= gcnew EventHandler(this, &PrintForm::timer2_Tick);
		}
	}/*----------------------------------------------------33333333333333333333333333333333333333333333333333-------------------------------------*/
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(3);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time3->Text = (order->time_print).ToString();
			LB_Pos3->Text = "3";
			LB_NameDoc3->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer2->Stop();
				Timer2->Tick -= gcnew EventHandler(this, &PrintForm::timer2_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer2->Tick += gcnew EventHandler(this, &PrintForm::timer2_Tick);
				Timer2->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time3->Text = "3333";
			LB_Pos3->Text = "3333";
			LB_NameDoc3->Text = "3333";
			Timer3->Stop();
			Timer3->Tick -= gcnew EventHandler(this, &PrintForm::timer3_Tick);
		}
	}/*----------------------------------------------------444444444444444444444444444444444444444444444444444-----------------------------------*/
	private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(4);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time4->Text = (order->time_print).ToString();
			LB_Pos4->Text = "4";
			LB_NameDoc4->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer3->Stop();
				Timer3->Tick -= gcnew EventHandler(this, &PrintForm::timer3_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer3->Tick += gcnew EventHandler(this, &PrintForm::timer3_Tick);
				Timer3->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time4->Text = "";
			LB_Pos4->Text = "";
			LB_NameDoc4->Text = "";
			Timer4->Stop();
			Timer4->Tick -= gcnew EventHandler(this, &PrintForm::timer4_Tick);
		}
	}/*----------------------------------------------------55555555555555555555555555555555555555555555555555-----------------------------------*/
	private: System::Void timer5_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(5);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time5->Text = (order->time_print).ToString();
			LB_Pos5->Text = "5";
			LB_NameDoc5->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer4->Stop();
				Timer4->Tick -= gcnew EventHandler(this, &PrintForm::timer4_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer4->Tick += gcnew EventHandler(this, &PrintForm::timer4_Tick);
				Timer4->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time5->Text = "";
			LB_Pos5->Text = "";
			LB_NameDoc5->Text = "";
			Timer5->Stop();
			Timer5->Tick -= gcnew EventHandler(this, &PrintForm::timer5_Tick);
		}
	}/*----------------------------------------------------66666666666666666666666666666666666666666666666666-----------------------------------*/
	private: System::Void timer6_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(6);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time6->Text = (order->time_print).ToString();
			LB_Pos6->Text = "6";
			LB_NameDoc6->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer5->Stop();
				Timer5->Tick -= gcnew EventHandler(this, &PrintForm::timer5_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer5->Tick += gcnew EventHandler(this, &PrintForm::timer5_Tick);
				Timer5->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time6->Text = "";
			LB_Pos6->Text = "";
			LB_NameDoc6->Text = "";
			Timer6->Stop();
			Timer6->Tick -= gcnew EventHandler(this, &PrintForm::timer6_Tick);
		}
	}/*----------------------------------------------------7777777777777777777777777777777777777777777777777-----------------------------------*/
	private: System::Void timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(7);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time7->Text = (order->time_print).ToString();
			LB_Pos7->Text = "7";
			LB_NameDoc7->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer6->Stop();
				Timer6->Tick -= gcnew EventHandler(this, &PrintForm::timer6_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer6->Tick += gcnew EventHandler(this, &PrintForm::timer6_Tick);
				Timer6->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time7->Text = "";
			LB_Pos7->Text = "";
			LB_NameDoc7->Text = "";
			Timer7->Stop();
			Timer7->Tick -= gcnew EventHandler(this, &PrintForm::timer7_Tick);
		}
	}/*----------------------------------------------------8888888888888888888888888888888888888888888888888-----------------------------------*/
	private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(8);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time8->Text = (order->time_print).ToString();
			LB_Pos8->Text = "8";
			LB_NameDoc8->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer7->Stop();
				Timer7->Tick -= gcnew EventHandler(this, &PrintForm::timer7_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer7->Tick += gcnew EventHandler(this, &PrintForm::timer7_Tick);
				Timer7->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time8->Text = "";
			LB_Pos8->Text = "";
			LB_NameDoc8->Text = "";
			Timer8->Stop();
			Timer8->Tick -= gcnew EventHandler(this, &PrintForm::timer8_Tick);
		}
	}/*----------------------------------------------------999999999999999999999999999999999999999999999999-----------------------------------*/
	private: System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(9);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time9->Text = (order->time_print).ToString();
			LB_Pos9->Text = "9";
			LB_NameDoc9->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer8->Stop();
				Timer8->Tick -= gcnew EventHandler(this, &PrintForm::timer8_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer8->Tick += gcnew EventHandler(this, &PrintForm::timer8_Tick);
				Timer8->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time9->Text = "";
			LB_Pos9->Text = "";
			LB_NameDoc9->Text = "";
			Timer9->Stop();
			Timer9->Tick -= gcnew EventHandler(this, &PrintForm::timer9_Tick);
		}
	}/*----------------------------------------------------10101010101010101010101010101010101010101010101010-----------------------------------*/
	private: System::Void timer10_Tick(System::Object^ sender, System::EventArgs^ e) {
		Order^ time_order = Controller::QueryFileByPosition(10);
		if (time_order != nullptr) {
			Order^ order = gcnew Order();
			order->num_spooler = time_order->num_spooler;
			order->time_print = time_order->time_print - tiempo_print;

			order->dni_history = time_order->dni_history;
			order->order_id = time_order->order_id;//Identificador
			order->status_order = time_order->status_order;
			order->sheet_type = time_order->sheet_type;
			order->sheet_size = time_order->sheet_size;
			order->color_page = time_order->color_page;
			order->num_copies = time_order->num_copies;
			order->Location = time_order->Location;
			order->price = time_order->price;
			order->date = time_order->date;
			order->PDF_NAME = time_order->PDF_NAME;
			order->PDF_URL = time_order->PDF_URL;
			order->PDF = time_order->PDF;

			LB_Time10->Text = (order->time_print).ToString();
			LB_Pos10->Text = "10";
			LB_NameDoc10->Text = time_order->PDF_NAME;

			if (LB_Time1->Text == "Listo para recoger") {
				Timer9->Stop();
				Timer9->Tick -= gcnew EventHandler(this, &PrintForm::timer9_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer9->Tick += gcnew EventHandler(this, &PrintForm::timer9_Tick);
				Timer9->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			LB_Time10->Text = "";
			LB_Pos10->Text = "";
			LB_NameDoc10->Text = "";
			Timer10->Stop();
			Timer10->Tick -= gcnew EventHandler(this, &PrintForm::timer10_Tick);
		}
	}

		   // Excelente trabajo Ricardo. Francis
		  public:
			  void email() {
				  int dniP = Dni_Ahora;
				  String^ dnic = "" + dniP;
				  double pago = Total_a_apagar;
				  String^ pagoc = "" + pago;

				  Customer^ user_wallet = Controller::QueryCustomerByDNI(dniP);

				  if (user_wallet == nullptr) {
					  Employee^ emp_user_wallet = AutoPrintController::Controller::QueryEmployeeByDNI(dniP);

					  String^ correo = emp_user_wallet->Email;

					  MailMessage^ mail = gcnew MailMessage("AutoprintConnect@outlook.com", correo,
						  "Recibo Electronico de Impresion",
						  "Constancia de Pago\n Se ha registrado con exito el pago de su impresion\n DNI:" + dnic + "\n Pago total:" + pagoc + "\n AUTOPRINT CONNECT");

					  SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
					  client->Port = 587;
					  client->Credentials = gcnew System::Net::NetworkCredential("AutoprintConnect@outlook.com", "Autoprint123");
					  client->EnableSsl = true;
					  client->Send(mail);
				  }
				  else {
					  String^ correo = user_wallet->Email;

					  MailMessage^ mail = gcnew MailMessage("AutoprintConnect@outlook.com", correo,
						  "Recibo Electronico de Impresion",
						  "Constancia de Pago\n Se ha registrado con exito el pago de su impresion\n DNI:" + dnic + "\n Pago total:" + pagoc + "\n AUTOPRINT CONNECT");

					  SmtpClient^ client = gcnew SmtpClient("smtp-mail.outlook.com");
					  client->Port = 587;
					  client->Credentials = gcnew System::Net::NetworkCredential("AutoprintConnect@outlook.com", "Autoprint123");
					  client->EnableSsl = true;
					  client->Send(mail);
				  }

			  }
};
}