#pragma once
#include "conexion.h"


namespace gestiondatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data;
	using namespace Data::SqlClient;

	/// <summary>
	/// Resumen de ventas
	/// </summary>
	public ref class ventas : public System::Windows::Forms::Form
	{
	public:
		ventas(void)
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
		~ventas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtcodproducto01;
	protected:

	private: System::Windows::Forms::TextBox^ txtdpicliente;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtnumventa;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;







	private: System::Windows::Forms::TextBox^ txtdescripcion;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtcantidadven;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txttotal;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtcategoria;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ txtcodproducto02;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtcodproducto03;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtcodproducto04;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtcodproducto05;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ListView^ listAccesorios;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ventas::typeid));
			this->txtcodproducto01 = (gcnew System::Windows::Forms::TextBox());
			this->txtdpicliente = (gcnew System::Windows::Forms::TextBox());
			this->txtnumventa = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtcantidadven = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtcategoria = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->txtcodproducto02 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtcodproducto03 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtcodproducto04 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtcodproducto05 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listAccesorios = (gcnew System::Windows::Forms::ListView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtcodproducto01
			// 
			this->txtcodproducto01->Location = System::Drawing::Point(167, 161);
			this->txtcodproducto01->Name = L"txtcodproducto01";
			this->txtcodproducto01->Size = System::Drawing::Size(282, 20);
			this->txtcodproducto01->TabIndex = 70;
			// 
			// txtdpicliente
			// 
			this->txtdpicliente->Location = System::Drawing::Point(166, 401);
			this->txtdpicliente->Name = L"txtdpicliente";
			this->txtdpicliente->Size = System::Drawing::Size(282, 20);
			this->txtdpicliente->TabIndex = 69;
			// 
			// txtnumventa
			// 
			this->txtnumventa->Location = System::Drawing::Point(167, 87);
			this->txtnumventa->Name = L"txtnumventa";
			this->txtnumventa->Size = System::Drawing::Size(282, 20);
			this->txtnumventa->TabIndex = 68;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 18);
			this->label3->TabIndex = 67;
			this->label3->Text = L"CodProducto 01:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(16, 403);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 18);
			this->label2->TabIndex = 66;
			this->label2->Text = L"DPI Cliente:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(16, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 18);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Número Venta:";
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(167, 362);
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(282, 20);
			this->txtdescripcion->TabIndex = 79;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(16, 364);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 18);
			this->label4->TabIndex = 78;
			this->label4->Text = L"Descripción:";
			// 
			// txtcantidadven
			// 
			this->txtcantidadven->Location = System::Drawing::Point(167, 326);
			this->txtcantidadven->Name = L"txtcantidadven";
			this->txtcantidadven->Size = System::Drawing::Size(282, 20);
			this->txtcantidadven->TabIndex = 81;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(16, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 18);
			this->label5->TabIndex = 80;
			this->label5->Text = L"Cantidad Vendida:";
			// 
			// txttotal
			// 
			this->txttotal->Location = System::Drawing::Point(166, 439);
			this->txttotal->Name = L"txttotal";
			this->txttotal->Size = System::Drawing::Size(282, 20);
			this->txttotal->TabIndex = 83;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(16, 441);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 18);
			this->label6->TabIndex = 82;
			this->label6->Text = L"Total:";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(880, 29);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 35);
			this->button5->TabIndex = 88;
			this->button5->Text = L"Herramientas";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(746, 29);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 35);
			this->button4->TabIndex = 87;
			this->button4->Text = L"Accesorios";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(617, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 35);
			this->button3->TabIndex = 86;
			this->button3->Text = L"Cocina";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(481, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 85;
			this->button2->Text = L"Hogar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(342, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 35);
			this->button1->TabIndex = 84;
			this->button1->Text = L"Electrónicos";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// txtcategoria
			// 
			this->txtcategoria->Location = System::Drawing::Point(167, 124);
			this->txtcategoria->Name = L"txtcategoria";
			this->txtcategoria->Size = System::Drawing::Size(282, 20);
			this->txtcategoria->TabIndex = 90;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(16, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 18);
			this->label7->TabIndex = 89;
			this->label7->Text = L"Categoría:";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(249, 475);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 35);
			this->button6->TabIndex = 91;
			this->button6->Text = L"Guardar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ventas::button6_Click);
			// 
			// txtcodproducto02
			// 
			this->txtcodproducto02->Location = System::Drawing::Point(167, 194);
			this->txtcodproducto02->Name = L"txtcodproducto02";
			this->txtcodproducto02->Size = System::Drawing::Size(282, 20);
			this->txtcodproducto02->TabIndex = 93;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(16, 196);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 18);
			this->label8->TabIndex = 92;
			this->label8->Text = L"CodProducto 02:";
			// 
			// txtcodproducto03
			// 
			this->txtcodproducto03->Location = System::Drawing::Point(167, 226);
			this->txtcodproducto03->Name = L"txtcodproducto03";
			this->txtcodproducto03->Size = System::Drawing::Size(282, 20);
			this->txtcodproducto03->TabIndex = 95;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(16, 228);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 18);
			this->label9->TabIndex = 94;
			this->label9->Text = L"CodProducto 03:";
			// 
			// txtcodproducto04
			// 
			this->txtcodproducto04->Location = System::Drawing::Point(167, 260);
			this->txtcodproducto04->Name = L"txtcodproducto04";
			this->txtcodproducto04->Size = System::Drawing::Size(282, 20);
			this->txtcodproducto04->TabIndex = 97;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(16, 262);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(143, 18);
			this->label10->TabIndex = 96;
			this->label10->Text = L"CodProducto 04:";
			// 
			// txtcodproducto05
			// 
			this->txtcodproducto05->Location = System::Drawing::Point(167, 293);
			this->txtcodproducto05->Name = L"txtcodproducto05";
			this->txtcodproducto05->Size = System::Drawing::Size(282, 20);
			this->txtcodproducto05->TabIndex = 99;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(16, 295);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(143, 18);
			this->label11->TabIndex = 98;
			this->label11->Text = L"CodProducto 05:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\salir.png";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(1265, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 100;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ventas::pictureBox2_Click);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"NumVenta";
			this->columnHeader1->Width = 71;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Categoría";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 145;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"CodProcuto01";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 92;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"CodProcuto02";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 91;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"CodProcuto03";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 92;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"CodProcuto04";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 91;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"CodProcuto05";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 92;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"CantidadVenta";
			this->columnHeader8->Width = 93;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Descripción";
			this->columnHeader9->Width = 80;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"DPI Cliente";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"TotalVenta";
			// 
			// listAccesorios
			// 
			this->listAccesorios->BackColor = System::Drawing::Color::DodgerBlue;
			this->listAccesorios->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listAccesorios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(11) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
					this->columnHeader8, this->columnHeader9, this->columnHeader10, this->columnHeader11
			});
			this->listAccesorios->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->listAccesorios->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listAccesorios->ForeColor = System::Drawing::Color::White;
			this->listAccesorios->HideSelection = false;
			this->listAccesorios->Location = System::Drawing::Point(466, 102);
			this->listAccesorios->Name = L"listAccesorios";
			this->listAccesorios->Size = System::Drawing::Size(845, 343);
			this->listAccesorios->TabIndex = 77;
			this->listAccesorios->UseCompatibleStateImageBehavior = false;
			this->listAccesorios->View = System::Windows::Forms::View::Details;
			this->listAccesorios->SelectedIndexChanged += gcnew System::EventHandler(this, &ventas::listAccesorios_SelectedIndexChanged);
			// 
			// ventas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(1315, 531);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->txtcodproducto05);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtcodproducto04);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtcodproducto03);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtcodproducto02);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->txtcategoria);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txttotal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtcantidadven);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtdescripcion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listAccesorios);
			this->Controls->Add(this->txtcodproducto01);
			this->Controls->Add(this->txtdpicliente);
			this->Controls->Add(this->txtnumventa);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ventas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ventas";
			this->Load += gcnew System::EventHandler(this, &ventas::ventas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insertarventas(Convert::ToInt64(txtnumventa->Text),
			txtcategoria->Text,
			Convert::ToInt64(txtcodproducto01->Text),
			Convert::ToInt64(txtcodproducto02->Text),
			Convert::ToInt64(txtcodproducto03->Text),
			Convert::ToInt64(txtcodproducto04->Text),
			Convert::ToInt64(txtcodproducto05->Text),
			Convert::ToInt64(txtcantidadven->Text),
			txtdescripcion->Text,
			Convert::ToInt64(txtdpicliente->Text),
			Convert::ToInt64(txttotal->Text));

		MessageBox::Show("Registro guardado exitosamente");

		//Limpiar textbox
		txtnumventa->Text = "";
		txtcategoria->Text = "";
		txtcodproducto01->Text = "";
		txtcodproducto02->Text = "";
		txtcodproducto03->Text = "";
		txtcodproducto04->Text = "";
		txtcodproducto05->Text = "";
		txtcantidadven->Text = "";
		txtdescripcion->Text = "";
		txtdpicliente->Text = "";
		txttotal->Text = "";
	}
private: System::Void ventas_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void listAccesorios_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
