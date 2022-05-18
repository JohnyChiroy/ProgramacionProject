#pragma once
#include "conexion.h"
#include "inventario.h"
#include "consulta.h"

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
	/// Resumen de administrar
	/// </summary>
	public ref class inventario : public System::Windows::Forms::Form
	{
	public:
		inventario(void)
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
		~inventario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtcodproducto;
	private: System::Windows::Forms::TextBox^ txtcantidad;
	private: System::Windows::Forms::TextBox^ txtdescripcion;
	private: System::Windows::Forms::TextBox^ txtmarca;
	private: System::Windows::Forms::TextBox^ txtmodelo;
	private: System::Windows::Forms::TextBox^ txtprecos;
	private: System::Windows::Forms::TextBox^ txtprecven;

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inventario::typeid));
			this->txtcodproducto = (gcnew System::Windows::Forms::TextBox());
			this->txtcantidad = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtmarca = (gcnew System::Windows::Forms::TextBox());
			this->txtmodelo = (gcnew System::Windows::Forms::TextBox());
			this->txtprecos = (gcnew System::Windows::Forms::TextBox());
			this->txtprecven = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtcodproducto
			// 
			this->txtcodproducto->Location = System::Drawing::Point(431, 144);
			this->txtcodproducto->Name = L"txtcodproducto";
			this->txtcodproducto->Size = System::Drawing::Size(315, 20);
			this->txtcodproducto->TabIndex = 0;
			// 
			// txtcantidad
			// 
			this->txtcantidad->Location = System::Drawing::Point(431, 183);
			this->txtcantidad->Name = L"txtcantidad";
			this->txtcantidad->Size = System::Drawing::Size(315, 20);
			this->txtcantidad->TabIndex = 1;
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(431, 222);
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(315, 20);
			this->txtdescripcion->TabIndex = 2;
			// 
			// txtmarca
			// 
			this->txtmarca->Location = System::Drawing::Point(431, 264);
			this->txtmarca->Name = L"txtmarca";
			this->txtmarca->Size = System::Drawing::Size(315, 20);
			this->txtmarca->TabIndex = 3;
			// 
			// txtmodelo
			// 
			this->txtmodelo->Location = System::Drawing::Point(431, 304);
			this->txtmodelo->Name = L"txtmodelo";
			this->txtmodelo->Size = System::Drawing::Size(315, 20);
			this->txtmodelo->TabIndex = 4;
			// 
			// txtprecos
			// 
			this->txtprecos->Location = System::Drawing::Point(431, 345);
			this->txtprecos->Name = L"txtprecos";
			this->txtprecos->Size = System::Drawing::Size(315, 20);
			this->txtprecos->TabIndex = 5;
			// 
			// txtprecven
			// 
			this->txtprecven->Location = System::Drawing::Point(431, 383);
			this->txtprecven->Name = L"txtprecven";
			this->txtprecven->Size = System::Drawing::Size(315, 20);
			this->txtprecven->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(259, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 18);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Código de Producto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(259, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Cantidad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(259, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Descripción:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(259, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Marca:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(259, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Modelo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(259, 344);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 18);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Precio Costo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(259, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 18);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Precio Venta:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(243, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(329, 32);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Inventario de Productos";
			this->label8->Click += gcnew System::EventHandler(this, &inventario::label8_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(68, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 35);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Electrónicos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &inventario::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(68, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Hogar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &inventario::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(68, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 35);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Cocina";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &inventario::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(68, 329);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 35);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Accesorios";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &inventario::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(68, 383);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 35);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Herramientas";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &inventario::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(50, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(152, 28);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Guardar en:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\salir.png";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(746, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &inventario::pictureBox1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(330, 81);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(185, 28);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Ingresar Datos";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(335, 447);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(204, 35);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Consultar o Modificar Datos";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &inventario::button6_Click_1);
			// 
			// inventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(797, 506);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtprecven);
			this->Controls->Add(this->txtprecos);
			this->Controls->Add(this->txtmodelo);
			this->Controls->Add(this->txtmarca);
			this->Controls->Add(this->txtdescripcion);
			this->Controls->Add(this->txtcantidad);
			this->Controls->Add(this->txtcodproducto);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"inventario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"administrar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insertar01(Convert::ToInt64(txtcodproducto->Text),
			Convert::ToInt64(txtcantidad->Text),
			txtdescripcion->Text,
			txtmarca->Text,
			txtmodelo->Text,
			Convert::ToInt64(txtprecos->Text),
			Convert::ToInt64(txtprecven->Text));

		MessageBox::Show("Registro guardado exitosamente");

		//Limpiar textbox
		txtcodproducto->Text = "";
		txtcantidad->Text = "";
		txtdescripcion->Text = "";
		txtmarca->Text = "";
		txtmodelo->Text = "";
		txtprecos->Text = "";
		txtprecven->Text = "";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.Insertar02(Convert::ToInt64(txtcodproducto->Text),
		Convert::ToInt64(txtcantidad->Text),
		txtdescripcion->Text,
		txtmarca->Text,
		txtmodelo->Text,
		Convert::ToInt64(txtprecos->Text),
		Convert::ToInt64(txtprecven->Text));

	MessageBox::Show("Registro guardado exitosamente");

	//Limpiar textbox
	txtcodproducto->Text = "";
	txtcantidad->Text = "";
	txtdescripcion->Text = "";
	txtmarca->Text = "";
	txtmodelo->Text = "";
	txtprecos->Text = "";
	txtprecven->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.Insertar03(Convert::ToInt64(txtcodproducto->Text),
		Convert::ToInt64(txtcantidad->Text),
		txtdescripcion->Text,
		txtmarca->Text,
		txtmodelo->Text,
		Convert::ToInt64(txtprecos->Text),
		Convert::ToInt64(txtprecven->Text));

	MessageBox::Show("Registro guardado exitosamente");

	//Limpiar textbox
	txtcodproducto->Text = "";
	txtcantidad->Text = "";
	txtdescripcion->Text = "";
	txtmarca->Text = "";
	txtmodelo->Text = "";
	txtprecos->Text = "";
	txtprecven->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.Insertar04(Convert::ToInt64(txtcodproducto->Text),
		Convert::ToInt64(txtcantidad->Text),
		txtdescripcion->Text,
		txtmarca->Text,
		txtmodelo->Text,
		Convert::ToInt64(txtprecos->Text),
		Convert::ToInt64(txtprecven->Text));

	MessageBox::Show("Registro guardado exitosamente");

	//Limpiar textbox
	txtcodproducto->Text = "";
	txtcantidad->Text = "";
	txtdescripcion->Text = "";
	txtmarca->Text = "";
	txtmodelo->Text = "";
	txtprecos->Text = "";
	txtprecven->Text = "";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.Insertar05(Convert::ToInt64(txtcodproducto->Text),
		Convert::ToInt64(txtcantidad->Text),
		txtdescripcion->Text,
		txtmarca->Text,
		txtmodelo->Text,
		Convert::ToInt64(txtprecos->Text),
		Convert::ToInt64(txtprecven->Text));

	MessageBox::Show("Registro guardado exitosamente");

	//Limpiar textbox
	txtcodproducto->Text = "";
	txtcantidad->Text = "";
	txtdescripcion->Text = "";
	txtmarca->Text = "";
	txtmodelo->Text = "";
	txtprecos->Text = "";
	txtprecven->Text = "";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::consulta^ comp = gcnew gestiondatos::consulta();
	comp->Show();
}
};
}
