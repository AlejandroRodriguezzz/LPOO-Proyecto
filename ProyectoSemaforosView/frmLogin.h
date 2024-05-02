#pragma once
#include "frmVistaSupervisor.h"

#include "frmVistaRH.h"

namespace ProyectoSemaforosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
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
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ operarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operarioToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ supervisorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ recursosHumanosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;








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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->operarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operarioToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supervisorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recursosHumanosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 67);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido";
			this->label1->Click += gcnew System::EventHandler(this, &frmLogin::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::SlateGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(398, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(361, 133);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Selecciona tu cargo para enviarte a la ventana correspondiente";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &frmLogin::label2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->operarioToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(807, 33);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// operarioToolStripMenuItem
			// 
			this->operarioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->operarioToolStripMenuItem1,
					this->supervisorToolStripMenuItem, this->recursosHumanosToolStripMenuItem, this->administradorToolStripMenuItem
			});
			this->operarioToolStripMenuItem->Name = L"operarioToolStripMenuItem";
			this->operarioToolStripMenuItem->Size = System::Drawing::Size(76, 29);
			this->operarioToolStripMenuItem->Text = L"Cargo";
			this->operarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLogin::operarioToolStripMenuItem_Click);
			// 
			// operarioToolStripMenuItem1
			// 
			this->operarioToolStripMenuItem1->Name = L"operarioToolStripMenuItem1";
			this->operarioToolStripMenuItem1->Size = System::Drawing::Size(266, 34);
			this->operarioToolStripMenuItem1->Text = L"Operario";
			// 
			// supervisorToolStripMenuItem
			// 
			this->supervisorToolStripMenuItem->Name = L"supervisorToolStripMenuItem";
			this->supervisorToolStripMenuItem->Size = System::Drawing::Size(266, 34);
			this->supervisorToolStripMenuItem->Text = L"Supervisor";
			this->supervisorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLogin::supervisorToolStripMenuItem_Click);
			// 
			// recursosHumanosToolStripMenuItem
			// 
			this->recursosHumanosToolStripMenuItem->Name = L"recursosHumanosToolStripMenuItem";
			this->recursosHumanosToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->recursosHumanosToolStripMenuItem->Text = L"Recursos Humanos";
			this->recursosHumanosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLogin::recursosHumanosToolStripMenuItem_Click);
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(266, 34);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(807, 551);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmLogin";
			this->Text = L"Sistema de Semáforos";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &frmLogin::frmLogin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void operarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void supervisorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmVistaSupervisor^ ventanaSupervisor = gcnew frmVistaSupervisor();
	ventanaSupervisor->MdiParent = this;
	ventanaSupervisor->Show();
}
private: System::Void recursosHumanosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmVistaRH^ ventanaRH = gcnew frmVistaRH();
	ventanaRH->MdiParent = this;
	ventanaRH->Show();

}
};
}
