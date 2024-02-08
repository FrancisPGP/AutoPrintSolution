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
	/// Resumen de UserTableForm
	/// </summary>
	public ref class UserTableForm : public System::Windows::Forms::Form
	{
	public:
		UserTableForm(void)
		{
			InitializeComponent();
			RefreshGrid();

			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~UserTableForm()
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
	private: System::Windows::Forms::DataGridView^ dgvUserTable;








	private: System::Windows::Forms::TextBox^ TB_dni;
	private: System::Windows::Forms::TextBox^ TB_lastname;
	private: System::Windows::Forms::TextBox^ TB_name;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ TB_correo_reg;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TB_userID_reg;





	private: System::Windows::Forms::TextBox^ TB_dni_reg;

	private: System::Windows::Forms::TextBox^ TB_lastname_reg;


	private: System::Windows::Forms::TextBox^ TB_name_reg;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TB_contrase�a_reg;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ bregistro;
	private: System::Windows::Forms::Button^ beliminar;
	private: System::Windows::Forms::Button^ bmodificar;
	private: System::Windows::Forms::TextBox^ TB_userID;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ TB_Contra_reg;
	private: System::Windows::Forms::TextBox^ TB_Num_reg;
	private: System::Windows::Forms::TextBox^ TB_Fecha_re;
	private: System::Windows::Forms::TextBox^ TB_gender_registro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UT_correo;






	protected:







































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserTableForm::typeid));
			this->PB_imageREGIS = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->TB_userID = (gcnew System::Windows::Forms::TextBox());
			this->bmodificar = (gcnew System::Windows::Forms::Button());
			this->beliminar = (gcnew System::Windows::Forms::Button());
			this->TB_correo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PB_imageUSER = (gcnew System::Windows::Forms::PictureBox());
			this->dgvUserTable = (gcnew System::Windows::Forms::DataGridView());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->TB_Contra_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_Num_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_Fecha_re = (gcnew System::Windows::Forms::TextBox());
			this->TB_gender_registro = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bregistro = (gcnew System::Windows::Forms::Button());
			this->TB_contrase�a_reg = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TB_correo_reg = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TB_userID_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_dni_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_lastname_reg = (gcnew System::Windows::Forms::TextBox());
			this->TB_name_reg = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->PB_imageREGIS->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// PB_imageREGIS
			// 
			this->PB_imageREGIS->Controls->Add(this->tabPage1);
			this->PB_imageREGIS->Controls->Add(this->tabPage2);
			this->PB_imageREGIS->Location = System::Drawing::Point(1, 1);
			this->PB_imageREGIS->Margin = System::Windows::Forms::Padding(2);
			this->PB_imageREGIS->Name = L"PB_imageREGIS";
			this->PB_imageREGIS->SelectedIndex = 0;
			this->PB_imageREGIS->Size = System::Drawing::Size(590, 444);
			this->PB_imageREGIS->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->TB_userID);
			this->tabPage1->Controls->Add(this->bmodificar);
			this->tabPage1->Controls->Add(this->beliminar);
			this->tabPage1->Controls->Add(this->TB_correo);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->PB_imageUSER);
			this->tabPage1->Controls->Add(this->dgvUserTable);
			this->tabPage1->Controls->Add(this->TB_dni);
			this->tabPage1->Controls->Add(this->TB_lastname);
			this->tabPage1->Controls->Add(this->TB_name);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(582, 418);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Usuarios";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// TB_userID
			// 
			this->TB_userID->Location = System::Drawing::Point(141, 17);
			this->TB_userID->Name = L"TB_userID";
			this->TB_userID->Size = System::Drawing::Size(50, 20);
			this->TB_userID->TabIndex = 48;
			// 
			// bmodificar
			// 
			this->bmodificar->Location = System::Drawing::Point(125, 159);
			this->bmodificar->Name = L"bmodificar";
			this->bmodificar->Size = System::Drawing::Size(90, 21);
			this->bmodificar->TabIndex = 47;
			this->bmodificar->Text = L"Modificar";
			this->bmodificar->UseVisualStyleBackColor = true;
			this->bmodificar->Click += gcnew System::EventHandler(this, &UserTableForm::bmodificar_Click);
			// 
			// beliminar
			// 
			this->beliminar->Location = System::Drawing::Point(250, 157);
			this->beliminar->Name = L"beliminar";
			this->beliminar->Size = System::Drawing::Size(75, 23);
			this->beliminar->TabIndex = 46;
			this->beliminar->Text = L"Eliminar";
			this->beliminar->UseVisualStyleBackColor = true;
			this->beliminar->Click += gcnew System::EventHandler(this, &UserTableForm::beliminar_Click);
			// 
			// TB_correo
			// 
			this->TB_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo->Location = System::Drawing::Point(140, 112);
			this->TB_correo->Margin = System::Windows::Forms::Padding(2);
			this->TB_correo->Name = L"TB_correo";
			this->TB_correo->Size = System::Drawing::Size(185, 21);
			this->TB_correo->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(46, 115);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 15);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Correo";
			// 
			// PB_imageUSER
			// 
			this->PB_imageUSER->BackColor = System::Drawing::SystemColors::Control;
			this->PB_imageUSER->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PB_imageUSER->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_imageUSER.Image")));
			this->PB_imageUSER->Location = System::Drawing::Point(371, 15);
			this->PB_imageUSER->Margin = System::Windows::Forms::Padding(2);
			this->PB_imageUSER->Name = L"PB_imageUSER";
			this->PB_imageUSER->Size = System::Drawing::Size(150, 163);
			this->PB_imageUSER->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_imageUSER->TabIndex = 42;
			this->PB_imageUSER->TabStop = false;
			// 
			// dgvUserTable
			// 
			this->dgvUserTable->AllowUserToAddRows = false;
			this->dgvUserTable->AllowUserToResizeRows = false;
			this->dgvUserTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUserTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->UT_dni,
					this->UT_nombre, this->UT_apellido, this->UT_correo
			});
			this->dgvUserTable->Location = System::Drawing::Point(14, 197);
			this->dgvUserTable->Margin = System::Windows::Forms::Padding(2);
			this->dgvUserTable->Name = L"dgvUserTable";
			this->dgvUserTable->ReadOnly = true;
			this->dgvUserTable->RowHeadersVisible = false;
			this->dgvUserTable->RowHeadersWidth = 82;
			this->dgvUserTable->RowTemplate->Height = 33;
			this->dgvUserTable->Size = System::Drawing::Size(553, 206);
			this->dgvUserTable->TabIndex = 41;
			this->dgvUserTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserTableForm::dgvUserTable_CellClick);
			this->dgvUserTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserTableForm::dgvUserTable_CellContentClick);
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
			this->TB_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni->Location = System::Drawing::Point(140, 88);
			this->TB_dni->Margin = System::Windows::Forms::Padding(2);
			this->TB_dni->Name = L"TB_dni";
			this->TB_dni->Size = System::Drawing::Size(126, 21);
			this->TB_dni->TabIndex = 38;
			// 
			// TB_lastname
			// 
			this->TB_lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname->Location = System::Drawing::Point(140, 63);
			this->TB_lastname->Margin = System::Windows::Forms::Padding(2);
			this->TB_lastname->Name = L"TB_lastname";
			this->TB_lastname->Size = System::Drawing::Size(153, 21);
			this->TB_lastname->TabIndex = 37;
			// 
			// TB_name
			// 
			this->TB_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name->Location = System::Drawing::Point(140, 39);
			this->TB_name->Margin = System::Windows::Forms::Padding(2);
			this->TB_name->Name = L"TB_name";
			this->TB_name->Size = System::Drawing::Size(153, 21);
			this->TB_name->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(46, 90);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 15);
			this->label4->TabIndex = 35;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 66);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 15);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Apellidos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 41);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 15);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Id";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->TB_Contra_reg);
			this->tabPage2->Controls->Add(this->TB_Num_reg);
			this->tabPage2->Controls->Add(this->TB_Fecha_re);
			this->tabPage2->Controls->Add(this->TB_gender_registro);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->bregistro);
			this->tabPage2->Controls->Add(this->TB_contrase�a_reg);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->TB_correo_reg);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->TB_userID_reg);
			this->tabPage2->Controls->Add(this->TB_dni_reg);
			this->tabPage2->Controls->Add(this->TB_lastname_reg);
			this->tabPage2->Controls->Add(this->TB_name_reg);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(582, 418);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registrar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// TB_Contra_reg
			// 
			this->TB_Contra_reg->Location = System::Drawing::Point(426, 187);
			this->TB_Contra_reg->Name = L"TB_Contra_reg";
			this->TB_Contra_reg->Size = System::Drawing::Size(100, 20);
			this->TB_Contra_reg->TabIndex = 70;
			// 
			// TB_Num_reg
			// 
			this->TB_Num_reg->Location = System::Drawing::Point(399, 126);
			this->TB_Num_reg->Name = L"TB_Num_reg";
			this->TB_Num_reg->Size = System::Drawing::Size(100, 20);
			this->TB_Num_reg->TabIndex = 69;
			// 
			// TB_Fecha_re
			// 
			this->TB_Fecha_re->Location = System::Drawing::Point(423, 85);
			this->TB_Fecha_re->Name = L"TB_Fecha_re";
			this->TB_Fecha_re->Size = System::Drawing::Size(100, 20);
			this->TB_Fecha_re->TabIndex = 68;
			// 
			// TB_gender_registro
			// 
			this->TB_gender_registro->Location = System::Drawing::Point(399, 49);
			this->TB_gender_registro->Name = L"TB_gender_registro";
			this->TB_gender_registro->Size = System::Drawing::Size(100, 20);
			this->TB_gender_registro->TabIndex = 67;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(313, 129);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 13);
			this->label16->TabIndex = 66;
			this->label16->Text = L"Numero";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(313, 190);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(107, 13);
			this->label15->TabIndex = 65;
			this->label15->Text = L"Confirmar contrase�a";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(313, 92);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(104, 13);
			this->label13->TabIndex = 63;
			this->label13->Text = L"Fecha de nacimento";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(313, 56);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 13);
			this->label12->TabIndex = 62;
			this->label12->Text = L"Genero";
			// 
			// bregistro
			// 
			this->bregistro->Location = System::Drawing::Point(242, 284);
			this->bregistro->Name = L"bregistro";
			this->bregistro->Size = System::Drawing::Size(75, 23);
			this->bregistro->TabIndex = 61;
			this->bregistro->Text = L"registro";
			this->bregistro->UseVisualStyleBackColor = true;
			this->bregistro->Click += gcnew System::EventHandler(this, &UserTableForm::bregistro_Click);
			// 
			// TB_contrase�a_reg
			// 
			this->TB_contrase�a_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TB_contrase�a_reg->Location = System::Drawing::Point(115, 217);
			this->TB_contrase�a_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_contrase�a_reg->Name = L"TB_contrase�a_reg";
			this->TB_contrase�a_reg->Size = System::Drawing::Size(153, 23);
			this->TB_contrase�a_reg->TabIndex = 60;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(21, 219);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 17);
			this->label11->TabIndex = 59;
			this->label11->Text = L"Contrase�a";
			// 
			// TB_correo_reg
			// 
			this->TB_correo_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_correo_reg->Location = System::Drawing::Point(115, 184);
			this->TB_correo_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_correo_reg->Name = L"TB_correo_reg";
			this->TB_correo_reg->Size = System::Drawing::Size(185, 23);
			this->TB_correo_reg->TabIndex = 58;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 186);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 17);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Correo";
			// 
			// TB_userID_reg
			// 
			this->TB_userID_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_userID_reg->Location = System::Drawing::Point(115, 54);
			this->TB_userID_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_userID_reg->Name = L"TB_userID_reg";
			this->TB_userID_reg->Size = System::Drawing::Size(94, 23);
			this->TB_userID_reg->TabIndex = 56;
			// 
			// TB_dni_reg
			// 
			this->TB_dni_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_dni_reg->Location = System::Drawing::Point(115, 152);
			this->TB_dni_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_dni_reg->Name = L"TB_dni_reg";
			this->TB_dni_reg->Size = System::Drawing::Size(94, 23);
			this->TB_dni_reg->TabIndex = 52;
			// 
			// TB_lastname_reg
			// 
			this->TB_lastname_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_lastname_reg->Location = System::Drawing::Point(115, 119);
			this->TB_lastname_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_lastname_reg->Name = L"TB_lastname_reg";
			this->TB_lastname_reg->Size = System::Drawing::Size(153, 23);
			this->TB_lastname_reg->TabIndex = 51;
			// 
			// TB_name_reg
			// 
			this->TB_name_reg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_name_reg->Location = System::Drawing::Point(115, 87);
			this->TB_name_reg->Margin = System::Windows::Forms::Padding(2);
			this->TB_name_reg->Name = L"TB_name_reg";
			this->TB_name_reg->Size = System::Drawing::Size(153, 23);
			this->TB_name_reg->TabIndex = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 154);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 17);
			this->label7->TabIndex = 49;
			this->label7->Text = L"DNI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 122);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 17);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Apellidos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(21, 89);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 17);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Nombre";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(21, 56);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 17);
			this->label10->TabIndex = 46;
			this->label10->Text = L"Id";
			// 
			// UserTableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 443);
			this->Controls->Add(this->PB_imageREGIS);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserTableForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Usuarios";
			this->PB_imageREGIS->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_imageUSER))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserTable))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


		   void RefreshGrid() {
			   List<User^>^ userList = Controller::QueryAllCustomers(); ///

			   dgvUserTable->Rows->Clear();
			   for (int i = 0; i < userList->Count; i++) {
				   User^ user = userList[i];
				   if (user != nullptr) {
					   dgvUserTable->Rows->Add(gcnew array<String^> {"" + user->Dni, user->Name,
						   user->LastName, user->Email });
				   }
			   }

		   }


	private: System::Void dgvUserTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int UserDNI = Int32::Parse(dgvUserTable->Rows[dgvUserTable->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		User^ newUser = Controller::QueryCustomerByDNI(UserDNI);
		
		//if (newUser != nullptr) {
			TB_dni->Text = Convert::ToString (newUser->Dni);
			TB_name->Text = newUser->Name;
			TB_lastname->Text = newUser->LastName;
			TB_correo->Text = newUser->Email;
		//}
	
	}



	private: System::Void bregistro_Click(System::Object^ sender, System::EventArgs^ e) {
				

		User^ newUser = gcnew User(); //instanciamos al nuevo usuario
		//newUser->User_Id = Int32::Parse(TB_userID_reg->Text);
		newUser->Name = TB_name_reg->Text;
		newUser->LastName = TB_lastname_reg->Text;
		newUser->Dni = Int32::Parse(TB_dni_reg->Text);
		newUser->Email = TB_correo_reg->Text;
		newUser->Password = TB_contrase�a_reg->Text;
		newUser->Birthdate = Int32::Parse(TB_Fecha_re->Text);
		newUser->Gender = TB_gender_registro->Text;
		newUser->Phone_number = TB_Num_reg->Text;
		newUser->Password = TB_Contra_reg->Text;

		//Ya cargados los datos, lo pasamos como par�metro al m�todo AddCustomer
		Controller::AddCustomer(newUser); //A�adimos al usuario

		RefreshGrid();

	}

	private: System::Void beliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Int32::Parse(TB_dni->Text);
		Controller::DeleteCustomer(id);
		RefreshGrid();
	}

	private: System::Void bmodificar_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ newUser = gcnew User();
		//newUser->User_Id = Int32::Parse(TB_userID->Text);
		newUser->Name = TB_name->Text;
		newUser->LastName = TB_lastname->Text;
		newUser->Dni = Int32::Parse(TB_dni->Text);
		newUser->Email = TB_correo->Text;


		Controller::UpdateCustomer(newUser);
		RefreshGrid();

	}
private: System::Void brnRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		int userId = Int32::Parse(TB_userID->Text);
		String^ nombre = TB_name->Text;
		String^ apellido = TB_lastname->Text;
		int DNI = Int32::Parse(TB_dni->Text);
		String^ correo = TB_correo->Text;

		User^ newUser = gcnew User();
		newUser->User_Id = userId;
		newUser->Name = nombre;
		newUser->LastName = apellido;
		newUser->Dni = DNI;
		newUser->Email = correo;
	

		RefreshGrid();

	}
private: System::Void dgvUserTable_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
