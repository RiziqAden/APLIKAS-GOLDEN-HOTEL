#pragma once
#include "MyForm1.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{

	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button2;

	protected:



	protected:

	protected:



	protected:

	protected:

	protected:

	protected:




	protected:








































	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-1, 167);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1927, 920);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->tabPage1->Location = System::Drawing::Point(4, 47);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1919, 869);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Home";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Dashboard::tabPage1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(827, 530);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 93);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Boking now";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->pictureBox6);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 47);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1919, 869);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Facility";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Location = System::Drawing::Point(895, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(124, 37);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Facility";
			this->label16->Click += gcnew System::EventHandler(this, &Dashboard::label16_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label3->Location = System::Drawing::Point(1306, 493);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 38);
			this->label3->TabIndex = 4;
			this->label3->Text = L"KITCHEN SET";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label2->Location = System::Drawing::Point(893, 490);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 38);
			this->label2->TabIndex = 3;
			this->label2->Text = L"CASINO";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label1->Location = System::Drawing::Point(392, 490);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"SWIMMING POOL";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(267, 493);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1375, 356);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(809, 17);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(295, 83);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(255, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1399, 461);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->tabPage3->Location = System::Drawing::Point(4, 47);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1919, 869);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Room";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Dashboard::tabPage3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(835, 678);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 68);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Booking Now";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(1499, 567);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(194, 28);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Rp.1.500.000/Malam";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(1070, 567);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(194, 28);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Rp.1.000.000/Malam";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(642, 567);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(181, 28);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Rp.800.000/Malam";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(220, 567);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 28);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Rp.500.000/Malam";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label8->Location = System::Drawing::Point(1467, 522);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(250, 45);
			this->label8->TabIndex = 5;
			this->label8->Text = L"DELUXE QUEEN";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label7->Location = System::Drawing::Point(1030, 522);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(266, 45);
			this->label7->TabIndex = 4;
			this->label7->Text = L"DELUXE DOUBLE";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label6->Location = System::Drawing::Point(615, 522);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 45);
			this->label6->TabIndex = 3;
			this->label6->Text = L"DELUXE TWIN";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->label5->Location = System::Drawing::Point(181, 521);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(250, 45);
			this->label5->TabIndex = 2;
			this->label5->Text = L"DELUXE SINGLE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(860, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 37);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Tipe Kamar";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(78, 45);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1761, 497);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Controls->Add(this->pictureBox5);
			this->tabPage4->Location = System::Drawing::Point(4, 47);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1919, 869);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"About Us";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(697, 246);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1095, 420);
			this->label15->TabIndex = 4;
			this->label15->Text = resources->GetString(L"label15.Text");
			this->label15->Click += gcnew System::EventHandler(this, &Dashboard::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(593, 40);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(158, 37);
			this->label14->TabIndex = 3;
			this->label14->Text = L"About Us";
			this->label14->Click += gcnew System::EventHandler(this, &Dashboard::label14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(732, 182);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(215, 37);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Hotel Golden";
			this->label13->Click += gcnew System::EventHandler(this, &Dashboard::label13_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(56, 138);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(658, 600);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(505, 40);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(333, 97);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox5_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1657, 4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(211, 210);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(-2, 4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(287, 220);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 2;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox8_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1924, 1050);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->pictureBox8);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip2_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void pictureBox1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ Menu = gcnew MyForm1();
	Menu->ShowDialog();
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm1^ Menu = gcnew MyForm1();
	Menu->ShowDialog();
}
};
}
