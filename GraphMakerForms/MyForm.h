#pragma once
#include <cmath>
#include <Windows.h>
#include "postfix.h"
#include <msclr\marshal_cppstd.h>
namespace GraphMakerForms {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	struct point {
		int x;
		int y;
	};
	point axisCentre; // точка перетину осей координат
	struct GridLinesCount
	{
		int xMinus;
		int xPlus;
		int yMinus;
		int yPlus;
	};
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Draw_B;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ al_TB;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ bl_TB;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ Ne_NUD;

	public: System::Windows::Forms::ColorDialog^ grid_ColorD;
	private:


	private: System::Windows::Forms::ColorDialog^ axis_ColorD;

	private: System::Windows::Forms::ColorDialog^ graph_ColorD;





	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::NumericUpDown^ HorizLinesCount_NUD;

	private: System::Windows::Forms::NumericUpDown^ VertLinesCount_NUD;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ ChangeGridColor_B;
	private: System::Windows::Forms::Button^ ChangeGraphColor_B;
	private: System::Windows::Forms::Button^ ChangeAxisColor_B;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::NumericUpDown^ graphWidth_NUD;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ axisWidth_NUD;

	private: System::Windows::Forms::NumericUpDown^ gridWidth_NUD;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ graphStyle_CB;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Button^ Clear_B;
	private: System::Windows::Forms::ComboBox^ f1_CB;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ f2_CB;
	private: System::Windows::Forms::Label^ f2_L;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ graph2Style_L;
	private: System::Windows::Forms::ComboBox^ graph2Style_CB;
	private: System::Windows::Forms::NumericUpDown^ graph2Width_NUD;
	private: System::Windows::Forms::Label^ graph2_L;
	private: System::Windows::Forms::Button^ ChangeGraph2Color_B;
	private: System::Windows::Forms::ColorDialog^ graph2_ColorD;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Dot1Coordinates;
	private: System::Windows::Forms::TextBox^ Dot2Coordinates;


	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::MenuStrip^ menuStrip1;



private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Button^ button1;
private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Draw_B = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->al_TB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bl_TB = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Ne_NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->grid_ColorD = (gcnew System::Windows::Forms::ColorDialog());
			this->axis_ColorD = (gcnew System::Windows::Forms::ColorDialog());
			this->graph_ColorD = (gcnew System::Windows::Forms::ColorDialog());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->HorizLinesCount_NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->VertLinesCount_NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ChangeGridColor_B = (gcnew System::Windows::Forms::Button());
			this->ChangeGraphColor_B = (gcnew System::Windows::Forms::Button());
			this->ChangeAxisColor_B = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->graph2Width_NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->graph2_L = (gcnew System::Windows::Forms::Label());
			this->ChangeGraph2Color_B = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->graphWidth_NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->axisWidth_NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->gridWidth_NUD = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->graphStyle_CB = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Clear_B = (gcnew System::Windows::Forms::Button());
			this->f1_CB = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->f2_CB = (gcnew System::Windows::Forms::ComboBox());
			this->f2_L = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->graph2Style_L = (gcnew System::Windows::Forms::Label());
			this->graph2Style_CB = (gcnew System::Windows::Forms::ComboBox());
			this->graph2_ColorD = (gcnew System::Windows::Forms::ColorDialog());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Dot1Coordinates = (gcnew System::Windows::Forms::TextBox());
			this->Dot2Coordinates = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ne_NUD))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorizLinesCount_NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VertLinesCount_NUD))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graph2Width_NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphWidth_NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axisWidth_NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridWidth_NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// Draw_B
			// 
			this->Draw_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Draw_B->ForeColor = System::Drawing::Color::Maroon;
			this->Draw_B->Location = System::Drawing::Point(1224, 70);
			this->Draw_B->Name = L"Draw_B";
			this->Draw_B->Size = System::Drawing::Size(206, 42);
			this->Draw_B->TabIndex = 0;
			this->Draw_B->Text = L"Намалювати";
			this->Draw_B->UseVisualStyleBackColor = true;
			this->Draw_B->Click += gcnew System::EventHandler(this, &MyForm::Draw_B_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Межі графіка (al<bl):";
			// 
			// al_TB
			// 
			this->al_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->al_TB->Location = System::Drawing::Point(160, 40);
			this->al_TB->Name = L"al_TB";
			this->al_TB->Size = System::Drawing::Size(100, 26);
			this->al_TB->TabIndex = 4;
			this->al_TB->Text = L"-10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(4, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"al =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"bl =";
			// 
			// bl_TB
			// 
			this->bl_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bl_TB->Location = System::Drawing::Point(160, 71);
			this->bl_TB->Name = L"bl_TB";
			this->bl_TB->Size = System::Drawing::Size(100, 26);
			this->bl_TB->TabIndex = 6;
			this->bl_TB->Text = L"10";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->al_TB);
			this->panel1->Controls->Add(this->bl_TB);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->Ne_NUD);
			this->panel1->Location = System::Drawing::Point(943, 70);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(270, 139);
			this->panel1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(4, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ne =";
			// 
			// Ne_NUD
			// 
			this->Ne_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ne_NUD->Location = System::Drawing::Point(160, 102);
			this->Ne_NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->Ne_NUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->Ne_NUD->Name = L"Ne_NUD";
			this->Ne_NUD->Size = System::Drawing::Size(100, 26);
			this->Ne_NUD->TabIndex = 10;
			this->Ne_NUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// grid_ColorD
			// 
			this->grid_ColorD->Color = System::Drawing::Color::Green;
			this->grid_ColorD->FullOpen = true;
			// 
			// axis_ColorD
			// 
			this->axis_ColorD->Color = System::Drawing::Color::Red;
			// 
			// graph_ColorD
			// 
			this->graph_ColorD->Color = System::Drawing::Color::Blue;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->HorizLinesCount_NUD);
			this->panel3->Controls->Add(this->VertLinesCount_NUD);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(943, 215);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(270, 108);
			this->panel3->TabIndex = 9;
			// 
			// HorizLinesCount_NUD
			// 
			this->HorizLinesCount_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->HorizLinesCount_NUD->Location = System::Drawing::Point(187, 75);
			this->HorizLinesCount_NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->HorizLinesCount_NUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->HorizLinesCount_NUD->Name = L"HorizLinesCount_NUD";
			this->HorizLinesCount_NUD->Size = System::Drawing::Size(73, 26);
			this->HorizLinesCount_NUD->TabIndex = 13;
			this->HorizLinesCount_NUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			// 
			// VertLinesCount_NUD
			// 
			this->VertLinesCount_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VertLinesCount_NUD->Location = System::Drawing::Point(169, 44);
			this->VertLinesCount_NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->VertLinesCount_NUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->VertLinesCount_NUD->Name = L"VertLinesCount_NUD";
			this->VertLinesCount_NUD->Size = System::Drawing::Size(91, 26);
			this->VertLinesCount_NUD->TabIndex = 12;
			this->VertLinesCount_NUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Щільність гратки:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(4, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Горизонтальна:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(4, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Вертикальна:";
			// 
			// ChangeGridColor_B
			// 
			this->ChangeGridColor_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeGridColor_B->ForeColor = System::Drawing::Color::Maroon;
			this->ChangeGridColor_B->Location = System::Drawing::Point(206, 71);
			this->ChangeGridColor_B->Name = L"ChangeGridColor_B";
			this->ChangeGridColor_B->Size = System::Drawing::Size(121, 30);
			this->ChangeGridColor_B->TabIndex = 12;
			this->ChangeGridColor_B->Text = L"Гратка";
			this->ChangeGridColor_B->UseVisualStyleBackColor = true;
			this->ChangeGridColor_B->Click += gcnew System::EventHandler(this, &MyForm::ChangeGridColor_B_Click);
			// 
			// ChangeGraphColor_B
			// 
			this->ChangeGraphColor_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeGraphColor_B->ForeColor = System::Drawing::Color::Maroon;
			this->ChangeGraphColor_B->Location = System::Drawing::Point(206, 144);
			this->ChangeGraphColor_B->Name = L"ChangeGraphColor_B";
			this->ChangeGraphColor_B->Size = System::Drawing::Size(121, 30);
			this->ChangeGraphColor_B->TabIndex = 13;
			this->ChangeGraphColor_B->Text = L"Графік 1";
			this->ChangeGraphColor_B->UseVisualStyleBackColor = true;
			this->ChangeGraphColor_B->Click += gcnew System::EventHandler(this, &MyForm::ChangeGraphColor_B_Click);
			// 
			// ChangeAxisColor_B
			// 
			this->ChangeAxisColor_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeAxisColor_B->ForeColor = System::Drawing::Color::Maroon;
			this->ChangeAxisColor_B->Location = System::Drawing::Point(206, 107);
			this->ChangeAxisColor_B->Name = L"ChangeAxisColor_B";
			this->ChangeAxisColor_B->Size = System::Drawing::Size(121, 30);
			this->ChangeAxisColor_B->TabIndex = 14;
			this->ChangeAxisColor_B->Text = L"Осі";
			this->ChangeAxisColor_B->UseVisualStyleBackColor = true;
			this->ChangeAxisColor_B->Click += gcnew System::EventHandler(this, &MyForm::ChangeAxisColor_B_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->graph2Width_NUD);
			this->panel4->Controls->Add(this->graph2_L);
			this->panel4->Controls->Add(this->ChangeGraph2Color_B);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->graphWidth_NUD);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->axisWidth_NUD);
			this->panel4->Controls->Add(this->gridWidth_NUD);
			this->panel4->Controls->Add(this->ChangeGraphColor_B);
			this->panel4->Controls->Add(this->ChangeAxisColor_B);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->ChangeGridColor_B);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Location = System::Drawing::Point(943, 329);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 223);
			this->panel4->TabIndex = 14;
			// 
			// graph2Width_NUD
			// 
			this->graph2Width_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graph2Width_NUD->Location = System::Drawing::Point(108, 183);
			this->graph2Width_NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->graph2Width_NUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->graph2Width_NUD->Name = L"graph2Width_NUD";
			this->graph2Width_NUD->Size = System::Drawing::Size(73, 26);
			this->graph2Width_NUD->TabIndex = 27;
			this->graph2Width_NUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// graph2_L
			// 
			this->graph2_L->AutoSize = true;
			this->graph2_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graph2_L->Location = System::Drawing::Point(4, 185);
			this->graph2_L->Name = L"graph2_L";
			this->graph2_L->Size = System::Drawing::Size(87, 20);
			this->graph2_L->TabIndex = 26;
			this->graph2_L->Text = L"Графік 2:";
			// 
			// ChangeGraph2Color_B
			// 
			this->ChangeGraph2Color_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeGraph2Color_B->ForeColor = System::Drawing::Color::Maroon;
			this->ChangeGraph2Color_B->Location = System::Drawing::Point(206, 180);
			this->ChangeGraph2Color_B->Name = L"ChangeGraph2Color_B";
			this->ChangeGraph2Color_B->Size = System::Drawing::Size(121, 30);
			this->ChangeGraph2Color_B->TabIndex = 25;
			this->ChangeGraph2Color_B->Text = L"Графік 2";
			this->ChangeGraph2Color_B->UseVisualStyleBackColor = true;
			this->ChangeGraph2Color_B->Click += gcnew System::EventHandler(this, &MyForm::ChangeGraph2Color_B_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label14->Location = System::Drawing::Point(27, 10);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(265, 29);
			this->label14->TabIndex = 24;
			this->label14->Text = L"Налаштування ліній";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(182, 39);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 25);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Колір:";
			// 
			// graphWidth_NUD
			// 
			this->graphWidth_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graphWidth_NUD->Location = System::Drawing::Point(108, 147);
			this->graphWidth_NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->graphWidth_NUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->graphWidth_NUD->Name = L"graphWidth_NUD";
			this->graphWidth_NUD->Size = System::Drawing::Size(73, 26);
			this->graphWidth_NUD->TabIndex = 15;
			this->graphWidth_NUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(4, 149);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 20);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Графік 1:";
			// 
			// axisWidth_NUD
			// 
			this->axisWidth_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->axisWidth_NUD->Location = System::Drawing::Point(108, 109);
			this->axisWidth_NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->axisWidth_NUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->axisWidth_NUD->Name = L"axisWidth_NUD";
			this->axisWidth_NUD->Size = System::Drawing::Size(73, 26);
			this->axisWidth_NUD->TabIndex = 13;
			this->axisWidth_NUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// gridWidth_NUD
			// 
			this->gridWidth_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gridWidth_NUD->Location = System::Drawing::Point(108, 74);
			this->gridWidth_NUD->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->gridWidth_NUD->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->gridWidth_NUD->Name = L"gridWidth_NUD";
			this->gridWidth_NUD->Size = System::Drawing::Size(73, 26);
			this->gridWidth_NUD->TabIndex = 12;
			this->gridWidth_NUD->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(2, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 25);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Товнщина:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(4, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Осі:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(3, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 20);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Гратка:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(974, 555);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(225, 25);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Стиль ліній графіків:";
			// 
			// graphStyle_CB
			// 
			this->graphStyle_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graphStyle_CB->FormattingEnabled = true;
			this->graphStyle_CB->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Суцільна лінія (Solid)", L"Штрихова лінія (Dash)",
					L"Пунктирна лінія (Dot)", L"Штрих-пунктирна (DashDot)", L"Штрих-пунктирна (2 крапки)"
			});
			this->graphStyle_CB->Location = System::Drawing::Point(975, 591);
			this->graphStyle_CB->Name = L"graphStyle_CB";
			this->graphStyle_CB->Size = System::Drawing::Size(238, 28);
			this->graphStyle_CB->TabIndex = 21;
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pictureBox->Location = System::Drawing::Point(12, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(920, 646);
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
			this->pictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_Click);
			// 
			// Clear_B
			// 
			this->Clear_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear_B->ForeColor = System::Drawing::Color::Maroon;
			this->Clear_B->Location = System::Drawing::Point(1224, 118);
			this->Clear_B->Name = L"Clear_B";
			this->Clear_B->Size = System::Drawing::Size(206, 42);
			this->Clear_B->TabIndex = 15;
			this->Clear_B->Text = L"Очистити";
			this->Clear_B->UseVisualStyleBackColor = true;
			this->Clear_B->Click += gcnew System::EventHandler(this, &MyForm::Clear_B_Click);
			// 
			// f1_CB
			// 
			this->f1_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f1_CB->FormattingEnabled = true;
			this->f1_CB->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"x * sin(x)", L"x * cos(x)", L"| sin(x) |", L"| cos(x) |",
					L"| x * sin(x) |", L"| x * cos(x) |"
			});
			this->f1_CB->Location = System::Drawing::Point(1224, 233);
			this->f1_CB->Name = L"f1_CB";
			this->f1_CB->Size = System::Drawing::Size(206, 28);
			this->f1_CB->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1219, 206);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(198, 24);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Оберіть функцію 1:";
			// 
			// f2_CB
			// 
			this->f2_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f2_CB->FormattingEnabled = true;
			this->f2_CB->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"x * sin(x)", L"x * cos(x)", L"| sin(x) |", L"| cos(x) |",
					L"| x * sin(x) |", L"| x * cos(x) |"
			});
			this->f2_CB->Location = System::Drawing::Point(1224, 292);
			this->f2_CB->Name = L"f2_CB";
			this->f2_CB->Size = System::Drawing::Size(206, 28);
			this->f2_CB->TabIndex = 25;
			// 
			// f2_L
			// 
			this->f2_L->AutoSize = true;
			this->f2_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f2_L->Location = System::Drawing::Point(1219, 265);
			this->f2_L->Name = L"f2_L";
			this->f2_L->Size = System::Drawing::Size(198, 24);
			this->f2_L->TabIndex = 26;
			this->f2_L->Text = L"Оберіть функцію 2:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(946, 594);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 20);
			this->label17->TabIndex = 25;
			this->label17->Text = L"1:";
			// 
			// graph2Style_L
			// 
			this->graph2Style_L->AutoSize = true;
			this->graph2Style_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graph2Style_L->Location = System::Drawing::Point(946, 628);
			this->graph2Style_L->Name = L"graph2Style_L";
			this->graph2Style_L->Size = System::Drawing::Size(23, 20);
			this->graph2Style_L->TabIndex = 28;
			this->graph2Style_L->Text = L"2:";
			// 
			// graph2Style_CB
			// 
			this->graph2Style_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graph2Style_CB->FormattingEnabled = true;
			this->graph2Style_CB->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Суцільна лінія (Solid)", L"Штрихова лінія (Dash)",
					L"Пунктирна лінія (Dot)", L"Штрих-пунктирна (DashDot)", L"Штрих-пунктирна (2 крапки)"
			});
			this->graph2Style_CB->Location = System::Drawing::Point(975, 625);
			this->graph2Style_CB->Name = L"graph2Style_CB";
			this->graph2Style_CB->Size = System::Drawing::Size(238, 28);
			this->graph2Style_CB->TabIndex = 27;
			// 
			// graph2_ColorD
			// 
			this->graph2_ColorD->Color = System::Drawing::Color::MediumVioletRed;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox1->Location = System::Drawing::Point(1257, 169);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(137, 30);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"2 функції";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label16->Location = System::Drawing::Point(945, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(421, 29);
			this->label16->TabIndex = 11;
			this->label16->Text = L"Побудова графіка на PictureBox";
			// 
			// Dot1Coordinates
			// 
			this->Dot1Coordinates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dot1Coordinates->Location = System::Drawing::Point(1236, 593);
			this->Dot1Coordinates->Name = L"Dot1Coordinates";
			this->Dot1Coordinates->ReadOnly = true;
			this->Dot1Coordinates->Size = System::Drawing::Size(194, 26);
			this->Dot1Coordinates->TabIndex = 30;
			// 
			// Dot2Coordinates
			// 
			this->Dot2Coordinates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dot2Coordinates->Location = System::Drawing::Point(1236, 627);
			this->Dot2Coordinates->Name = L"Dot2Coordinates";
			this->Dot2Coordinates->ReadOnly = true;
			this->Dot2Coordinates->Size = System::Drawing::Size(194, 26);
			this->Dot2Coordinates->TabIndex = 31;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(1231, 555);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(191, 25);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Точка на графіку:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1585, 24);
			this->menuStrip1->TabIndex = 33;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1316, 345);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 35;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1316, 373);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 36;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1328, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 37;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1585, 665);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->Dot2Coordinates);
			this->Controls->Add(this->Dot1Coordinates);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->graph2Style_L);
			this->Controls->Add(this->graph2Style_CB);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->f2_CB);
			this->Controls->Add(this->f2_L);
			this->Controls->Add(this->f1_CB);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Clear_B);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->graphStyle_CB);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->Draw_B);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"GraphDraw";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ne_NUD))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HorizLinesCount_NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VertLinesCount_NUD))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graph2Width_NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphWidth_NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axisWidth_NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridWidth_NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Color gridColor, axisColor, graph1Color, graph2Color; // колір ліній
		float gridWidth, axisWidth, graph1Width, graph2Width; // ширина ліній
		double xMax, yMax, xMin, yMin; // максимальні та мінімальні значиення х та y
		double Kx, Ky, Zx, Zy; // коефiцiєнти масштабування
		const int L = 50; // відступ від країв pictureBox
		bool is2F;
		int Ne = 100; // кількість точок графіка
		int fIndex1, fIndex2; // індекс функції
		double f(double x, int fIndex)
		{
			switch (fIndex)
			{
			case 0: return log(x);
			case 1: return x * cos(x);
			case 2: return abs(sin(x));
			case 3: return abs(cos(x));
			case 4: return abs(x * sin(x));
			case 5: return abs(x * cos(x));
			}
		}
		void TabulF(double al, double bl, double Xe[1000], double Ye[1000], string strriv)
		{
			double h;
			h = (bl - al) / (Ne - 1);
			Xe[0] = al;
			for (int i = 0; i < Ne; i++)
			{
				Ye[i] = calculator(toPostfix(parser(strriv)), Xe[i]);;
				Xe[i + 1] = Xe[i] + h;
			}
		}
		void Draw() {
			double krx, kry, xx, yy, Gx, Gy; // для виведення осей координат та їхніх підписів
			int xGridKrok, yGridKrok; // відступи між лініями гратки
			int gridLinesVert, gridLinesHoriz; // кількість ліній гратки графіка
			double Xe1[1000], Ye1[1000], Xe2[1000], Ye2[1000]; // всі значення x та y

			Pen^ gridPen = gcnew Pen(gridColor, gridWidth); // колір гратки
			Pen^ axisPen = gcnew Pen(axisColor, axisWidth); // колір осей координат
			Pen^ graph1Pen = gcnew Pen(graph1Color, graph1Width); // колір графіка 1
			Pen^ graph2Pen = gcnew Pen(graph2Color, graph2Width); // колір графіка 2
			// обираємо стиль ліній графіка 1
			switch (Convert::ToInt32(graphStyle_CB->SelectedIndex))
			{
			case 0: graph1Pen->DashStyle = Drawing2D::DashStyle::Solid; break;
			case 1: graph1Pen->DashStyle = Drawing2D::DashStyle::Dash; break;
			case 2: graph1Pen->DashStyle = Drawing2D::DashStyle::Dot; break;
			case 3: graph1Pen->DashStyle = Drawing2D::DashStyle::DashDot; break;
			case 4: graph1Pen->DashStyle = Drawing2D::DashStyle::DashDotDot; break;
			default: MessageBox::Show("Оберіть стиль!"); return;
			}
			// обираємо стиль ліній графіка 2
			switch (Convert::ToInt32(graph2Style_CB->SelectedIndex))
			{
			case 0: graph2Pen->DashStyle = Drawing2D::DashStyle::Solid; break;
			case 1: graph2Pen->DashStyle = Drawing2D::DashStyle::Dash; break;
			case 2: graph2Pen->DashStyle = Drawing2D::DashStyle::Dot; break;
			case 3: graph2Pen->DashStyle = Drawing2D::DashStyle::DashDot; break;
			case 4: graph2Pen->DashStyle = Drawing2D::DashStyle::DashDotDot; break;
			default: MessageBox::Show("Оберіть стиль!"); return;
			}

			Graphics^ graph = pictureBox->CreateGraphics(); // створення об’єкта для роботи з графікою
			graph->Clear(Color::White); // очищення pictureBox
			int graphHeight = pictureBox->Height;
			int graphWidth = pictureBox->Width;

			Pen^ blackPen = gcnew Pen(Color::Black, (float)(2)); // колір графіка
			graph->DrawLine(blackPen, Point(L, L), Point(L, graphHeight - L));
			graph->DrawLine(blackPen, Point(graphWidth - L, L), Point(graphWidth - L, graphHeight - L));
			graph->DrawLine(blackPen, Point(L, L), Point(graphWidth - L, L));
			graph->DrawLine(blackPen, Point(L, graphHeight - L), Point(graphWidth - L, graphHeight - L));

			// Вводимо Ne, al, bl
			try
			{
				gridLinesVert = Convert::ToInt32(VertLinesCount_NUD->Value);
				gridLinesHoriz = Convert::ToInt32(HorizLinesCount_NUD->Value);

				Ne = Convert::ToInt32(Ne_NUD->Value);
				double al = Convert::ToDouble(al_TB->Text);
				double bl = Convert::ToDouble(bl_TB->Text);
				if (al > bl)
				{
					double R = al;
					al = bl;
					bl = R;
					MessageBox::Show("al > bl");
					al_TB->Text = Convert::ToString(al);
					bl_TB->Text = Convert::ToString(bl);
				}
				// табулюємо функцію із записом результатів у масиви			
				double* pXe = Xe1;
				double* pYe = Ye1;
				System::String^ rivf = textBox1->Text;

				std::string strrivf = msclr::interop::marshal_as<std::string>(rivf);
				

				TabulF(al, bl, pXe, pYe, strrivf);
				if (is2F)
				{
					System::String^ rivs = textBox2->Text;

					std::string strrivs = msclr::interop::marshal_as<std::string>(rivs);
					pXe = Xe2;
					pYe = Ye2;
					TabulF(al, bl, pXe, pYe, strrivs);
				}
			}
			catch (FormatException^)
			{
				MessageBox::Show("Некоректне введення! (al/ bl/ Ne)");
				return;
			}
			catch (OverflowException^) {
				MessageBox::Show("Надто велике чи мале число! (al/ bl/ Ne)");
				return;
			}

			// Знаходимо екстремуми x та y
			xMin = Xe1[0]; xMax = Xe1[Ne - 1];
			yMin = 0; yMax = 0;
			if (is2F) {
				for (int i = 0; i < Ne; i++)
				{
					if (yMax < Ye1[i]) yMax = Ye1[i];
					if (yMin > Ye1[i]) yMin = Ye1[i];

					if (yMax < Ye2[i]) yMax = Ye2[i];
					if (yMin > Ye2[i]) yMin = Ye2[i];
				}
			}
			else {
				for (int i = 0; i < Ne; i++)
				{
					if (yMax < Ye1[i]) yMax = Ye1[i];
					if (yMin > Ye1[i]) yMin = Ye1[i];
				}
			}

			// Обчислюємо коефіцієнти масштабування
			Kx = (graphWidth - 2 * L) / (xMax - xMin); // одиниця x в пікселях
			Ky = (graphHeight - 2 * L) / (yMin - yMax); // одиниця y в пікселях
			Zx = (graphWidth * xMin - L * (xMax + xMin)) / (xMin - xMax);
			Zy = (graphHeight * yMax - L * (yMin + yMax)) / (yMax - yMin);
			// Обчислюємо розташування плаваючих (рухомих) осей координат
			double R = xMin * xMax;
			if (R <= 0.0) Gx = 0.0;
			else if (R > 0.0 && xMin < 0.0) Gx = xMax;
			else if (R > 0.0) Gx = xMin;
			R = yMin * yMax;
			if (R <= 0.0) Gy = 0.0;
			else if (R > 0.0 && yMin > 0.0) Gy = yMin;
			else if (R > 0.0 && yMin < 0.0) Gy = yMax;
			axisCentre.x = Math::Round(Kx * Gx + Zx, 4);
			axisCentre.y = Math::Round(Ky * Gy + Zy, 4);
			// Обчислюємо цілочислові відстані між лініями гратки
			xGridKrok = round((graphWidth - 2 * L) / gridLinesVert);
			yGridKrok = round((graphHeight - 2 * L) / gridLinesHoriz);
			//MessageBox::Show("gridKrokX " + Convert::ToString(xGridKrok / Kx));
			//MessageBox::Show("gridKrokY " + Convert::ToString(yGridKrok / -Ky));

			// обчислюємо кількість ліній гратки по кожен бік від осей
			GridLinesCount Lines;
			Lines.xMinus = round((gridLinesVert - 1) * abs(xMin - Gx) / (abs(xMin - Gx) + abs(xMax - Gx)));
			Lines.xPlus = (gridLinesVert - 1) - Lines.xMinus;
			Lines.yMinus = round((gridLinesHoriz - 1) * abs(yMin - Gy) / (abs(yMin - Gy) + abs(yMax - Gy)));
			Lines.yPlus = (gridLinesHoriz - 1) - Lines.yMinus;
			//MessageBox::Show("xMinus "+Convert::ToString(Lines.xMinus));
			//MessageBox::Show("xPlus " + Convert::ToString(Lines.xPlus));
			//MessageBox::Show("yMinus " + Convert::ToString(Lines.yMinus));
			//MessageBox::Show("yPlus " + Convert::ToString(Lines.yPlus));

			// Малюємо масштабну гратку
			// Вертикальна гратка
			xx = Gx;
			krx = (xMax - xMin) / (gridLinesVert);
			for (int i = 1; i < Lines.xMinus + 1; i++) // x<0
			{
				graph->DrawLine(gridPen, axisCentre.x - i * xGridKrok, L, axisCentre.x - i * xGridKrok, graphHeight - L);
				xx = xx - krx;
				graph->DrawString(Convert::ToString(Math::Round(xx, 1)), gcnew Drawing::Font("Times", 8),
					Brushes::Black, axisCentre.x - i * xGridKrok - 6, L / 2);
			}
			xx = Gx;
			for (int i = 1; i <= Lines.xPlus; i++) // x>0
			{
				graph->DrawLine(gridPen, axisCentre.x + i * xGridKrok, L, axisCentre.x + i * xGridKrok, graphHeight - L);
				xx = xx + krx;
				graph->DrawString(Convert::ToString(Math::Round(xx, 1)), gcnew Drawing::Font("Times", 8),
					Brushes::Black, axisCentre.x + i * xGridKrok - 6, L / 2);
			}
			// Горизотальна гратка
			yy = Gy;
			kry = (yMax - yMin) / (gridLinesHoriz);
			for (int i = 1; i <= Lines.yMinus; i++) // y<0
			{
				graph->DrawLine(gridPen, L, axisCentre.y + i * yGridKrok, graphWidth - L, axisCentre.y + i * yGridKrok);
				yy = yy - kry;
				graph->DrawString(Convert::ToString(Math::Round(yy, 1)), gcnew Drawing::Font("Times", 8),
					Brushes::Black, L / 4, (float)(axisCentre.y + i * yGridKrok - 6));
			}
			yy = Gy;
			for (int i = 1; i <= Lines.yPlus; i++) // y>0
			{
				graph->DrawLine(gridPen, L, axisCentre.y - i * yGridKrok, graphWidth - L, axisCentre.y - i * yGridKrok);
				yy = yy + kry;
				graph->DrawString(Convert::ToString(Math::Round(yy, 1)), gcnew Drawing::Font("Times", 8),
					Brushes::Black, L / 4, (float)(axisCentre.y - i * yGridKrok - 6));
			}

			// малюємо осі
			// вісь x
			graph->DrawLine(axisPen, L, axisCentre.y, Math::Round(graphWidth - L, 4), axisCentre.y);
			// вісь y
			graph->DrawLine(axisPen, axisCentre.x, L, axisCentre.x, Math::Round(graphHeight - L, 4));
			graph->DrawString(Convert::ToString(Gx), gcnew Drawing::Font("Times", 8), Brushes::Black, L / 2, axisCentre.y - 6);
			graph->DrawString(Convert::ToString(Gy), gcnew Drawing::Font("Times", 8), Brushes::Black, axisCentre.x - 6, L / 2);

			for (int i = 1; i < Ne; i++)
			{
				graph->DrawLine(graph1Pen, Math::Round(Kx * Xe1[i - 1] + Zx, 4), Math::Round(Ky * Ye1[i - 1] + Zy, 4),
					Math::Round(Kx * Xe1[i] + Zx, 4), Convert::ToInt32(Math::Round(Ky * Ye1[i] + Zy, 4)));
			}
			if (is2F) {
				for (int i = 1; i < Ne; i++)
				{
					graph->DrawLine(graph2Pen, Math::Round(Kx * Xe2[i - 1] + Zx, 4), Math::Round(Ky * Ye2[i - 1] + Zy, 4),
						Math::Round(Kx * Xe2[i] + Zx, 4), Convert::ToInt32(Math::Round(Ky * Ye2[i] + Zy, 4)));
				}
			}
		}
	private: System::Void Draw_B_Click(System::Object^ sender, System::EventArgs^ e) {
		// налаштовуэмо колір та ширину ліній
		gridWidth = Convert::ToInt32(gridWidth_NUD->Value);
		gridColor = grid_ColorD->Color;
		axisWidth = Convert::ToInt32(axisWidth_NUD->Value);
		axisColor = axis_ColorD->Color;
		graph1Width = Convert::ToInt32(graphWidth_NUD->Value);
		graph1Color = graph_ColorD->Color;
		graph2Width = Convert::ToInt32(graph2Width_NUD->Value);
		graph2Color = graph2_ColorD->Color;
		fIndex1 = Convert::ToInt16(f1_CB->SelectedIndex);
		fIndex2 = Convert::ToInt16(f2_CB->SelectedIndex);
		// малюємо графік, осі та гратку
		Draw();
	}
	private: System::Void ChangeGridColor_B_Click(System::Object^ sender, System::EventArgs^ e) {
		grid_ColorD->ShowDialog();
	}
	private: System::Void ChangeAxisColor_B_Click(System::Object^ sender, System::EventArgs^ e) {
		axis_ColorD->ShowDialog();
	}
	private: System::Void ChangeGraphColor_B_Click(System::Object^ sender, System::EventArgs^ e) {
		graph_ColorD->ShowDialog();
	}
	private: System::Void ChangeGraph2Color_B_Click(System::Object^ sender, System::EventArgs^ e) {
		graph2_ColorD->ShowDialog();
	}
	private: System::Void Clear_B_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ graph = pictureBox->CreateGraphics(); // створення об’єкта для роботи з графікою
		graph->Clear(Color::White); // очищення pictureBox
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		graphStyle_CB->SelectedIndex = 0;
		graph2Style_CB->SelectedIndex = 0;
		f1_CB->SelectedIndex = 0;
		f2_CB->SelectedIndex = 0;
		is2F = false;
		f2_CB->Visible = false;
		f2_L->Visible = false;
		graph2_L->Visible = false;
		graph2Width_NUD->Visible = false;
		ChangeGraph2Color_B->Visible = false;
		graph2Style_CB->Visible = false;
		graph2Style_L->Visible = false;
		Dot2Coordinates->Visible = false;
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		is2F = !is2F;
		f2_CB->Visible = !f2_CB->Visible;
		f2_L->Visible = !f2_L->Visible;
		graph2_L->Visible = !graph2_L->Visible;
		graph2Width_NUD->Visible = !graph2Width_NUD->Visible;
		ChangeGraph2Color_B->Visible = !ChangeGraph2Color_B->Visible;
		graph2Style_CB->Visible = !graph2Style_CB->Visible;
		graph2Style_L->Visible = !graph2Style_L->Visible;
		Dot2Coordinates->Visible = !Dot2Coordinates->Visible;
	}
	private: System::Void pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		point MPoint;
		float x = (MousePosition.X - this->Location.X - pictureBox->Location.X - Zx) * (float)(xMax - xMin) / (pictureBox->Width - 2 * L) - 0.015 * (xMax - xMin);
		//float y = Math::Round(MousePosition.Y - this->Location.Y - pictureBox->Location.Y - Zy, 2) * (float)(yMin - yMax) / (pictureBox->Height - 2 * L);
		//MPoint.X = (float)(MousePosition.X - this->Location.X - pictureBox->Location.X - pictureBox->Width / 2) * (float)(xMax - xMin) / (pictureBox->Width - 2 * L);
		//MPoint.Y = (float)(MousePosition.Y - this->Location.Y - pictureBox->Location.Y - pictureBox->Height / 2) * (float)(yMax - yMin) / (pictureBox->Height - 2 * L);
		Dot1Coordinates->Text = Convert::ToString("X1 = " + Math::Round(x, 1) + "; Y1 = " + Math::Round(f(x, fIndex1), 1));
		if (is2F)
			Dot2Coordinates->Text = Convert::ToString("X2 = " + Math::Round(x, 1) + "; Y2 = " + Math::Round(f(x, fIndex2), 1));
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ riv = textBox1->Text;

	std::string strriv = msclr::interop::marshal_as<std::string>(riv);

	
	

	double x = calculator(toPostfix(parser(strriv)), x);
	string vid = to_string(x);
	System::String^ result = msclr::interop::marshal_as<System::String^>(vid.c_str());
	textBox2->Text = result;
	Draw();
	


}
};
}
