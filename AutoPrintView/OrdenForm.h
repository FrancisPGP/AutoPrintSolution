#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrPDF_dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrPDF_nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrPDF__documento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrPDF_estado;
	private: System::Windows::Forms::DataGridView^ dgvOrdenes_listo;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Button^ BT_PDFrecogido;








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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dgvOrdenes_imprimiendo = (gcnew System::Windows::Forms::DataGridView());
			this->OrPDF_dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrPDF_nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrPDF__documento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OrPDF_estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->BT_PDFrecogido = (gcnew System::Windows::Forms::Button());
			this->dgvOrdenes_listo = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(932, 543);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dgvOrdenes_imprimiendo);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(924, 514);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Imprimiendo";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dgvOrdenes_imprimiendo
			// 
			this->dgvOrdenes_imprimiendo->AllowUserToAddRows = false;
			this->dgvOrdenes_imprimiendo->AllowUserToResizeRows = false;
			this->dgvOrdenes_imprimiendo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdenes_imprimiendo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->OrPDF_dni,
					this->OrPDF_nombre, this->OrPDF__documento, this->OrPDF_estado
			});
			this->dgvOrdenes_imprimiendo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvOrdenes_imprimiendo->Location = System::Drawing::Point(3, 3);
			this->dgvOrdenes_imprimiendo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvOrdenes_imprimiendo->Name = L"dgvOrdenes_imprimiendo";
			this->dgvOrdenes_imprimiendo->ReadOnly = true;
			this->dgvOrdenes_imprimiendo->RowHeadersVisible = false;
			this->dgvOrdenes_imprimiendo->RowHeadersWidth = 82;
			this->dgvOrdenes_imprimiendo->RowTemplate->Height = 33;
			this->dgvOrdenes_imprimiendo->Size = System::Drawing::Size(918, 508);
			this->dgvOrdenes_imprimiendo->TabIndex = 44;
			this->dgvOrdenes_imprimiendo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrdenes_imprimiendo_CellClick);
			// 
			// OrPDF_dni
			// 
			this->OrPDF_dni->HeaderText = L"DNI";
			this->OrPDF_dni->MinimumWidth = 10;
			this->OrPDF_dni->Name = L"OrPDF_dni";
			this->OrPDF_dni->ReadOnly = true;
			this->OrPDF_dni->Width = 90;
			// 
			// OrPDF_nombre
			// 
			this->OrPDF_nombre->HeaderText = L"Nombre";
			this->OrPDF_nombre->MinimumWidth = 10;
			this->OrPDF_nombre->Name = L"OrPDF_nombre";
			this->OrPDF_nombre->ReadOnly = true;
			this->OrPDF_nombre->Width = 200;
			// 
			// OrPDF__documento
			// 
			this->OrPDF__documento->HeaderText = L"Documento";
			this->OrPDF__documento->MinimumWidth = 10;
			this->OrPDF__documento->Name = L"OrPDF__documento";
			this->OrPDF__documento->ReadOnly = true;
			this->OrPDF__documento->Width = 200;
			// 
			// OrPDF_estado
			// 
			this->OrPDF_estado->HeaderText = L"Estado";
			this->OrPDF_estado->MinimumWidth = 10;
			this->OrPDF_estado->Name = L"OrPDF_estado";
			this->OrPDF_estado->ReadOnly = true;
			this->OrPDF_estado->Width = 300;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->BT_PDFrecogido);
			this->tabPage2->Controls->Add(this->dgvOrdenes_listo);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(924, 514);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Listo";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// BT_PDFrecogido
			// 
			this->BT_PDFrecogido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BT_PDFrecogido->Location = System::Drawing::Point(349, 13);
			this->BT_PDFrecogido->Name = L"BT_PDFrecogido";
			this->BT_PDFrecogido->Size = System::Drawing::Size(234, 44);
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
			this->dgvOrdenes_listo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dgvOrdenes_listo->Location = System::Drawing::Point(8, 75);
			this->dgvOrdenes_listo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvOrdenes_listo->Name = L"dgvOrdenes_listo";
			this->dgvOrdenes_listo->ReadOnly = true;
			this->dgvOrdenes_listo->RowHeadersVisible = false;
			this->dgvOrdenes_listo->RowHeadersWidth = 82;
			this->dgvOrdenes_listo->RowTemplate->Height = 33;
			this->dgvOrdenes_listo->Size = System::Drawing::Size(908, 426);
			this->dgvOrdenes_listo->TabIndex = 46;
			this->dgvOrdenes_listo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrdenForm::dgvOrdenes_listo_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"DNI";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 90;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 200;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Documento";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 200;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Estado";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 300;
			// 
			// OrdenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 543);
			this->Controls->Add(this->tabControl1);
			this->Name = L"OrdenForm";
			this->Text = L"Ordenes";
			this->Load += gcnew System::EventHandler(this, &OrdenForm::OrdenForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_imprimiendo))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdenes_listo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OrdenForm_Load(System::Object^ sender, System::EventArgs^ e) {

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

	}
	private: System::Void dgvOrdenes_listo_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvOrdenes_listo->SelectedCells->Count > 0 &&
			dgvOrdenes_listo->Rows[dgvOrdenes_listo->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr &&
			!String::IsNullOrEmpty(dgvOrdenes_listo->Rows[dgvOrdenes_listo->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString())) {

			// Solo ejecutar si hay una celda seleccionada y el valor no es nulo o vacío
			int dni_order = Int32::Parse(dgvOrdenes_listo->Rows[dgvOrdenes_listo->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

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
};
}
