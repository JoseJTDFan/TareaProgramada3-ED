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
private: System::Windows::Forms::RichTextBox^ TextoBuscar;
protected:

private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
private: System::Windows::Forms::TextBox^ CedulaMante;
private: System::Windows::Forms::Label^ CedulaLabel;
private: System::Windows::Forms::Button^ BuscarButton;
private: System::Windows::Forms::Panel^ ComprarPanel;
private: System::Windows::Forms::RadioButton^ LlevarRadioButton;
private: System::Windows::Forms::RadioButton^ ComerAcaRadioButton;



private: System::Windows::Forms::Button^ ModificarButton;
private: System::Windows::Forms::Button^ EliminarButton;
private: System::Windows::Forms::ToolStripMenuItem^ eliminarToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ paisToolStripMenuItem;

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
			this->eliminarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelMantenimiento = (gcnew System::Windows::Forms::Panel());
			this->ComprarPanel = (gcnew System::Windows::Forms::Panel());
			this->LlevarRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->ComerAcaRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->EstadoLabelMante = (gcnew System::Windows::Forms::Label());
			this->ModificarButton = (gcnew System::Windows::Forms::Button());
			this->EliminarButton = (gcnew System::Windows::Forms::Button());
			this->BuscarButton = (gcnew System::Windows::Forms::Button());
			this->CedulaMante = (gcnew System::Windows::Forms::TextBox());
			this->CedulaLabel = (gcnew System::Windows::Forms::Label());
			this->TextoBuscar = (gcnew System::Windows::Forms::RichTextBox());
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
			this->ComprarPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonCliente
			// 
			this->radioButtonCliente->AutoSize = true;
			this->radioButtonCliente->Checked = true;
			this->radioButtonCliente->Location = System::Drawing::Point(26, 205);
			this->radioButtonCliente->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButtonCliente->Name = L"radioButtonCliente";
			this->radioButtonCliente->Size = System::Drawing::Size(83, 24);
			this->radioButtonCliente->TabIndex = 0;
			this->radioButtonCliente->TabStop = true;
			this->radioButtonCliente->Text = L"Cliente";
			this->radioButtonCliente->UseVisualStyleBackColor = true;
			// 
			// radioButtonAdmi
			// 
			this->radioButtonAdmi->AutoSize = true;
			this->radioButtonAdmi->Location = System::Drawing::Point(26, 240);
			this->radioButtonAdmi->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radioButtonAdmi->Name = L"radioButtonAdmi";
			this->radioButtonAdmi->Size = System::Drawing::Size(132, 24);
			this->radioButtonAdmi->TabIndex = 1;
			this->radioButtonAdmi->Text = L"Administrador";
			this->radioButtonAdmi->UseVisualStyleBackColor = true;
			// 
			// IngresarButton
			// 
			this->IngresarButton->Location = System::Drawing::Point(18, 314);
			this->IngresarButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->IngresarButton->Name = L"IngresarButton";
			this->IngresarButton->Size = System::Drawing::Size(134, 32);
			this->IngresarButton->TabIndex = 2;
			this->IngresarButton->Text = L"Ingresar";
			this->IngresarButton->UseVisualStyleBackColor = true;
			this->IngresarButton->Click += gcnew System::EventHandler(this, &MyForm::IngresarButton_Click);
			// 
			// MensajeInicio
			// 
			this->MensajeInicio->AutoSize = true;
			this->MensajeInicio->Location = System::Drawing::Point(21, 358);
			this->MensajeInicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MensajeInicio->Name = L"MensajeInicio";
			this->MensajeInicio->Size = System::Drawing::Size(0, 20);
			this->MensajeInicio->TabIndex = 3;
			// 
			// cedulaInicial
			// 
			this->cedulaInicial->Location = System::Drawing::Point(18, 274);
			this->cedulaInicial->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cedulaInicial->Name = L"cedulaInicial";
			this->cedulaInicial->Size = System::Drawing::Size(130, 26);
			this->cedulaInicial->TabIndex = 4;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Mantenimiento, this->reportesToolStripMenuItem,
					this->facturaciónToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactoToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1654, 33);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// Mantenimiento
			// 
			this->Mantenimiento->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->insertarToolStripMenuItem,
					this->consultaToolStripMenuItem, this->modificarToolStripMenuItem, this->eliminarToolStripMenuItem
			});
			this->Mantenimiento->Name = L"Mantenimiento";
			this->Mantenimiento->Size = System::Drawing::Size(148, 29);
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
			this->insertarToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->insertarToolStripMenuItem->Text = L"Insertar";
			// 
			// paísToolStripMenuItem
			// 
			this->paísToolStripMenuItem->Name = L"paísToolStripMenuItem";
			this->paísToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->paísToolStripMenuItem->Text = L"País";
			this->paísToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::paísToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem
			// 
			this->ciudadToolStripMenuItem->Name = L"ciudadToolStripMenuItem";
			this->ciudadToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->ciudadToolStripMenuItem->Text = L"Ciudad";
			this->ciudadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ciudadToolStripMenuItem_Click);
			// 
			// restauranteToolStripMenuItem
			// 
			this->restauranteToolStripMenuItem->Name = L"restauranteToolStripMenuItem";
			this->restauranteToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->restauranteToolStripMenuItem->Text = L"Restaurante";
			this->restauranteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restauranteToolStripMenuItem_Click);
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->menúToolStripMenuItem->Text = L"Menú";
			this->menúToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menúToolStripMenuItem_Click);
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->productoToolStripMenuItem->Text = L"Producto";
			this->productoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::productoToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clienteToolStripMenuItem_Click);
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			this->administradorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::administradorToolStripMenuItem_Click);
			// 
			// compraToolStripMenuItem
			// 
			this->compraToolStripMenuItem->Name = L"compraToolStripMenuItem";
			this->compraToolStripMenuItem->Size = System::Drawing::Size(228, 34);
			this->compraToolStripMenuItem->Text = L"Compra";
			this->compraToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::compraToolStripMenuItem_Click);
			// 
			// consultaToolStripMenuItem
			// 
			this->consultaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->paísesToolStripMenuItem,
					this->ciudadesToolStripMenuItem, this->restaurantesToolStripMenuItem, this->menúToolStripMenuItem1, this->productosToolStripMenuItem,
					this->clienteToolStripMenuItem1, this->administradorToolStripMenuItem1
			});
			this->consultaToolStripMenuItem->Name = L"consultaToolStripMenuItem";
			this->consultaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->consultaToolStripMenuItem->Text = L"Consulta";
			// 
			// paísesToolStripMenuItem
			// 
			this->paísesToolStripMenuItem->Name = L"paísesToolStripMenuItem";
			this->paísesToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->paísesToolStripMenuItem->Text = L"País";
			this->paísesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::paísesToolStripMenuItem_Click);
			// 
			// ciudadesToolStripMenuItem
			// 
			this->ciudadesToolStripMenuItem->Name = L"ciudadesToolStripMenuItem";
			this->ciudadesToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->ciudadesToolStripMenuItem->Text = L"Ciudad";
			this->ciudadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ciudadesToolStripMenuItem_Click);
			// 
			// restaurantesToolStripMenuItem
			// 
			this->restaurantesToolStripMenuItem->Name = L"restaurantesToolStripMenuItem";
			this->restaurantesToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->restaurantesToolStripMenuItem->Text = L"Restaurante";
			this->restaurantesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restaurantesToolStripMenuItem_Click);
			// 
			// menúToolStripMenuItem1
			// 
			this->menúToolStripMenuItem1->Name = L"menúToolStripMenuItem1";
			this->menúToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->menúToolStripMenuItem1->Text = L"Menú";
			this->menúToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::menúToolStripMenuItem1_Click);
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->productosToolStripMenuItem->Text = L"Producto";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::productosToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem1
			// 
			this->clienteToolStripMenuItem1->Name = L"clienteToolStripMenuItem1";
			this->clienteToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->clienteToolStripMenuItem1->Text = L"Cliente";
			this->clienteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::clienteToolStripMenuItem1_Click);
			// 
			// administradorToolStripMenuItem1
			// 
			this->administradorToolStripMenuItem1->Name = L"administradorToolStripMenuItem1";
			this->administradorToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->administradorToolStripMenuItem1->Text = L"Administrador";
			this->administradorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::administradorToolStripMenuItem1_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paísesToolStripMenuItem1,
					this->ciudadesToolStripMenuItem1, this->restaurantesToolStripMenuItem1, this->menúToolStripMenuItem2, this->productoToolStripMenuItem1,
					this->clienteToolStripMenuItem2, this->administradorToolStripMenuItem2, this->compraToolStripMenuItem1
			});
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			// 
			// paísesToolStripMenuItem1
			// 
			this->paísesToolStripMenuItem1->Name = L"paísesToolStripMenuItem1";
			this->paísesToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->paísesToolStripMenuItem1->Text = L"País";
			// 
			// ciudadesToolStripMenuItem1
			// 
			this->ciudadesToolStripMenuItem1->Name = L"ciudadesToolStripMenuItem1";
			this->ciudadesToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->ciudadesToolStripMenuItem1->Text = L"Ciudad";
			// 
			// restaurantesToolStripMenuItem1
			// 
			this->restaurantesToolStripMenuItem1->Name = L"restaurantesToolStripMenuItem1";
			this->restaurantesToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->restaurantesToolStripMenuItem1->Text = L"Restaurant";
			this->restaurantesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::restaurantesToolStripMenuItem1_Click);
			// 
			// menúToolStripMenuItem2
			// 
			this->menúToolStripMenuItem2->Name = L"menúToolStripMenuItem2";
			this->menúToolStripMenuItem2->Size = System::Drawing::Size(270, 34);
			this->menúToolStripMenuItem2->Text = L"Menú";
			// 
			// productoToolStripMenuItem1
			// 
			this->productoToolStripMenuItem1->Name = L"productoToolStripMenuItem1";
			this->productoToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->productoToolStripMenuItem1->Text = L"Producto";
			// 
			// clienteToolStripMenuItem2
			// 
			this->clienteToolStripMenuItem2->Name = L"clienteToolStripMenuItem2";
			this->clienteToolStripMenuItem2->Size = System::Drawing::Size(270, 34);
			this->clienteToolStripMenuItem2->Text = L"Cliente";
			// 
			// administradorToolStripMenuItem2
			// 
			this->administradorToolStripMenuItem2->Name = L"administradorToolStripMenuItem2";
			this->administradorToolStripMenuItem2->Size = System::Drawing::Size(270, 34);
			this->administradorToolStripMenuItem2->Text = L"Administrador";
			// 
			// compraToolStripMenuItem1
			// 
			this->compraToolStripMenuItem1->Name = L"compraToolStripMenuItem1";
			this->compraToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->compraToolStripMenuItem1->Text = L"Compra";
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->paisToolStripMenuItem });
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->eliminarToolStripMenuItem->Text = L"Eliminar";
			// 
			// paisToolStripMenuItem
			// 
			this->paisToolStripMenuItem->Name = L"paisToolStripMenuItem";
			this->paisToolStripMenuItem->Size = System::Drawing::Size(144, 34);
			this->paisToolStripMenuItem->Text = L"Pais";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(98, 29);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(117, 29);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(107, 29);
			this->acercaDeToolStripMenuItem->Text = L"Acerca De";
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(100, 29);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(132, 29);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cerrarSesiónToolStripMenuItem_Click);
			// 
			// PanelMantenimiento
			// 
			this->PanelMantenimiento->Controls->Add(this->ComprarPanel);
			this->PanelMantenimiento->Controls->Add(this->ModificarButton);
			this->PanelMantenimiento->Controls->Add(this->EliminarButton);
			this->PanelMantenimiento->Controls->Add(this->BuscarButton);
			this->PanelMantenimiento->Controls->Add(this->CedulaMante);
			this->PanelMantenimiento->Controls->Add(this->CedulaLabel);
			this->PanelMantenimiento->Controls->Add(this->TextoBuscar);
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
			this->PanelMantenimiento->Location = System::Drawing::Point(166, 60);
			this->PanelMantenimiento->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->PanelMantenimiento->Name = L"PanelMantenimiento";
			this->PanelMantenimiento->Size = System::Drawing::Size(1118, 435);
			this->PanelMantenimiento->TabIndex = 9;
			this->PanelMantenimiento->Visible = false;
			// 
			// ComprarPanel
			// 
			this->ComprarPanel->Controls->Add(this->LlevarRadioButton);
			this->ComprarPanel->Controls->Add(this->ComerAcaRadioButton);
			this->ComprarPanel->Controls->Add(this->EstadoLabelMante);
			this->ComprarPanel->Location = System::Drawing::Point(357, 235);
			this->ComprarPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ComprarPanel->Name = L"ComprarPanel";
			this->ComprarPanel->Size = System::Drawing::Size(258, 88);
			this->ComprarPanel->TabIndex = 27;
			// 
			// LlevarRadioButton
			// 
			this->LlevarRadioButton->AutoSize = true;
			this->LlevarRadioButton->Location = System::Drawing::Point(14, 15);
			this->LlevarRadioButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LlevarRadioButton->Name = L"LlevarRadioButton";
			this->LlevarRadioButton->Size = System::Drawing::Size(107, 24);
			this->LlevarRadioButton->TabIndex = 21;
			this->LlevarRadioButton->TabStop = true;
			this->LlevarRadioButton->Text = L"Para llevar";
			this->LlevarRadioButton->UseVisualStyleBackColor = true;
			// 
			// ComerAcaRadioButton
			// 
			this->ComerAcaRadioButton->AutoSize = true;
			this->ComerAcaRadioButton->Location = System::Drawing::Point(14, 45);
			this->ComerAcaRadioButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ComerAcaRadioButton->Name = L"ComerAcaRadioButton";
			this->ComerAcaRadioButton->Size = System::Drawing::Size(150, 24);
			this->ComerAcaRadioButton->TabIndex = 20;
			this->ComerAcaRadioButton->TabStop = true;
			this->ComerAcaRadioButton->Text = L"Para Comer Acá";
			this->ComerAcaRadioButton->UseVisualStyleBackColor = true;
			// 
			// EstadoLabelMante
			// 
			this->EstadoLabelMante->AutoSize = true;
			this->EstadoLabelMante->Location = System::Drawing::Point(81, 57);
			this->EstadoLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EstadoLabelMante->Name = L"EstadoLabelMante";
			this->EstadoLabelMante->Size = System::Drawing::Size(0, 20);
			this->EstadoLabelMante->TabIndex = 19;
			// 
			// ModificarButton
			// 
			this->ModificarButton->Location = System::Drawing::Point(183, 317);
			this->ModificarButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ModificarButton->Name = L"ModificarButton";
			this->ModificarButton->Size = System::Drawing::Size(129, 35);
			this->ModificarButton->TabIndex = 26;
			this->ModificarButton->Text = L"Modificar";
			this->ModificarButton->UseVisualStyleBackColor = true;
			// 
			// EliminarButton
			// 
			this->EliminarButton->Location = System::Drawing::Point(183, 272);
			this->EliminarButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->EliminarButton->Name = L"EliminarButton";
			this->EliminarButton->Size = System::Drawing::Size(129, 35);
			this->EliminarButton->TabIndex = 25;
			this->EliminarButton->Text = L"Eliminar";
			this->EliminarButton->UseVisualStyleBackColor = true;
			// 
			// BuscarButton
			// 
			this->BuscarButton->Location = System::Drawing::Point(15, 317);
			this->BuscarButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BuscarButton->Name = L"BuscarButton";
			this->BuscarButton->Size = System::Drawing::Size(129, 35);
			this->BuscarButton->TabIndex = 24;
			this->BuscarButton->Text = L"Buscar";
			this->BuscarButton->UseVisualStyleBackColor = true;
			this->BuscarButton->Click += gcnew System::EventHandler(this, &MyForm::BuscarButton_Click);
			// 
			// CedulaMante
			// 
			this->CedulaMante->Location = System::Drawing::Point(465, 22);
			this->CedulaMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CedulaMante->Name = L"CedulaMante";
			this->CedulaMante->Size = System::Drawing::Size(148, 26);
			this->CedulaMante->TabIndex = 23;
			this->CedulaMante->Visible = false;
			// 
			// CedulaLabel
			// 
			this->CedulaLabel->AutoSize = true;
			this->CedulaLabel->Location = System::Drawing::Point(339, 26);
			this->CedulaLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CedulaLabel->Name = L"CedulaLabel";
			this->CedulaLabel->Size = System::Drawing::Size(59, 20);
			this->CedulaLabel->TabIndex = 22;
			this->CedulaLabel->Text = L"Cedula";
			// 
			// TextoBuscar
			// 
			this->TextoBuscar->Location = System::Drawing::Point(668, 22);
			this->TextoBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TextoBuscar->Name = L"TextoBuscar";
			this->TextoBuscar->ReadOnly = true;
			this->TextoBuscar->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->TextoBuscar->Size = System::Drawing::Size(367, 232);
			this->TextoBuscar->TabIndex = 21;
			this->TextoBuscar->Text = L"";
			this->TextoBuscar->Visible = false;
			this->TextoBuscar->WordWrap = false;
			// 
			// InsertarDatosMante
			// 
			this->InsertarDatosMante->Location = System::Drawing::Point(15, 272);
			this->InsertarDatosMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->InsertarDatosMante->Name = L"InsertarDatosMante";
			this->InsertarDatosMante->Size = System::Drawing::Size(129, 35);
			this->InsertarDatosMante->TabIndex = 18;
			this->InsertarDatosMante->Text = L"Insertar";
			this->InsertarDatosMante->UseVisualStyleBackColor = true;
			this->InsertarDatosMante->Click += gcnew System::EventHandler(this, &MyForm::InsertarDatosMante_Click);
			// 
			// NombreMante
			// 
			this->NombreMante->Location = System::Drawing::Point(178, 22);
			this->NombreMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->NombreMante->Name = L"NombreMante";
			this->NombreMante->Size = System::Drawing::Size(148, 26);
			this->NombreMante->TabIndex = 17;
			// 
			// NombreLabelMante
			// 
			this->NombreLabelMante->AutoSize = true;
			this->NombreLabelMante->Location = System::Drawing::Point(22, 26);
			this->NombreLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NombreLabelMante->Name = L"NombreLabelMante";
			this->NombreLabelMante->Size = System::Drawing::Size(65, 20);
			this->NombreLabelMante->TabIndex = 16;
			this->NombreLabelMante->Text = L"Nombre";
			// 
			// CantidadMante
			// 
			this->CantidadMante->Location = System::Drawing::Point(465, 146);
			this->CantidadMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CantidadMante->Name = L"CantidadMante";
			this->CantidadMante->Size = System::Drawing::Size(148, 26);
			this->CantidadMante->TabIndex = 15;
			// 
			// CantidadLabelMante
			// 
			this->CantidadLabelMante->AutoSize = true;
			this->CantidadLabelMante->Location = System::Drawing::Point(338, 151);
			this->CantidadLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CantidadLabelMante->Name = L"CantidadLabelMante";
			this->CantidadLabelMante->Size = System::Drawing::Size(73, 20);
			this->CantidadLabelMante->TabIndex = 14;
			this->CantidadLabelMante->Text = L"Cantidad";
			// 
			// PrecioMante
			// 
			this->PrecioMante->Location = System::Drawing::Point(465, 105);
			this->PrecioMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->PrecioMante->Name = L"PrecioMante";
			this->PrecioMante->Size = System::Drawing::Size(148, 26);
			this->PrecioMante->TabIndex = 13;
			// 
			// PrecioLabelMante
			// 
			this->PrecioLabelMante->AutoSize = true;
			this->PrecioLabelMante->Location = System::Drawing::Point(338, 109);
			this->PrecioLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PrecioLabelMante->Name = L"PrecioLabelMante";
			this->PrecioLabelMante->Size = System::Drawing::Size(53, 20);
			this->PrecioLabelMante->TabIndex = 12;
			this->PrecioLabelMante->Text = L"Precio";
			// 
			// CaloriasMante
			// 
			this->CaloriasMante->Location = System::Drawing::Point(465, 65);
			this->CaloriasMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CaloriasMante->Name = L"CaloriasMante";
			this->CaloriasMante->Size = System::Drawing::Size(148, 26);
			this->CaloriasMante->TabIndex = 11;
			// 
			// CaloriasLabelMante
			// 
			this->CaloriasLabelMante->AutoSize = true;
			this->CaloriasLabelMante->Location = System::Drawing::Point(338, 69);
			this->CaloriasLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CaloriasLabelMante->Name = L"CaloriasLabelMante";
			this->CaloriasLabelMante->Size = System::Drawing::Size(66, 20);
			this->CaloriasLabelMante->TabIndex = 10;
			this->CaloriasLabelMante->Text = L"Calorías";
			// 
			// ProductoMante
			// 
			this->ProductoMante->Location = System::Drawing::Point(178, 231);
			this->ProductoMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ProductoMante->Name = L"ProductoMante";
			this->ProductoMante->Size = System::Drawing::Size(148, 26);
			this->ProductoMante->TabIndex = 9;
			// 
			// ProductoLabelMante
			// 
			this->ProductoLabelMante->AutoSize = true;
			this->ProductoLabelMante->Location = System::Drawing::Point(22, 235);
			this->ProductoLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ProductoLabelMante->Name = L"ProductoLabelMante";
			this->ProductoLabelMante->Size = System::Drawing::Size(127, 20);
			this->ProductoLabelMante->TabIndex = 8;
			this->ProductoLabelMante->Text = L"Código Producto";
			// 
			// MenuMante
			// 
			this->MenuMante->Location = System::Drawing::Point(178, 186);
			this->MenuMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MenuMante->Name = L"MenuMante";
			this->MenuMante->Size = System::Drawing::Size(148, 26);
			this->MenuMante->TabIndex = 7;
			this->MenuMante->TextChanged += gcnew System::EventHandler(this, &MyForm::MenuMante_TextChanged);
			// 
			// MenuLabelMante
			// 
			this->MenuLabelMante->AutoSize = true;
			this->MenuLabelMante->Location = System::Drawing::Point(22, 191);
			this->MenuLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->MenuLabelMante->Name = L"MenuLabelMante";
			this->MenuLabelMante->Size = System::Drawing::Size(103, 20);
			this->MenuLabelMante->TabIndex = 6;
			this->MenuLabelMante->Text = L"Código Menú";
			// 
			// RestMante
			// 
			this->RestMante->Location = System::Drawing::Point(178, 146);
			this->RestMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->RestMante->Name = L"RestMante";
			this->RestMante->Size = System::Drawing::Size(148, 26);
			this->RestMante->TabIndex = 5;
			// 
			// RestLabelMante
			// 
			this->RestLabelMante->AutoSize = true;
			this->RestLabelMante->Location = System::Drawing::Point(22, 151);
			this->RestLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->RestLabelMante->Name = L"RestLabelMante";
			this->RestLabelMante->Size = System::Drawing::Size(152, 20);
			this->RestLabelMante->TabIndex = 4;
			this->RestLabelMante->Text = L"Código Restaurante";
			// 
			// CiudadMante
			// 
			this->CiudadMante->Location = System::Drawing::Point(178, 105);
			this->CiudadMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CiudadMante->Name = L"CiudadMante";
			this->CiudadMante->Size = System::Drawing::Size(148, 26);
			this->CiudadMante->TabIndex = 3;
			// 
			// CiudadLabelMante
			// 
			this->CiudadLabelMante->AutoSize = true;
			this->CiudadLabelMante->Location = System::Drawing::Point(22, 109);
			this->CiudadLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CiudadLabelMante->Name = L"CiudadLabelMante";
			this->CiudadLabelMante->Size = System::Drawing::Size(113, 20);
			this->CiudadLabelMante->TabIndex = 2;
			this->CiudadLabelMante->Text = L"Código Ciudad";
			// 
			// PaisMante
			// 
			this->PaisMante->Location = System::Drawing::Point(178, 65);
			this->PaisMante->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->PaisMante->Name = L"PaisMante";
			this->PaisMante->Size = System::Drawing::Size(148, 26);
			this->PaisMante->TabIndex = 1;
			// 
			// PaisLabelMante
			// 
			this->PaisLabelMante->AutoSize = true;
			this->PaisLabelMante->Location = System::Drawing::Point(22, 69);
			this->PaisLabelMante->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PaisLabelMante->Name = L"PaisLabelMante";
			this->PaisLabelMante->Size = System::Drawing::Size(93, 20);
			this->PaisLabelMante->TabIndex = 0;
			this->PaisLabelMante->Text = L"Código País";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1654, 774);
			this->Controls->Add(this->PanelMantenimiento);
			this->Controls->Add(this->cedulaInicial);
			this->Controls->Add(this->MensajeInicio);
			this->Controls->Add(this->IngresarButton);
			this->Controls->Add(this->radioButtonAdmi);
			this->Controls->Add(this->radioButtonCliente);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"McDonald\'s";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->PanelMantenimiento->ResumeLayout(false);
			this->PanelMantenimiento->PerformLayout();
			this->ComprarPanel->ResumeLayout(false);
			this->ComprarPanel->PerformLayout();
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
	this->TextoBuscar->Visible = false;
	this->opcionInsertar = 3;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
	this->PanelMantenimiento->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = true;
	this->NombreLabelMante->Visible = true;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void paísToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = false;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
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
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = true;
	this->NombreLabelMante->Visible = true;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	
}
private: System::Void InsertarDatosMante_Click(System::Object^ sender, System::EventArgs^ e) {
	this->EstadoLabelMante->Text = "";
	String^ msj;
	string mensaje;
	string pais, ciudad, rest, menu, producto, nombre, precio, calorias, cantidad, cedula;

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

	case 3:
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest)) {
				mensaje = controller->insertarRest(stoi(pais), stoi(ciudad), stoi(rest), nombre);
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
	case 4:
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu)) {
				mensaje = controller->insertarMenu(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), nombre);
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
	case 5:
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "" && this->ProductoMante->Text != "" && this->CaloriasMante->Text != "" && this->PrecioMante->Text != "" && this->CantidadMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);
			producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);
			calorias = msclr::interop::marshal_as<string >(this->CaloriasMante->Text);
			precio = msclr::interop::marshal_as<string >(this->PrecioMante->Text);
			cantidad = msclr::interop::marshal_as<string >(this->CantidadMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto) && controller->isInteger(calorias) && controller->isInteger(precio) && controller->isInteger(cantidad)) {
				mensaje = controller->insertarProducto(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto), nombre, stoi(calorias), stoi(precio), stoi(cantidad));
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
	case 6:
		if (this->NombreMante->Text != "" && this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->insertarCliente(stoi(cedula), nombre);
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
	case 7:
		if (this->NombreMante->Text != "" && this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->insertarAdmin(stoi(cedula), nombre);
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
	case 8:
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "" && this->ProductoMante->Text != "" && this->CedulaMante->Text != "" && this->CantidadMante->Text != "") {
			if (this->LlevarRadioButton->Checked == true || this->ComerAcaRadioButton->Checked == true) {
				if (this->LlevarRadioButton->Checked == true && this->ComerAcaRadioButton->Checked == true) {
					this->TextoBuscar->Text = "Seleccione solo una opción";
				}
				else {
					pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
					ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
					rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
					menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);
					producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);
					cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
					cantidad = msclr::interop::marshal_as<string >(this->CantidadMante->Text);

					if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto) && controller->isInteger(cedula) && controller->isInteger(cantidad)) {
						if (this->LlevarRadioButton->Checked == true) {
							mensaje = controller->comprar(stoi(cedula), stoi(pais), stoi (ciudad), stoi(rest), stoi(menu), stoi(producto), stoi(cantidad), 1);
							
						}
						else {
							mensaje = controller->comprar(stoi(cedula), stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto), stoi(cantidad), 2);
						
						}
						msj = gcnew String(mensaje.c_str());
						this->TextoBuscar->Text = msj;
					}
					else {
						this->TextoBuscar->Text = "Ingrese datos correctos.";
					}
				}
			}
			else {
				this->TextoBuscar->Text = "Seleccione alguna opcion";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;
	}
}
private: System::Void ciudadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = false;
	this->opcionInsertar = 2;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
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
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = true;
	this->NombreLabelMante->Visible = true;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PanelMantenimiento->Visible = false;
	this->insertarToolStripMenuItem->Visible = true;
	this->modificarToolStripMenuItem->Visible = true;
	this->menuStrip1->Hide();
	this->radioButtonCliente->Visible = true;
	this->radioButtonAdmi->Visible = true;
	this->cedulaInicial->Visible = true;
	this->IngresarButton->Visible = true;
	this->MensajeInicio->Visible = true;
	this->opcionInsertar = 0;
}
private: System::Void MenuMante_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void menúToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = false;
	this->opcionInsertar = 4;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
	this->PanelMantenimiento->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = true;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = true;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = true;
	this->NombreLabelMante->Visible = true;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void productoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = false;
	this->opcionInsertar = 5;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
	this->PanelMantenimiento->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = true;
	this->ProductoMante->Visible = true;
	this->CaloriasMante->Visible = true;
	this->PrecioMante->Visible = true;
	this->CantidadMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = true;
	this->ProductoLabelMante->Visible = true;
	this->CaloriasLabelMante->Visible = true;
	this->PrecioLabelMante->Visible = true;
	this->CantidadLabelMante->Visible = true;
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = true;
	this->NombreLabelMante->Visible = true;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = false;
	this->opcionInsertar = 6;
	this->PaisMante->Visible = false;
	this->PaisLabelMante->Visible = false;
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
	this->CedulaLabel->Visible = true;
	this->CedulaMante->Visible = true;
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = true;
	this->NombreLabelMante->Visible = true;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void administradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = false;
	this->opcionInsertar = 7;	
	this->PaisMante->Visible = false;
	this->PaisLabelMante->Visible = false;
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
	this->CedulaLabel->Visible = true;
	this->CedulaMante->Visible = true;
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = true;
	this->NombreLabelMante->Visible = true;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void compraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionInsertar = 8;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = true;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = true;
	this->ProductoMante->Visible = true;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = true;
	this->CedulaMante->Visible = true;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = true;
	this->ProductoLabelMante->Visible = true;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = true;
	this->CedulaLabel->Visible = true;
	this->NombreLabelMante->Visible = false;
	
	this->InsertarDatosMante->Visible = true;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void BuscarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Text = "";
	String^ msj;
	string mensaje;
	string pais, ciudad, rest, menu, producto, nombre, precio, calorias, cantidad, cedula;

	switch (this->opcionConsultar) {
	case 1:
		if ( this->PaisMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			if (controller->isInteger(pais)) {
				mensaje = controller->buscarPais(stoi(pais));
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			}
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;

	case 2:
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad)) {
				mensaje = controller->buscarCiudad(stoi(pais), stoi(ciudad));
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			}
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;

	case 3:
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest)) {
				mensaje = controller->buscarRest(stoi(pais), stoi(ciudad), stoi(rest));
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			}
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;
	case 4:
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);

			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu)) {
				mensaje = controller->buscarMenu(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu));
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			}
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;
	case 5:
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "" && this->ProductoMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);
			producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto)) {
				mensaje = controller->buscarProducto(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto));
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			}
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;
	case 6:
		if (this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->buscarClientes(stoi(cedula));
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			}
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;
	case 7:
		if (this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->buscarAdmin(stoi(cedula));
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			}
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}
		}
		else {
			this->TextoBuscar->Text = "Ingrese todos los datos.";
		}
		break;
	}
}
private: System::Void paísesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
	this->opcionConsultar = 1;
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
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = true;
	this->NombreMante->Visible = false;
	this->NombreLabelMante->Visible = false;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void ciudadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->opcionConsultar = 2;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
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
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = true;
	this->NombreMante->Visible = false;
	this->NombreLabelMante->Visible = false;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;

}
private: System::Void restaurantesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->opcionConsultar = 3;
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
	this->PanelMantenimiento->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->CiudadLabelMante->Visible = true;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->CedulaMante->Visible = false;
	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = true;
	this->NombreMante->Visible = false;
	this->NombreLabelMante->Visible = false;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void menúToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 4;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = true;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = true;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = true;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 5;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = true;
	this->ProductoMante->Visible = true;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = true;
	this->ProductoLabelMante->Visible = true;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = true;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}

private: System::Void clienteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 6;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = false;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = true;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = true;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = true;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
private: System::Void administradorToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 7;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = false;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = true;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = true;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = true;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
}
};
}
