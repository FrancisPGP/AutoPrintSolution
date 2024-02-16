#pragma once

namespace AutoPrintView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AutoPrintModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de BossGraphicsForm
	/// </summary>
	public ref class BossGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		int l = 0;
		int m = 0;
		int mi = 0;
		int j = 0;
		int v = 0;
		int s = 0;
		int d = 0;

		int b=0;
		int c = 0;
		BossGraphicsForm(void)
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
		~BossGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartIgresos;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ChartComparacion;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartIgresos = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->ChartComparacion = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartIgresos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartComparacion))->BeginInit();
			this->SuspendLayout();
			// 
			// chartIgresos
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartIgresos->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartIgresos->Legends->Add(legend3);
			this->chartIgresos->Location = System::Drawing::Point(57, 75);
			this->chartIgresos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chartIgresos->Name = L"chartIgresos";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"price";
			this->chartIgresos->Series->Add(series3);
			this->chartIgresos->Size = System::Drawing::Size(373, 246);
			this->chartIgresos->TabIndex = 0;
			this->chartIgresos->Text = L"chart1";
			// 
			// ChartComparacion
			// 
			chartArea4->Name = L"ChartArea1";
			this->ChartComparacion->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->ChartComparacion->Legends->Add(legend4);
			this->ChartComparacion->Location = System::Drawing::Point(485, 75);
			this->ChartComparacion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ChartComparacion->Name = L"ChartComparacion";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"color";
			this->ChartComparacion->Series->Add(series4);
			this->ChartComparacion->Size = System::Drawing::Size(373, 246);
			this->ChartComparacion->TabIndex = 1;
			this->ChartComparacion->Text = L"chart2";
			this->ChartComparacion->Click += gcnew System::EventHandler(this, &BossGraphicsForm::ChartComparacion_Click);
			// 
			// BossGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 458);
			this->Controls->Add(this->ChartComparacion);
			this->Controls->Add(this->chartIgresos);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"BossGraphicsForm";
			this->Text = L"Estadísticas";
			this->Load += gcnew System::EventHandler(this, &BossGraphicsForm::BossGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartIgresos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartComparacion))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BossGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Order^>^ orders=AutoPrintController::Controller::QueryAllFiles();
		for (int i = 0; i < orders->Count; i++) {
			if (orders[i]->date == "Lunes") {
				l = l + orders[i]->price;
			}
			else
			if (orders[i]->date == "Martes") {
					m = m + orders[i]->price;
			}
			else
			if (orders[i]->date == "Miercoles") {
						mi = mi + orders[i]->price;
			}
		   else if(orders[i]->date == "Jueves") {
			   j = j + orders[i]->price;
		   }
		   else if (orders[i]->date == "Viernes") {
				v = v + orders[i]->price;
			}
		   else if (orders[i]->date == "Sabado") {
				s = s + orders[i]->price;
			}
		   else if (orders[i]->date == "Domingo") {
				d = d + orders[i]->price;
			}
		}
		chartIgresos->Series["price"]->Points->AddXY("Lunes",l);
		chartIgresos->Series["price"]->Points->AddXY("Martes", m);
		chartIgresos->Series["price"]->Points->AddXY("Miercoles", mi);
		chartIgresos->Series["price"]->Points->AddXY("Jueves", j);
		chartIgresos->Series["price"]->Points->AddXY("Viernes", v);
		chartIgresos->Series["price"]->Points->AddXY("Sabado", s);
		chartIgresos->Series["price"]->Points->AddXY("Domingo", d);





		for (int i = 0; i < orders->Count; i++) {
			if (orders[i]->color_page == "Blanco y negro") {
				b++;
			}
			else {
				c++;
			}
		
		}
			ChartComparacion->Series["color"]->Points->AddXY("Blanco y negro: "+b, b);
			ChartComparacion->Series["color"]->Points->AddXY("Color: "+c, c);

		
	}
	private: System::Void ChartComparacion_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
