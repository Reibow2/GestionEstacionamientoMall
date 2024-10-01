#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainWindowsForm
	/// </summary>
	public ref class MainWindowsForm : public System::Windows::Forms::Form
	{
	public:
		MainWindowsForm(void)
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
		~MainWindowsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salidaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ preferenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trabajadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ veedoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personalDeLimpiezaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ RegisterVehicleStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ servicioDeLavadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;





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
			this->configuraci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preferenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trabajadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->veedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalDeLimpiezaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RegisterVehicleStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->servicioDeLavadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->configuraci�nToolStripMenuItem,
					this->preferenciasToolStripMenuItem, this->archivoToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(593, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// configuraci�nToolStripMenuItem
			// 
			this->configuraci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salidaToolStripMenuItem });
			this->configuraci�nToolStripMenuItem->Name = L"configuraci�nToolStripMenuItem";
			this->configuraci�nToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->configuraci�nToolStripMenuItem->Text = L"Archivo";
			// 
			// salidaToolStripMenuItem
			// 
			this->salidaToolStripMenuItem->Name = L"salidaToolStripMenuItem";
			this->salidaToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salidaToolStripMenuItem->Text = L"Salir";
			// 
			// preferenciasToolStripMenuItem
			// 
			this->preferenciasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->clientesToolStripMenuItem,
					this->trabajadoresToolStripMenuItem, this->veedoresToolStripMenuItem, this->personalDeLimpiezaToolStripMenuItem
			});
			this->preferenciasToolStripMenuItem->Name = L"preferenciasToolStripMenuItem";
			this->preferenciasToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->preferenciasToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			// 
			// trabajadoresToolStripMenuItem
			// 
			this->trabajadoresToolStripMenuItem->Name = L"trabajadoresToolStripMenuItem";
			this->trabajadoresToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->trabajadoresToolStripMenuItem->Text = L"Administradores";
			// 
			// veedoresToolStripMenuItem
			// 
			this->veedoresToolStripMenuItem->Name = L"veedoresToolStripMenuItem";
			this->veedoresToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->veedoresToolStripMenuItem->Text = L"Veedores";
			// 
			// personalDeLimpiezaToolStripMenuItem
			// 
			this->personalDeLimpiezaToolStripMenuItem->Name = L"personalDeLimpiezaToolStripMenuItem";
			this->personalDeLimpiezaToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->personalDeLimpiezaToolStripMenuItem->Text = L"Personal de limpieza";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->RegisterVehicleStripMenuItem,
					this->ExitToolStripMenuItem, this->servicioDeLavadoToolStripMenuItem, this->generarToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->archivoToolStripMenuItem->Text = L"Operaciones";
			// 
			// RegisterVehicleStripMenuItem
			// 
			this->RegisterVehicleStripMenuItem->Name = L"RegisterVehicleStripMenuItem";
			this->RegisterVehicleStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->RegisterVehicleStripMenuItem->Text = L"Entrada de veh�culo";
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->ExitToolStripMenuItem->Text = L"Salida de veh�culo";
			// 
			// servicioDeLavadoToolStripMenuItem
			// 
			this->servicioDeLavadoToolStripMenuItem->Name = L"servicioDeLavadoToolStripMenuItem";
			this->servicioDeLavadoToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->servicioDeLavadoToolStripMenuItem->Text = L"Servicio de lavado";
			// 
			// generarToolStripMenuItem
			// 
			this->generarToolStripMenuItem->Name = L"generarToolStripMenuItem";
			this->generarToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->generarToolStripMenuItem->Text = L"Generar reservaci�n";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// MainWindowsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(593, 459);
			this->Controls->Add(this->menuStrip1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MainWindowsForm";
			this->Text = L"MainWindowsForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
