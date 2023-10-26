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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Mantenimiento;
	private: System::Windows::Forms::ToolStripMenuItem^ insertarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restauranteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facturaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem1;
	private: System::Windows::Forms::Panel^ PanelMantenimiento;
	private: System::Windows::Forms::TextBox^ NombreMante;
	private: System::Windows::Forms::Label^ NombreLabelMante;



	private: System::Windows::Forms::TextBox^ CantidadMante;
	private: System::Windows::Forms::Label^ CantidadLabelMante;


	private: System::Windows::Forms::TextBox^ PrecioMante;
	private: System::Windows::Forms::Label^ PrecioLabelMante;


	private: System::Windows::Forms::TextBox^ CaloriasMante;
	private: System::Windows::Forms::Label^ CaloriasLabelMante;


	private: System::Windows::Forms::TextBox^ ProductoMante;
	private: System::Windows::Forms::Label^ ProductoLabelMante;


	private: System::Windows::Forms::TextBox^ MenuMante;
	private: System::Windows::Forms::Label^ MenuLabelMante;


	private: System::Windows::Forms::TextBox^ RestMante;
	private: System::Windows::Forms::Label^ RestLabelMante;


	private: System::Windows::Forms::TextBox^ CiudadMante;
	private: System::Windows::Forms::Label^ CiudadLabelMante;


	private: System::Windows::Forms::TextBox^ PaisMante;
	private: System::Windows::Forms::Label^ PaisLabelMante;


	private: System::Windows::Forms::Button^ InsertarDatosMante;
	private: System::Windows::Forms::Label^ EstadoLabelMante;











	protected: Controller* controller;
	protected: int opcionInsertar=0;
	protected: int opcionConsultar;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	protected: int opcionModificar;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Mantenimiento = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelMantenimiento = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->EstadoLabelMante = (gcnew System::Windows::Forms::Label());
			this->InsertarDatosMante = (gcnew System::Windows::Forms::Button());
			this->NombreMante = (gcnew System::Windows::Forms::TextBox());
			this->NombreLabelMante = (gcnew System::Windows::Forms::Label());
			this->CantidadMante = (gcnew System::Windows::Forms::TextBox());
			this->CantidadLabelMante = (gcnew System::Windows::Forms::Label());
			this->PrecioMante = (gcnew System::Windows::Forms::TextBox());
			this->PrecioLabelMante = (gcnew System::Windows::Forms::Label());
			this->CaloriasMante = (gcnew System::Windows::Forms::TextBox());
			this->CaloriasLabelMante = (gcnew System::Windows::Forms::Label());
			this->ProductoMante = (gcnew System::Windows::Forms::TextBox());
			this->ProductoLabelMante = (gcnew System::Windows::Forms::Label());
			this->MenuMante = (gcnew System::Windows::Forms::TextBox());
			this->MenuLabelMante = (gcnew System::Windows::Forms::Label());
			this->RestMante = (gcnew System::Windows::Forms::TextBox());
			this->RestLabelMante = (gcnew System::Windows::Forms::Label());
			this->CiudadMante = (gcnew System::Windows::Forms::TextBox());
			this->CiudadLabelMante = (gcnew System::Windows::Forms::Label());
			this->PaisMante = (gcnew System::Windows::Forms::TextBox());
			this->PaisLabelMante = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->PanelMantenimiento->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonCliente
			// 
			this->radioButtonCliente->AutoSize = true;
			this->radioButtonCliente->Checked = true;
			this->radioButtonCliente->Location = System::Drawing::Point(17, 133);
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
			this->radioButtonAdmi->Location = System::Drawing::Point(17, 156);
			this->radioButtonAdmi->Name = L"radioButtonAdmi";
			this->radioButtonAdmi->Size = System::Drawing::Size(88, 17);
			this->radioButtonAdmi->TabIndex = 1;
			this->radioButtonAdmi->Text = L"Administrador";
			this->radioButtonAdmi->UseVisualStyleBackColor = true;
			// 
			// IngresarButton
			// 
			this->IngresarButton->Location = System::Drawing::Point(12, 204);
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
			this->MensajeInicio->Location = System::Drawing::Point(14, 233);
			this->MensajeInicio->Name = L"MensajeInicio";
			this->MensajeInicio->Size = System::Drawing::Size(0, 13);
			this->MensajeInicio->TabIndex = 3;
			// 
			// cedulaInicial
			// 
			this->cedulaInicial->Location = System::Drawing::Point(12, 178);
			this->cedulaInicial->Name = L"cedulaInicial";
			this->cedulaInicial->Size = System::Drawing::Size(88, 20);
			this->cedulaInicial->TabIndex = 4;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Mantenimiento, this->reportesToolStripMenuItem,
					this->facturaciónToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactoToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1103, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// Mantenimiento
			// 
			this->Mantenimiento->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->insertarToolStripMenuItem,
					this->consultaToolStripMenuItem, this->modificarToolStripMenuItem
			});
			this->Mantenimiento->Name = L"Mantenimiento";
			this->Mantenimiento->Size = System::Drawing::Size(101, 20);
			this->Mantenimiento->Text = L"Mantenimiento";
			// 
			// insertarToolStripMenuItem
			// 
			this->insertarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paísToolStripMenuItem,
					this->ciudadToolStripMenuItem, this->restauranteToolStripMenuItem, this->menúToolStripMenuItem, this->productoToolStripMenuItem,
					this->clienteToolStripMenuItem, this->administradorToolStripMenuItem, this->compraToolStripMenuItem
			});
			this->insertarToolStripMenuItem->Name = L"insertarToolStripMenuItem";
			this->insertarToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->insertarToolStripMenuItem->Text = L"Insertar";
			// 
			// paísToolStripMenuItem
			// 
			this->paísToolStripMenuItem->Name = L"paísToolStripMenuItem";
			this->paísToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->paísToolStripMenuItem->Text = L"País";
			this->paísToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::paísToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ciudadToolStripMenuItem_Click);
			// 
			// restauranteToolStripMenuItem
			// 
			this->restauranteToolStripMenuItem->Name = L"restauranteToolStripMenuItem";
			this->restauranteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->restauranteToolStripMenuItem->Text = L"Restaurante";
			this->restauranteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restauranteToolStripMenuItem_Click);
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->menúToolStripMenuItem->Text = L"Menú";
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->productoToolStripMenuItem->Text = L"Producto";
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			// 
			// compraToolStripMenuItem
			// 
			this->compraToolStripMenuItem->Name = L"compraToolStripMenuItem";
			this->compraToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->compraToolStripMenuItem->Text = L"Compra";
			// 
			// consultaToolStripMenuItem
			// 
			this->consultaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísesToolStripMenuItem,
					this->ciudadesToolStripMenuItem, this->restaurantesToolStripMenuItem, this->menúToolStripMenuItem1, this->productosToolStripMenuItem,
					this->clienteToolStripMenuItem1, this->administradorToolStripMenuItem1
			});
			this->consultaToolStripMenuItem->Name = L"consultaToolStripMenuItem";
			this->consultaToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->consultaToolStripMenuItem->Text = L"Consulta";
			// 
			// paísesToolStripMenuItem
			// 
			this->paísesToolStripMenuItem->Name = L"paísesToolStripMenuItem";
			this->paísesToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->paísesToolStripMenuItem->Text = L"País";
			// 
			// ciudadesToolStripMenuItem
			// 
			this->ciudadesToolStripMenuItem->Name = L"ciudadesToolStripMenuItem";
			this->ciudadesToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->ciudadesToolStripMenuItem->Text = L"Ciudad";
			// 
			// restaurantesToolStripMenuItem
			// 
			this->restaurantesToolStripMenuItem->Name = L"restaurantesToolStripMenuItem";
			this->restaurantesToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->restaurantesToolStripMenuItem->Text = L"Restaurante";
			// 
			// menúToolStripMenuItem1
			// 
			this->menúToolStripMenuItem1->Name = L"menúToolStripMenuItem1";
			this->menúToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->menúToolStripMenuItem1->Text = L"Menú";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->productosToolStripMenuItem->Text = L"Producto";
			// 
			// clienteToolStripMenuItem1
			// 
			this->clienteToolStripMenuItem1->Name = L"clienteToolStripMenuItem1";
			this->clienteToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem1->Text = L"Cliente";
			// 
			// administradorToolStripMenuItem1
			// 
			this->administradorToolStripMenuItem1->Name = L"administradorToolStripMenuItem1";
			this->administradorToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem1->Text = L"Administrador";
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paísesToolStripMenuItem1,
					this->ciudadesToolStripMenuItem1, this->restaurantesToolStripMenuItem1, this->menúToolStripMenuItem2, this->productoToolStripMenuItem1,
					this->clienteToolStripMenuItem2, this->administradorToolStripMenuItem2, this->compraToolStripMenuItem1
			});
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			// 
			// paísesToolStripMenuItem1
			// 
			this->paísesToolStripMenuItem1->Name = L"paísesToolStripMenuItem1";
			this->paísesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->paísesToolStripMenuItem1->Text = L"País";
			// 
			// ciudadesToolStripMenuItem1
			// 
			this->ciudadesToolStripMenuItem1->Name = L"ciudadesToolStripMenuItem1";
			this->ciudadesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->ciudadesToolStripMenuItem1->Text = L"Ciudad";
			// 
			// restaurantesToolStripMenuItem1
			// 
			this->restaurantesToolStripMenuItem1->Name = L"restaurantesToolStripMenuItem1";
			this->restaurantesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->restaurantesToolStripMenuItem1->Text = L"Restaurant";
			this->restaurantesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::restaurantesToolStripMenuItem1_Click);
			// 
			// menúToolStripMenuItem2
			// 
			this->menúToolStripMenuItem2->Name = L"menúToolStripMenuItem2";
			this->menúToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->menúToolStripMenuItem2->Text = L"Menú";
			// 
			// productoToolStripMenuItem1
			// 
			this->productoToolStripMenuItem1->Name = L"productoToolStripMenuItem1";
			this->productoToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->productoToolStripMenuItem1->Text = L"Producto";
			// 
			// clienteToolStripMenuItem2
			// 
			this->clienteToolStripMenuItem2->Name = L"clienteToolStripMenuItem2";
			this->clienteToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem2->Text = L"Cliente";
			// 
			// administradorToolStripMenuItem2
			// 
			this->administradorToolStripMenuItem2->Name = L"administradorToolStripMenuItem2";
			this->administradorToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem2->Text = L"Administrador";
			// 
			// compraToolStripMenuItem1
			// 
			this->compraToolStripMenuItem1->Name = L"compraToolStripMenuItem1";
			this->compraToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->compraToolStripMenuItem1->Text = L"Compra";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->acercaDeToolStripMenuItem->Text = L"Acerca De";
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cerrarSesiónToolStripMenuItem_Click);
			// 
			// PanelMantenimiento
			// 
			this->PanelMantenimiento->Controls->Add(this->richTextBox1);
			this->PanelMantenimiento->Controls->Add(this->EstadoLabelMante);
			this->PanelMantenimiento->Controls->Add(this->InsertarDatosMante);
			this->PanelMantenimiento->Controls->Add(this->NombreMante);
			this->PanelMantenimiento->Controls->Add(this->NombreLabelMante);
			this->PanelMantenimiento->Controls->Add(this->CantidadMante);
			this->PanelMantenimiento->Controls->Add(this->CantidadLabelMante);
			this->PanelMantenimiento->Controls->Add(this->PrecioMante);
			this->PanelMantenimiento->Controls->Add(this->PrecioLabelMante);
			this->PanelMantenimiento->Controls->Add(this->CaloriasMante);
			this->PanelMantenimiento->Controls->Add(this->CaloriasLabelMante);
			this->PanelMantenimiento->Controls->Add(this->ProductoMante);
			this->PanelMantenimiento->Controls->Add(this->ProductoLabelMante);
			this->PanelMantenimiento->Controls->Add(this->MenuMante);
			this->PanelMantenimiento->Controls->Add(this->MenuLabelMante);
			this->PanelMantenimiento->Controls->Add(this->RestMante);
			this->PanelMantenimiento->Controls->Add(this->RestLabelMante);
			this->PanelMantenimiento->Controls->Add(this->CiudadMante);
			this->PanelMantenimiento->Controls->Add(this->CiudadLabelMante);
			this->PanelMantenimiento->Controls->Add(this->PaisMante);
			this->PanelMantenimiento->Controls->Add(this->PaisLabelMante);
			this->PanelMantenimiento->Location = System::Drawing::Point(111, 51);
			this->PanelMantenimiento->Name = L"PanelMantenimiento";
			this->PanelMantenimiento->Size = System::Drawing::Size(745, 195);
			this->PanelMantenimiento->TabIndex = 9;
			this->PanelMantenimiento->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(445, 34);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(246, 81);
			this->richTextBox1->TabIndex = 21;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// EstadoLabelMante
			// 
			this->EstadoLabelMante->AutoSize = true;
			this->EstadoLabelMante->Location = System::Drawing::Point(274, 157);
			this->EstadoLabelMante->Name = L"EstadoLabelMante";
			this->EstadoLabelMante->Size = System::Drawing::Size(0, 13);
			this->EstadoLabelMante->TabIndex = 19;
			// 
			// InsertarDatosMante
			// 
			this->InsertarDatosMante->Location = System::Drawing::Point(274, 127);
			this->InsertarDatosMante->Name = L"InsertarDatosMante";
			this->InsertarDatosMante->Size = System::Drawing::Size(106, 23);
			this->InsertarDatosMante->TabIndex = 18;
			this->InsertarDatosMante->Text = L"Insertar Datos";
			this->InsertarDatosMante->UseVisualStyleBackColor = true;
			this->InsertarDatosMante->Click += gcnew System::EventHandler(this, &MyForm::InsertarDatosMante_Click);
			// 
			// NombreMante
			// 
			this->NombreMante->Location = System::Drawing::Point(119, 14);
			this->NombreMante->Name = L"NombreMante";
			this->NombreMante->Size = System::Drawing::Size(100, 20);
			this->NombreMante->TabIndex = 17;
			// 
			// NombreLabelMante
			// 
			this->NombreLabelMante->AutoSize = true;
			this->NombreLabelMante->Location = System::Drawing::Point(15, 17);
			this->NombreLabelMante->Name = L"NombreLabelMante";
			this->NombreLabelMante->Size = System::Drawing::Size(44, 13);
			this->NombreLabelMante->TabIndex = 16;
			this->NombreLabelMante->Text = L"Nombre";
			// 
			// CantidadMante
			// 
			this->CantidadMante->Location = System::Drawing::Point(310, 95);
			this->CantidadMante->Name = L"CantidadMante";
			this->CantidadMante->Size = System::Drawing::Size(100, 20);
			this->CantidadMante->TabIndex = 15;
			// 
			// CantidadLabelMante
			// 
			this->CantidadLabelMante->AutoSize = true;
			this->CantidadLabelMante->Location = System::Drawing::Point(225, 98);
			this->CantidadLabelMante->Name = L"CantidadLabelMante";
			this->CantidadLabelMante->Size = System::Drawing::Size(49, 13);
			this->CantidadLabelMante->TabIndex = 14;
			this->CantidadLabelMante->Text = L"Cantidad";
			// 
			// PrecioMante
			// 
			this->PrecioMante->Location = System::Drawing::Point(310, 68);
			this->PrecioMante->Name = L"PrecioMante";
			this->PrecioMante->Size = System::Drawing::Size(100, 20);
			this->PrecioMante->TabIndex = 13;
			// 
			// PrecioLabelMante
			// 
			this->PrecioLabelMante->AutoSize = true;
			this->PrecioLabelMante->Location = System::Drawing::Point(225, 71);
			this->PrecioLabelMante->Name = L"PrecioLabelMante";
			this->PrecioLabelMante->Size = System::Drawing::Size(37, 13);
			this->PrecioLabelMante->TabIndex = 12;
			this->PrecioLabelMante->Text = L"Precio";
			// 
			// CaloriasMante
			// 
			this->CaloriasMante->Location = System::Drawing::Point(310, 42);
			this->CaloriasMante->Name = L"CaloriasMante";
			this->CaloriasMante->Size = System::Drawing::Size(100, 20);
			this->CaloriasMante->TabIndex = 11;
			// 
			// CaloriasLabelMante
			// 
			this->CaloriasLabelMante->AutoSize = true;
			this->CaloriasLabelMante->Location = System::Drawing::Point(225, 45);
			this->CaloriasLabelMante->Name = L"CaloriasLabelMante";
			this->CaloriasLabelMante->Size = System::Drawing::Size(46, 13);
			this->CaloriasLabelMante->TabIndex = 10;
			this->CaloriasLabelMante->Text = L"Calorías";
			// 
			// ProductoMante
			// 
			this->ProductoMante->Location = System::Drawing::Point(119, 150);
			this->ProductoMante->Name = L"ProductoMante";
			this->ProductoMante->Size = System::Drawing::Size(100, 20);
			this->ProductoMante->TabIndex = 9;
			// 
			// ProductoLabelMante
			// 
			this->ProductoLabelMante->AutoSize = true;
			this->ProductoLabelMante->Location = System::Drawing::Point(15, 153);
			this->ProductoLabelMante->Name = L"ProductoLabelMante";
			this->ProductoLabelMante->Size = System::Drawing::Size(86, 13);
			this->ProductoLabelMante->TabIndex = 8;
			this->ProductoLabelMante->Text = L"Código Producto";
			// 
			// MenuMante
			// 
			this->MenuMante->Location = System::Drawing::Point(119, 121);
			this->MenuMante->Name = L"MenuMante";
			this->MenuMante->Size = System::Drawing::Size(100, 20);
			this->MenuMante->TabIndex = 7;
			// 
			// MenuLabelMante
			// 
			this->MenuLabelMante->AutoSize = true;
			this->MenuLabelMante->Location = System::Drawing::Point(15, 124);
			this->MenuLabelMante->Name = L"MenuLabelMante";
			this->MenuLabelMante->Size = System::Drawing::Size(70, 13);
			this->MenuLabelMante->TabIndex = 6;
			this->MenuLabelMante->Text = L"Código Menú";
			// 
			// RestMante
			// 
			this->RestMante->Location = System::Drawing::Point(119, 95);
			this->RestMante->Name = L"RestMante";
			this->RestMante->Size = System::Drawing::Size(100, 20);
			this->RestMante->TabIndex = 5;
			// 
			// RestLabelMante
			// 
			this->RestLabelMante->AutoSize = true;
			this->RestLabelMante->Location = System::Drawing::Point(15, 98);
			this->RestLabelMante->Name = L"RestLabelMante";
			this->RestLabelMante->Size = System::Drawing::Size(101, 13);
			this->RestLabelMante->TabIndex = 4;
			this->RestLabelMante->Text = L"Código Restaurante";
			// 
			// CiudadMante
			// 
			this->CiudadMante->Location = System::Drawing::Point(119, 68);
			this->CiudadMante->Name = L"CiudadMante";
			this->CiudadMante->Size = System::Drawing::Size(100, 20);
			this->CiudadMante->TabIndex = 3;
			// 
			// CiudadLabelMante
			// 
			this->CiudadLabelMante->AutoSize = true;
			this->CiudadLabelMante->Location = System::Drawing::Point(15, 71);
			this->CiudadLabelMante->Name = L"CiudadLabelMante";
			this->CiudadLabelMante->Size = System::Drawing::Size(76, 13);
			this->CiudadLabelMante->TabIndex = 2;
			this->CiudadLabelMante->Text = L"Código Ciudad";
			// 
			// PaisMante
			// 
			this->PaisMante->Location = System::Drawing::Point(119, 42);
			this->PaisMante->Name = L"PaisMante";
			this->PaisMante->Size = System::Drawing::Size(100, 20);
			this->PaisMante->TabIndex = 1;
			// 
			// PaisLabelMante
			// 
			this->PaisLabelMante->AutoSize = true;
			this->PaisLabelMante->Location = System::Drawing::Point(15, 45);
			this->PaisLabelMante->Name = L"PaisLabelMante";
			this->PaisLabelMante->Size = System::Drawing::Size(65, 13);
			this->PaisLabelMante->TabIndex = 0;
			this->PaisLabelMante->Text = L"Código País";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1103, 503);
			this->Controls->Add(this->PanelMantenimiento);
			this->Controls->Add(this->cedulaInicial);
			this->Controls->Add(this->MensajeInicio);
			this->Controls->Add(this->IngresarButton);
			this->Controls->Add(this->radioButtonAdmi);
			this->Controls->Add(this->radioButtonCliente);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"McDonald\'s";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelMantenimiento->ResumeLayout(false);
			this->PanelMantenimiento->PerformLayout();
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
			if (this->radioButtonAdmi->Checked == true && this->radioButtonCliente->Checked == true) {
				this->MensajeInicio->Text = "Seleccione solo una opción";
			}
			else {
				cedula = msclr::interop::marshal_as<string >(this->cedulaInicial->Text);
				if (cedula != "" && controller->isInteger(cedula)) {
					if (this->radioButtonCliente->Checked) {
						esta = controller->getClientes().esta_cliente(stoi(cedula));
						if (esta) {
							this->menuStrip1->Show();
							this->insertarToolStripMenuItem->Visible=false;
							this->modificarToolStripMenuItem->Visible = false;
							this->radioButtonCliente->Visible = false;
							this->radioButtonAdmi->Visible = false;
							this->cedulaInicial->Visible = false;
							this->IngresarButton->Visible = false;
							this->MensajeInicio->Visible = false;
						}
						else {
							this->MensajeInicio->Text = "Cliente no registrado";
						}
					}
					else {
						esta = controller->getAdmin().esta_Administradores(stoi(cedula));
						if (esta) {
							this->menuStrip1->Show();
							this->radioButtonCliente->Visible = false;
							this->radioButtonAdmi->Visible = false;
							this->cedulaInicial->Visible = false;
							this->IngresarButton->Visible = false;
							this->MensajeInicio->Visible = false;
						}
						else {
							this->MensajeInicio->Text = "Administrador no registrado";
						}
					}
				}
				else {
					this->MensajeInicio->Text = "Ingrese una cédula";
				}
			}
		}
		else {
			this->MensajeInicio->Text = "Seleccione alguna opcion";
		}
	}
private: System::Void restaurantesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void restauranteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void paísToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionInsertar = 1;
	this->PanelMantenimiento->Visible = true;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	
}
private: System::Void InsertarDatosMante_Click(System::Object^ sender, System::EventArgs^ e) {
	this->EstadoLabelMante->Text = "";
	String^ msj;
	string mensaje;
	string pais, ciudad, rest, menu, producto, nombre, precio, calorias, cantidad;

	switch (this->opcionInsertar) {
	case 1:
			if (this->NombreMante->Text != "" && this->PaisMante->Text != "") {
				pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
				nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
				if (controller->isInteger(pais)) {
					mensaje = controller->insertarPais(stoi(pais), nombre);
					msj = gcnew String(mensaje.c_str());
					this->EstadoLabelMante->Text = msj;
				}
				else {
					this->EstadoLabelMante->Text = "Ingrese datos correctos.";
				}
			}
			else {
				this->EstadoLabelMante->Text = "Ingrese todos los datos.";
			}
			break;
		
	case 2: 
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad)) {
				mensaje = controller->insertarCiudad(stoi(pais), stoi(ciudad), nombre);
				msj = gcnew String(mensaje.c_str());
				this->EstadoLabelMante->Text = msj;
			}
			else {
				this->EstadoLabelMante->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->EstadoLabelMante->Text = "Ingrese todos los datos.";
		}
		break;
	}
	
}
private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionInsertar = 2;
	this->PanelMantenimiento->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->CiudadLabelMante->Visible = true;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
}
private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->menuStrip1->Hide();
	this->radioButtonCliente->Visible = true;
	this->radioButtonAdmi->Visible = true;
	this->cedulaInicial->Visible = true;
	this->IngresarButton->Visible = true;
	this->MensajeInicio->Visible = true;
	this->opcionInsertar = 0;
}
};
}
