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
	private: System::Windows::Forms::ToolStripMenuItem^ ReportesMenu;

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
	protected: int opcionEliminar;
	protected: int opcionReporte;
	/*
	protected: int opcionReporteArbol;
	protected: int opcionReporteCompra;
	protected: int opcionReporteBusqueda:
	protected: int opcionReporteConsulta;
	protected: int opcionReporteEliminado;*/

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
private: System::Windows::Forms::ToolStripMenuItem^ ciudadToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ restauranteToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ clienteToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ administradorToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ compraToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ árbolesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ restaurantesToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ comprasToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ comprasDeUnClienteToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ productoMásCompradoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ facturaDeMayorMontoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ facturaDeMenorMontoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ búsquedasToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ restauranteMásBuscadoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ mToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ precioDeUnProductoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ cantidadDeUnProductoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ eliminadosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ productosEliminadosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ restaurantesEliminadosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ciudadesEliminadosToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ menúsEliminadosToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ paisesEliminadosToolStripMenuItem;
private: System::Windows::Forms::Button^ generarReporte;
private: System::Windows::Forms::Panel^ FacturarPanel;
private: System::Windows::Forms::RadioButton^ radioBtnTarjeta;
private: System::Windows::Forms::RadioButton^ radioBtnEfectivo;



private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ FacturarButton;
private: System::Windows::Forms::Panel^ PanelModificarCompra;
private: System::Windows::Forms::RadioButton^ eliminarProdMod;
private: System::Windows::Forms::RadioButton^ cambiarCantMod;
private: System::Windows::Forms::RadioButton^ añadirProdMod;
private: System::Windows::Forms::Label^ label2;






































	protected: int opcionModificar;
private: System::Windows::Forms::GroupBox^ groupBox1;
protected:
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ EnviarButton;
private: System::Windows::Forms::Label^ LabelContacto;
	protected: int opcionModCompra;

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
			this->ciudadToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clienteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradorToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ReportesMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->árbolesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comprasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comprasDeUnClienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoMásCompradoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaDeMayorMontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaDeMenorMontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->búsquedasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restauranteMásBuscadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->precioDeUnProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cantidadDeUnProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restaurantesEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menúsEliminadosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisesEliminadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facturaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelMantenimiento = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LabelContacto = (gcnew System::Windows::Forms::Label());
			this->EnviarButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PanelModificarCompra = (gcnew System::Windows::Forms::Panel());
			this->eliminarProdMod = (gcnew System::Windows::Forms::RadioButton());
			this->cambiarCantMod = (gcnew System::Windows::Forms::RadioButton());
			this->añadirProdMod = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FacturarButton = (gcnew System::Windows::Forms::Button());
			this->FacturarPanel = (gcnew System::Windows::Forms::Panel());
			this->radioBtnTarjeta = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtnEfectivo = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->generarReporte = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->SuspendLayout();
			this->PanelModificarCompra->SuspendLayout();
			this->FacturarPanel->SuspendLayout();
			this->ComprarPanel->SuspendLayout();
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
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Mantenimiento, this->ReportesMenu,
					this->facturaciónToolStripMenuItem, this->acercaDeToolStripMenuItem, this->contactoToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(913, 24);
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
			this->Mantenimiento->Size = System::Drawing::Size(101, 22);
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
			this->menúToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menúToolStripMenuItem_Click);
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->productoToolStripMenuItem->Text = L"Producto";
			this->productoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::productoToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem
			// 
			this->clienteToolStripMenuItem->Name = L"clienteToolStripMenuItem";
			this->clienteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem->Text = L"Cliente";
			this->clienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clienteToolStripMenuItem_Click);
			// 
			// administradorToolStripMenuItem
			// 
			this->administradorToolStripMenuItem->Name = L"administradorToolStripMenuItem";
			this->administradorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem->Text = L"Administrador";
			this->administradorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::administradorToolStripMenuItem_Click);
			// 
			// compraToolStripMenuItem
			// 
			this->compraToolStripMenuItem->Name = L"compraToolStripMenuItem";
			this->compraToolStripMenuItem->Size = System::Drawing::Size(150, 22);
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
			this->consultaToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->consultaToolStripMenuItem->Text = L"Consulta";
			// 
			// paísesToolStripMenuItem
			// 
			this->paísesToolStripMenuItem->Name = L"paísesToolStripMenuItem";
			this->paísesToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->paísesToolStripMenuItem->Text = L"País";
			this->paísesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::paísesToolStripMenuItem_Click);
			// 
			// ciudadesToolStripMenuItem
			// 
			this->ciudadesToolStripMenuItem->Name = L"ciudadesToolStripMenuItem";
			this->ciudadesToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->ciudadesToolStripMenuItem->Text = L"Ciudad";
			this->ciudadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ciudadesToolStripMenuItem_Click);
			// 
			// restaurantesToolStripMenuItem
			// 
			this->restaurantesToolStripMenuItem->Name = L"restaurantesToolStripMenuItem";
			this->restaurantesToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->restaurantesToolStripMenuItem->Text = L"Restaurante";
			this->restaurantesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restaurantesToolStripMenuItem_Click);
			// 
			// menúToolStripMenuItem1
			// 
			this->menúToolStripMenuItem1->Name = L"menúToolStripMenuItem1";
			this->menúToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->menúToolStripMenuItem1->Text = L"Menú";
			this->menúToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::menúToolStripMenuItem1_Click);
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->productosToolStripMenuItem->Text = L"Producto";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::productosToolStripMenuItem_Click);
			// 
			// clienteToolStripMenuItem1
			// 
			this->clienteToolStripMenuItem1->Name = L"clienteToolStripMenuItem1";
			this->clienteToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem1->Text = L"Cliente";
			this->clienteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::clienteToolStripMenuItem1_Click);
			// 
			// administradorToolStripMenuItem1
			// 
			this->administradorToolStripMenuItem1->Name = L"administradorToolStripMenuItem1";
			this->administradorToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
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
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			// 
			// paísesToolStripMenuItem1
			// 
			this->paísesToolStripMenuItem1->Name = L"paísesToolStripMenuItem1";
			this->paísesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->paísesToolStripMenuItem1->Text = L"País";
			this->paísesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::paísesToolStripMenuItem1_Click);
			// 
			// ciudadesToolStripMenuItem1
			// 
			this->ciudadesToolStripMenuItem1->Name = L"ciudadesToolStripMenuItem1";
			this->ciudadesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->ciudadesToolStripMenuItem1->Text = L"Ciudad";
			this->ciudadesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ciudadesToolStripMenuItem1_Click);
			// 
			// restaurantesToolStripMenuItem1
			// 
			this->restaurantesToolStripMenuItem1->Name = L"restaurantesToolStripMenuItem1";
			this->restaurantesToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->restaurantesToolStripMenuItem1->Text = L"Restaurante";
			this->restaurantesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::restaurantesToolStripMenuItem1_Click);
			// 
			// menúToolStripMenuItem2
			// 
			this->menúToolStripMenuItem2->Name = L"menúToolStripMenuItem2";
			this->menúToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->menúToolStripMenuItem2->Text = L"Menú";
			this->menúToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::menúToolStripMenuItem2_Click);
			// 
			// productoToolStripMenuItem1
			// 
			this->productoToolStripMenuItem1->Name = L"productoToolStripMenuItem1";
			this->productoToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->productoToolStripMenuItem1->Text = L"Producto";
			this->productoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::productoToolStripMenuItem1_Click);
			// 
			// clienteToolStripMenuItem2
			// 
			this->clienteToolStripMenuItem2->Name = L"clienteToolStripMenuItem2";
			this->clienteToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem2->Text = L"Cliente";
			this->clienteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::clienteToolStripMenuItem2_Click);
			// 
			// administradorToolStripMenuItem2
			// 
			this->administradorToolStripMenuItem2->Name = L"administradorToolStripMenuItem2";
			this->administradorToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem2->Text = L"Administrador";
			this->administradorToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::administradorToolStripMenuItem2_Click);
			// 
			// compraToolStripMenuItem1
			// 
			this->compraToolStripMenuItem1->Name = L"compraToolStripMenuItem1";
			this->compraToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->compraToolStripMenuItem1->Text = L"Compra";
			this->compraToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::compraToolStripMenuItem1_Click);
			// 
			// eliminarToolStripMenuItem
			// 
			this->eliminarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->paisToolStripMenuItem,
					this->ciudadToolStripMenuItem1, this->restauranteToolStripMenuItem1, this->menúToolStripMenuItem3, this->productoToolStripMenuItem2,
					this->clienteToolStripMenuItem3, this->administradorToolStripMenuItem3, this->compraToolStripMenuItem2
			});
			this->eliminarToolStripMenuItem->Name = L"eliminarToolStripMenuItem";
			this->eliminarToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->eliminarToolStripMenuItem->Text = L"Eliminar";
			// 
			// paisToolStripMenuItem
			// 
			this->paisToolStripMenuItem->Name = L"paisToolStripMenuItem";
			this->paisToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->paisToolStripMenuItem->Text = L"Pais";
			this->paisToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::paisToolStripMenuItem_Click);
			// 
			// ciudadToolStripMenuItem1
			// 
			this->ciudadToolStripMenuItem1->Name = L"ciudadToolStripMenuItem1";
			this->ciudadToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->ciudadToolStripMenuItem1->Text = L"Ciudad";
			this->ciudadToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ciudadToolStripMenuItem1_Click);
			// 
			// restauranteToolStripMenuItem1
			// 
			this->restauranteToolStripMenuItem1->Name = L"restauranteToolStripMenuItem1";
			this->restauranteToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
			this->restauranteToolStripMenuItem1->Text = L"Restaurante";
			this->restauranteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::restauranteToolStripMenuItem1_Click);
			// 
			// menúToolStripMenuItem3
			// 
			this->menúToolStripMenuItem3->Name = L"menúToolStripMenuItem3";
			this->menúToolStripMenuItem3->Size = System::Drawing::Size(150, 22);
			this->menúToolStripMenuItem3->Text = L"Menú";
			this->menúToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::menúToolStripMenuItem3_Click);
			// 
			// productoToolStripMenuItem2
			// 
			this->productoToolStripMenuItem2->Name = L"productoToolStripMenuItem2";
			this->productoToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->productoToolStripMenuItem2->Text = L"Producto";
			this->productoToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::productoToolStripMenuItem2_Click);
			// 
			// clienteToolStripMenuItem3
			// 
			this->clienteToolStripMenuItem3->Name = L"clienteToolStripMenuItem3";
			this->clienteToolStripMenuItem3->Size = System::Drawing::Size(150, 22);
			this->clienteToolStripMenuItem3->Text = L"Cliente";
			this->clienteToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::clienteToolStripMenuItem3_Click);
			// 
			// administradorToolStripMenuItem3
			// 
			this->administradorToolStripMenuItem3->Name = L"administradorToolStripMenuItem3";
			this->administradorToolStripMenuItem3->Size = System::Drawing::Size(150, 22);
			this->administradorToolStripMenuItem3->Text = L"Administrador";
			this->administradorToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::administradorToolStripMenuItem3_Click);
			// 
			// compraToolStripMenuItem2
			// 
			this->compraToolStripMenuItem2->Name = L"compraToolStripMenuItem2";
			this->compraToolStripMenuItem2->Size = System::Drawing::Size(150, 22);
			this->compraToolStripMenuItem2->Text = L"Compra";
			this->compraToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::compraToolStripMenuItem2_Click);
			// 
			// ReportesMenu
			// 
			this->ReportesMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->árbolesToolStripMenuItem,
					this->comprasToolStripMenuItem, this->búsquedasToolStripMenuItem, this->consultasToolStripMenuItem, this->eliminadosToolStripMenuItem
			});
			this->ReportesMenu->Name = L"ReportesMenu";
			this->ReportesMenu->Size = System::Drawing::Size(65, 22);
			this->ReportesMenu->Text = L"Reportes";
			// 
			// árbolesToolStripMenuItem
			// 
			this->árbolesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->paísToolStripMenuItem1,
					this->ciudadesToolStripMenuItem2, this->restaurantesToolStripMenuItem2, this->clientesToolStripMenuItem
			});
			this->árbolesToolStripMenuItem->Name = L"árbolesToolStripMenuItem";
			this->árbolesToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->árbolesToolStripMenuItem->Text = L"Árboles";
			// 
			// paísToolStripMenuItem1
			// 
			this->paísToolStripMenuItem1->Name = L"paísToolStripMenuItem1";
			this->paísToolStripMenuItem1->Size = System::Drawing::Size(141, 22);
			this->paísToolStripMenuItem1->Text = L"Paises";
			this->paísToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::paísToolStripMenuItem1_Click);
			// 
			// ciudadesToolStripMenuItem2
			// 
			this->ciudadesToolStripMenuItem2->Name = L"ciudadesToolStripMenuItem2";
			this->ciudadesToolStripMenuItem2->Size = System::Drawing::Size(141, 22);
			this->ciudadesToolStripMenuItem2->Text = L"Ciudades";
			this->ciudadesToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ciudadesToolStripMenuItem2_Click);
			// 
			// restaurantesToolStripMenuItem2
			// 
			this->restaurantesToolStripMenuItem2->Name = L"restaurantesToolStripMenuItem2";
			this->restaurantesToolStripMenuItem2->Size = System::Drawing::Size(141, 22);
			this->restaurantesToolStripMenuItem2->Text = L"Restaurantes";
			this->restaurantesToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::restaurantesToolStripMenuItem2_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clientesToolStripMenuItem_Click);
			// 
			// comprasToolStripMenuItem
			// 
			this->comprasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->comprasDeUnClienteToolStripMenuItem,
					this->productoMásCompradoToolStripMenuItem, this->facturaDeMayorMontoToolStripMenuItem, this->facturaDeMenorMontoToolStripMenuItem
			});
			this->comprasToolStripMenuItem->Name = L"comprasToolStripMenuItem";
			this->comprasToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->comprasToolStripMenuItem->Text = L"Compras";
			// 
			// comprasDeUnClienteToolStripMenuItem
			// 
			this->comprasDeUnClienteToolStripMenuItem->Name = L"comprasDeUnClienteToolStripMenuItem";
			this->comprasDeUnClienteToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->comprasDeUnClienteToolStripMenuItem->Text = L"Compras de un cliente";
			this->comprasDeUnClienteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::comprasDeUnClienteToolStripMenuItem_Click);
			// 
			// productoMásCompradoToolStripMenuItem
			// 
			this->productoMásCompradoToolStripMenuItem->Name = L"productoMásCompradoToolStripMenuItem";
			this->productoMásCompradoToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->productoMásCompradoToolStripMenuItem->Text = L"Producto más comprado";
			this->productoMásCompradoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::productoMásCompradoToolStripMenuItem_Click);
			// 
			// facturaDeMayorMontoToolStripMenuItem
			// 
			this->facturaDeMayorMontoToolStripMenuItem->Name = L"facturaDeMayorMontoToolStripMenuItem";
			this->facturaDeMayorMontoToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->facturaDeMayorMontoToolStripMenuItem->Text = L"Factura de mayor monto";
			this->facturaDeMayorMontoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::facturaDeMayorMontoToolStripMenuItem_Click);
			// 
			// facturaDeMenorMontoToolStripMenuItem
			// 
			this->facturaDeMenorMontoToolStripMenuItem->Name = L"facturaDeMenorMontoToolStripMenuItem";
			this->facturaDeMenorMontoToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->facturaDeMenorMontoToolStripMenuItem->Text = L"Factura de menor monto";
			this->facturaDeMenorMontoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::facturaDeMenorMontoToolStripMenuItem_Click);
			// 
			// búsquedasToolStripMenuItem
			// 
			this->búsquedasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->restauranteMásBuscadoToolStripMenuItem,
					this->mToolStripMenuItem
			});
			this->búsquedasToolStripMenuItem->Name = L"búsquedasToolStripMenuItem";
			this->búsquedasToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->búsquedasToolStripMenuItem->Text = L"Búsquedas";
			// 
			// restauranteMásBuscadoToolStripMenuItem
			// 
			this->restauranteMásBuscadoToolStripMenuItem->Name = L"restauranteMásBuscadoToolStripMenuItem";
			this->restauranteMásBuscadoToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->restauranteMásBuscadoToolStripMenuItem->Text = L"Restaurante más buscado";
			this->restauranteMásBuscadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restauranteMásBuscadoToolStripMenuItem_Click);
			// 
			// mToolStripMenuItem
			// 
			this->mToolStripMenuItem->Name = L"mToolStripMenuItem";
			this->mToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->mToolStripMenuItem->Text = L"Menú más buscado";
			this->mToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mToolStripMenuItem_Click);
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->precioDeUnProductoToolStripMenuItem,
					this->descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem, this->cantidadDeUnProductoToolStripMenuItem
			});
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			// 
			// precioDeUnProductoToolStripMenuItem
			// 
			this->precioDeUnProductoToolStripMenuItem->Name = L"precioDeUnProductoToolStripMenuItem";
			this->precioDeUnProductoToolStripMenuItem->Size = System::Drawing::Size(281, 22);
			this->precioDeUnProductoToolStripMenuItem->Text = L"Precio de un producto";
			this->precioDeUnProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::precioDeUnProductoToolStripMenuItem_Click);
			// 
			// descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem
			// 
			this->descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem->Name = L"descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem";
			this->descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem->Size = System::Drawing::Size(281, 22);
			this->descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem->Text = L"Descuento aplicado por pago de tarjeta";
			this->descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem_Click);
			// 
			// cantidadDeUnProductoToolStripMenuItem
			// 
			this->cantidadDeUnProductoToolStripMenuItem->Name = L"cantidadDeUnProductoToolStripMenuItem";
			this->cantidadDeUnProductoToolStripMenuItem->Size = System::Drawing::Size(281, 22);
			this->cantidadDeUnProductoToolStripMenuItem->Text = L"Cantidad de un producto";
			this->cantidadDeUnProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cantidadDeUnProductoToolStripMenuItem_Click);
			// 
			// eliminadosToolStripMenuItem
			// 
			this->eliminadosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->productosEliminadosToolStripMenuItem,
					this->restaurantesEliminadosToolStripMenuItem, this->ciudadesEliminadosToolStripMenuItem, this->menúsEliminadosToolStripMenuItem1,
					this->paisesEliminadosToolStripMenuItem
			});
			this->eliminadosToolStripMenuItem->Name = L"eliminadosToolStripMenuItem";
			this->eliminadosToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->eliminadosToolStripMenuItem->Text = L"Eliminados";
			// 
			// productosEliminadosToolStripMenuItem
			// 
			this->productosEliminadosToolStripMenuItem->Name = L"productosEliminadosToolStripMenuItem";
			this->productosEliminadosToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->productosEliminadosToolStripMenuItem->Text = L"Productos eliminados";
			this->productosEliminadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::productosEliminadosToolStripMenuItem_Click);
			// 
			// restaurantesEliminadosToolStripMenuItem
			// 
			this->restaurantesEliminadosToolStripMenuItem->Name = L"restaurantesEliminadosToolStripMenuItem";
			this->restaurantesEliminadosToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->restaurantesEliminadosToolStripMenuItem->Text = L"Restaurantes eliminados";
			this->restaurantesEliminadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restaurantesEliminadosToolStripMenuItem_Click);
			// 
			// ciudadesEliminadosToolStripMenuItem
			// 
			this->ciudadesEliminadosToolStripMenuItem->Name = L"ciudadesEliminadosToolStripMenuItem";
			this->ciudadesEliminadosToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->ciudadesEliminadosToolStripMenuItem->Text = L"Ciudades eliminadas";
			this->ciudadesEliminadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menúsEliminadosToolStripMenuItem_Click);
			// 
			// menúsEliminadosToolStripMenuItem1
			// 
			this->menúsEliminadosToolStripMenuItem1->Name = L"menúsEliminadosToolStripMenuItem1";
			this->menúsEliminadosToolStripMenuItem1->Size = System::Drawing::Size(202, 22);
			this->menúsEliminadosToolStripMenuItem1->Text = L"Menús eliminados";
			this->menúsEliminadosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::menúsEliminadosToolStripMenuItem1_Click);
			// 
			// paisesEliminadosToolStripMenuItem
			// 
			this->paisesEliminadosToolStripMenuItem->Name = L"paisesEliminadosToolStripMenuItem";
			this->paisesEliminadosToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->paisesEliminadosToolStripMenuItem->Text = L"Paises eliminados";
			this->paisesEliminadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::paisesEliminadosToolStripMenuItem_Click);
			// 
			// facturaciónToolStripMenuItem
			// 
			this->facturaciónToolStripMenuItem->Name = L"facturaciónToolStripMenuItem";
			this->facturaciónToolStripMenuItem->Size = System::Drawing::Size(81, 22);
			this->facturaciónToolStripMenuItem->Text = L"Facturación";
			this->facturaciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::facturaciónToolStripMenuItem_Click);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(72, 22);
			this->acercaDeToolStripMenuItem->Text = L"Acerca De";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::acercaDeToolStripMenuItem_Click);
			// 
			// contactoToolStripMenuItem
			// 
			this->contactoToolStripMenuItem->Name = L"contactoToolStripMenuItem";
			this->contactoToolStripMenuItem->Size = System::Drawing::Size(68, 22);
			this->contactoToolStripMenuItem->Text = L"Contacto";
			this->contactoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contactoToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(88, 22);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cerrarSesiónToolStripMenuItem_Click);
			// 
			// PanelMantenimiento
			// 
			this->PanelMantenimiento->Controls->Add(this->groupBox1);
			this->PanelMantenimiento->Controls->Add(this->PanelModificarCompra);
			this->PanelMantenimiento->Controls->Add(this->FacturarButton);
			this->PanelMantenimiento->Controls->Add(this->FacturarPanel);
			this->PanelMantenimiento->Controls->Add(this->generarReporte);
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
			this->PanelMantenimiento->Location = System::Drawing::Point(111, 39);
			this->PanelMantenimiento->Name = L"PanelMantenimiento";
			this->PanelMantenimiento->Size = System::Drawing::Size(745, 303);
			this->PanelMantenimiento->TabIndex = 9;
			this->PanelMantenimiento->Visible = false;
			this->PanelMantenimiento->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PanelMantenimiento_Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->LabelContacto);
			this->groupBox1->Controls->Add(this->EnviarButton);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(411, 176);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(333, 126);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Formulario Contacto";
			// 
			// LabelContacto
			// 
			this->LabelContacto->AutoSize = true;
			this->LabelContacto->Location = System::Drawing::Point(10, 80);
			this->LabelContacto->Name = L"LabelContacto";
			this->LabelContacto->Size = System::Drawing::Size(0, 13);
			this->LabelContacto->TabIndex = 9;
			// 
			// EnviarButton
			// 
			this->EnviarButton->Location = System::Drawing::Point(34, 96);
			this->EnviarButton->Name = L"EnviarButton";
			this->EnviarButton->Size = System::Drawing::Size(75, 23);
			this->EnviarButton->TabIndex = 8;
			this->EnviarButton->Text = L"Enviar";
			this->EnviarButton->UseVisualStyleBackColor = true;
			this->EnviarButton->Click += gcnew System::EventHandler(this, &MyForm::EnviarButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(160, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Comentarios";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(163, 22);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(169, 98);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(56, 54);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(101, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Telefono";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(101, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Correo";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(101, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nombre";
			// 
			// PanelModificarCompra
			// 
			this->PanelModificarCompra->Controls->Add(this->eliminarProdMod);
			this->PanelModificarCompra->Controls->Add(this->cambiarCantMod);
			this->PanelModificarCompra->Controls->Add(this->añadirProdMod);
			this->PanelModificarCompra->Controls->Add(this->label2);
			this->PanelModificarCompra->Location = System::Drawing::Point(228, 230);
			this->PanelModificarCompra->Name = L"PanelModificarCompra";
			this->PanelModificarCompra->Size = System::Drawing::Size(172, 70);
			this->PanelModificarCompra->TabIndex = 30;
			this->PanelModificarCompra->Visible = false;
			// 
			// eliminarProdMod
			// 
			this->eliminarProdMod->AutoSize = true;
			this->eliminarProdMod->Location = System::Drawing::Point(9, 50);
			this->eliminarProdMod->Name = L"eliminarProdMod";
			this->eliminarProdMod->Size = System::Drawing::Size(112, 17);
			this->eliminarProdMod->TabIndex = 22;
			this->eliminarProdMod->TabStop = true;
			this->eliminarProdMod->Text = L"Eliminar Productos";
			this->eliminarProdMod->UseVisualStyleBackColor = true;
			this->eliminarProdMod->CheckedChanged += gcnew System::EventHandler(this, &MyForm::eliminarProdMod_CheckedChanged);
			// 
			// cambiarCantMod
			// 
			this->cambiarCantMod->AutoSize = true;
			this->cambiarCantMod->Location = System::Drawing::Point(9, 7);
			this->cambiarCantMod->Name = L"cambiarCantMod";
			this->cambiarCantMod->Size = System::Drawing::Size(108, 17);
			this->cambiarCantMod->TabIndex = 21;
			this->cambiarCantMod->TabStop = true;
			this->cambiarCantMod->Text = L"Cambiar Cantidad";
			this->cambiarCantMod->UseVisualStyleBackColor = true;
			this->cambiarCantMod->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cambiarCantMod_CheckedChanged);
			// 
			// añadirProdMod
			// 
			this->añadirProdMod->AutoSize = true;
			this->añadirProdMod->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->añadirProdMod->Location = System::Drawing::Point(9, 29);
			this->añadirProdMod->Name = L"añadirProdMod";
			this->añadirProdMod->Size = System::Drawing::Size(106, 17);
			this->añadirProdMod->TabIndex = 20;
			this->añadirProdMod->TabStop = true;
			this->añadirProdMod->Text = L"Añadir Productos";
			this->añadirProdMod->UseVisualStyleBackColor = false;
			this->añadirProdMod->CheckedChanged += gcnew System::EventHandler(this, &MyForm::añadirProdMod_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 19;
			// 
			// FacturarButton
			// 
			this->FacturarButton->Location = System::Drawing::Point(402, 211);
			this->FacturarButton->Name = L"FacturarButton";
			this->FacturarButton->Size = System::Drawing::Size(86, 23);
			this->FacturarButton->TabIndex = 29;
			this->FacturarButton->Text = L"Facturar";
			this->FacturarButton->UseVisualStyleBackColor = true;
			this->FacturarButton->Click += gcnew System::EventHandler(this, &MyForm::FacturarButton_Click);
			// 
			// FacturarPanel
			// 
			this->FacturarPanel->Controls->Add(this->radioBtnTarjeta);
			this->FacturarPanel->Controls->Add(this->radioBtnEfectivo);
			this->FacturarPanel->Controls->Add(this->label1);
			this->FacturarPanel->Location = System::Drawing::Point(228, 177);
			this->FacturarPanel->Name = L"FacturarPanel";
			this->FacturarPanel->Size = System::Drawing::Size(172, 57);
			this->FacturarPanel->TabIndex = 28;
			// 
			// radioBtnTarjeta
			// 
			this->radioBtnTarjeta->AutoSize = true;
			this->radioBtnTarjeta->Location = System::Drawing::Point(9, 10);
			this->radioBtnTarjeta->Name = L"radioBtnTarjeta";
			this->radioBtnTarjeta->Size = System::Drawing::Size(108, 17);
			this->radioBtnTarjeta->TabIndex = 21;
			this->radioBtnTarjeta->TabStop = true;
			this->radioBtnTarjeta->Text = L"Pago Con Tarjeta";
			this->radioBtnTarjeta->UseVisualStyleBackColor = true;
			// 
			// radioBtnEfectivo
			// 
			this->radioBtnEfectivo->AutoSize = true;
			this->radioBtnEfectivo->Location = System::Drawing::Point(9, 29);
			this->radioBtnEfectivo->Name = L"radioBtnEfectivo";
			this->radioBtnEfectivo->Size = System::Drawing::Size(108, 17);
			this->radioBtnEfectivo->TabIndex = 20;
			this->radioBtnEfectivo->TabStop = true;
			this->radioBtnEfectivo->Text = L"Pago En Efectivo";
			this->radioBtnEfectivo->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 19;
			// 
			// generarReporte
			// 
			this->generarReporte->Location = System::Drawing::Point(57, 235);
			this->generarReporte->Name = L"generarReporte";
			this->generarReporte->Size = System::Drawing::Size(116, 23);
			this->generarReporte->TabIndex = 19;
			this->generarReporte->Text = L"Generar Reporte";
			this->generarReporte->UseVisualStyleBackColor = true;
			this->generarReporte->Click += gcnew System::EventHandler(this, &MyForm::generarReporte_Click);
			// 
			// ComprarPanel
			// 
			this->ComprarPanel->Controls->Add(this->LlevarRadioButton);
			this->ComprarPanel->Controls->Add(this->ComerAcaRadioButton);
			this->ComprarPanel->Controls->Add(this->EstadoLabelMante);
			this->ComprarPanel->Location = System::Drawing::Point(229, 124);
			this->ComprarPanel->Name = L"ComprarPanel";
			this->ComprarPanel->Size = System::Drawing::Size(172, 57);
			this->ComprarPanel->TabIndex = 27;
			// 
			// LlevarRadioButton
			// 
			this->LlevarRadioButton->AutoSize = true;
			this->LlevarRadioButton->Location = System::Drawing::Point(9, 10);
			this->LlevarRadioButton->Name = L"LlevarRadioButton";
			this->LlevarRadioButton->Size = System::Drawing::Size(75, 17);
			this->LlevarRadioButton->TabIndex = 21;
			this->LlevarRadioButton->TabStop = true;
			this->LlevarRadioButton->Text = L"Para llevar";
			this->LlevarRadioButton->UseVisualStyleBackColor = true;
			// 
			// ComerAcaRadioButton
			// 
			this->ComerAcaRadioButton->AutoSize = true;
			this->ComerAcaRadioButton->Location = System::Drawing::Point(9, 29);
			this->ComerAcaRadioButton->Name = L"ComerAcaRadioButton";
			this->ComerAcaRadioButton->Size = System::Drawing::Size(102, 17);
			this->ComerAcaRadioButton->TabIndex = 20;
			this->ComerAcaRadioButton->TabStop = true;
			this->ComerAcaRadioButton->Text = L"Para Comer Acá";
			this->ComerAcaRadioButton->UseVisualStyleBackColor = true;
			// 
			// EstadoLabelMante
			// 
			this->EstadoLabelMante->AutoSize = true;
			this->EstadoLabelMante->Location = System::Drawing::Point(54, 37);
			this->EstadoLabelMante->Name = L"EstadoLabelMante";
			this->EstadoLabelMante->Size = System::Drawing::Size(0, 13);
			this->EstadoLabelMante->TabIndex = 19;
			// 
			// ModificarButton
			// 
			this->ModificarButton->Location = System::Drawing::Point(122, 206);
			this->ModificarButton->Name = L"ModificarButton";
			this->ModificarButton->Size = System::Drawing::Size(86, 23);
			this->ModificarButton->TabIndex = 26;
			this->ModificarButton->Text = L"Modificar";
			this->ModificarButton->UseVisualStyleBackColor = true;
			this->ModificarButton->Click += gcnew System::EventHandler(this, &MyForm::ModificarButton_Click);
			// 
			// EliminarButton
			// 
			this->EliminarButton->Location = System::Drawing::Point(122, 177);
			this->EliminarButton->Name = L"EliminarButton";
			this->EliminarButton->Size = System::Drawing::Size(86, 23);
			this->EliminarButton->TabIndex = 25;
			this->EliminarButton->Text = L"Eliminar";
			this->EliminarButton->UseVisualStyleBackColor = true;
			this->EliminarButton->Click += gcnew System::EventHandler(this, &MyForm::EliminarButton_Click);
			// 
			// BuscarButton
			// 
			this->BuscarButton->Location = System::Drawing::Point(10, 206);
			this->BuscarButton->Name = L"BuscarButton";
			this->BuscarButton->Size = System::Drawing::Size(86, 23);
			this->BuscarButton->TabIndex = 24;
			this->BuscarButton->Text = L"Buscar";
			this->BuscarButton->UseVisualStyleBackColor = true;
			this->BuscarButton->Click += gcnew System::EventHandler(this, &MyForm::BuscarButton_Click);
			// 
			// CedulaMante
			// 
			this->CedulaMante->Location = System::Drawing::Point(310, 14);
			this->CedulaMante->Name = L"CedulaMante";
			this->CedulaMante->Size = System::Drawing::Size(100, 20);
			this->CedulaMante->TabIndex = 23;
			this->CedulaMante->Visible = false;
			// 
			// CedulaLabel
			// 
			this->CedulaLabel->AutoSize = true;
			this->CedulaLabel->Location = System::Drawing::Point(226, 17);
			this->CedulaLabel->Name = L"CedulaLabel";
			this->CedulaLabel->Size = System::Drawing::Size(40, 13);
			this->CedulaLabel->TabIndex = 22;
			this->CedulaLabel->Text = L"Cedula";
			// 
			// TextoBuscar
			// 
			this->TextoBuscar->Location = System::Drawing::Point(445, 14);
			this->TextoBuscar->Name = L"TextoBuscar";
			this->TextoBuscar->ReadOnly = true;
			this->TextoBuscar->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->TextoBuscar->Size = System::Drawing::Size(284, 152);
			this->TextoBuscar->TabIndex = 21;
			this->TextoBuscar->Text = L"\n";
			this->TextoBuscar->Visible = false;
			this->TextoBuscar->WordWrap = false;
			// 
			// InsertarDatosMante
			// 
			this->InsertarDatosMante->Location = System::Drawing::Point(10, 177);
			this->InsertarDatosMante->Name = L"InsertarDatosMante";
			this->InsertarDatosMante->Size = System::Drawing::Size(86, 23);
			this->InsertarDatosMante->TabIndex = 18;
			this->InsertarDatosMante->Text = L"Insertar";
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
			this->MenuMante->TextChanged += gcnew System::EventHandler(this, &MyForm::MenuMante_TextChanged);
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
			this->ClientSize = System::Drawing::Size(913, 487);
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
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->PanelModificarCompra->ResumeLayout(false);
			this->PanelModificarCompra->PerformLayout();
			this->FacturarPanel->ResumeLayout(false);
			this->FacturarPanel->PerformLayout();
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
							this->eliminarToolStripMenuItem->Visible = false;
							this->radioButtonCliente->Visible = false;
							this->radioButtonAdmi->Visible = false;
							this->cedulaInicial->Visible = false;
							this->IngresarButton->Visible = false;
							this->MensajeInicio->Visible = false;
							this->clientesToolStripMenuItem->Visible = false;
							this->comprasToolStripMenuItem->Visible = false;
							this->cantidadDeUnProductoToolStripMenuItem->Visible = false;
							this->eliminadosToolStripMenuItem->Visible = false;
						}
						else {
							this->MensajeInicio->Text = "Cliente no registrado";
						}
					}
					else {
						esta = controller->getAdmin().esta_Administradores(stoi(cedula));
						if (esta) {
							this->menuStrip1->Show();
							this->insertarToolStripMenuItem->Visible = true;
							this->modificarToolStripMenuItem->Visible = true;
							this->eliminarToolStripMenuItem->Visible = true;
							this->clientesToolStripMenuItem->Visible = true;
							this->comprasToolStripMenuItem->Visible = true;
							this->cantidadDeUnProductoToolStripMenuItem->Visible = true;
							this->eliminadosToolStripMenuItem->Visible = true;
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

private: System::Void restauranteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void paísToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

}
private: System::Void InsertarDatosMante_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Text = "";
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
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad)) {
				mensaje = controller->insertarCiudad(stoi(pais), stoi(ciudad), nombre);
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
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest)) {
				mensaje = controller->insertarRest(stoi(pais), stoi(ciudad), stoi(rest), nombre);
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
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu)) {
				mensaje = controller->insertarMenu(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), nombre);
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
		if (this->NombreMante->Text != "" && this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->insertarCliente(stoi(cedula), nombre);
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
		if (this->NombreMante->Text != "" && this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->insertarAdmin(stoi(cedula), nombre);
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
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
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
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void productoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void clienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void administradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void compraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionInsertar = 8;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
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
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void ciudadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void restaurantesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void menúToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 4;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 5;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}

private: System::Void clienteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 6;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void administradorToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionConsultar = 7;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}

private: System::Void ModificarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Text = "";
	String^ msj;
	string mensaje;
	string pais, ciudad, rest, menu, producto, nombre, precio, calorias, cantidad, cedula;

	switch (this->opcionModificar) {
	case 1:
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			if (controller->isInteger(pais)) {
				mensaje = controller->modificarPais(stoi(pais), nombre);
				cout << mensaje;
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
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad)) {
				mensaje = controller->modificarCiudad(stoi(pais), stoi(ciudad), nombre);
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
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest)) {
				mensaje = controller->modificarRest(stoi(pais), stoi(ciudad), stoi(rest), nombre);
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
		if (this->NombreMante->Text != "" && this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu)) {
				mensaje = controller->modificarMenu(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), nombre);
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
			calorias = msclr::interop::marshal_as<string >(this->CaloriasMante->Text);
			precio = msclr::interop::marshal_as<string >(this->PrecioMante->Text);
			cantidad = msclr::interop::marshal_as<string >(this->CantidadMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto) && (controller->isInteger(calorias) || calorias == "") && (controller->isInteger(precio) || precio == "") && (controller->isInteger(cantidad) || cantidad == "")) {
				mensaje = controller->modificarProducto(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto), nombre, calorias, precio, cantidad);
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
		if (this->NombreMante->Text != "" && this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->modificarCliente(stoi(cedula), nombre);
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
		if (this->NombreMante->Text != "" && this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
			nombre = msclr::interop::marshal_as<string >(this->NombreMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->modificarAdmin(stoi(cedula), nombre);
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
	case 8:
		if (this->añadirProdMod->Checked == true || this->cambiarCantMod->Checked == true || this->eliminarProdMod->Checked == true) {
			switch (opcionModCompra) {
			case 1:
			{
				if (this->ProductoMante->Text != "" && this->CedulaMante->Text != "" && this->CantidadMante->Text != "") {
					producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);
					cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
					cantidad = msclr::interop::marshal_as<string >(this->CantidadMante->Text);
					if (controller->isInteger(producto) && controller->isInteger(cedula) && controller->isInteger(cantidad)) {
						mensaje = controller->modificarCompra(stoi(cedula), opcionModCompra, stoi(cantidad), 0, 0, 0, 0, stoi(producto));
						String^ msj = gcnew String(mensaje.c_str());
						this->TextoBuscar->Text = msj;
					}
				}
				else {
					this->TextoBuscar->Text = "Ingrese todos los datos.";
				}
			}
			break;
			case 2:
			{
				if (this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "" && this->ProductoMante->Text != "" && this->CedulaMante->Text != "" && this->CantidadMante->Text != "") {
					pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
					ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
					rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
					menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);
					producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);
					cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
					cantidad = msclr::interop::marshal_as<string >(this->CantidadMante->Text);

					if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto) && controller->isInteger(cedula) && controller->isInteger(cantidad)) {
						mensaje = controller->modificarCompra(stoi(cedula), opcionModCompra, stoi(cantidad), stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto));
						String^ msj = gcnew String(mensaje.c_str());
						this->TextoBuscar->Text = msj;
					}
					else {
						this->TextoBuscar->Text = "Ingrese datos correctos.";
					}
				}
				else {
					this->TextoBuscar->Text = "Ingrese todos los datos.";
				}
			}
			break;
			case 3:
			{
				if (this->ProductoMante->Text != "" && this->CedulaMante->Text != "") {
					producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);
					cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);
					if (controller->isInteger(producto) && controller->isInteger(cedula)) {
						mensaje = controller->modificarCompra(stoi(cedula), opcionModCompra, 0, 0, 0, 0, 0, stoi(producto));
						String^ msj = gcnew String(mensaje.c_str());
						this->TextoBuscar->Text = msj;
					}
				}
				else {
					this->TextoBuscar->Text = "Ingrese todos los datos.";
				}
			}
			break;
			}
		}
		else {
			this->TextoBuscar->Text = "Seleccione alguna opcion";
		}
		break;
	}
}
private: System::Void paísesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 1;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = true;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = true;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void ciudadesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 2;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = true;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = true;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void restaurantesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 3;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = true;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = true;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}

private: System::Void menúToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 4;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->NombreMante->Visible = true;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = true;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = true;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void productoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 5;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = true;
	this->MenuMante->Visible = true;
	this->ProductoMante->Visible = true;
	this->CaloriasMante->Visible = true;
	this->PrecioMante->Visible = true;
	this->CantidadMante->Visible = true;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = true;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = true;
	this->MenuLabelMante->Visible = true;
	this->ProductoLabelMante->Visible = true;
	this->CaloriasLabelMante->Visible = true;
	this->PrecioLabelMante->Visible = true;
	this->CantidadLabelMante->Visible = true;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = true;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void clienteToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 6;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->NombreMante->Visible = true;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = true;
	this->NombreLabelMante->Visible = true;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void administradorToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 7;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->NombreMante->Visible = true;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = true;
	this->NombreLabelMante->Visible = true;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void EliminarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Text = "";
	String^ msj;
	string mensaje;
	string pais, ciudad, rest, menu, producto, nombre, precio, calorias, cantidad, cedula;
	
	switch (this->opcionEliminar) {
	case 1:
		if (this->PaisMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			if (controller->isInteger(pais)) {
				mensaje = controller->eliminarPais(stoi(pais));
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
				mensaje = controller->eliminarCiudad(stoi(pais), stoi(ciudad));
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
				mensaje = controller->eliminarRest(stoi(pais), stoi(ciudad), stoi(rest));
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
				mensaje = controller->eliminarMenu(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu));
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
				mensaje = controller->eliminarProducto(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto));
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
				mensaje = controller->eliminarClientes(stoi(cedula));
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
				mensaje = controller->eliminarAdmin(stoi(cedula));
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
	case 8:
		if (this->CedulaMante->Text != "") {

			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);


			if (controller->isInteger(cedula)) {
				mensaje = controller->eliminarCompra(stoi(cedula));
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
private: System::Void paisToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
	this->PaisMante->Visible = true;
	this->PaisLabelMante->Visible = true;
	this->opcionEliminar = 1;
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
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = false;
	this->NombreLabelMante->Visible = false;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void ciudadToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
	this->opcionEliminar = 2;
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
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = false;
	this->NombreLabelMante->Visible = false;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void restauranteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";
	this->opcionEliminar = 3;
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
	this->BuscarButton->Visible = false;
	this->NombreMante->Visible = false;
	this->NombreLabelMante->Visible = false;
	this->ComprarPanel->Visible = false;
	this->EliminarButton->Visible = true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void menúToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionEliminar = 4;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible =  false;
	this->EliminarButton->Visible = true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void productoToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionEliminar = 5;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible =  false;
	this->EliminarButton->Visible = true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void clienteToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionEliminar = 6;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible =  true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void administradorToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionEliminar = 7;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}
private: System::Void compraToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionEliminar = 8;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = true;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;
}



private: System::Void generarReporte_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextoBuscar->Text = "";
	String^ msj;
	string mensaje;
	string pais, ciudad, rest, menu, producto, /*nombre, precio, calorias, cantidad,*/ cedula;

	switch (this->opcionReporte) {

	case 1:
		/*REPORTE PAISES*/
		mensaje = controller->reportarPais();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;

	case 2:
		/*REPORTE CUIDADES*/
		if (this->PaisMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			if (controller->isInteger(pais)) {
				mensaje = controller->reportarCiudad(stoi(pais));
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
		/*REPORTE RESTAURANTES*/
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad)) {
				mensaje = controller->reportarRest(stoi(pais), stoi(ciudad));
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
		/*REPORTE CLIENTES*/
		mensaje = controller->reportarCliente();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;

	case 5:
		/*REPORTE COMPRAS DE UN CLIENTE*/
		if (this->CedulaMante->Text != "") {
			cedula = msclr::interop::marshal_as<string >(this->CedulaMante->Text);

			if (controller->isInteger(cedula)) {
				mensaje = controller->reportarComprasCliente(stoi(cedula));
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
		/*REPORTE PRODUCTO MAS COMPRADO*/
		mensaje = controller->reportarProductoMasComprado();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;

	case 7:
		/*REPORTE FACTURA MAYOR MONTO*/
		mensaje = controller->reportarFacturaMayor();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;

	case 8:
		/*REPORTE FACTURA MENOR MONTO*/
		mensaje = controller->reportarFacturaMenor();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;

	case 9:
		/*REPORTE RESTAURANTE MÁS BUSCADO*/
		mensaje = controller->reportarRestMasBuscado();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;
	
	case 10:
		/*REPORTE MENÚ MÁS BUSCADO*/
		mensaje = controller->reportarMenuMasBuscado();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;

	case 11:
		/*REPORTE CONSULTA PRECIO DE UN PRODUCTO*/
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "" && this->ProductoMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);
			producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto)) {
				mensaje = controller->reportarPrecio(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto));
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

	case 12:
		/*REPORTE DESCUENTO APLICADO POR PAGO DE TARJETA*/
		mensaje = controller->reportarDescuento();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;

	case 13:
		/*REPORTE CANTIDAD DE UN PRODUCTO*/
		if (this->PaisMante->Text != "" && this->CiudadMante->Text != "" && this->RestMante->Text != "" && this->MenuMante->Text != "" && this->ProductoMante->Text != "") {
			pais = msclr::interop::marshal_as<string >(this->PaisMante->Text);
			ciudad = msclr::interop::marshal_as<string >(this->CiudadMante->Text);
			rest = msclr::interop::marshal_as<string >(this->RestMante->Text);
			menu = msclr::interop::marshal_as<string >(this->MenuMante->Text);
			producto = msclr::interop::marshal_as<string >(this->ProductoMante->Text);

			if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto)) {
				mensaje = controller->reportarCantidadProducto(stoi(pais), stoi(ciudad), stoi(rest), stoi(menu), stoi(producto));
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
	case 14:
		//REPORTE PRODUCTOS ELIMINADOS
		mensaje = controller->reportarElimProd();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;
	case 15:
		//REPORTE RESTAURANTES ELIMINADOS
		mensaje = controller->reportarElimRest();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;
	case 16:
		//REPORTE CIUDADES ELIMINADAS
		mensaje = controller->reportarElimCiudad();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;
	case 17:
		//REPORTES MENÚS ELIMINADOS
		mensaje = controller->reportarElimMenu();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;
	case 18:
		//REPORTE PAÍS ELIMINADOS
		mensaje = controller->reportarElimPais();
		msj = gcnew String(mensaje.c_str());
		this->TextoBuscar->Text = msj;
		break;
	}
}
private: System::Void paísToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 1;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void ciudadesToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 2;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void restaurantesToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 3;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;

	this->PaisMante->Visible = true;
	this->CiudadMante->Visible = true;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = true;
	this->CiudadLabelMante->Visible = true;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;


	this->TextoBuscar->Text = "";
}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 4;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
	   /*
	   * ---------------------------------------------
	   REPORTES DE COMPRAS     5-8
	   ------------------------------------------------
	   */
private: System::Void comprasDeUnClienteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 5;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void productoMásCompradoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 6;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void facturaDeMayorMontoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 7;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void facturaDeMenorMontoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 8;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
	   /*
	   * ---------------------------------------------
	   REPORTES DE BUSQUEDAS     9-10
	   ------------------------------------------------
	   */

private: System::Void restauranteMásBuscadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 9;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void mToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 10;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
	   /*
	   * ---------------------------------------------
	   REPORTES DE CONSULTAS     11-13
	   ------------------------------------------------
	   */
private: System::Void precioDeUnProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 11;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void descuentoAplicadoPorPagoDeTarjetaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 12;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void cantidadDeUnProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 13;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
	   /*
	   * ---------------------------------------------
	   REPORTES DE BUSQUEDAS     14-18
	   ------------------------------------------------
	   */
private: System::Void productosEliminadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 14;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void restaurantesEliminadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 15;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void menúsEliminadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 16;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void menúsEliminadosToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 17;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}
private: System::Void paisesEliminadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 18;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = true;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}


private: System::Void facturaciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionReporte = 18;

	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = true;
	this->FacturarButton->Visible = true;
	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

	this->TextoBuscar->Text = "";
}

private: System::Void FacturarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->TextoBuscar->Text = "";
	String^ msj;
	string mensaje;
	//if (this->LlevarRadioButton->Checked == true || this->ComerAcaRadioButton->Checked == true) {
		if (this->LlevarRadioButton->Checked == true && this->ComerAcaRadioButton->Checked == true) {
			this->TextoBuscar->Text = "Seleccione solo una opción";
		}
		else {
			//if (controller->isInteger(pais) && controller->isInteger(ciudad) && controller->isInteger(rest) && controller->isInteger(menu) && controller->isInteger(producto) && controller->isInteger(cedula) && controller->isInteger(cantidad)) {
				if (this->LlevarRadioButton->Checked == true) {
					mensaje = controller->pagar(1);

				}
				else {
					mensaje = controller->pagar(2);

				}
				msj = gcnew String(mensaje.c_str());
				this->TextoBuscar->Text = msj;
			/* }
			else {
				this->TextoBuscar->Text = "Ingrese datos correctos.";
			}*/
		}
	//}
	//else {
	//	this->TextoBuscar->Text = "Seleccione alguna opcion";
	//}
}


private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->TextoBuscar->Visible = true;

	string texto = "McDonald's es una franquicia de restaurantes de comida rápida estadounidense con sede en Chicago, Illinois. "
		"\nFundada por los hermanos Dick y Mac McDonald en 1940, la empresa introdujo la comida rápida ocho años después. "
		"\nEn 1955, experimentó un salto cualitativo con la primera franquicia exitosa, liderada por el ejecutivo Ray Kroc, "
		"quien eventualmente intentaría adquirir el control total de la empresa. \nA pesar de los primeros intentos poco ambiciosos "
		"de los hermanos McDonald, aceptaron que Kroc se encargara de las franquicias, mientras ellos recibían regalías.\n\n"

		"La cadena, conocida por sus hamburguesas, patatas fritas, menús para el desayuno y refrescos, \ntambién ofrece batidos, helados, "
		"postres, ensaladas de frutas o verduras, y otros productos exclusivos según el país. \nEn la actualidad, McDonald's atiende a "
		"aproximadamente 68 millones de clientes diarios en más de 36,000 establecimientos distribuidos en 118 territorios y países "
		"de todo el mundo. \nEn 2014, la empresa empleó a 1.7 millones de personas.\n\n"

		"Además, muchos de los restaurantes de McDonald's incluyen zonas de juegos para niños. \nA nivel global, su crecimiento y expansión "
		"han sido significativos, \ny su presencia internacional llevó a la revista británica The Economist a crear el índice Big Mac. "
		"\nEste índice compara el precio de una hamburguesa Big Mac, uno de los productos más emblemáticos de la cadena, en todos los países "
		"donde se vende. \nSirve como un parámetro común para evaluar los costos de vida y determinar si las divisas locales están sobrevaloradas "
		"en comparación con el dólar estadounidense.";

	String^ msj = gcnew String(texto.c_str());
	this->TextoBuscar->Text = msj;

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = false;

}
private: System::Void compraToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModificar = 8;
	
	this->TextoBuscar->Visible = true;
	this->TextoBuscar->Text = "";

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;
	this->PanelModificarCompra->Visible = true;

	this->PaisMante->Visible = false;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = false;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = true;
	this->groupBox1->Visible = false;

	string texto = this->controller->getColaClientes().imprimir();
	String^ msj = gcnew String(texto.c_str());
	this->TextoBuscar->Text = msj;
}
private: System::Void cambiarCantMod_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModCompra = 1;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;
	this->PanelModificarCompra->Visible = true;

	this->PaisMante->Visible = false;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = true;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = true;
	this->CedulaMante->Visible = true;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = true;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = true;
	this->CedulaLabel->Visible = true;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = true;
	this->groupBox1->Visible = false;
}
private: System::Void añadirProdMod_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModCompra = 2;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;
	this->PanelModificarCompra->Visible = true;

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

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;
	this->PanelModificarCompra->Visible = true;
	this->groupBox1->Visible = false;
}
private: System::Void eliminarProdMod_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->opcionModCompra = 3;

	this->TextoBuscar->Visible = true;

	this->PanelMantenimiento->Visible = true;
	this->ComprarPanel->Visible = false;
	this->PanelModificarCompra->Visible = true;

	this->PaisMante->Visible = false;
	this->CiudadMante->Visible = false;
	this->RestMante->Visible = false;
	this->MenuMante->Visible = false;
	this->ProductoMante->Visible = true;
	this->CaloriasMante->Visible = false;
	this->PrecioMante->Visible = false;
	this->CantidadMante->Visible = false;
	this->CedulaMante->Visible = true;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = true;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = true;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = true;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;

	this->PanelModificarCompra->Visible = true;
	this->groupBox1->Visible = false;
}
private: System::Void PanelMantenimiento_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void contactoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


	this->TextoBuscar->Visible = false;
	this->TextoBuscar->Text = "";

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
	this->CedulaMante->Visible = false;
	this->NombreMante->Visible = false;

	this->PaisLabelMante->Visible = false;
	this->CiudadLabelMante->Visible = false;
	this->RestLabelMante->Visible = false;
	this->MenuLabelMante->Visible = false;
	this->ProductoLabelMante->Visible = false;
	this->CaloriasLabelMante->Visible = false;
	this->PrecioLabelMante->Visible = false;
	this->CantidadLabelMante->Visible = false;
	this->CedulaLabel->Visible = false;
	this->NombreLabelMante->Visible = false;

	this->InsertarDatosMante->Visible = false;
	this->BuscarButton->Visible = false;
	this->EliminarButton->Visible = false;
	this->ModificarButton->Visible = false;
	this->generarReporte->Visible = false;
	this->FacturarPanel->Visible = false;
	this->FacturarButton->Visible = false;


	this->PanelModificarCompra->Visible = false;
	this->groupBox1->Visible = true;

	this->TextoBuscar->Text = "";
}
	 private: System::Void EnviarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (this->textBox1->Text != "" && this->textBox2->Text != "" && this->textBox3->Text != "" && this->richTextBox1->Text != "") {
			   this->LabelContacto->Text = "Se ha registrado su respuesta.";
			   this->textBox1->Text = "";
			   this->textBox2->Text = "";
			   this->textBox3->Text = "";
			   this->richTextBox1->Text = "";
		   }
		   else {
			   this->LabelContacto->Text = "Ingrese todos los datos.";
		   }
}

};
}
