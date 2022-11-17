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


































	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::Button^ Clear_B;



	private: System::Windows::Forms::Label^ label15;










	private: System::Windows::Forms::ColorDialog^ graph2_ColorD;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::TextBox^ Dot1Coordinates;
	private: System::Windows::Forms::TextBox^ Dot2Coordinates;



	private: System::Windows::Forms::MenuStrip^ menuStrip1;



	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;















private: System::Windows::Forms::DataGridView^ dataGridView1;


private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ експортуватиPngToolStripMenuItem;





private: System::Windows::Forms::ToolStripMenuItem^ вийтиToolStripMenuItem;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::GroupBox^ groupBox1;



private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ aper;
private: System::Windows::Forms::Label^ bper;


private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::GroupBox^ groupBox2;

private: System::Windows::Forms::ColorDialog^ integral_colorD;
private: System::Windows::Forms::PictureBox^ tempbox;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;









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
			this->Dot1Coordinates = (gcnew System::Windows::Forms::TextBox());
			this->Dot2Coordinates = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->експортуватиPngToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вийтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->aper = (gcnew System::Windows::Forms::Label());
			this->bper = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->integral_colorD = (gcnew System::Windows::Forms::ColorDialog());
			this->tempbox = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ne_NUD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempbox))->BeginInit();
			this->SuspendLayout();
			// 
			// Draw_B
			// 
			this->Draw_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Draw_B->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->Draw_B->Location = System::Drawing::Point(1844, 38);
			this->Draw_B->Name = L"Draw_B";
			this->Draw_B->Size = System::Drawing::Size(206, 66);
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
			this->label1->Size = System::Drawing::Size(162, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Межі графіка :";
			// 
			// al_TB
			// 
			this->al_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->al_TB->Location = System::Drawing::Point(160, 40);
			this->al_TB->Name = L"al_TB";
			this->al_TB->Size = System::Drawing::Size(100, 26);
			this->al_TB->TabIndex = 4;
			this->al_TB->Text = L"-5";
			this->al_TB->TextChanged += gcnew System::EventHandler(this, &MyForm::al_TB_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(4, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"a =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"b =";
			// 
			// bl_TB
			// 
			this->bl_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bl_TB->Location = System::Drawing::Point(160, 71);
			this->bl_TB->Name = L"bl_TB";
			this->bl_TB->Size = System::Drawing::Size(100, 26);
			this->bl_TB->TabIndex = 6;
			this->bl_TB->Text = L"5";
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
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->panel1->Location = System::Drawing::Point(1562, 38);
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
			this->label4->Size = System::Drawing::Size(155, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Кількість точок =";
			// 
			// Ne_NUD
			// 
			this->Ne_NUD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ne_NUD->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
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
			this->pictureBox->Size = System::Drawing::Size(1544, 778);
			this->pictureBox->TabIndex = 1;
			this->pictureBox->TabStop = false;
			this->pictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_Click);
			// 
			// Clear_B
			// 
			this->Clear_B->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear_B->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->Clear_B->Location = System::Drawing::Point(1844, 109);
			this->Clear_B->Name = L"Clear_B";
			this->Clear_B->Size = System::Drawing::Size(206, 68);
			this->Clear_B->TabIndex = 15;
			this->Clear_B->Text = L"Очистити";
			this->Clear_B->UseVisualStyleBackColor = true;
			this->Clear_B->Click += gcnew System::EventHandler(this, &MyForm::Clear_B_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->label15->Location = System::Drawing::Point(1699, 228);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 24);
			this->label15->TabIndex = 24;
			this->label15->Text = L"f(x)=";
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
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->checkBox1->Location = System::Drawing::Point(1563, 183);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(355, 30);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"Похідна функції на проміжку";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// Dot1Coordinates
			// 
			this->Dot1Coordinates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dot1Coordinates->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->Dot1Coordinates->Location = System::Drawing::Point(1362, 757);
			this->Dot1Coordinates->Name = L"Dot1Coordinates";
			this->Dot1Coordinates->ReadOnly = true;
			this->Dot1Coordinates->Size = System::Drawing::Size(194, 26);
			this->Dot1Coordinates->TabIndex = 30;
			this->Dot1Coordinates->Visible = false;
			// 
			// Dot2Coordinates
			// 
			this->Dot2Coordinates->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Dot2Coordinates->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->Dot2Coordinates->Location = System::Drawing::Point(1362, 789);
			this->Dot2Coordinates->Name = L"Dot2Coordinates";
			this->Dot2Coordinates->ReadOnly = true;
			this->Dot2Coordinates->Size = System::Drawing::Size(194, 26);
			this->Dot2Coordinates->TabIndex = 31;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1902, 28);
			this->menuStrip1->TabIndex = 33;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->зберегтиToolStripMenuItem,
					this->експортуватиPngToolStripMenuItem, this->вийтиToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// зберегтиToolStripMenuItem
			// 
			this->зберегтиToolStripMenuItem->Name = L"зберегтиToolStripMenuItem";
			this->зберегтиToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->зберегтиToolStripMenuItem->Text = L"Зберегти";
			// 
			// експортуватиPngToolStripMenuItem
			// 
			this->експортуватиPngToolStripMenuItem->Name = L"експортуватиPngToolStripMenuItem";
			this->експортуватиPngToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->експортуватиPngToolStripMenuItem->Text = L"Експортувати в .jpeg";
			this->експортуватиPngToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::експортуватиPngToolStripMenuItem_Click);
			// 
			// вийтиToolStripMenuItem
			// 
			this->вийтиToolStripMenuItem->Name = L"вийтиToolStripMenuItem";
			this->вийтиToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->вийтиToolStripMenuItem->Text = L"Вийти";
			this->вийтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вийтиToolStripMenuItem_Click);
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
			this->textBox1->Location = System::Drawing::Point(1751, 225);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(278, 32);
			this->textBox1->TabIndex = 35;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->dataGridView1->Location = System::Drawing::Point(0, 822);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(2076, 150);
			this->dataGridView1->TabIndex = 39;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button4->Location = System::Drawing::Point(6, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 36);
			this->button4->TabIndex = 16;
			this->button4->Text = L"sin(x)";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button2->Location = System::Drawing::Point(97, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 36);
			this->button2->TabIndex = 17;
			this->button2->Text = L"cos(x)";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button3->Location = System::Drawing::Point(97, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 36);
			this->button3->TabIndex = 18;
			this->button3->Text = L"lg(x)";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button5->Location = System::Drawing::Point(6, 193);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 34);
			this->button5->TabIndex = 19;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button8->Location = System::Drawing::Point(97, 193);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 34);
			this->button8->TabIndex = 20;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button7->Location = System::Drawing::Point(189, 193);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 34);
			this->button7->TabIndex = 21;
			this->button7->Text = L"*";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button6->Location = System::Drawing::Point(6, 235);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 34);
			this->button6->TabIndex = 22;
			this->button6->Text = L"/";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button10->Location = System::Drawing::Point(97, 67);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 36);
			this->button10->TabIndex = 24;
			this->button10->Text = L"(";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button9->Location = System::Drawing::Point(189, 67);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 34);
			this->button9->TabIndex = 25;
			this->button9->Text = L")";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(6, 14);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(267, 49);
			this->textBox3->TabIndex = 26;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button12->Location = System::Drawing::Point(189, 151);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 34);
			this->button12->TabIndex = 23;
			this->button12->Text = L"|x|";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button13->Location = System::Drawing::Point(6, 275);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(268, 32);
			this->button13->TabIndex = 27;
			this->button13->Text = L"Готово";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button1->Location = System::Drawing::Point(6, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 36);
			this->button1->TabIndex = 28;
			this->button1->Text = L"ctg(x)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button11->Location = System::Drawing::Point(189, 109);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(85, 36);
			this->button11->TabIndex = 29;
			this->button11->Text = L"tan(x)";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button14->Location = System::Drawing::Point(6, 69);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(85, 34);
			this->button14->TabIndex = 30;
			this->button14->Text = L"C";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button15->Location = System::Drawing::Point(97, 235);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(85, 34);
			this->button15->TabIndex = 31;
			this->button15->Text = L"^";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button16->Location = System::Drawing::Point(188, 235);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 34);
			this->button16->TabIndex = 32;
			this->button16->Text = L"-X";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(1747, 225);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(278, 320);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(1562, 268);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(356, 264);
			this->dataGridView2->TabIndex = 43;
			this->dataGridView2->Visible = false;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellClick);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 140, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(89, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 255);
			this->label5->TabIndex = 44;
			this->label5->Text = L"∫";
			// 
			// aper
			// 
			this->aper->AutoSize = true;
			this->aper->Location = System::Drawing::Point(103, 254);
			this->aper->Name = L"aper";
			this->aper->Size = System::Drawing::Size(0, 24);
			this->aper->TabIndex = 45;
			// 
			// bper
			// 
			this->bper->AutoSize = true;
			this->bper->Location = System::Drawing::Point(216, 18);
			this->bper->Name = L"bper";
			this->bper->Size = System::Drawing::Size(0, 24);
			this->bper->TabIndex = 46;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(273, 118);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 47);
			this->textBox2->TabIndex = 47;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->aper);
			this->groupBox2->Controls->Add(this->bper);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->groupBox2->Location = System::Drawing::Point(1563, 538);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(468, 280);
			this->groupBox2->TabIndex = 48;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Площа криволінійної трапеції";
			this->groupBox2->Visible = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(76, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 105);
			this->label8->TabIndex = 50;
			this->label8->Text = L"=";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(185, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 105);
			this->label7->TabIndex = 49;
			this->label7->Text = L"=";
			// 
			// integral_colorD
			// 
			this->integral_colorD->Color = System::Drawing::Color::Lime;
			// 
			// tempbox
			// 
			this->tempbox->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tempbox->Location = System::Drawing::Point(13, 38);
			this->tempbox->Name = L"tempbox";
			this->tempbox->Size = System::Drawing::Size(1544, 778);
			this->tempbox->TabIndex = 49;
			this->tempbox->TabStop = false;
			this->tempbox->Visible = false;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(-22, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 124);
			this->label6->TabIndex = 48;
			this->label6->Text = L"S";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Dot2Coordinates);
			this->Controls->Add(this->Draw_B);
			this->Controls->Add(this->Dot1Coordinates);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Clear_B);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->tempbox);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"GraphDraw";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ne_NUD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tempbox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Drawing::Image^ Temporary;
		Color gridColor, axisColor, graph1Color, graph2Color, integral_color; // колір ліній
		float gridWidth, axisWidth, graph1Width, graph2Width; // ширина ліній
		double xMax, yMax, xMin, yMin; // максимальні та мінімальні значиення х та y
		double Kx, Ky, Zx, Zy; // коефiцiєнти масштабування
		const int L = 50; // відступ від країв pictureBox
		bool is2F;
		int Ne = 100; // кількість точок графіка
		
		void TabulF(double al, double bl, double Xe[1000], double Ye[1000], string strriv, bool conect[1000], double h, bool nules[1000])
		{

			h = (bl - al) / (Ne - 1);
			Xe[0] = al;
			for (int i = 0; i < Ne; i++)
			{
				Ye[i] = calculator(toPostfix(parser(strriv)), Xe[i], h);
				Xe[i + 1] = Xe[i] + h;
				if (abs(Ye[i]) == 7878787) {
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
				if (ydh(strriv, Xe[i], h)==7878787) {
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
			double krx, kry, xx, yy, Gx, Gy; // для виведення осей координат та їхніх підписів
			int xGridKrok, yGridKrok; // відступи між лініями гратки
			int gridLinesVert, gridLinesHoriz; // кількість ліній гратки графіка
			double Xe1[1000], Ye1[1000], Xe2[1000], Ye2[1000]; // всі значення x та y
			bool conect[1000], conects[1000];
			bool nules[1000], nulesec[1000];

			Pen^ gridPen = gcnew Pen(gridColor, gridWidth); // колір гратки
			Pen^ axisPen = gcnew Pen(axisColor, axisWidth); // колір осей координат
			Pen^ graph1Pen = gcnew Pen(graph1Color, graph1Width); // колір графіка 1
			Pen^ graph2Pen = gcnew Pen(graph2Color, graph2Width); // колір графіка 2

			

			// обираємо стиль ліній графіка 1 graph1Pen->DashStyle = Drawing2D::DashStyle::Solid; break;
		

			//Graphics^ graph = pictureBox->CreateGraphics(); // створення об’єкта для роботи з графікою
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
				// табулюємо функцію із записом результатів у масиви			
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
				if (/*Math::Round(abs(Ye1[i]), 4) */ abs(Ye1[i])<(h)) {
					//textBox4->Text = textBox4->Text+"|" + Xe1[i].ToString()+ "(" + i + ")";
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
				promishky(h, Ye2, Xe2);
			}
			znakostalist(h, Ye1, Xe1);
			

			
			

			


		}

		String^ dushky(double a, double b) {
			return("(" + a.ToString("f2") + ";" + b.ToString("f2") + ")");
		}
		String^ strdushky(String^ a, String^ b) {
			return("(" + a + ";" + b + ")");
		}
		void znakostalist(double h, double Ye[1000], double Xe[1000]) {
			dataGridView2->Visible = true;
			System::String^ rivf = textBox1->Text;
			std::string strrivf = msclr::interop::marshal_as<std::string>(rivf);
			int kkstpr = 3;
			dataGridView2->RowCount = kkstpr;
			dataGridView2->ColumnCount = 2;
			int l;				
			if (calculator(toPostfix(parser(strrivf)), Convert::ToDouble((al_TB->Text)), h) != 7878787) {
				dataGridView2->Rows[1]->Cells[0]->Value = Convert::ToDouble((al_TB->Text)).ToString("f2");
				dataGridView2->Rows[1]->Cells[1]->Value = calculator(toPostfix(parser(strrivf)), Convert::ToDouble((al_TB->Text)), h);
				l = 2;
			}
			else { 
				l = 0; 
				kkstpr = kkstpr - 2;
				dataGridView2->RowCount = kkstpr;
			}

			//int poper = 1;
			this->Text = kkstpr.ToString();

			int num = 0;
			double xznach = 0;
			for (int i = 1; i < Ne; i++) {
				//int temp = poper;
					
					if (abs(Ye[i]) < (h)|| (Ye[i] == 7878787)) {
						num++;
						xznach = xznach + Xe[i];


					}
					else {
						if (num != 0) {
							kkstpr = kkstpr + 2;
							dataGridView2->RowCount = kkstpr;

							xznach = xznach / num;
							dataGridView2->Rows[l + 1]->Cells[0]->Value = xznach.ToString("f2");
							dataGridView2->Rows[l + 1]->Cells[1]->Value = calculator(toPostfix(parser(strrivf)), xznach, h);
							l = l + 2;
						}
						num = 0;
						xznach = 0;

					}
					

					
			}

			dataGridView2->Rows[kkstpr - 1]->Cells[0]->Value = Convert::ToDouble((bl_TB->Text)).ToString("f2");
			dataGridView2->Rows[kkstpr - 1]->Cells[1]->Value = calculator(toPostfix(parser(strrivf)), Convert::ToDouble((bl_TB->Text)), h);
			dataGridView2->Rows[0]->Cells[0]->Value = "Проміжки знакосталості";
			dataGridView2->Rows[0]->Cells[1]->Value = "Значення функції";
				

			kkstpr++;
			dataGridView2->RowCount = kkstpr;
			for (int i = 2; i < kkstpr; i = i + 2) {
				String^ ap= Convert::ToString(dataGridView2->Rows[i - 1]->Cells[0]->Value);
				String^ bp= Convert::ToString(dataGridView2->Rows[i + 1]->Cells[0]->Value);

				dataGridView2->Rows[i]->Cells[0]->Value = strdushky(ap, bp);
				double c = (double::Parse(ap)+ double::Parse(bp))/2;
				if (calculator(toPostfix(parser(strrivf)),c, h) > 0) {
					dataGridView2->Rows[i]->Cells[1]->Value = "f(x)" + ">0";
				}
				else {
					dataGridView2->Rows[i]->Cells[1]->Value = "f(x)" + "<0";

				}

				//

			}
				
			
		}
		////////////////////////////////////////////////////////////////
		void promishky(double h, double Ye[1000], double Xe[1000]) {
			if (is2F) {

				dataGridView1->Visible = true;
				int kkstpr = 3;
				dataGridView1->RowCount = 3;
				dataGridView1->ColumnCount = kkstpr;

				//dataGridView1[0][0]->Value = "ff";
				dataGridView1->Rows[0]->Cells[0]->Value = "Проміжки зростання спадання";
				dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToDouble((al_TB->Text)).ToString("f2");

				dataGridView1->Rows[1]->Cells[0]->Value = "Значення похідної";


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

				/*if ((Ye2[0]) < (0.001)) {
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
						textBox5->Text = textBox5->Text+"  " + i.ToString();

						//b = Xe2[i];
						//dataGridView1->Rows->Add(dushky(a,2));
						kkstpr= kkstpr+2;
						//a = b;
					}


				}*/






				this->Text = kkstpr.ToString();


				int num = 0;
				double xznach = 0;
				int l = 2;

				for (int i = 1; i < Ne; i++) {
					int temp = poper;

					if (abs(Ye[i]) < (h)) {
						num++;
						xznach = xznach + Xe[i];


					}
					else {
						if (num != 0) {
							kkstpr = kkstpr + 2;
							dataGridView1->ColumnCount = kkstpr;

							xznach = xznach / num;
							dataGridView1->Rows[0]->Cells[l + 1]->Value = xznach.ToString("f2");
							l = l + 2;
						}
						num = 0;
						xznach = 0;

					}
					dataGridView1->Rows[0]->Cells[kkstpr - 1]->Value = Convert::ToDouble((bl_TB->Text)).ToString("f2");
				}

				kkstpr++;
				dataGridView1->ColumnCount = kkstpr;
				dataGridView1->Rows[0]->Cells[kkstpr - 1]->Value = Convert::ToDouble((bl_TB->Text)).ToString("f2");
				fph = ydh(strrivf, Convert::ToDouble((bl_TB->Text)), h);

				dataGridView1->Rows[1]->Cells[kkstpr - 1]->Value = fph.ToString();
				for (int i = 2; i < kkstpr; i = i + 2) {

					//dataGridView1->Rows[0]->Cells[i]->Value = dushky(Convert::ToDouble(dataGridView1->Rows[0]->Cells[i - 1]), Convert::ToDouble(dataGridView1->Rows[0]->Cells[i + 1]));
					double x_start = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i - 1]->Value);
					double x_end = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i + 1]->Value);

					dataGridView1->Rows[0]->Cells[i]->Value = dushky(x_start, x_end);
					double c = (x_end + x_start) / 2;
					double fph = ydh(strrivf, c, h);
					//textBox5->Text = textBox5->Text + "|" + fph.ToString() + "(" + kkstpr + ")";
					if (fph > 0) {
						dataGridView1->Rows[1]->Cells[i]->Value = "+";
						dataGridView1->Rows[2]->Cells[i]->Value = "Зростає";


						//dataGridView1->Rows[2]->Cells[i]->Value = fph.ToString()+ x_start +"-"+ x_end+"(" + c;
					}
					else {
						dataGridView1->Rows[1]->Cells[i]->Value = "-";
						//dataGridView1->Rows[2]->Cells[i]->Value = fph.ToString() + x_start + "-" + x_end + "(" + c;
						dataGridView1->Rows[2]->Cells[i]->Value = "Спадає";
					}


				}
				for (int i = 1; i < kkstpr; i = i + 2) {
					System::String^ rivf = textBox1->Text;

					std::string strrivf = msclr::interop::marshal_as<std::string>(rivf);
					double c = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);

					double fph = ydh(strrivf, c, h);

					dataGridView1->Rows[1]->Cells[i]->Value = fph.ToString();




				}
				//dataGridView1->Rows[2]->Cells[0]->Value = "MAX";
				for (int i = 3; i < kkstpr - 1; i = i + 2) {
					if (dataGridView1->Rows[1]->Cells[i - 1]->Value == "+") {
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
		

	private: System::Void Draw_B_Click(System::Object^ sender, System::EventArgs^ e) {
		double al = Convert::ToDouble(al_TB->Text);
		double bl = Convert::ToDouble(bl_TB->Text);



		double h;
		h = (bl - al) / (Ne - 1);
		// налаштовуэмо колір та ширину ліній
		gridWidth = Convert::ToInt32(1);
		gridColor = grid_ColorD->Color;
		axisWidth = Convert::ToInt32(1);
		axisColor = axis_ColorD->Color;
		graph1Width = Convert::ToInt32(2);
		graph1Color = graph_ColorD->Color;
		graph2Width = Convert::ToInt32(2);
		graph2Color = graph2_ColorD->Color;
		
		integral_color = integral_colorD->Color;
		//fIndex1 = Convert::ToInt16(f1_CB->SelectedIndex);
		//fIndex2 = Convert::ToInt16(f2_CB->SelectedIndex);
		// малюємо графік, осі та гратку
		Draw(h);
		System::String^ rivf = textBox1->Text;

		std::string strrivf = msclr::interop::marshal_as<std::string>(rivf);
		Temporary= pictureBox->Image;
		tempbox->Image = pictureBox->Image;
		Dot1Coordinates->Visible = true;
		

		

		
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
		dataGridView1->Visible = false;
		dataGridView2->Visible = false;
		Graphics^ graph = pictureBox->CreateGraphics(); // створення об’єкта для роботи з графікою
		graph->Clear(Color::White); // очищення pictureBox
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		checkBox1->Text = "Похідна функції на проміжку (" + al_TB->Text + ";" + bl_TB->Text + ")";

	
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
		if (abs(calculator(toPostfix(parser(strriv)), x, h)) == 7878787) {
			Dot1Coordinates->Text = Convert::ToString("X1 = " + Math::Round(x, 1) + "; Y1 =NaN ");
		}
		else {
			Dot1Coordinates->Text = Convert::ToString("X1 = " + Math::Round(x, 1) + "; Y1 = " + Math::Round(calculator(toPostfix(parser(strriv)), x, h), 2));
		}

		if (is2F) {
			


			if (ydh(strriv, x, h) == 7878787) {
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
		Draw_B->Enabled = true;
	}
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible = true;
		Draw_B->Enabled = false;
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
	checkBox1->Text = "Похідна функції на проміжку (" + al_TB->Text + ";" + bl_TB->Text + ")";
}
private: System::Void bl_TB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->Text = "Похідна функції на проміжку (" + al_TB->Text + ";" + bl_TB->Text + ")";
}
private: System::Void експортуватиPngToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Images|*.jpeg";
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{

		Bitmap^ bmp = gcnew Bitmap(pictureBox->Image);
		saveFileDialog1->Title = "Зберегти зображення";
		bmp->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
	}

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = textBox3->Text + "tan(x)";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = textBox3->Text + "ctg(x)";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text =  "";

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = textBox3->Text + "^";

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = textBox3->Text + "inv(x)";
}
private: System::Void вийтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	//this->Text = (dataGridView1->SelectedCells)->ToString();
	
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//this->Text = Convert::ToString(dataGridView1->CurrentCellAddress);
	String^ pos = Convert::ToString(dataGridView1->CurrentCellAddress);

	std::string coo = msclr::interop::marshal_as<std::string>(pos);

	string xt, yt;
	bool per = false;
	int x, y;
	for (int i = 0; i < coo.length(); i++) {
		if (coo[i] == '=') {
			i++;
			if (per == false) {
				while (coo[i] != ',') {
					xt = xt + coo[i];
					i++;
				}
				per = true;
			}
			else {
				while (coo[i] != '}') {
					yt = yt + coo[i];
					i++;
				}
				per = false;
			}

			

		}

	}
	double al = Convert::ToDouble(al_TB->Text);
	double bl = Convert::ToDouble(bl_TB->Text);

	double h = (bl - al) / Ne;

	
	System::String^ riv = textBox1->Text;

	std::string strriv = msclr::interop::marshal_as<std::string>(riv);
	x = std::stoi(xt);
	y = std::stoi(yt);
	this->Text = x.ToString() + "  " + y.ToString();
	String^ val = Convert::ToString(dataGridView1->Rows[y]->Cells[x]->Value);
	if (y == 0) {
		if (val[0] == '(') {
			double kstart = System::Convert::ToDouble(Convert::ToString(dataGridView1->Rows[y]->Cells[x-1]->Value));
			double kend = System::Convert::ToDouble(Convert::ToString(dataGridView1->Rows[y]->Cells[x+1]->Value));

			aper->Text = Convert::ToString(kstart);
			bper->Text = Convert::ToString(kend);
			double simps = simpson(strriv, al, bl, kstart, kend, Ne, h);

			textBox2->Text = abs(simps).ToString("f5");
			pictureBox->Image = tempbox->Image;

			System::Drawing::Image^ photo = tempbox->Image;

			//Bitmap^ photo = gcnew Bitmap(pictureBox->Image);
			Graphics^ graph = Graphics::FromImage(photo);

			Pen^ prompen = gcnew Pen(integral_color, 1); // колір графіка 2


			for (double i = kstart; i < kend + h; i = i + 0.25) {

				double y = calculator(toPostfix(parser(strriv)), i, h);
				graph->DrawLine(prompen, Math::Round(Kx * i + Zx, 4), Math::Round(Ky * 0 + Zy, 4),
					Math::Round(Kx * i + Zx, 4), Convert::ToInt32(Math::Round(Ky * y + Zy, 4)));

			}
			
			//pictureBox->Image=tempbox->Image;

		}
	}


}

private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//this->Text = Convert::ToString(dataGridView2->CurrentCellAddress);
	String^ pos = Convert::ToString(dataGridView2->CurrentCellAddress);

	std::string coo = msclr::interop::marshal_as<std::string>(pos);

	string xt, yt;
	bool per=false;
	int x, y;
	for (int i = 0; i < coo.length(); i++) {
		if (coo[i] == '=') {
			i++;
			if (per == false) {
				while (coo[i] != ',') {
					xt = xt + coo[i];
					i++;
				}
				per = true;
			}
			else {
				while (coo[i] != '}') {
					yt = yt + coo[i];
					i++;
				}
				per = false;
			}



		}

	}
	double al = Convert::ToDouble(al_TB->Text);
	double bl = Convert::ToDouble(bl_TB->Text);
	double h = (bl - al) / Ne;
	System::String^ riv = textBox1->Text;
	std::string strriv = msclr::interop::marshal_as<std::string>(riv);
	x = std::stoi(xt);
	y = std::stoi(yt);
	this->Text = x.ToString() + "  " + y.ToString();
	String^ val = Convert::ToString(dataGridView2->Rows[y]->Cells[x]->Value);
	if (x == 0) {
		if (val[0] == '(') {
			double kstart = System::Convert::ToDouble(Convert::ToString(dataGridView2->Rows[y-1]->Cells[x]->Value));
			double kend = System::Convert::ToDouble(Convert::ToString(dataGridView2->Rows[y+1]->Cells[x]->Value));

			aper->Text = Convert::ToString(kstart);
			bper->Text = Convert::ToString(kend);
			double simps= simpson(strriv, al, bl, kstart+h, kend-h, Ne, h);

			textBox2->Text = abs(simps).ToString("f5");
			pictureBox->Image = tempbox->Image;

			System::Drawing::Image^ photo = tempbox->Image;

			//Bitmap^ photo = gcnew Bitmap(pictureBox->Image);
			Graphics^ graph = Graphics::FromImage(photo);

			Pen^ prompen = gcnew Pen(integral_color, 1); // колір графіка 2
			
			for (double i = kstart+h; i < kend -h; i =i+0.25) {
			
				double y=calculator(toPostfix(parser(strriv)), i, h);
				graph->DrawLine(prompen, Math::Round(Kx * i + Zx, 4), Math::Round(Ky * 0 + Zy, 4),
					Math::Round(Kx *i + Zx, 4), Convert::ToInt32(Math::Round(Ky * y + Zy, 4)));

			}
			 //pictureBox->Image=tempbox->Image;
			
			groupBox2->Visible = true;

		}
	}


}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
