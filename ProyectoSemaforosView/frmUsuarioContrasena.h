#pragma once
#include "frmVistaOperario.h"
#include "frmVistaAdministrador.h"
#include "frmVistaSupervisor.h"
#include "frmVistaRH.h"
namespace ProyectoSemaforosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoSemaforosController;
	using namespace System::Collections::Generic;
	using namespace ProyectoSemaforosModel;

	/// <summary>
	/// Resumen de frmUsuarioContrasena
	/// </summary>
	public ref class frmUsuarioContrasena : public System::Windows::Forms::Form
	{
	public:
		frmUsuarioContrasena(void)
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
		~frmUsuarioContrasena()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(131, 188);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			this->label1->Click += gcnew System::EventHandler(this, &frmUsuarioContrasena::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(91, 269);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(78, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(537, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"BIENVENIDO AL SISTEMA DE GESTIÓN";
			this->label3->Click += gcnew System::EventHandler(this, &frmUsuarioContrasena::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(267, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(267, 276);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 22);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmUsuarioContrasena::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(477, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 37);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ingresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmUsuarioContrasena::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(477, 245);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 37);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Limpiar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmUsuarioContrasena::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(195, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(304, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"VEHICULAR REMOTO";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(162, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(363, 29);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Ingrese sus datos y será enviado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(182, 417);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(328, 29);
			this->label6->TabIndex = 10;
			this->label6->Text = L"a su ventana correspondiente";
			// 
			// frmUsuarioContrasena
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(685, 480);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmUsuarioContrasena";
			this->Text = L"frmUsuarioContrasena";
			this->Load += gcnew System::EventHandler(this, &frmUsuarioContrasena::frmUsuarioContrasena_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmUsuarioContrasena_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	//***********Boton limpiar*********//
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "";//Limpio usuario
		this->textBox2->Text = "";//Limpio contrasena
	}

	//***********Boton cerrar*********//
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	
	//***********Boton Ingresar Usuario*********//
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cargo = "";
		String^ usuarioIng = this->textBox1->Text;//recupero y guardo el usuario ingresado
		String^ contrasenaIng = this->textBox2->Text;//recupero y guardo la contrasena ingresada
		EmpleadoController^ objEmpleadoController = gcnew EmpleadoController();
		List<Empleado^>^ listaEmpleados = objEmpleadoController->buscarUsuarioContrasena(usuarioIng, contrasenaIng, &cargo);
		if (cargo == "Operario") {
			frmVistaOperario^ ventanaVistaOperario = gcnew frmVistaOperario();
			ventanaVistaOperario->Show();
		}
		else if (cargo == "Administrador") {
			frmVistaAdministrador^ ventanaVistaAdministrador = gcnew frmVistaAdministrador();
			ventanaVistaAdministrador->Show();
		}
		else if (cargo == "Supervisor") {
			frmVistaSupervisor^ ventanaVistaSupervisor = gcnew frmVistaSupervisor();
			ventanaVistaSupervisor->Show();
		}
		else if (cargo == "RH") {
			frmVistaRH^ ventanaVistaRH = gcnew frmVistaRH();
			ventanaVistaRH->Show();
		}
		else {
			MessageBox::Show("El usuario o contraseña ingresados no son\ncorrectos. Intente otra vez");
		}
	}
};
}
