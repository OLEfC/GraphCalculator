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
	point axisCentre; // ����� �������� ���� ���������
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


































	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Button^ Clear_B;



	private: System::Windows::Forms::Label^ label15;










	private: System::Windows::Forms::ColorDialog^ graph2_ColorD;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Dot1Coordinates;
	private: System::Windows::Forms::TextBox^ Dot2Coordinates;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;



	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ������������PngToolStripMenuItem;


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
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Clear_B = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->graph2_ColorD = (gcnew System::Windows::Forms::ColorDialog());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Dot1Coordinates = (gcnew System::Windows::Forms::TextBox());
			this->Dot2Coordinates = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������PngToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ne_NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Draw_B
			// 
			this->Draw_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Draw_B->ForeColor = System::Drawing::Color::Maroon;
			this->Draw_B->Location = System::Drawing::Point(1224, 96);
			this->Draw_B->Name = L"Draw_B";
			this->Draw_B->Size = System::Drawing::Size(206, 42);
			this->Draw_B->TabIndex = 0;
			this->Draw_B->Text = L"����������";
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
			this->label1->Text = L"��� ������� (al<bl):";
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
			this->al_TB->TextChanged += gcnew System::EventHandler(this, &MyForm::al_TB_TextChanged);
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
			this->bl_TB->TextChanged += gcnew System::EventHandler(this, &MyForm::bl_TB_TextChanged);
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
			this->panel1->Location = System::Drawing::Point(943, 96);
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
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pictureBox->Location = System::Drawing::Point(12, 38);
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
			this->Clear_B->Location = System::Drawing::Point(1224, 144);
			this->Clear_B->Name = L"Clear_B";
			this->Clear_B->Size = System::Drawing::Size(206, 42);
			this->Clear_B->TabIndex = 15;
			this->Clear_B->Text = L"��������";
			this->Clear_B->UseVisualStyleBackColor = true;
			this->Clear_B->Click += gcnew System::EventHandler(this, &MyForm::Clear_B_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1219, 232);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(198, 24);
			this->label15->TabIndex = 24;
			this->label15->Text = L"������ ������� 1:";
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
			this->checkBox1->Location = System::Drawing::Point(1224, 198);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(355, 30);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"������� ������� �� �������";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label16->Location = System::Drawing::Point(945, 38);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(421, 29);
			this->label16->TabIndex = 11;
			this->label16->Text = L"�������� ������� �� PictureBox";
			// 
			// Dot1Coordinates
			// 
			this->Dot1Coordinates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dot1Coordinates->Location = System::Drawing::Point(1236, 619);
			this->Dot1Coordinates->Name = L"Dot1Coordinates";
			this->Dot1Coordinates->ReadOnly = true;
			this->Dot1Coordinates->Size = System::Drawing::Size(194, 26);
			this->Dot1Coordinates->TabIndex = 30;
			// 
			// Dot2Coordinates
			// 
			this->Dot2Coordinates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dot2Coordinates->Location = System::Drawing::Point(1236, 653);
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
			this->label18->Location = System::Drawing::Point(1231, 581);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(191, 25);
			this->label18->TabIndex = 32;
			this->label18->Text = L"����� �� �������:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1756, 28);
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
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1233, 259);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 32);
			this->textBox1->TabIndex = 35;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(1164, 259);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(371, 235);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(6, 195);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(358, 32);
			this->button13->TabIndex = 27;
			this->button13->Text = L"������";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(6, 14);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(358, 49);
			this->textBox3->TabIndex = 26;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(235, 155);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 34);
			this->button9->TabIndex = 25;
			this->button9->Text = L")";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(144, 153);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 36);
			this->button10->TabIndex = 24;
			this->button10->Text = L"(";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(53, 153);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 34);
			this->button12->TabIndex = 23;
			this->button12->Text = L"|x|";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(279, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 34);
			this->button6->TabIndex = 22;
			this->button6->Text = L"/";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(188, 111);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 36);
			this->button7->TabIndex = 21;
			this->button7->Text = L"*";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(97, 111);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 36);
			this->button8->TabIndex = 20;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 111);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 34);
			this->button5->TabIndex = 19;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(235, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 36);
			this->button3->TabIndex = 18;
			this->button3->Text = L"lg(x)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(144, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 36);
			this->button2->TabIndex = 17;
			this->button2->Text = L"cos(x)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(53, 69);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 36);
			this->button4->TabIndex = 16;
			this->button4->Text = L"sin(x)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(29, 690);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1263, 150);
			this->dataGridView1->TabIndex = 39;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1566, 246);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(185, 30);
			this->textBox4->TabIndex = 40;
			this->textBox4->Visible = false;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(934, 272);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(209, 198);
			this->textBox5->TabIndex = 41;
			this->textBox5->Visible = false;
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem,
					this->������������PngToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ������������PngToolStripMenuItem
			// 
			this->������������PngToolStripMenuItem->Name = L"������������PngToolStripMenuItem";
			this->������������PngToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->������������PngToolStripMenuItem->Text = L"������������ png";
			this->������������PngToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������PngToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1756, 914);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->Dot2Coordinates);
			this->Controls->Add(this->Dot1Coordinates);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Clear_B);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Draw_B);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"GraphDraw";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ne_NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Color gridColor, axisColor, graph1Color, graph2Color; // ���� ���
		float gridWidth, axisWidth, graph1Width, graph2Width; // ������ ���
		double xMax, yMax, xMin, yMin; // ���������� �� ������� ��������� � �� y
		double Kx, Ky, Zx, Zy; // ����i�i���� �������������
		const int L = 50; // ������ �� ���� pictureBox
		bool is2F;
		int Ne = 100; // ������� ����� �������
		int fIndex1, fIndex2; // ������ �������
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
		void TabulF(double al, double bl, double Xe[1000], double Ye[1000], string strriv, bool conect[1000], double h, bool nules[1000])
		{

			h = (bl - al) / (Ne - 1);
			Xe[0] = al;
			for (int i = 0; i < Ne; i++)
			{
				Ye[i] = calculator(toPostfix(parser(strriv)), Xe[i], h);;
				Xe[i + 1] = Xe[i] + h;
				if (abs(Ye[i]) == 99999) {
					conect[i] = false;
					

				}
				else {
					if (abs(Ye[i]) < (h)) {
						nules[i] = true;
					}
					conect[i] = true;
				}

			}
		}

		void TabulFp(double al, double bl, double Xe[1000], double Ye[1000], string strriv, bool conect[1000], bool conects[1000], double h, bool nulesec[1000])
		{

			h = (bl - al) / (Ne - 1);
			Xe[0] = al;
			for (int i = 0; i < Ne; i++)
			{
				
				Xe[i + 1] = Xe[i] + h;
				if (ydh(strriv, Xe[i], h)==99999) {
					conects[i] = false;
					Ye[i] = ydh(strriv, Xe[i], h);
					nulesec[i] = false;
					
					

				}
				else {
					if (abs(Ye[i]) < (h)) {
						nulesec[i] = true;
					}
					Ye[i] = ydh(strriv, Xe[i], h);
					conects[i] = true;
				}

			}
		}
		void Draw(double h) {

			Bitmap^ bmp = gcnew Bitmap(pictureBox->Width,pictureBox->Height);
			Graphics^ graph = Graphics::FromImage(bmp);
			pictureBox->Image = bmp;
			graph->Clear(Color::White);
			double krx, kry, xx, yy, Gx, Gy; // ��� ��������� ���� ��������� �� ���� ������
			int xGridKrok, yGridKrok; // ������� �� ����� ������
			int gridLinesVert, gridLinesHoriz; // ������� ��� ������ �������
			double Xe1[1000], Ye1[1000], Xe2[1000], Ye2[1000]; // �� �������� x �� y
			bool conect[1000], conects[1000];
			bool nules[1000], nulesec[1000];

			Pen^ gridPen = gcnew Pen(gridColor, gridWidth); // ���� ������
			Pen^ axisPen = gcnew Pen(axisColor, axisWidth); // ���� ���� ���������
			Pen^ graph1Pen = gcnew Pen(graph1Color, graph1Width); // ���� ������� 1
			Pen^ graph2Pen = gcnew Pen(graph2Color, graph2Width); // ���� ������� 2
			// ������� ����� ��� ������� 1 graph1Pen->DashStyle = Drawing2D::DashStyle::Solid; break;
		

			//Graphics^ graph = pictureBox->CreateGraphics(); // ��������� �ᒺ��� ��� ������ � ��������
			graph->Clear(Color::White); // �������� pictureBox
			int graphHeight = pictureBox->Height;
			int graphWidth = pictureBox->Width;

			Pen^ blackPen = gcnew Pen(Color::Black, (float)(2)); // ���� �������
			graph->DrawLine(blackPen, Point(L, L), Point(L, graphHeight - L));
			graph->DrawLine(blackPen, Point(graphWidth - L, L), Point(graphWidth - L, graphHeight - L));
			graph->DrawLine(blackPen, Point(L, L), Point(graphWidth - L, L));
			graph->DrawLine(blackPen, Point(L, graphHeight - L), Point(graphWidth - L, graphHeight - L));

			// ������� Ne, al, bl
			try
			{
				gridLinesVert = 11;
				gridLinesHoriz = 11;

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
				// ��������� ������� �� ������� ���������� � ������			
				double* pXe = Xe1;
				double* pYe = Ye1;
				bool* con = conect;
				System::String^ rivf = textBox1->Text;

				std::string strrivf = msclr::interop::marshal_as<std::string>(rivf);
				

				TabulF(al, bl, Xe1, Ye1, strrivf, conect, h,nules);
				if (is2F)
				{
					
					pXe = Xe2;
					pYe = Ye2;
					bool* cons = conects;
					TabulFp(al, bl, Xe2, Ye2, strrivf, conect,cons, h,nulesec);
				}
			}
			catch (FormatException^)
			{
				MessageBox::Show("���������� ��������! (al/ bl/ Ne)");
				return;
			}
			catch (OverflowException^) {
				MessageBox::Show("����� ������ �� ���� �����! (al/ bl/ Ne)");
				return;
			}

			// ��������� ���������� x �� y
			xMin = Xe1[0]; xMax = Xe1[Ne - 1];
			yMin = 0; yMax = 0;
			if (is2F) {
				for (int i = 0; i < Ne; i++)
				{
					
					if (conect[i]) {

						if (yMax < Ye1[i]) yMax = Ye1[i];
						if (yMin > Ye1[i]) yMin = Ye1[i];

							

					}
					if (conects[i]) {
						if (yMax < Ye2[i]) yMax = Ye2[i];
						if (yMin > Ye2[i]) yMin = Ye2[i];
					}
				}
			}
			else {
				for (int i = 0; i < Ne; i++)
				{
					if (conect[i]) {
						if (yMax < Ye1[i]) yMax = Ye1[i];
						if (yMin > Ye1[i]) yMin = Ye1[i];
					}

				}
			}


			// ���������� ����������� �������������
			Kx = (graphWidth - 2 * L) / (xMax - xMin); // ������� x � �������
			Ky = (graphHeight - 2 * L) / (yMin - yMax); // ������� y � �������
			Zx = (graphWidth * xMin - L * (xMax + xMin)) / (xMin - xMax);
			Zy = (graphHeight * yMax - L * (yMin + yMax)) / (yMax - yMin);
			// ���������� ������������ ��������� (�������) ���� ���������
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
			// ���������� ���������� ������ �� ����� ������
			xGridKrok = round((graphWidth - 2 * L) / gridLinesVert);
			yGridKrok = round((graphHeight - 2 * L) / gridLinesHoriz);
			//MessageBox::Show("gridKrokX " + Convert::ToString(xGridKrok / Kx));
			//MessageBox::Show("gridKrokY " + Convert::ToString(yGridKrok / -Ky));

			// ���������� ������� ��� ������ �� ����� �� �� ����
			GridLinesCount Lines;
			Lines.xMinus = round((gridLinesVert - 1) * abs(xMin - Gx) / (abs(xMin - Gx) + abs(xMax - Gx)));
			Lines.xPlus = (gridLinesVert - 1) - Lines.xMinus;
			Lines.yMinus = round((gridLinesHoriz - 1) * abs(yMin - Gy) / (abs(yMin - Gy) + abs(yMax - Gy)));
			Lines.yPlus = (gridLinesHoriz - 1) - Lines.yMinus;
			//MessageBox::Show("xMinus "+Convert::ToString(Lines.xMinus));
			//MessageBox::Show("xPlus " + Convert::ToString(Lines.xPlus));
			//MessageBox::Show("yMinus " + Convert::ToString(Lines.yMinus));
			//MessageBox::Show("yPlus " + Convert::ToString(Lines.yPlus));

			// ������� ��������� ������
			// ����������� ������
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
			// ������������ ������
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

			// ������� ��
			// ��� x
			graph->DrawLine(axisPen, L, axisCentre.y, Math::Round(graphWidth - L, 4), axisCentre.y);
			// ��� y
			graph->DrawLine(axisPen, axisCentre.x, L, axisCentre.x, Math::Round(graphHeight - L, 4));
			graph->DrawString(Convert::ToString(Gx), gcnew Drawing::Font("Times", 8), Brushes::Black, L / 2, axisCentre.y - 6);
			graph->DrawString(Convert::ToString(Gy), gcnew Drawing::Font("Times", 8), Brushes::Black, axisCentre.x - 6, L / 2);

			for (int i = 1; i < Ne; i++)
				
			{
				if (/*Math::Round(abs(Ye1[i]), 4) */ abs(Ye1[i])<(h)) {
					textBox4->Text = textBox4->Text+"|" + Xe1[i].ToString()+ "(" + i + ")";
				}


				if (conect[i - 1] == true && conect[i] == true) {
					graph->DrawLine(graph1Pen, Math::Round(Kx * Xe1[i - 1] + Zx, 4), Math::Round(Ky * Ye1[i - 1] + Zy, 4),
						Math::Round(Kx * Xe1[i] + Zx, 4), Convert::ToInt32(Math::Round(Ky * Ye1[i] + Zy, 4)));
				}

			}
			if (is2F) {
				for (int i = 1; i < Ne; i++)
				{
					if (/*Math::Round(abs(Ye1[i]), 4) */  abs(Ye2[i]) < (h)) {
						//textBox5->Text = textBox5->Text + "|" + Xe2[i].ToString() + "("+i+")";
					}
					if (conects[i - 1] == true && conects[i] == true) {
						graph->DrawLine(graph2Pen, Math::Round(Kx * Xe2[i - 1] + Zx, 4), Math::Round(Ky * Ye2[i - 1] + Zy, 4),
							Math::Round(Kx * Xe2[i] + Zx, 4), Convert::ToInt32(Math::Round(Ky * Ye2[i] + Zy, 4)));
					}
				}
			}

			if (is2F) {

				int kkstpr =3;
				dataGridView1->RowCount = 3;
				dataGridView1->ColumnCount = kkstpr;

				//dataGridView1[0][0]->Value = "ff";
				dataGridView1->Rows[0]->Cells[0]->Value = "x";
				dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToDouble((al_TB->Text)).ToString("f2");

				dataGridView1->Rows[1]->Cells[0]->Value = "fp";
			

				System::String^ rivf = textBox1->Text;

				std::string strrivf = msclr::interop::marshal_as<std::string>(rivf);
				double fph = ydh(strrivf, Convert::ToDouble((al_TB->Text)), h);

				dataGridView1->Rows[1]->Cells[1]->Value = fph.ToString();
				dataGridView1->Rows[2]->Cells[0]->Value = "f";
				
			int poper = 1;
			//double kkstpr = 0;
			double a = Convert::ToDouble((al_TB->Text));
			double b;
			double now;
			double j;
			
			if ((Ye2[0]) < (0.001)) {
				poper = 1;

			}
			else { poper = -1; }
			for (int i = 1; i < Ne; i++) {
				int temp=poper;

				if ((Ye2[i]) < (h)) {
					poper = 1;

				}
				else { 
					poper = -1; 
				}
				if (temp * poper < 0) {
					textBox5->Text = textBox5->Text+"  " + Xe2[i].ToString();
					
					//b = Xe2[i];
					//dataGridView1->Rows->Add(dushky(a,2));
					kkstpr= kkstpr+2;
					//a = b;
				}
				
				
			}
			
			kkstpr++;
			dataGridView1->ColumnCount = kkstpr;
			dataGridView1->Rows[0]->Cells[kkstpr-1]->Value = Convert::ToDouble((bl_TB->Text)).ToString("f2");
			fph = ydh(strrivf, Convert::ToDouble((bl_TB->Text)), h);

			dataGridView1->Rows[1]->Cells[kkstpr - 1]->Value = fph.ToString();

			
			

			this->Text = kkstpr.ToString();
			
			
			int num=0;
			double xznach=0;
			int l=2;

			for (int i = 1; i < Ne; i++) {
				int temp = poper;
				
				if (abs(Ye2[i]) < (h)) {
					num++;
					xznach = xznach + Xe1[i];


				}
				else {
					if (num != 0) {

						xznach = xznach /num;
						dataGridView1->Rows[0]->Cells[l+1]->Value = xznach.ToString("f2");
						l=l+2;
					}
					num=0;
					xznach = 0;

				}
				dataGridView1->Rows[0]->Cells[kkstpr - 1]->Value = Convert::ToDouble((bl_TB->Text)).ToString("f2");
			}
			for (int i = 2; i < kkstpr; i = i + 2) {
				
				//dataGridView1->Rows[0]->Cells[i]->Value = dushky(Convert::ToDouble(dataGridView1->Rows[0]->Cells[i - 1]), Convert::ToDouble(dataGridView1->Rows[0]->Cells[i + 1]));
				double x_start= Convert::ToDouble(dataGridView1->Rows[0]->Cells[i - 1]->Value);
				double x_end= Convert::ToDouble(dataGridView1->Rows[0]->Cells[i + 1]->Value);

				dataGridView1->Rows[0]->Cells[i]->Value = dushky(x_start, x_end);
				double c = (x_end + x_start) / 2;
				double fph=ydh(strrivf, c, h);
				//textBox5->Text = textBox5->Text + "|" + fph.ToString() + "(" + kkstpr + ")";
				if (fph > 0) {
					dataGridView1->Rows[1]->Cells[i]->Value = "+";
					dataGridView1->Rows[2]->Cells[i]->Value = "������";

					
					//dataGridView1->Rows[2]->Cells[i]->Value = fph.ToString()+ x_start +"-"+ x_end+"(" + c;
				}
				else {
					dataGridView1->Rows[1]->Cells[i]->Value = "-";
					//dataGridView1->Rows[2]->Cells[i]->Value = fph.ToString() + x_start + "-" + x_end + "(" + c;
					dataGridView1->Rows[2]->Cells[i]->Value = "�����";
				}


			}
			for (int i = 1; i < kkstpr; i = i + 2) {
				System::String^ rivf = textBox1->Text;

				std::string strrivf = msclr::interop::marshal_as<std::string>(rivf);
				double c = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);

				double fph = ydh(strrivf, c, h);

				dataGridView1->Rows[1]->Cells[i]->Value = fph.ToString();




			}
			dataGridView1->Rows[2]->Cells[0]->Value = "MAX";
			for (int i = 3; i < kkstpr - 1; i = i + 2) {
				if (dataGridView1->Rows[1]->Cells[i-1]->Value == "+") {
					if (dataGridView1->Rows[1]->Cells[i + 1]->Value == "-") {
						dataGridView1->Rows[2]->Cells[i]->Value = "MAX";


					}

				}
				if (dataGridView1->Rows[1]->Cells[i - 1]->Value == "-") {
					if (dataGridView1->Rows[1]->Cells[i + 1]->Value == "+") {
						dataGridView1->Rows[2]->Cells[i]->Value = "MIN";


					}

				}
			}
			}
			

			


		}

		String^ dushky(double a, double b) {
			return("(" + a.ToString("f2") + ";" + b.ToString("f2") + ")");
		}
		

	private: System::Void Draw_B_Click(System::Object^ sender, System::EventArgs^ e) {
		double al = Convert::ToDouble(al_TB->Text);
		double bl = Convert::ToDouble(bl_TB->Text);

		double h;
		h = (bl - al) / (Ne - 1);
		// ������������ ���� �� ������ ���
		gridWidth = Convert::ToInt32(1);
		gridColor = grid_ColorD->Color;
		axisWidth = Convert::ToInt32(1);
		axisColor = axis_ColorD->Color;
		graph1Width = Convert::ToInt32(2);
		graph1Color = graph_ColorD->Color;
		graph2Width = Convert::ToInt32(2);
		graph2Color = graph2_ColorD->Color;
		//fIndex1 = Convert::ToInt16(f1_CB->SelectedIndex);
		//fIndex2 = Convert::ToInt16(f2_CB->SelectedIndex);
		// ������� ������, �� �� ������
		Draw(h);

		
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
		Graphics^ graph = pictureBox->CreateGraphics(); // ��������� �ᒺ��� ��� ������ � ��������
		graph->Clear(Color::White); // �������� pictureBox
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		checkBox1->Text = "������� ������� �� ������� (" + al_TB->Text + ";" + bl_TB->Text + ")";

	
		//f1_CB->SelectedIndex = 0;
		//f2_CB->SelectedIndex = 0;
		is2F = false;
		//f2_CB->Visible = false;
		
		


		Dot2Coordinates->Visible = false;
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		is2F = !is2F;
		
		
		
		Dot2Coordinates->Visible = !Dot2Coordinates->Visible;
	}
	private: System::Void pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		double al = Convert::ToDouble(al_TB->Text);
		double bl = Convert::ToDouble(bl_TB->Text);

		double h=(al-bl)/Ne;

		point MPoint;
		float x = (MousePosition.X - this->Location.X - pictureBox->Location.X - Zx) * (float)(xMax - xMin) / (pictureBox->Width - 2 * L) - 0.015 * (xMax - xMin);
		//float y = Math::Round(MousePosition.Y - this->Location.Y - pictureBox->Location.Y - Zy, 2) * (float)(yMin - yMax) / (pictureBox->Height - 2 * L);
		//MPoint.X = (float)(MousePosition.X - this->Location.X - pictureBox->Location.X - pictureBox->Width / 2) * (float)(xMax - xMin) / (pictureBox->Width - 2 * L);
		//MPoint.Y = (float)(MousePosition.Y - this->Location.Y - pictureBox->Location.Y - pictureBox->Height / 2) * (float)(yMax - yMin) / (pictureBox->Height - 2 * L);
		System::String^ riv = textBox1->Text;

		std::string strriv = msclr::interop::marshal_as<std::string>(riv);
		if (abs(calculator(toPostfix(parser(strriv)), x, h)) == 99999) {
			Dot1Coordinates->Text = Convert::ToString("X1 = " + Math::Round(x, 1) + "; Y1 =NaN ");
		}
		else {
			Dot1Coordinates->Text = Convert::ToString("X1 = " + Math::Round(x, 1) + "; Y1 = " + Math::Round(calculator(toPostfix(parser(strriv)), x, h), 2));
		}

		if (is2F) {
			


			if (ydh(strriv, x, h) == 99999) {
				Dot1Coordinates->Text = Convert::ToString("X1 = " + Math::Round(x, 1) + "; Y1 =NaN ");
			}


			else { Dot2Coordinates->Text = Convert::ToString("X2 = " + Math::Round(x, 1) + "; Y2 = " + Math::Round(ydh(strriv,x,h), 2)); }

		}

	}


	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox3->Text;
		groupBox1->Visible = false;
	}
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible = true;
		textBox3->Text = textBox1->Text;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "sin(x)";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "cos(x)";

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "log(x)";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "+";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "-";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "*";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "/";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "abs(x)";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = textBox3->Text + "(";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	
		textBox3->Text = textBox3->Text + ")";
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void al_TB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->Text = "������� ������� �� ������� (" + al_TB->Text + ";" + bl_TB->Text + ")";
}
private: System::Void bl_TB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->Text = "������� ������� �� ������� (" + al_TB->Text + ";" + bl_TB->Text + ")";
}
private: System::Void ������������PngToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Images|*.jpeg";
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{

		Bitmap^ bmp = gcnew Bitmap(pictureBox->Image);
		saveFileDialog1->Title = "�������� ����������";
		bmp->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
	}

}
};
}
