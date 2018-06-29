#pragma once
#include "Funciones.h"


namespace ProyectoEnsambla {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{

		CFunciones ^objFuncion = gcnew CFunciones();
	private: System::Windows::Forms::Button^  btnPunto;


		String ^hileraExpresion = "";
		

	public:
		Calc(void)
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
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  expresion;
	private: System::Windows::Forms::Button^  btn9;


	private: System::Windows::Forms::Button^  btn6;

	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMas;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  btn8;

	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Button^  btn2;

	private: System::Windows::Forms::Button^  btnCero;
	private: System::Windows::Forms::Button^  btnFac;


	private: System::Windows::Forms::Button^  btn7;

	private: System::Windows::Forms::Button^  btn4;

	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btnMenos;


	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  btnIgual;

	private: System::Windows::Forms::Button^  btnDiv;

	private: System::Windows::Forms::Button^  btnMult;

	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  btnAC;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Calc::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->expresion = (gcnew System::Windows::Forms::TextBox());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMas = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnCero = (gcnew System::Windows::Forms::Button());
			this->btnFac = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnMenos = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->btnAC = (gcnew System::Windows::Forms::Button());
			this->btnPunto = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(205, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 38);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calc::button1_Click_1);
			// 
			// expresion
			// 
			this->expresion->Location = System::Drawing::Point(21, 12);
			this->expresion->Name = L"expresion";
			this->expresion->Size = System::Drawing::Size(178, 20);
			this->expresion->TabIndex = 1;
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(21, 97);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(47, 43);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Calc::btn9_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(21, 136);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(47, 43);
			this->btn6->TabIndex = 3;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Calc::btn6_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(21, 175);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(47, 43);
			this->btn3->TabIndex = 4;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Calc::btn3_Click);
			// 
			// btnMas
			// 
			this->btnMas->BackColor = System::Drawing::Color::Orange;
			this->btnMas->Location = System::Drawing::Point(152, 214);
			this->btnMas->Name = L"btnMas";
			this->btnMas->Size = System::Drawing::Size(47, 43);
			this->btnMas->TabIndex = 5;
			this->btnMas->Text = L"+";
			this->btnMas->UseVisualStyleBackColor = false;
			this->btnMas->Click += gcnew System::EventHandler(this, &Calc::btnMas_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Location = System::Drawing::Point(21, 253);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 43);
			this->button6->TabIndex = 6;
			this->button6->Text = L"EXP";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calc::button6_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(65, 97);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(47, 43);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Calc::btn8_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(65, 136);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(47, 43);
			this->btn5->TabIndex = 8;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Calc::btn5_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(65, 175);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(47, 43);
			this->btn2->TabIndex = 9;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Calc::button9_Click);
			// 
			// btnCero
			// 
			this->btnCero->Location = System::Drawing::Point(65, 214);
			this->btnCero->Name = L"btnCero";
			this->btnCero->Size = System::Drawing::Size(47, 43);
			this->btnCero->TabIndex = 10;
			this->btnCero->Text = L"0";
			this->btnCero->UseVisualStyleBackColor = true;
			this->btnCero->Click += gcnew System::EventHandler(this, &Calc::button10_Click);
			// 
			// btnFac
			// 
			this->btnFac->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnFac->Location = System::Drawing::Point(65, 253);
			this->btnFac->Name = L"btnFac";
			this->btnFac->Size = System::Drawing::Size(47, 43);
			this->btnFac->TabIndex = 11;
			this->btnFac->Text = L"FACT";
			this->btnFac->UseVisualStyleBackColor = false;
			this->btnFac->Click += gcnew System::EventHandler(this, &Calc::btnFac_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(109, 97);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(47, 43);
			this->btn7->TabIndex = 12;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Calc::btn7_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(109, 136);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(47, 43);
			this->btn4->TabIndex = 13;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Calc::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(109, 175);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(47, 43);
			this->btn1->TabIndex = 14;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Calc::button14_Click);
			// 
			// btnMenos
			// 
			this->btnMenos->BackColor = System::Drawing::Color::Orange;
			this->btnMenos->Location = System::Drawing::Point(196, 214);
			this->btnMenos->Name = L"btnMenos";
			this->btnMenos->Size = System::Drawing::Size(47, 43);
			this->btnMenos->TabIndex = 15;
			this->btnMenos->Text = L"-";
			this->btnMenos->UseVisualStyleBackColor = false;
			this->btnMenos->Click += gcnew System::EventHandler(this, &Calc::btnMenos_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button16->Location = System::Drawing::Point(109, 253);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(47, 43);
			this->button16->TabIndex = 16;
			this->button16->Text = L"RAIZ";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Calc::button16_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnIgual->Location = System::Drawing::Point(109, 214);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(47, 43);
			this->btnIgual->TabIndex = 17;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = false;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Calc::btnIgual_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::Orange;
			this->btnDiv->Location = System::Drawing::Point(152, 175);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(47, 43);
			this->btnDiv->TabIndex = 18;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Calc::btnDiv_Click);
			// 
			// btnMult
			// 
			this->btnMult->BackColor = System::Drawing::Color::Orange;
			this->btnMult->Location = System::Drawing::Point(152, 136);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(47, 43);
			this->btnMult->TabIndex = 19;
			this->btnMult->Text = L"x";
			this->btnMult->UseVisualStyleBackColor = false;
			this->btnMult->Click += gcnew System::EventHandler(this, &Calc::btnMult_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button20->Location = System::Drawing::Point(21, 214);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(47, 43);
			this->button20->TabIndex = 20;
			this->button20->Text = L"ABS";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Calc::button20_Click);
			// 
			// btnAC
			// 
			this->btnAC->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnAC->Location = System::Drawing::Point(152, 97);
			this->btnAC->Name = L"btnAC";
			this->btnAC->Size = System::Drawing::Size(47, 43);
			this->btnAC->TabIndex = 21;
			this->btnAC->Text = L"AC";
			this->btnAC->UseVisualStyleBackColor = false;
			this->btnAC->Click += gcnew System::EventHandler(this, &Calc::btnAC_Click);
			// 
			// btnPunto
			// 
			this->btnPunto->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnPunto->Location = System::Drawing::Point(152, 253);
			this->btnPunto->Name = L"btnPunto";
			this->btnPunto->Size = System::Drawing::Size(47, 43);
			this->btnPunto->TabIndex = 22;
			this->btnPunto->Text = L".";
			this->btnPunto->UseVisualStyleBackColor = false;
			this->btnPunto->Click += gcnew System::EventHandler(this, &Calc::btnPunto_Click);
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(255, 312);
			this->Controls->Add(this->btnPunto);
			this->Controls->Add(this->btnAC);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btnMenos);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnFac);
			this->Controls->Add(this->btnCero);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btnMas);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->expresion);
			this->Controls->Add(this->button1);
			this->Name = L"Calc";
			this->Text = L"Calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit(); //Se sale de la aplicacion
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ cadena = "";
		System::String^ uno = "1";
		System::String^ h = expresion->Text;
		cadena = h + uno;
		expresion->Text = cadena;
	}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ dos = "2";
	System::String^ h = expresion->Text;
	cadena = h + dos;
	expresion->Text = cadena;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ menos = "^";
	System::String^ h = expresion->Text;
	cadena = h + menos;
	expresion->Text = cadena;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ cero = "0";
	System::String^ h = expresion->Text;
	cadena = h + cero;
	expresion->Text = cadena;
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ tres = "3";
	System::String^ h = expresion->Text;
	cadena = h + tres;
	expresion->Text = cadena;
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ cuatro = "4";
	System::String^ h = expresion->Text;
	cadena = h + cuatro;
	expresion->Text = cadena;
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ cinco = "5";
	System::String^ h = expresion->Text;
	cadena = h + cinco;
	expresion->Text = cadena;
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ seis = "6";
	System::String^ h = expresion->Text;
	cadena = h + seis;
	expresion->Text = cadena;
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ siete = "7";
	System::String^ h = expresion->Text;
	cadena = h + siete;
	expresion->Text = cadena;
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ ocho = "8";
	System::String^ h = expresion->Text;
	cadena = h + ocho;
	expresion->Text = cadena;
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ nueve = "9";
	System::String^ h = expresion->Text;
	cadena = h + nueve;
	expresion->Text = cadena;
}
private: System::Void btnAC_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	expresion->Text = cadena;
}
private: System::Void btnMas_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ mas = "+";
	System::String^ h = expresion->Text;
	cadena = h + mas;
	expresion->Text = cadena;
}
private: System::Void btnMenos_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ menos = "-";
	System::String^ h = expresion->Text;
	cadena = h + menos;
	expresion->Text = cadena;
}
private: System::Void btnMult_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ mult = "*";
	System::String^ h = expresion->Text;
	cadena = h + mult;
	expresion->Text = cadena;
}
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ div = "/";
	System::String^ h = expresion->Text;
	cadena = h + div;
	expresion->Text = cadena;
}
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	std::string hileraConvertida = msclr::interop::marshal_as<std::string>(h);
	string hilera = objFuncion->convertir(hileraConvertida);
	double res = objFuncion->evaluar(hilera);
	expresion->Text =  System::Convert::ToString(res);		
}
private: System::Void btnFac_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
int s =	objFuncion->suma(5,6);
expresion->Text = System::Convert::ToString(s);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {

	System::String^ h = expresion->Text;

	int exp = System::Convert::ToInt32(expresion->Text);
	int res = objFuncion->valorAbsoluto(exp);
	expresion->Text = System::Convert::ToString(res);
}
private: System::Void btnPunto_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	System::String^ punto = ".";
	System::String^ h = expresion->Text;
	cadena = h + punto;
	expresion->Text = cadena;
}
};
}
