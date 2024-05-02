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

	/// <summary>
	/// Resumen de frmVistaSupervisor
	/// </summary>
	public ref class frmVistaSupervisor : public System::Windows::Forms::Form
	{
	public:
		frmVistaSupervisor(void)
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
		~frmVistaSupervisor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(342, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tiempo restante para fin de jornada:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(20, 84);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(930, 331);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Información de Operarios";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmVistaSupervisor::groupBox1_Enter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Operario 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Operario 2";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(766, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 52);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Semáforos asignados";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(503, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Estado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(258, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Operario 1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(299, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ver reporte del tráfico";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVistaSupervisor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(592, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 45);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Enviar mensaje";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVistaSupervisor::button2_Click);
			// 
			// frmVistaSupervisor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1065, 550);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmVistaSupervisor";
			this->Text = L"frmVistaSupervisor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmBandejaEntrada^ ventanaReporte = gcnew frmBandejaEntrada();
		
		ventanaReporte->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEnvioMensajes^ ventanaMensajes = gcnew frmEnvioMensajes();
	
	ventanaMensajes->ShowDialog();
}
};
}
