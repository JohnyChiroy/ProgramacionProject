#pragma once
#include "conexion.h"
#include "ingreso.h"

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
	/// Resumen de ingreso
	/// </summary>
	public ref class ingreso : public System::Windows::Forms::Form
	{
	public:
		ingreso(void)
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
		~ingreso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtdpi;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtcorreo;
	private: System::Windows::Forms::TextBox^ txtcontraseña;




	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ingreso::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtdpi = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtcontraseña = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(234, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INGRESO DE DATOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(237, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DPI:";
			this->label2->Click += gcnew System::EventHandler(this, &ingreso::label2_Click);
			// 
			// txtdpi
			// 
			this->txtdpi->Location = System::Drawing::Point(324, 95);
			this->txtdpi->Name = L"txtdpi";
			this->txtdpi->Size = System::Drawing::Size(149, 20);
			this->txtdpi->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(237, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Correo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(237, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Nombre:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(237, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Contraseña:";
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(324, 137);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(149, 20);
			this->txtnombre->TabIndex = 6;
			// 
			// txtcorreo
			// 
			this->txtcorreo->Location = System::Drawing::Point(324, 173);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(149, 20);
			this->txtcorreo->TabIndex = 7;
			// 
			// txtcontraseña
			// 
			this->txtcontraseña->Location = System::Drawing::Point(324, 209);
			this->txtcontraseña->Name = L"txtcontraseña";
			this->txtcontraseña->Size = System::Drawing::Size(149, 20);
			this->txtcontraseña->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(344, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 40);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ingreso::button1_Click);
			// 
			// ingreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(787, 456);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtcontraseña);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtdpi);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ingreso";
			this->Text = L"ingreso";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insertar(Convert::ToInt64(txtdpi->Text),
			txtnombre->Text,
			txtcorreo->Text,
			txtcontraseña->Text);
		//	txtCiudad->Text);


		MessageBox::Show("Registro guardado exitosamente");

	}
};
}
