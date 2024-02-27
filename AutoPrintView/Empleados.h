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
	using namespace System::Threading;

	/// <summary>
	/// Resumen de UserTableForm
	/// </summary>
	public ref class Empleados : public System::Windows::Forms::Form
	{
	public:
		Thread^ myThread;
		Empleados(void)
		{
			InitializeComponent();
			RefreshGrid();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Empleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ PB_imageREGIS;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ TB_correo;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::PictureBox^ PB_imageUSER;
	private: System::Windows::Forms::DataGridView^ dgvUserTableE;









	private: System::Windows::Forms::TextBox^ TB_dni;
	private: System::Windows::Forms::TextBox^ TB_lastname;
	private: System::Windows::Forms::TextBox^ TB_name;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ TB_correo_reg;

	private: System::Windows::Forms::Label^ label6;






	private: System::Windows::Forms::TextBox^ TB_dni_reg;

	private: System::Windows::Forms::TextBox^ TB_lastname_reg;


	private: System::Windows::Forms::TextBox^ TB_name_reg;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ TB_contraseña_reg;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ bregistro;
	private: System::Windows::Forms::Button^ beliminar;
	private: System::Windows::Forms::Button^ bmodificar;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ TB_Contra_reg;
	private: System::Windows::Forms::TextBox^ TB_Num_reg;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_correo;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DateTimePicker^ TB_Fecha_re;

	private: System::Windows::Forms::ComboBox^ TB_gender_registro;







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
			this->PB_imageREGIS = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->bmodificar = (gcnew System::Windows::Forms::Button());
			this->beliminar = (gcnew System::Windows::Forms::Button());
			this->TB_correo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PB_imageUSER = (gcnew System::Windows::Forms::PictureBox());
			this->dgvUserTableE = (gcnew System::Windows::Forms::DataGridView());
			this->UT_dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UT_correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TB_dni = (gcnew System::Windows::Forms::TextBox());
			this->TB_lastname = (gcnew System::Windows::Forms::TextBox());
			this->TB_name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->TB_Contra_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_Num_reg = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bregistro = (gcnew System::Windows::Forms::Button());
			this->TB_contraseña_reg = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TB_correo_reg = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TB_dni_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_lastname_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_name_reg = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TB_Fecha_re = (gcnew System::Windows::Forms::DateTimePicker());
			this->TB_gender_registro = (gcnew System::Windows::Forms::ComboBox());
			this->PB_imageREGIS->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTableE))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// PB_imageREGIS
			// 
			this->PB_imageREGIS->Controls->Add(this->tabPage1);
			this->PB_imageREGIS->Controls->Add(this->tabPage2);
			this->PB_imageREGIS->Location = System::Drawing::Point(1, 1);
			this->PB_imageREGIS->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_imageREGIS->Name = L"PB_imageREGIS";
			this->PB_imageREGIS->SelectedIndex = 0;
			this->PB_imageREGIS->Size = System::Drawing::Size(787, 546);
			this->PB_imageREGIS->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->bmodificar);
			this->tabPage1->Controls->Add(this->beliminar);
			this->tabPage1->Controls->Add(this->TB_correo);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->PB_imageUSER);
			this->tabPage1->Controls->Add(this->dgvUserTableE);
			this->tabPage1->Controls->Add(this->TB_dni);
			this->tabPage1->Controls->Add(this->TB_lastname);
			this->tabPage1->Controls->Add(this->TB_name);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(779, 517);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Empleados";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// bmodificar
			// 
			this->bmodificar->Location = System::Drawing::Point(167, 196);
			this->bmodificar->Margin = System::Windows::Forms::Padding(4);
			this->bmodificar->Name = L"bmodificar";
			this->bmodificar->Size = System::Drawing::Size(120, 26);
			this->bmodificar->TabIndex = 47;
			this->bmodificar->Text = L"Modificar";
			this->bmodificar->UseVisualStyleBackColor = true;
			this->bmodificar->Click += gcnew System::EventHandler(this, &Empleados::bmodificar_Click);
			// 
			// beliminar
			// 
			this->beliminar->Location = System::Drawing::Point(333, 193);
			this->beliminar->Margin = System::Windows::Forms::Padding(4);
			this->beliminar->Name = L"beliminar";
			this->beliminar->Size = System::Drawing::Size(100, 28);
			this->beliminar->TabIndex = 46;
			this->beliminar->Text = L"Eliminar";
			this->beliminar->UseVisualStyleBackColor = true;
			this->beliminar->Click += gcnew System::EventHandler(this, &Empleados::beliminar_Click);
			// 
			// TB_correo
			// 
			this->TB_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo->Location = System::Drawing::Point(187, 140);
			this->TB_correo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_correo->Name = L"TB_correo";
			this->TB_correo->Size = System::Drawing::Size(245, 24);
			this->TB_correo->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(61, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 18);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Correo";
			// 
			// PB_imageUSER
			// 
			this->PB_imageUSER->BackColor = System::Drawing::SystemColors::Control;
			this->PB_imageUSER->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PB_imageUSER->Location = System::Drawing::Point(495, 18);
			this->PB_imageUSER->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_imageUSER->Name = L"PB_imageUSER";
			this->PB_imageUSER->Size = System::Drawing::Size(199, 200);
			this->PB_imageUSER->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_imageUSER->TabIndex = 42;
			this->PB_imageUSER->TabStop = false;
			// 
			// dgvUserTableE
			// 
			this->dgvUserTableE->AllowUserToAddRows = false;
			this->dgvUserTableE->AllowUserToResizeRows = false;
			this->dgvUserTableE->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUserTableE->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->UT_dni,
					this->UT_nombre, this->UT_apellido, this->UT_correo
			});
			this->dgvUserTableE->Location = System::Drawing::Point(19, 242);
			this->dgvUserTableE->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvUserTableE->Name = L"dgvUserTableE";
			this->dgvUserTableE->ReadOnly = true;
			this->dgvUserTableE->RowHeadersVisible = false;
			this->dgvUserTableE->RowHeadersWidth = 82;
			this->dgvUserTableE->RowTemplate->Height = 33;
			this->dgvUserTableE->Size = System::Drawing::Size(737, 254);
			this->dgvUserTableE->TabIndex = 41;
			this->dgvUserTableE->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Empleados::dgvUserTable_CellClick);
			this->dgvUserTableE->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Empleados::dgvUserTable_CellContentClick);
			// 
			// UT_dni
			// 
			this->UT_dni->HeaderText = L"DNI";
			this->UT_dni->MinimumWidth = 10;
			this->UT_dni->Name = L"UT_dni";
			this->UT_dni->ReadOnly = true;
			this->UT_dni->Width = 90;
			// 
			// UT_nombre
			// 
			this->UT_nombre->HeaderText = L"Nombre";
			this->UT_nombre->MinimumWidth = 10;
			this->UT_nombre->Name = L"UT_nombre";
			this->UT_nombre->ReadOnly = true;
			this->UT_nombre->Width = 200;
			// 
			// UT_apellido
			// 
			this->UT_apellido->HeaderText = L"Apellidos";
			this->UT_apellido->MinimumWidth = 10;
			this->UT_apellido->Name = L"UT_apellido";
			this->UT_apellido->ReadOnly = true;
			this->UT_apellido->Width = 200;
			// 
			// UT_correo
			// 
			this->UT_correo->HeaderText = L"Correo";
			this->UT_correo->MinimumWidth = 10;
			this->UT_correo->Name = L"UT_correo";
			this->UT_correo->ReadOnly = true;
			this->UT_correo->Width = 300;
			// 
			// TB_dni
			// 
			this->TB_dni->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TB_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni->Location = System::Drawing::Point(187, 20);
			this->TB_dni->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_dni->Name = L"TB_dni";
			this->TB_dni->Size = System::Drawing::Size(168, 24);
			this->TB_dni->TabIndex = 38;
			// 
			// TB_lastname
			// 
			this->TB_lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname->Location = System::Drawing::Point(187, 100);
			this->TB_lastname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_lastname->Name = L"TB_lastname";
			this->TB_lastname->Size = System::Drawing::Size(203, 24);
			this->TB_lastname->TabIndex = 37;
			// 
			// TB_name
			// 
			this->TB_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name->Location = System::Drawing::Point(187, 60);
			this->TB_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_name->Name = L"TB_name";
			this->TB_name->Size = System::Drawing::Size(203, 24);
			this->TB_name->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 18);
			this->label4->TabIndex = 35;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(61, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 18);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Apellidos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(61, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 18);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Nombre";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->TB_gender_registro);
			this->tabPage2->Controls->Add(this->TB_Fecha_re);
			this->tabPage2->Controls->Add(this->TB_Contra_reg);
			this->tabPage2->Controls->Add(this->TB_Num_reg);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->bregistro);
			this->tabPage2->Controls->Add(this->TB_contraseña_reg);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->TB_correo_reg);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->TB_dni_reg);
			this->tabPage2->Controls->Add(this->TB_lastname_reg);
			this->tabPage2->Controls->Add(this->TB_name_reg);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(779, 517);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registrar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// TB_Contra_reg
			// 
			this->TB_Contra_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Contra_reg->Location = System::Drawing::Point(608, 265);
			this->TB_Contra_reg->Margin = System::Windows::Forms::Padding(4);
			this->TB_Contra_reg->Name = L"TB_Contra_reg";
			this->TB_Contra_reg->Size = System::Drawing::Size(149, 28);
			this->TB_Contra_reg->TabIndex = 70;
			// 
			// TB_Num_reg
			// 
			this->TB_Num_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Num_reg->Location = System::Drawing::Point(608, 211);
			this->TB_Num_reg->Margin = System::Windows::Forms::Padding(4);
			this->TB_Num_reg->Name = L"TB_Num_reg";
			this->TB_Num_reg->Size = System::Drawing::Size(149, 28);
			this->TB_Num_reg->TabIndex = 69;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(391, 211);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(81, 25);
			this->label16->TabIndex = 66;
			this->label16->Text = L"Numero";
			this->label16->Click += gcnew System::EventHandler(this, &Empleados::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(391, 266);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(199, 25);
			this->label15->TabIndex = 65;
			this->label15->Text = L"Confirmar contraseña";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(391, 160);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(189, 25);
			this->label13->TabIndex = 63;
			this->label13->Text = L"Fecha de nacimento";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(391, 113);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 25);
			this->label12->TabIndex = 62;
			this->label12->Text = L"Sexo";
			// 
			// bregistro
			// 
			this->bregistro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bregistro->Location = System::Drawing::Point(301, 357);
			this->bregistro->Margin = System::Windows::Forms::Padding(4);
			this->bregistro->Name = L"bregistro";
			this->bregistro->Size = System::Drawing::Size(125, 41);
			this->bregistro->TabIndex = 61;
			this->bregistro->Text = L"Registrar";
			this->bregistro->UseVisualStyleBackColor = true;
			this->bregistro->Click += gcnew System::EventHandler(this, &Empleados::bregistro_Click);
			// 
			// TB_contraseña_reg
			// 
			this->TB_contraseña_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_contraseña_reg->Location = System::Drawing::Point(139, 267);
			this->TB_contraseña_reg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_contraseña_reg->Name = L"TB_contraseña_reg";
			this->TB_contraseña_reg->Size = System::Drawing::Size(203, 28);
			this->TB_contraseña_reg->TabIndex = 60;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(19, 266);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 25);
			this->label11->TabIndex = 59;
			this->label11->Text = L"Contraseña";
			// 
			// TB_correo_reg
			// 
			this->TB_correo_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo_reg->Location = System::Drawing::Point(139, 212);
			this->TB_correo_reg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_correo_reg->Name = L"TB_correo_reg";
			this->TB_correo_reg->Size = System::Drawing::Size(211, 28);
			this->TB_correo_reg->TabIndex = 58;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 25);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Correo";
			// 
			// TB_dni_reg
			// 
			this->TB_dni_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni_reg->Location = System::Drawing::Point(139, 161);
			this->TB_dni_reg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_dni_reg->Name = L"TB_dni_reg";
			this->TB_dni_reg->Size = System::Drawing::Size(124, 28);
			this->TB_dni_reg->TabIndex = 52;
			// 
			// TB_lastname_reg
			// 
			this->TB_lastname_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname_reg->Location = System::Drawing::Point(139, 114);
			this->TB_lastname_reg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_lastname_reg->Name = L"TB_lastname_reg";
			this->TB_lastname_reg->Size = System::Drawing::Size(203, 28);
			this->TB_lastname_reg->TabIndex = 51;
			// 
			// TB_name_reg
			// 
			this->TB_name_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name_reg->Location = System::Drawing::Point(139, 72);
			this->TB_name_reg->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_name_reg->Name = L"TB_name_reg";
			this->TB_name_reg->Size = System::Drawing::Size(203, 28);
			this->TB_name_reg->TabIndex = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(19, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 25);
			this->label7->TabIndex = 49;
			this->label7->Text = L"DNI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(19, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 25);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Apellidos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(19, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 25);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Nombre";
			// 
			// TB_Fecha_re
			// 
			this->TB_Fecha_re->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->TB_Fecha_re->CalendarTitleForeColor = System::Drawing::SystemColors::GrayText;
			this->TB_Fecha_re->CustomFormat = L"";
			this->TB_Fecha_re->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Fecha_re->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->TB_Fecha_re->Location = System::Drawing::Point(608, 161);
			this->TB_Fecha_re->Name = L"TB_Fecha_re";
			this->TB_Fecha_re->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TB_Fecha_re->Size = System::Drawing::Size(149, 28);
			this->TB_Fecha_re->TabIndex = 71;
			this->TB_Fecha_re->Value = System::DateTime(2024, 2, 26, 16, 41, 26, 0);
			// 
			// TB_gender_registro
			// 
			this->TB_gender_registro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->TB_gender_registro->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TB_gender_registro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_gender_registro->FormattingEnabled = true;
			this->TB_gender_registro->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Femenino", L"Masculino" });
			this->TB_gender_registro->Location = System::Drawing::Point(608, 112);
			this->TB_gender_registro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TB_gender_registro->Name = L"TB_gender_registro";
			this->TB_gender_registro->Size = System::Drawing::Size(149, 30);
			this->TB_gender_registro->TabIndex = 72;
			// 
			// Empleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 545);
			this->Controls->Add(this->PB_imageREGIS);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Empleados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Empleados";
			this->Load += gcnew System::EventHandler(this, &Empleados::Empleados_Load);
			this->PB_imageREGIS->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTableE))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


		void RefreshGrid() {
			List<Employee^>^ userList = Controller::QueryAllEmployees(); ///

			dgvUserTableE->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				User^ user = userList[i];
				if (user != nullptr) {
					dgvUserTableE->Rows->Add(gcnew array<String^> {"" + user->Dni, user->Name,
						user->LastName, user->Email });
				}
			}

		}


	private: System::Void dgvUserTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int UserDNI = Int32::Parse(dgvUserTableE->Rows[dgvUserTableE->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		User^ newUser = Controller::QueryEmployeeByDNI(UserDNI);

		//if (newUser != nullptr) {
		TB_dni->Text = Convert::ToString(newUser->Dni);
		TB_name->Text = newUser->Name;
		TB_lastname->Text = newUser->LastName;
		TB_correo->Text = newUser->Email;
		if (newUser->Photo != nullptr) { // Siempre valida que la foto exista
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(newUser->Photo);
			PB_imageUSER->Image = Image::FromStream(ms);
		}
		else {
			PB_imageUSER->Image = nullptr;
			PB_imageUSER->Invalidate();
		}
		//}

	}



	private: System::Void bregistro_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			Employee^ newUser = gcnew Employee(); //instanciamos al nuevo usuario
			//newUser->User_Id = Int32::Parse(TB_userID_reg->Text);
			newUser->Name = TB_name_reg->Text;
			newUser->LastName = TB_lastname_reg->Text;
			newUser->Dni = Int32::Parse(TB_dni_reg->Text);
			newUser->Email = TB_correo_reg->Text;
			newUser->Password = TB_contraseña_reg->Text;
			newUser->Birthdate = TB_Fecha_re->Text;
			newUser->Gender = TB_gender_registro->Text;
			newUser->Phone_number = TB_Num_reg->Text;
			newUser->Password = TB_Contra_reg->Text;
			newUser->Money_in_wallet = 0;

			//Ya cargados los datos, lo pasamos como parámetro al método AddCustomer
			Controller::AddEmployee(newUser); //Añadimos al usuario

			RefreshGrid();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString());
		}
	}

	private: System::Void beliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Int32::Parse(TB_dni->Text);
		Controller::DeleteEmployee(id);
		RefreshGrid();
	}

	private: System::Void bmodificar_Click(System::Object^ sender, System::EventArgs^ e) {
		Employee^ newUser = gcnew Employee();
		//Para que no se borre lo que se va a modificar se requiere del actUser
		int UserDNI = Int32::Parse(dgvUserTableE->Rows[dgvUserTableE->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		User^ actUser = Controller::QueryEmployeeByDNI(UserDNI);
		//newUser->User_Id = Int32::Parse(TB_userID->Text);
		newUser->Name = TB_name->Text;
		newUser->LastName = TB_lastname->Text;
		newUser->Email = TB_correo->Text;

		newUser->Dni = actUser->Dni;
		newUser->Gender = actUser->Gender;
		newUser->Password = actUser->Password;
		newUser->Phone_number = actUser->Phone_number;
		newUser->Photo = actUser->Photo;
		newUser->Birthdate = actUser->Birthdate;

		if (PB_imageUSER != nullptr && PB_imageUSER->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			PB_imageUSER->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			newUser->Photo = ms->ToArray();
		}

		Controller::UpdateEmployee(newUser);
		RefreshGrid();

	}
	private: System::Void brnRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = TB_name->Text;
		String^ apellido = TB_lastname->Text;
		int DNI = Int32::Parse(TB_dni->Text);
		String^ correo = TB_correo->Text;

		Employee^ newUser = gcnew Employee();
		newUser->Name = nombre;
		newUser->LastName = apellido;
		newUser->Dni = DNI;
		newUser->Email = correo;


		RefreshGrid();

	}
	private: System::Void dgvUserTable_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Empleados_Load(System::Object^ sender, System::EventArgs^ e) {
		myThread = gcnew Thread(gcnew ThreadStart(this, &Empleados::MyRun));
		myThread->Start();
		RefreshGrid();
	}
		   delegate void MyDelegate();

		   void MyRun() {
			   Random^ rnd = gcnew Random();
			   while (true) {
				   try {
					   myThread->Sleep(30000);
					   Invoke(gcnew MyDelegate(this, &Empleados::RefreshGrid));
				   }
				   catch (Exception^ ex) {
					   return;
				   }
			   }
		   }
};
}
