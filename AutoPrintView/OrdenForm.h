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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_id_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_dni_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_name_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_doc_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_status_impri;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_id_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_dni_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_name_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_doc_listo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgv_status_listo;


























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrdenForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnShowList = (gcnew System::Windows::Forms::Button());
			this->dgvOrdenes_imprimiendo = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->BT_PDFrecogido = (gcnew System::Windows::Forms::Button());
			this->dgvOrdenes_listo = (gcnew System::Windows::Forms::DataGridView());
			this->dgv_id_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_dni_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_name_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_doc_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_status_impri = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_id_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_dni_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_name_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_doc_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_status_listo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->tabPage1->Controls->Add(this->pictureBox1);
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
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(761, 309);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// btnShowList
			// 
			this->btnShowList->Location = System::Drawing::Point(327, 383);
			this->btnShowList->Name = L"btnShowList";
			this->btnShowList->Size = System::Drawing::Size(167, 64);
			this->btnShowList->TabIndex = 45;
			this->btnShowList->Text = L"Mostrar en pantalla";
			this->btnShowList->UseVisualStyleBackColor = true;
			this->btnShowList->Click += gcnew System::EventHandler(this, &OrdenForm::btnShowList_Click);
			// 
			// dgvOrdenes_imprimiendo
			// 
			this->dgvOrdenes_imprimiendo->AllowUserToAddRows = false;
			this->dgvOrdenes_imprimiendo->AllowUserToResizeRows = false;
			this->dgvOrdenes_imprimiendo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdenes_imprimiendo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgv_id_impri,
					this->dgv_dni_impri, this->dgv_name_impri, this->dgv_doc_impri, this->dgv_status_impri
			});
			this->dgvOrdenes_imprimiendo->Location = System::Drawing::Point(35, 41);
			this->dgvOrdenes_imprimiendo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvOrdenes_imprimiendo->Name = L"dgvOrdenes_imprimiendo";
			this->dgvOrdenes_imprimiendo->ReadOnly = true;
			this->dgvOrdenes_imprimiendo->RowHeadersVisible = false;
			this->dgvOrdenes_imprimiendo->RowHeadersWidth = 82;
			this->dgvOrdenes_imprimiendo->RowTemplate->Height = 33;
			this->dgvOrdenes_imprimiendo->Size = System::Drawing::Size(724, 254);
			this->dgvOrdenes_imprimiendo->TabIndex = 44;
			this->dgvOrdenes_imprimiendo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrdenes_imprimiendo_CellClick);
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
			this->dgvOrdenes_listo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdenes_listo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgv_id_listo,
					this->dgv_dni_listo, this->dgv_name_listo, this->dgv_doc_listo, this->dgv_status_listo
			});
			this->dgvOrdenes_listo->Location = System::Drawing::Point(6, 75);
			this->dgvOrdenes_listo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvOrdenes_listo->Name = L"dgvOrdenes_listo";
			this->dgvOrdenes_listo->ReadOnly = true;
			this->dgvOrdenes_listo->RowHeadersVisible = false;
			this->dgvOrdenes_listo->RowHeadersWidth = 82;
			this->dgvOrdenes_listo->RowTemplate->Height = 33;
			this->dgvOrdenes_listo->Size = System::Drawing::Size(799, 432);
			this->dgvOrdenes_listo->TabIndex = 46;
			this->dgvOrdenes_listo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrdenes_listo_CellClick);
			// 
			// dgv_id_impri
			// 
			this->dgv_id_impri->HeaderText = L"Código";
			this->dgv_id_impri->MinimumWidth = 6;
			this->dgv_id_impri->Name = L"dgv_id_impri";
			this->dgv_id_impri->ReadOnly = true;
			this->dgv_id_impri->Width = 125;
			// 
			// dgv_dni_impri
			// 
			this->dgv_dni_impri->HeaderText = L"DNI";
			this->dgv_dni_impri->MinimumWidth = 10;
			this->dgv_dni_impri->Name = L"dgv_dni_impri";
			this->dgv_dni_impri->ReadOnly = true;
			this->dgv_dni_impri->Width = 90;
			// 
			// dgv_name_impri
			// 
			this->dgv_name_impri->HeaderText = L"Nombre";
			this->dgv_name_impri->MinimumWidth = 10;
			this->dgv_name_impri->Name = L"dgv_name_impri";
			this->dgv_name_impri->ReadOnly = true;
			this->dgv_name_impri->Width = 200;
			// 
			// dgv_doc_impri
			// 
			this->dgv_doc_impri->HeaderText = L"Documento";
			this->dgv_doc_impri->MinimumWidth = 10;
			this->dgv_doc_impri->Name = L"dgv_doc_impri";
			this->dgv_doc_impri->ReadOnly = true;
			this->dgv_doc_impri->Width = 200;
			// 
			// dgv_status_impri
			// 
			this->dgv_status_impri->HeaderText = L"Estado";
			this->dgv_status_impri->MinimumWidth = 10;
			this->dgv_status_impri->Name = L"dgv_status_impri";
			this->dgv_status_impri->ReadOnly = true;
			this->dgv_status_impri->Width = 300;
			// 
			// dgv_id_listo
			// 
			this->dgv_id_listo->HeaderText = L"Código";
			this->dgv_id_listo->MinimumWidth = 6;
			this->dgv_id_listo->Name = L"dgv_id_listo";
			this->dgv_id_listo->ReadOnly = true;
			this->dgv_id_listo->Width = 125;
			// 
			// dgv_dni_listo
			// 
			this->dgv_dni_listo->HeaderText = L"DNI";
			this->dgv_dni_listo->MinimumWidth = 10;
			this->dgv_dni_listo->Name = L"dgv_dni_listo";
			this->dgv_dni_listo->ReadOnly = true;
			this->dgv_dni_listo->Width = 90;
			// 
			// dgv_name_listo
			// 
			this->dgv_name_listo->HeaderText = L"Nombre";
			this->dgv_name_listo->MinimumWidth = 10;
			this->dgv_name_listo->Name = L"dgv_name_listo";
			this->dgv_name_listo->ReadOnly = true;
			this->dgv_name_listo->Width = 200;
			// 
			// dgv_doc_listo
			// 
			this->dgv_doc_listo->HeaderText = L"Documento";
			this->dgv_doc_listo->MinimumWidth = 10;
			this->dgv_doc_listo->Name = L"dgv_doc_listo";
			this->dgv_doc_listo->ReadOnly = true;
			this->dgv_doc_listo->Width = 200;
			// 
			// dgv_status_listo
			// 
			this->dgv_status_listo->HeaderText = L"Estado";
			this->dgv_status_listo->MinimumWidth = 10;
			this->dgv_status_listo->Name = L"dgv_status_listo";
			this->dgv_status_listo->ReadOnly = true;
			this->dgv_status_listo->Width = 300;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_imprimiendo))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_listo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int collected_orderId = 0;

	private: System::Void OrdenForm_Load(System::Object^ sender, System::EventArgs^ e) {
		collected_orderId = 0;
	}
		   void ShowFilesImprimiendo() {
			   List<Order^>^ orderfiles = Controller::QueryAllFiles();
			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   dgvOrdenes_imprimiendo->Rows->Clear();
				   for (int i = 0; i < orderfiles->Count; i++) {
					   Order^ File_order = orderfiles[i];
					   //dgvOrdenes_imprimiendo es el nombre de la tabla de Imprimiendo
					   if (File_order->dni_history == Dni_Ahora) {
						   dgvOrdenes_imprimiendo->Rows->Add(gcnew array<String^>{
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
		   void ShowFilesListo() {
			   List<Order^>^ orderfiles = Controller::QueryAllFiles();
			   if (orderfiles != nullptr && orderfiles->Count > 0) {
				   dgvOrdenes_listo->Rows->Clear();
				   for (int i = 0; i < orderfiles->Count; i++) {
					   Order^ File_order = orderfiles[i];
					   //dgvOrdenes_listo es el nombre de la tabla de Listo
					   if (File_order->dni_history == Dni_Ahora) {
						   dgvOrdenes_listo->Rows->Add(gcnew array<String^>{
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
};
}
