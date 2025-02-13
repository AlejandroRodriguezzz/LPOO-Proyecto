#pragma once
#include "frmVistaAdministrador.h"
#include "frmVistaSupervisor.h"
#include "frmVistaRH.h"
#include "frmVistaOperario.h"
#include "frmUsuarioContrasena.h"
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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::MenuStrip^ menuStrip1;





	private: System::Windows::Forms::ToolStripMenuItem^ inicieSesi�nToolStripMenuItem;










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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->inicieSesi�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->inicieSesi�nToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1125, 28);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// inicieSesi�nToolStripMenuItem
			// 
			this->inicieSesi�nToolStripMenuItem->Name = L"inicieSesi�nToolStripMenuItem";
			this->inicieSesi�nToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->inicieSesi�nToolStripMenuItem->Text = L"Inicie sesi�n ";
			this->inicieSesi�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmLogin::inicieSesi�nToolStripMenuItem_Click);
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(1125, 636);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmLogin";
			this->Text = L"Sistema de Sem�foros";
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

	//***********Boton para ventana de iniciar sesion*********//
	private: System::Void inicieSesi�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmUsuarioContrasena^ ventanaUsuarioContrasena = gcnew frmUsuarioContrasena();
		ventanaUsuarioContrasena->MdiParent = this;
		ventanaUsuarioContrasena->Show();
	}
	};
	}
