#pragma once
#include "conexion.h"
#include "electronicos.h"
#include "hogar.h"
#include "cocina.h"
#include "accesorios.h"
#include "herramientas.h"

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

	protected:


	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtnumventa;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;









	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label6;








	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;















	private: System::Windows::Forms::TextBox^ txtcategoria;

	private: System::Windows::Forms::TextBox^ txtcodproducto01;

	private: System::Windows::Forms::TextBox^ txtcodproducto02;

	private: System::Windows::Forms::TextBox^ txtcodproducto03;

	private: System::Windows::Forms::TextBox^ txtcodproducto04;

	private: System::Windows::Forms::TextBox^ txtcodproducto05;

	private: System::Windows::Forms::TextBox^ txtcantidadven;

	private: System::Windows::Forms::TextBox^ txtdescripcion;

	private: System::Windows::Forms::TextBox^ txtdpicliente;

	private: System::Windows::Forms::TextBox^ txttotal;


private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;












private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::ListView^ listVentas;
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
			this->txtnumventa = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtcategoria = (gcnew System::Windows::Forms::TextBox());
			this->txtcodproducto01 = (gcnew System::Windows::Forms::TextBox());
			this->txtcodproducto02 = (gcnew System::Windows::Forms::TextBox());
			this->txtcodproducto03 = (gcnew System::Windows::Forms::TextBox());
			this->txtcodproducto04 = (gcnew System::Windows::Forms::TextBox());
			this->txtcodproducto05 = (gcnew System::Windows::Forms::TextBox());
			this->txtcantidadven = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtdpicliente = (gcnew System::Windows::Forms::TextBox());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->listVentas = (gcnew System::Windows::Forms::ListView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtnumventa
			// 
			this->txtnumventa->Location = System::Drawing::Point(167, 125);
			this->txtnumventa->Name = L"txtnumventa";
			this->txtnumventa->Size = System::Drawing::Size(218, 20);
			this->txtnumventa->TabIndex = 68;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 201);
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
			this->label2->Location = System::Drawing::Point(16, 433);
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
			this->label1->Location = System::Drawing::Point(16, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 18);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Número Venta:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(16, 399);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 18);
			this->label4->TabIndex = 78;
			this->label4->Text = L"Descripción:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(16, 366);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 18);
			this->label5->TabIndex = 80;
			this->label5->Text = L"Cantidad Vendida:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(16, 467);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 18);
			this->label6->TabIndex = 82;
			this->label6->Text = L"Total:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(16, 164);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 18);
			this->label7->TabIndex = 89;
			this->label7->Text = L"Categoría:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(16, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 18);
			this->label8->TabIndex = 92;
			this->label8->Text = L"CodProducto 02:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(16, 266);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 18);
			this->label9->TabIndex = 94;
			this->label9->Text = L"CodProducto 03:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(16, 300);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(143, 18);
			this->label10->TabIndex = 96;
			this->label10->Text = L"CodProducto 04:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(16, 333);
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
			// txtcategoria
			// 
			this->txtcategoria->Location = System::Drawing::Point(167, 162);
			this->txtcategoria->Name = L"txtcategoria";
			this->txtcategoria->Size = System::Drawing::Size(218, 20);
			this->txtcategoria->TabIndex = 103;
			// 
			// txtcodproducto01
			// 
			this->txtcodproducto01->Location = System::Drawing::Point(167, 199);
			this->txtcodproducto01->Name = L"txtcodproducto01";
			this->txtcodproducto01->Size = System::Drawing::Size(218, 20);
			this->txtcodproducto01->TabIndex = 104;
			// 
			// txtcodproducto02
			// 
			this->txtcodproducto02->Location = System::Drawing::Point(167, 232);
			this->txtcodproducto02->Name = L"txtcodproducto02";
			this->txtcodproducto02->Size = System::Drawing::Size(218, 20);
			this->txtcodproducto02->TabIndex = 105;
			// 
			// txtcodproducto03
			// 
			this->txtcodproducto03->Location = System::Drawing::Point(167, 264);
			this->txtcodproducto03->Name = L"txtcodproducto03";
			this->txtcodproducto03->Size = System::Drawing::Size(218, 20);
			this->txtcodproducto03->TabIndex = 106;
			// 
			// txtcodproducto04
			// 
			this->txtcodproducto04->Location = System::Drawing::Point(167, 298);
			this->txtcodproducto04->Name = L"txtcodproducto04";
			this->txtcodproducto04->Size = System::Drawing::Size(218, 20);
			this->txtcodproducto04->TabIndex = 107;
			// 
			// txtcodproducto05
			// 
			this->txtcodproducto05->Location = System::Drawing::Point(167, 331);
			this->txtcodproducto05->Name = L"txtcodproducto05";
			this->txtcodproducto05->Size = System::Drawing::Size(218, 20);
			this->txtcodproducto05->TabIndex = 108;
			// 
			// txtcantidadven
			// 
			this->txtcantidadven->Location = System::Drawing::Point(167, 364);
			this->txtcantidadven->Name = L"txtcantidadven";
			this->txtcantidadven->Size = System::Drawing::Size(218, 20);
			this->txtcantidadven->TabIndex = 109;
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(167, 397);
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(218, 20);
			this->txtdescripcion->TabIndex = 110;
			// 
			// txtdpicliente
			// 
			this->txtdpicliente->Location = System::Drawing::Point(167, 431);
			this->txtdpicliente->Name = L"txtdpicliente";
			this->txtdpicliente->Size = System::Drawing::Size(218, 20);
			this->txtdpicliente->TabIndex = 111;
			// 
			// txttotal
			// 
			this->txttotal->Location = System::Drawing::Point(167, 465);
			this->txttotal->Name = L"txttotal";
			this->txttotal->Size = System::Drawing::Size(218, 20);
			this->txttotal->TabIndex = 112;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(167, 500);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 35);
			this->button1->TabIndex = 124;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ventas::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(283, 500);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 125;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ventas::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(451, 500);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(359, 35);
			this->button3->TabIndex = 126;
			this->button3->Text = L"Consultar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ventas::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(859, 500);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(359, 35);
			this->button4->TabIndex = 127;
			this->button4->Text = L"Limpiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ventas::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(1092, 84);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 35);
			this->button5->TabIndex = 133;
			this->button5->Text = L"05-Herramientas";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ventas::button5_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(952, 84);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(126, 35);
			this->button8->TabIndex = 132;
			this->button8->Text = L"04-Accesorios";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ventas::button8_Click_1);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(813, 84);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(126, 35);
			this->button9->TabIndex = 131;
			this->button9->Text = L"03-Cocina";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ventas::button9_Click_1);
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(673, 84);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(126, 35);
			this->button10->TabIndex = 130;
			this->button10->Text = L"02-Hogar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &ventas::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(529, 84);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(126, 35);
			this->button11->TabIndex = 129;
			this->button11->Text = L"01-Electrónicos";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &ventas::button11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(624, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(124, 37);
			this->label12->TabIndex = 134;
			this->label12->Text = L"Ventas";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(317, 91);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(206, 18);
			this->label13->TabIndex = 135;
			this->label13->Text = L"Consultar o Modificar en:";
			// 
			// listVentas
			// 
			this->listVentas->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->listVentas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listVentas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(11) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10, this->columnHeader11
			});
			this->listVentas->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->listVentas->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listVentas->ForeColor = System::Drawing::Color::White;
			this->listVentas->HideSelection = false;
			this->listVentas->Location = System::Drawing::Point(391, 125);
			this->listVentas->Name = L"listVentas";
			this->listVentas->Size = System::Drawing::Size(912, 360);
			this->listVentas->TabIndex = 137;
			this->listVentas->UseCompatibleStateImageBehavior = false;
			this->listVentas->View = System::Windows::Forms::View::Details;
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
			this->columnHeader2->Width = 95;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"CodPro01";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 69;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"CodPro02";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 68;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"CodPro03";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 70;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"CodPro04";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 69;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"CodPro05";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 68;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"CantidadVenta";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 92;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Descripción";
			this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader9->Width = 118;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"DPI Cliente";
			this->columnHeader10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader10->Width = 114;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"TotalVenta";
			this->columnHeader11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader11->Width = 78;
			// 
			// ventas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(1315, 558);
			this->Controls->Add(this->listVentas);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txttotal);
			this->Controls->Add(this->txtdpicliente);
			this->Controls->Add(this->txtdescripcion);
			this->Controls->Add(this->txtcantidadven);
			this->Controls->Add(this->txtcodproducto05);
			this->Controls->Add(this->txtcodproducto04);
			this->Controls->Add(this->txtcodproducto03);
			this->Controls->Add(this->txtcodproducto02);
			this->Controls->Add(this->txtcodproducto01);
			this->Controls->Add(this->txtcategoria);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
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
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ id_venta; String^ categoria; String^ cod_producto01; String^ cod_producto02; String^ cod_producto03;
	String^ cod_producto04; String^ cod_producto05; String^ cantidadven; String^ descripcion; String^ dpi; String^ totalven;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "gestiondatos";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Pro = gcnew ListView();
	String^ sentencia = "SELECT * FROM VENTAS";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		id_venta = (reader["id_venta"]->ToString());
		categoria = (reader["categoria"]->ToString());
		cod_producto01 = (reader["cod_producto01"]->ToString());
		cod_producto02 = (reader["cod_producto02"]->ToString());
		cod_producto03 = (reader["cod_producto03"]->ToString());
		cod_producto04 = (reader["cod_producto04"]->ToString());
		cod_producto05 = (reader["cod_producto05"]->ToString());
		cantidadven = (reader["cantidadven"]->ToString());
		descripcion = (reader["descripcion"]->ToString());
		dpi = (reader["dpi"]->ToString());
		totalven = (reader["totalven"]->ToString());
		String^ srtNew1 = gcnew String(id_venta);
		String^ srtNew2 = gcnew String(categoria);
		String^ srtNew3 = gcnew String(cod_producto01);
		String^ srtNew4 = gcnew String(cod_producto02);
		String^ srtNew5 = gcnew String(cod_producto03);
		String^ srtNew6 = gcnew String(cod_producto04);
		String^ srtNew7 = gcnew String(cod_producto05);
		String^ srtNew8 = gcnew String(cantidadven);
		String^ srtNew9 = gcnew String(descripcion);
		String^ srtNew10 = gcnew String(dpi);
		String^ srtNew11 = gcnew String(totalven);
		ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView1->SubItems->Add(srtNew2);
		listView1->SubItems->Add(srtNew3);
		listView1->SubItems->Add(srtNew4);
		listView1->SubItems->Add(srtNew5);
		listView1->SubItems->Add(srtNew6);
		listView1->SubItems->Add(srtNew7);
		listView1->SubItems->Add(srtNew8);
		listView1->SubItems->Add(srtNew9);
		listView1->SubItems->Add(srtNew10);
		listView1->SubItems->Add(srtNew11);
		this->listVentas->Items->Add(listView1);
	}
	cn->Close();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listVentas->Items->Clear();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;

	if (txtnumventa->Text == "") {
		MessageBox::Show("Debe ingresar el Número de Venta para actualizar");

	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ categoria; int cod_producto01; int cod_producto02; int cod_producto03;
		int cod_producto04; int cod_producto05; int cantidadven; String^ descripcion; int long long dpi; int totalven;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update VENTAS set categoria=@categoria, cod_producto01=@cod_producto01, cod_producto02=@cod_producto02, cod_producto03=@cod_producto03, cod_producto04=@cod_producto04, cod_producto05=@cod_producto05, cantidadven=@cantidadven, descripcion=@descripcion, dpi=@dpi, totalven=@totalven where id_venta=@id_venta";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_venta", Convert::ToInt64(txtnumventa->Text));
		ejecutar->Parameters->AddWithValue("@categoria", txtcategoria->Text);
		ejecutar->Parameters->AddWithValue("@cod_producto01", Convert::ToInt64(txtcodproducto01->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto02", Convert::ToInt64(txtcodproducto02->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto03", Convert::ToInt64(txtcodproducto03->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto04", Convert::ToInt64(txtcodproducto04->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto05", Convert::ToInt64(txtcodproducto05->Text));
		ejecutar->Parameters->AddWithValue("@cantidadven", Convert::ToInt64(txtcantidadven->Text));
		ejecutar->Parameters->AddWithValue("@descripcion", txtdescripcion->Text);
		ejecutar->Parameters->AddWithValue("@dpi", Convert::ToInt64(txtdpicliente->Text));
		ejecutar->Parameters->AddWithValue("@totalven", Convert::ToInt64(txttotal->Text));
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();

		MessageBox::Show("Registro actualizado exitosamente");

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
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;

	if (txtnumventa->Text == "") {
		MessageBox::Show("Debe ingresar el Número de Venta para actualizar");

	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ categoria; int cod_producto01; int cod_producto02; int cod_producto03;
		int cod_producto04; int cod_producto05; int cantidadven; String^ descripcion; int long long dpi; int totalven;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update VENTAS set categoria=@categoria, cod_producto01=@cod_producto01, cod_producto02=@cod_producto02, cod_producto03=@cod_producto03, cod_producto04=@cod_producto04, cod_producto05=@cod_producto05, cantidadven=@cantidadven, descripcion=@descripcion, dpi=@dpi, totalven=@totalven where id_venta=@id_venta";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_venta", Convert::ToInt64(txtnumventa->Text));
		ejecutar->Parameters->AddWithValue("@categoria", txtcategoria->Text);
		ejecutar->Parameters->AddWithValue("@cod_producto01", Convert::ToInt64(txtcodproducto01->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto02", Convert::ToInt64(txtcodproducto02->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto03", Convert::ToInt64(txtcodproducto03->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto04", Convert::ToInt64(txtcodproducto04->Text));
		ejecutar->Parameters->AddWithValue("@cod_producto05", Convert::ToInt64(txtcodproducto05->Text));
		ejecutar->Parameters->AddWithValue("@cantidadven", Convert::ToInt64(txtcantidadven->Text));
		ejecutar->Parameters->AddWithValue("@descripcion", txtdescripcion->Text);
		ejecutar->Parameters->AddWithValue("@dpi", Convert::ToInt64(txtdpicliente->Text));
		ejecutar->Parameters->AddWithValue("@totalven", Convert::ToInt64(txttotal->Text));
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();

		MessageBox::Show("Registro actualizado exitosamente");

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
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ id_venta; String^ categoria; String^ cod_producto01; String^ cod_producto02; String^ cod_producto03;
	String^ cod_producto04; String^ cod_producto05; String^ cantidadven; String^ descripcion; String^ dpi; String^ totalven;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "gestiondatos";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Pro = gcnew ListView();
	String^ sentencia = "SELECT * FROM VENTAS";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		id_venta = (reader["id_venta"]->ToString());
		categoria = (reader["categoria"]->ToString());
		cod_producto01 = (reader["cod_producto01"]->ToString());
		cod_producto02 = (reader["cod_producto02"]->ToString());
		cod_producto03 = (reader["cod_producto03"]->ToString());
		cod_producto04 = (reader["cod_producto04"]->ToString());
		cod_producto05 = (reader["cod_producto05"]->ToString());
		cantidadven = (reader["cantidadven"]->ToString());
		descripcion = (reader["descripcion"]->ToString());
		dpi = (reader["dpi"]->ToString());
		totalven = (reader["totalven"]->ToString());
		String^ srtNew1 = gcnew String(id_venta);
		String^ srtNew2 = gcnew String(categoria);
		String^ srtNew3 = gcnew String(cod_producto01);
		String^ srtNew4 = gcnew String(cod_producto02);
		String^ srtNew5 = gcnew String(cod_producto03);
		String^ srtNew6 = gcnew String(cod_producto04);
		String^ srtNew7 = gcnew String(cod_producto05);
		String^ srtNew8 = gcnew String(cantidadven);
		String^ srtNew9 = gcnew String(descripcion);
		String^ srtNew10 = gcnew String(dpi);
		String^ srtNew11 = gcnew String(totalven);
		ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView1->SubItems->Add(srtNew2);
		listView1->SubItems->Add(srtNew3);
		listView1->SubItems->Add(srtNew4);
		listView1->SubItems->Add(srtNew5);
		listView1->SubItems->Add(srtNew6);
		listView1->SubItems->Add(srtNew7);
		listView1->SubItems->Add(srtNew8);
		listView1->SubItems->Add(srtNew9);
		listView1->SubItems->Add(srtNew10);
		listView1->SubItems->Add(srtNew11);
		this->listVentas->Items->Add(listView1);
	}
	cn->Close();
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->listVentas->Items->Clear();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::electronicos^ comp = gcnew gestiondatos::electronicos();
	comp->Show();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::hogar^ comp = gcnew gestiondatos::hogar();
	comp->Show();
}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::cocina^ comp = gcnew gestiondatos::cocina();
	comp->Show();
}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::accesorios^ comp = gcnew gestiondatos::accesorios();
	comp->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::herramientas^ comp = gcnew gestiondatos::herramientas();
	comp->Show();
}
};
}
