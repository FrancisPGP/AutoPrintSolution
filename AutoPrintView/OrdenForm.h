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
	using namespace System::Collections::Generic;

	using namespace System::Diagnostics;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de OrdenForm
	/// </summary>
	public ref class OrdenForm : public System::Windows::Forms::Form
	{
	public:
		OrdenForm(void)
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
		~OrdenForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dgvOrdenes_imprimiendo;



	protected:

	protected:

	protected:








	private: System::Windows::Forms::DataGridView^ dgvOrdenes_listo;






	private: System::Windows::Forms::Button^ BT_PDFrecogido;
	private: System::Windows::Forms::Button^ btnShowList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_id_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_dni_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_name_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_doc_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_status_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_copies_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_tinta_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_price_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_id_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_dni_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_name_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_doc_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_status_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_numcopies_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_tinta_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_price_listo;
	private: System::Windows::Forms::Button^ BT_StarPrint;



	private: System::ComponentModel::IContainer^ components;

















































































































	protected:

	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->BT_StarPrint = (gcnew System::Windows::Forms::Button());
			this->btnShowList = (gcnew System::Windows::Forms::Button());
			this->dgvOrdenes_imprimiendo = (gcnew System::Windows::Forms::DataGridView());
			this->dgv_id_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_dni_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_name_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_doc_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_status_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_copies_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_tinta_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_price_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->BT_PDFrecogido = (gcnew System::Windows::Forms::Button());
			this->dgvOrdenes_listo = (gcnew System::Windows::Forms::DataGridView());
			this->dgv_id_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_dni_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_name_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_doc_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_status_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_numcopies_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_tinta_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_price_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_imprimiendo))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_listo))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(821, 543);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->BT_StarPrint);
			this->tabPage1->Controls->Add(this->btnShowList);
			this->tabPage1->Controls->Add(this->dgvOrdenes_imprimiendo);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(813, 514);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Imprimiendo";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// BT_StarPrint
			// 
			this->BT_StarPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_StarPrint->Location = System::Drawing::Point(94, 16);
			this->BT_StarPrint->Name = L"BT_StarPrint";
			this->BT_StarPrint->Size = System::Drawing::Size(200, 44);
			this->BT_StarPrint->TabIndex = 46;
			this->BT_StarPrint->Text = L"Iniciar impresión";
			this->BT_StarPrint->UseVisualStyleBackColor = true;
			// 
			// btnShowList
			// 
			this->btnShowList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnShowList->Location = System::Drawing::Point(531, 14);
			this->btnShowList->Name = L"btnShowList";
			this->btnShowList->Size = System::Drawing::Size(167, 51);
			this->btnShowList->TabIndex = 45;
			this->btnShowList->Text = L"Mostrar en pantalla";
			this->btnShowList->UseVisualStyleBackColor = true;
			this->btnShowList->Click += gcnew System::EventHandler(this, &OrdenForm::btnShowList_Click);
			// 
			// dgvOrdenes_imprimiendo
			// 
			this->dgvOrdenes_imprimiendo->AllowUserToAddRows = false;
			this->dgvOrdenes_imprimiendo->AllowUserToResizeRows = false;
			this->dgvOrdenes_imprimiendo->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvOrdenes_imprimiendo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdenes_imprimiendo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dgv_id_impri,
					this->dgv_dni_impri, this->dgv_name_impri, this->dgv_doc_impri, this->dgv_status_impri, this->dgv_copies_impri, this->dgv_tinta_impri,
					this->dgv_price_impri
			});
			this->dgvOrdenes_imprimiendo->Location = System::Drawing::Point(3, 78);
			this->dgvOrdenes_imprimiendo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvOrdenes_imprimiendo->Name = L"dgvOrdenes_imprimiendo";
			this->dgvOrdenes_imprimiendo->ReadOnly = true;
			this->dgvOrdenes_imprimiendo->RowHeadersVisible = false;
			this->dgvOrdenes_imprimiendo->RowHeadersWidth = 82;
			this->dgvOrdenes_imprimiendo->RowTemplate->Height = 33;
			this->dgvOrdenes_imprimiendo->Size = System::Drawing::Size(807, 432);
			this->dgvOrdenes_imprimiendo->TabIndex = 44;
			this->dgvOrdenes_imprimiendo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrdenes_imprimiendo_CellClick);
			// 
			// dgv_id_impri
			// 
			this->dgv_id_impri->HeaderText = L"Código";
			this->dgv_id_impri->MinimumWidth = 8;
			this->dgv_id_impri->Name = L"dgv_id_impri";
			this->dgv_id_impri->ReadOnly = true;
			this->dgv_id_impri->Width = 50;
			// 
			// dgv_dni_impri
			// 
			this->dgv_dni_impri->HeaderText = L"DNI";
			this->dgv_dni_impri->MinimumWidth = 8;
			this->dgv_dni_impri->Name = L"dgv_dni_impri";
			this->dgv_dni_impri->ReadOnly = true;
			this->dgv_dni_impri->Width = 90;
			// 
			// dgv_name_impri
			// 
			this->dgv_name_impri->HeaderText = L"Nombre";
			this->dgv_name_impri->MinimumWidth = 8;
			this->dgv_name_impri->Name = L"dgv_name_impri";
			this->dgv_name_impri->ReadOnly = true;
			this->dgv_name_impri->Width = 200;
			// 
			// dgv_doc_impri
			// 
			this->dgv_doc_impri->HeaderText = L"Documento";
			this->dgv_doc_impri->MinimumWidth = 8;
			this->dgv_doc_impri->Name = L"dgv_doc_impri";
			this->dgv_doc_impri->ReadOnly = true;
			this->dgv_doc_impri->Width = 110;
			// 
			// dgv_status_impri
			// 
			this->dgv_status_impri->HeaderText = L"Estado";
			this->dgv_status_impri->MinimumWidth = 8;
			this->dgv_status_impri->Name = L"dgv_status_impri";
			this->dgv_status_impri->ReadOnly = true;
			this->dgv_status_impri->Width = 80;
			// 
			// dgv_copies_impri
			// 
			this->dgv_copies_impri->HeaderText = L"Número de copias";
			this->dgv_copies_impri->MinimumWidth = 8;
			this->dgv_copies_impri->Name = L"dgv_copies_impri";
			this->dgv_copies_impri->ReadOnly = true;
			this->dgv_copies_impri->Width = 60;
			// 
			// dgv_tinta_impri
			// 
			this->dgv_tinta_impri->HeaderText = L"Tinta";
			this->dgv_tinta_impri->MinimumWidth = 8;
			this->dgv_tinta_impri->Name = L"dgv_tinta_impri";
			this->dgv_tinta_impri->ReadOnly = true;
			this->dgv_tinta_impri->Width = 65;
			// 
			// dgv_price_impri
			// 
			this->dgv_price_impri->HeaderText = L"Precio (S/)";
			this->dgv_price_impri->MinimumWidth = 8;
			this->dgv_price_impri->Name = L"dgv_price_impri";
			this->dgv_price_impri->ReadOnly = true;
			this->dgv_price_impri->Width = 50;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->BT_PDFrecogido);
			this->tabPage2->Controls->Add(this->dgvOrdenes_listo);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(813, 514);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Listo";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// BT_PDFrecogido
			// 
			this->BT_PDFrecogido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_PDFrecogido->Location = System::Drawing::Point(281, 14);
			this->BT_PDFrecogido->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BT_PDFrecogido->Name = L"BT_PDFrecogido";
			this->BT_PDFrecogido->Size = System::Drawing::Size(235, 44);
			this->BT_PDFrecogido->TabIndex = 47;
			this->BT_PDFrecogido->Text = L"PDF recogido";
			this->BT_PDFrecogido->UseVisualStyleBackColor = true;
			this->BT_PDFrecogido->Click += gcnew System::EventHandler(this, &OrdenForm::BT_PDFrecogido_Click);
			// 
			// dgvOrdenes_listo
			// 
			this->dgvOrdenes_listo->AllowUserToAddRows = false;
			this->dgvOrdenes_listo->AllowUserToResizeRows = false;
			this->dgvOrdenes_listo->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvOrdenes_listo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdenes_listo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dgv_id_listo,
					this->dgv_dni_listo, this->dgv_name_listo, this->dgv_doc_listo, this->dgv_status_listo, this->dgv_numcopies_listo, this->dgv_tinta_listo,
					this->dgv_price_listo
			});
			this->dgvOrdenes_listo->Location = System::Drawing::Point(3, 78);
			this->dgvOrdenes_listo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvOrdenes_listo->Name = L"dgvOrdenes_listo";
			this->dgvOrdenes_listo->ReadOnly = true;
			this->dgvOrdenes_listo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dgvOrdenes_listo->RowHeadersVisible = false;
			this->dgvOrdenes_listo->RowHeadersWidth = 82;
			this->dgvOrdenes_listo->RowTemplate->Height = 33;
			this->dgvOrdenes_listo->Size = System::Drawing::Size(807, 432);
			this->dgvOrdenes_listo->TabIndex = 46;
			this->dgvOrdenes_listo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrdenes_listo_CellClick);
			// 
			// dgv_id_listo
			// 
			this->dgv_id_listo->HeaderText = L"Código";
			this->dgv_id_listo->MinimumWidth = 8;
			this->dgv_id_listo->Name = L"dgv_id_listo";
			this->dgv_id_listo->ReadOnly = true;
			this->dgv_id_listo->Width = 50;
			// 
			// dgv_dni_listo
			// 
			this->dgv_dni_listo->HeaderText = L"DNI";
			this->dgv_dni_listo->MinimumWidth = 8;
			this->dgv_dni_listo->Name = L"dgv_dni_listo";
			this->dgv_dni_listo->ReadOnly = true;
			this->dgv_dni_listo->Width = 90;
			// 
			// dgv_name_listo
			// 
			this->dgv_name_listo->HeaderText = L"Nombre";
			this->dgv_name_listo->MinimumWidth = 8;
			this->dgv_name_listo->Name = L"dgv_name_listo";
			this->dgv_name_listo->ReadOnly = true;
			this->dgv_name_listo->Width = 200;
			// 
			// dgv_doc_listo
			// 
			this->dgv_doc_listo->HeaderText = L"Documento";
			this->dgv_doc_listo->MinimumWidth = 8;
			this->dgv_doc_listo->Name = L"dgv_doc_listo";
			this->dgv_doc_listo->ReadOnly = true;
			this->dgv_doc_listo->Width = 110;
			// 
			// dgv_status_listo
			// 
			this->dgv_status_listo->HeaderText = L"Estado";
			this->dgv_status_listo->MinimumWidth = 8;
			this->dgv_status_listo->Name = L"dgv_status_listo";
			this->dgv_status_listo->ReadOnly = true;
			this->dgv_status_listo->Width = 80;
			// 
			// dgv_numcopies_listo
			// 
			this->dgv_numcopies_listo->HeaderText = L"Número de copias";
			this->dgv_numcopies_listo->MinimumWidth = 8;
			this->dgv_numcopies_listo->Name = L"dgv_numcopies_listo";
			this->dgv_numcopies_listo->ReadOnly = true;
			this->dgv_numcopies_listo->Width = 60;
			// 
			// dgv_tinta_listo
			// 
			this->dgv_tinta_listo->HeaderText = L"Tinta";
			this->dgv_tinta_listo->MinimumWidth = 8;
			this->dgv_tinta_listo->Name = L"dgv_tinta_listo";
			this->dgv_tinta_listo->ReadOnly = true;
			this->dgv_tinta_listo->Width = 65;
			// 
			// dgv_price_listo
			// 
			this->dgv_price_listo->HeaderText = L"Precio (S/)";
			this->dgv_price_listo->MinimumWidth = 8;
			this->dgv_price_listo->Name = L"dgv_price_listo";
			this->dgv_price_listo->ReadOnly = true;
			this->dgv_price_listo->Width = 50;
			// 
			// OrdenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 543);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"OrdenForm";
			this->Text = L"Ordenes";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &OrdenForm::OrdenForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &OrdenForm::OrdenForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_imprimiendo))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_listo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int collected_orderId = 0;
		int tiempo_print = 5;

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

	private: System::Void OrdenForm_Load(System::Object^ sender, System::EventArgs^ e) {
		collected_orderId = 0;

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
			Timer1->Tick += gcnew EventHandler(this, &OrdenForm::timer1_Tick);
			// Inicia el temporizador
			Timer1->Start();
		}
		if (time_2 != nullptr) {
			Timer2->Interval = 1000 * tiempo_print;
			Timer2->Tick += gcnew EventHandler(this, &OrdenForm::timer2_Tick);
			Timer2->Start();
		}
		if (time_3 != nullptr) {
			Timer3->Interval = 1000 * tiempo_print;
			Timer3->Tick += gcnew EventHandler(this, &OrdenForm::timer3_Tick);
			Timer3->Start();
		}
		if (time_4 != nullptr) {
			Timer4->Interval = 1000 * tiempo_print;
			Timer4->Tick += gcnew EventHandler(this, &OrdenForm::timer4_Tick);
			Timer4->Start();
		}
		if (time_5 != nullptr) {
			Timer5->Interval = 1000 * tiempo_print;
			Timer5->Tick += gcnew EventHandler(this, &OrdenForm::timer5_Tick);
			Timer5->Start();
		}
		if (time_6 != nullptr) {
			Timer6->Interval = 1000 * tiempo_print;
			Timer6->Tick += gcnew EventHandler(this, &OrdenForm::timer6_Tick);
			Timer6->Start();
		}
		if (time_7 != nullptr) {
			Timer7->Interval = 1000 * tiempo_print;
			Timer7->Tick += gcnew EventHandler(this, &OrdenForm::timer7_Tick);
			Timer7->Start();
		}
		if (time_8 != nullptr) {
			Timer8->Interval = 1000 * tiempo_print;
			Timer8->Tick += gcnew EventHandler(this, &OrdenForm::timer8_Tick);
			Timer8->Start();
		}
		if (time_9 != nullptr) {
			Timer9->Interval = 1000 * tiempo_print;
			Timer9->Tick += gcnew EventHandler(this, &OrdenForm::timer9_Tick);
			Timer9->Start();
		}
		if (time_10 != nullptr) {
			Timer10->Interval = 1000 * tiempo_print;
			Timer10->Tick += gcnew EventHandler(this, &OrdenForm::timer10_Tick);
			Timer10->Start();
		}
		ShowFilesImprimiendo();
		ShowFilesListo();
	}
		   void ShowFilesImprimiendo() {
			   List<Order^>^ orderfiles = Controller::QueryAllFiles();
			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   dgvOrdenes_imprimiendo->Rows->Clear();
				   for (int i = 0; i < orderfiles->Count; i++) {
					   Order^ File_order = orderfiles[i];
					   if (File_order->status_order == "Imprimiendo") {
						   Customer^ Customer_order = Controller::QueryCustomerByDNI(File_order->dni_history);
						   //dgvOrdenes_imprimiendo es el nombre de la tabla de Imprimiendo
						   dgvOrdenes_imprimiendo->Rows->Add(gcnew array<String^>{
							   "" + File_order->order_id,
								   "" + File_order->dni_history,
								   Customer_order->LastName + ", " + Customer_order->Name,//nombre
								   File_order->PDF_NAME,
								   File_order->status_order,
								   "" + File_order->num_copies,
								   File_order->color_page,//tinta
								   "" + File_order->num_copies
						   });
					   }
				   }
			   }
		   }
		   void ShowFilesListo() {
			   List<Order^>^ orderfiles = Controller::QueryAllFiles();
			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   dgvOrdenes_listo->Rows->Clear();
				   for (int i = 0; i < orderfiles->Count; i++) {
					   Order^ File_order = orderfiles[i];
					   if (File_order->status_order == "Listo") {
						   Customer^ Customer_order = Controller::QueryCustomerByDNI(File_order->dni_history);
						   //dgvOrdenes_listo es el nombre de la tabla de Listo
						   dgvOrdenes_listo->Rows->Add(gcnew array<String^>{
							   "" + File_order->order_id,
								   "" + File_order->dni_history,
								   Customer_order->LastName + ", " + Customer_order->Name,//nombre
								   File_order->PDF_NAME,
								   File_order->status_order,
								   "" + File_order->num_copies,
								   File_order->color_page,//tinta
								   "" + File_order->num_copies
						   });
					   }
				   }
			   }
		   }

	private: System::Void dgvOrdenes_imprimiendo_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvOrdenes_imprimiendo->SelectedCells->Count > 0 &&
			dgvOrdenes_imprimiendo->Rows[dgvOrdenes_imprimiendo->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr &&
			!String::IsNullOrEmpty(dgvOrdenes_imprimiendo->Rows[dgvOrdenes_imprimiendo->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString())) {

			// Solo ejecutar si hay una celda seleccionada y el valor no es nulo o vacío
			int dni_order = Int32::Parse(dgvOrdenes_imprimiendo->Rows[dgvOrdenes_imprimiendo->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

			Order^ Ordenes_PDF = Controller::QueryFileById(dni_order);

			/*if (Ordenes_PDF->PDF_URL != nullptr) {
				WB_PDF_historial->Navigate(File_order->PDF_URL);
				//MessageBox::Show(File_order->PDF_URL);
			}
			else {
				WB_PDF_historial->Navigate("");
				WB_PDF_historial->Invalidate();
			}*/
		}
	}
	private: System::Void BT_PDFrecogido_Click(System::Object^ sender, System::EventArgs^ e) {
		if (collected_orderId != 0) {
			//cambiar el estado
			Order^ time_order11 = Controller::QueryFileById(collected_orderId);
			Order^ order11 = gcnew Order();
			order11->num_spooler = -1;
			order11->time_print = -1;

			order11->dni_history = time_order11->dni_history;
			order11->order_id = time_order11->order_id;//Identificador
			order11->status_order = "Recogido";
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
			ShowFilesListo();
			collected_orderId = 0;
		}
	}
	private: System::Void dgvOrdenes_listo_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvOrdenes_listo->SelectedCells->Count > 0 &&
			dgvOrdenes_listo->Rows[dgvOrdenes_listo->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr &&
			!String::IsNullOrEmpty(dgvOrdenes_listo->Rows[dgvOrdenes_listo->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString())) {

			// Solo ejecutar si hay una celda seleccionada y el valor no es nulo o vacío
			int dni_order = Int32::Parse(dgvOrdenes_listo->Rows[dgvOrdenes_listo->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			Order^ Ordenes_PDF = Controller::QueryFileById(dni_order);

			collected_orderId = dni_order;
			/*if (Ordenes_PDF->PDF_URL != nullptr) {
				WB_PDF_historial->Navigate(File_order->PDF_URL);
				//MessageBox::Show(File_order->PDF_URL);
			}
			else {
				WB_PDF_historial->Navigate("");
				WB_PDF_historial->Invalidate();
			}*/
		}
	}
	
		   void ExecuteShowList(int listNum) {
			   AutoPrintController::Controller::ShowList(listNum);
		   }

	private: System::Void btnShowList_Click(System::Object^ sender, System::EventArgs^ e) {
		
		ExecuteShowList(1);
	}
	private: System::Void OrdenForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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

	/*----------------------------------------------------111111111111111111111111111111111--------------------------------------------------------*/
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

			/*LB_Time1->Text = (order->time_print).ToString();
			LB_Pos1->Text = "1";
			LB_NameDoc1->Text = time_order->PDF_NAME;*/

			if (order->time_print <= 0) {
				//Documento_name = time_order->PDF_NAME;
				order->status_order = "Listo";
				Order^ time_order22 = Controller::QueryFileByPosition(2);
				if (time_order22 == nullptr) {
					order->num_spooler = -1;
				}
			}
			Controller::UpdateCola(order);
		}
		else {
			/*LB_Time1->Text = "";
			LB_Pos1->Text = "";
			LB_NameDoc1->Text = "";*/
			// Detén el temporizador si está en marcha
			Timer1->Stop();
			// Elimina todos los manejadores de eventos Tick
			Timer1->Tick -= gcnew EventHandler(this, &OrdenForm::timer1_Tick);
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

			/*LB_Time2->Text = (order->time_print).ToString();
			LB_Pos2->Text = "2";
			LB_NameDoc2->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer1->Stop();
				Timer1->Tick -= gcnew EventHandler(this, &OrdenForm::timer1_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer1->Tick += gcnew EventHandler(this, &OrdenForm::timer1_Tick);
				Timer1->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time2->Text = "";
			LB_Pos2->Text = "";
			LB_NameDoc2->Text = "";*/
			Timer2->Stop();
			Timer2->Tick -= gcnew EventHandler(this, &OrdenForm::timer2_Tick);
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

			/*LB_Time3->Text = (order->time_print).ToString();
			LB_Pos3->Text = "3";
			LB_NameDoc3->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer2->Stop();
				Timer2->Tick -= gcnew EventHandler(this, &OrdenForm::timer2_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer2->Tick += gcnew EventHandler(this, &OrdenForm::timer2_Tick);
				Timer2->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time3->Text = "";
			LB_Pos3->Text = "";
			LB_NameDoc3->Text = "";*/
			Timer3->Stop();
			Timer3->Tick -= gcnew EventHandler(this, &OrdenForm::timer3_Tick);
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

			/*LB_Time4->Text = (order->time_print).ToString();
			LB_Pos4->Text = "4";
			LB_NameDoc4->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer3->Stop();
				Timer3->Tick -= gcnew EventHandler(this, &OrdenForm::timer3_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer3->Tick += gcnew EventHandler(this, &OrdenForm::timer3_Tick);
				Timer3->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time4->Text = "";
			LB_Pos4->Text = "";
			LB_NameDoc4->Text = "";*/
			Timer4->Stop();
			Timer4->Tick -= gcnew EventHandler(this, &OrdenForm::timer4_Tick);
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

			/*LB_Time5->Text = (order->time_print).ToString();
			LB_Pos5->Text = "5";
			LB_NameDoc5->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer4->Stop();
				Timer4->Tick -= gcnew EventHandler(this, &OrdenForm::timer4_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer4->Tick += gcnew EventHandler(this, &OrdenForm::timer4_Tick);
				Timer4->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time5->Text = "";
			LB_Pos5->Text = "";
			LB_NameDoc5->Text = "";*/
			Timer5->Stop();
			Timer5->Tick -= gcnew EventHandler(this, &OrdenForm::timer5_Tick);
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

			/*LB_Time6->Text = (order->time_print).ToString();
			LB_Pos6->Text = "6";
			LB_NameDoc6->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer5->Stop();
				Timer5->Tick -= gcnew EventHandler(this, &OrdenForm::timer5_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer5->Tick += gcnew EventHandler(this, &OrdenForm::timer5_Tick);
				Timer5->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time6->Text = "";
			LB_Pos6->Text = "";
			LB_NameDoc6->Text = "";*/
			Timer6->Stop();
			Timer6->Tick -= gcnew EventHandler(this, &OrdenForm::timer6_Tick);
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

			/*LB_Time7->Text = (order->time_print).ToString();
			LB_Pos7->Text = "7";
			LB_NameDoc7->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer6->Stop();
				Timer6->Tick -= gcnew EventHandler(this, &OrdenForm::timer6_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer6->Tick += gcnew EventHandler(this, &OrdenForm::timer6_Tick);
				Timer6->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time7->Text = "";
			LB_Pos7->Text = "";
			LB_NameDoc7->Text = "";*/
			Timer7->Stop();
			Timer7->Tick -= gcnew EventHandler(this, &OrdenForm::timer7_Tick);
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

			/*LB_Time8->Text = (order->time_print).ToString();
			LB_Pos8->Text = "8";
			LB_NameDoc8->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer7->Stop();
				Timer7->Tick -= gcnew EventHandler(this, &OrdenForm::timer7_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer7->Tick += gcnew EventHandler(this, &OrdenForm::timer7_Tick);
				Timer7->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time8->Text = "";
			LB_Pos8->Text = "";
			LB_NameDoc8->Text = "";*/
			Timer8->Stop();
			Timer8->Tick -= gcnew EventHandler(this, &OrdenForm::timer8_Tick);
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

			/*LB_Time9->Text = (order->time_print).ToString();
			LB_Pos9->Text = "9";
			LB_NameDoc9->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer8->Stop();
				Timer8->Tick -= gcnew EventHandler(this, &OrdenForm::timer8_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer8->Tick += gcnew EventHandler(this, &OrdenForm::timer8_Tick);
				Timer8->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time9->Text = "";
			LB_Pos9->Text = "";
			LB_NameDoc9->Text = "";*/
			Timer9->Stop();
			Timer9->Tick -= gcnew EventHandler(this, &OrdenForm::timer9_Tick);
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

			/*LB_Time10->Text = (order->time_print).ToString();
			LB_Pos10->Text = "10";
			LB_NameDoc10->Text = time_order->PDF_NAME;*/

			Order^ time_order11 = Controller::QueryFileByPosition(1);
			if (time_order11->status_order == "Listo") {
				Timer9->Stop();
				Timer9->Tick -= gcnew EventHandler(this, &OrdenForm::timer9_Tick);

				SpoolerMinus();
				order->num_spooler = time_order->num_spooler - 1;

				Controller::UpdateCola(order);

				Timer9->Tick += gcnew EventHandler(this, &OrdenForm::timer9_Tick);
				Timer9->Start();
			}
			else {
				Controller::UpdateCola(order);
			}
		}
		else {
			/*LB_Time10->Text = "";
			LB_Pos10->Text = "";
			LB_NameDoc10->Text = "";*/
			Timer10->Stop();
			Timer10->Tick -= gcnew EventHandler(this, &OrdenForm::timer10_Tick);
		}
	}
		   /*void IniciarReloj() {
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
		   }*/
};
}