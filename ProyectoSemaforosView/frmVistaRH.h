#pragma once
#include "frmBandejaEntrada.h"
#include "frmEnvioMensajes.h"
namespace ProyectoSemaforosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoSemaforosModel;
	using namespace System::Collections::Generic;
	using namespace ProyectoSemaforosController;



	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class frmVistaRH : public System::Windows::Forms::Form
	{
	public:
		frmVistaRH(void)
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
		~frmVistaRH()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;























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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(166, 30);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 26);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 33);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Nombre:";
			this->label1->Click += gcnew System::EventHandler(this, &frmVistaRH::label1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn2, this->Column1
			});
			this->dataGridView2->Location = System::Drawing::Point(37, 82);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(665, 194);
			this->dataGridView2->TabIndex = 12;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmVistaRH::dataGridView2_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Trabajador";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 150;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Área";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Teléfono";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(166, 293);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 27);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Generar reporte";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVistaRH::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(347, 293);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 27);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Enviar mensaje";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVistaRH::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(561, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmVistaRH::button3_Click);
			// 
			// frmVistaRH
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(854, 344);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmVistaRH";
			this->Text = L"Recursos Humanos";
			this->Load += gcnew System::EventHandler(this, &frmVistaRH::frmVistaRH_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: void MostrarGrilla(List<Empleado^>^ listaEmpleados) {
	this->dataGridView2->Rows->Clear();
	for (int i = 0; i < listaEmpleados->Count; i++) {
		Empleado^ objEmpleado = listaEmpleados[i];
		array<String^>^ fila = gcnew array <String^>(4);
		fila[0] = objEmpleado->getNombre();
		fila[1] = Convert::ToString(objEmpleado->getCodigo());
		fila[2] = objEmpleado->getArea();
		fila[3] = Convert::ToString(objEmpleado->getTelefono());
		this->dataGridView2->Rows->Add(fila);
	}
}


	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmBandejaEntrada^ ventanaReporte = gcnew frmBandejaEntrada();

	ventanaReporte->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEnvioMensajes^ ventanaMensajes = gcnew frmEnvioMensajes();

	ventanaMensajes->ShowDialog();

}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreEmpleado = this->textBox1->Text;
	EmpleadoController^ objEmpleado = gcnew EmpleadoController();
	List<Empleado^>^ listaEmpleados = objEmpleado->buscarEmpleadoxNombre(nombreEmpleado);
	if ((this->textBox1->Text)=="") {
		List<Empleado^>^ listaEmpleados = objEmpleado->buscarEmpleadoAll();
	}
	MostrarGrilla(listaEmpleados);
}

	  
private: System::Void frmVistaRH_Load(System::Object^ sender, System::EventArgs^ e) {
	EmpleadoController^ objEmpleado = gcnew EmpleadoController();
	List<Empleado^>^ listaEmpleados = objEmpleado->buscarEmpleadoAll();
	MostrarGrilla(listaEmpleados);
}
};
}
