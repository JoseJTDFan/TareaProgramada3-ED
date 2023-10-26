#pragma once
#include "Controller.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(Controller* cont)
		{
			this->controller = cont;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private: System::Windows::Forms::RadioButton^ radioButtonCliente;
	public:
	private: System::Windows::Forms::RadioButton^ radioButtonAdmi;
	private: System::Windows::Forms::Button^ IngresarButton;
	private: System::Windows::Forms::Label^ MensajeInicio;
	private: System::Windows::Forms::TextBox^ cedulaInicial;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	protected: Controller* controller;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->radioButtonCliente = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonAdmi = (gcnew System::Windows::Forms::RadioButton());
			this->IngresarButton = (gcnew System::Windows::Forms::Button());
			this->MensajeInicio = (gcnew System::Windows::Forms::Label());
			this->cedulaInicial = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonCliente
			// 
			this->radioButtonCliente->AutoSize = true;
			this->radioButtonCliente->Location = System::Drawing::Point(12, 12);
			this->radioButtonCliente->Name = L"radioButtonCliente";
			this->radioButtonCliente->Size = System::Drawing::Size(57, 17);
			this->radioButtonCliente->TabIndex = 0;
			this->radioButtonCliente->TabStop = true;
			this->radioButtonCliente->Text = L"Cliente";
			this->radioButtonCliente->UseVisualStyleBackColor = true;
			// 
			// radioButtonAdmi
			// 
			this->radioButtonAdmi->AutoSize = true;
			this->radioButtonAdmi->Location = System::Drawing::Point(12, 35);
			this->radioButtonAdmi->Name = L"radioButtonAdmi";
			this->radioButtonAdmi->Size = System::Drawing::Size(88, 17);
			this->radioButtonAdmi->TabIndex = 1;
			this->radioButtonAdmi->TabStop = true;
			this->radioButtonAdmi->Text = L"Administrador";
			this->radioButtonAdmi->UseVisualStyleBackColor = true;
			// 
			// IngresarButton
			// 
			this->IngresarButton->Location = System::Drawing::Point(7, 83);
			this->IngresarButton->Name = L"IngresarButton";
			this->IngresarButton->Size = System::Drawing::Size(89, 21);
			this->IngresarButton->TabIndex = 2;
			this->IngresarButton->Text = L"Ingresar";
			this->IngresarButton->UseVisualStyleBackColor = true;
			this->IngresarButton->Click += gcnew System::EventHandler(this, &MyForm::IngresarButton_Click);
			// 
			// MensajeInicio
			// 
			this->MensajeInicio->AutoSize = true;
			this->MensajeInicio->Location = System::Drawing::Point(32, 119);
			this->MensajeInicio->Name = L"MensajeInicio";
			this->MensajeInicio->Size = System::Drawing::Size(0, 13);
			this->MensajeInicio->TabIndex = 3;
			// 
			// cedulaInicial
			// 
			this->cedulaInicial->Location = System::Drawing::Point(7, 57);
			this->cedulaInicial->Name = L"cedulaInicial";
			this->cedulaInicial->Size = System::Drawing::Size(88, 20);
			this->cedulaInicial->TabIndex = 4;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(120, 49);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(628, 238);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(620, 212);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(620, 212);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 22);
			this->button2->TabIndex = 6;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(247, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 21);
			this->button3->TabIndex = 7;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Location = System::Drawing::Point(4, 5);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(615, 206);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(607, 180);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(607, 180);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1103, 503);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->cedulaInicial);
			this->Controls->Add(this->MensajeInicio);
			this->Controls->Add(this->IngresarButton);
			this->Controls->Add(this->radioButtonAdmi);
			this->Controls->Add(this->radioButtonCliente);
			this->Name = L"MyForm";
			this->Text = L"McDonald\'s";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IngresarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		string cedula;
		String^ msj;
		bool esta;
		if (this->radioButtonAdmi->Checked==true || this->radioButtonCliente->Checked == true) {
			cedula = msclr::interop::marshal_as<string >(this->cedulaInicial->Text);
			esta = controller->clientes.esta_cliente(stoi(cedula));
			if (esta) {
				this->MensajeInicio->Text = "Esta :)";
			}
			else {
				this->MensajeInicio->Text = "No Esta :(";
			}
		}
	}
};
}
