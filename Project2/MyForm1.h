#pragma once
#include "pembayaran.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ Email;

	private: System::Windows::Forms::TextBox^ noHP;

	private: System::Windows::Forms::TextBox^ namaTamu;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ tipeH;

	private: System::Windows::Forms::Panel^ panel1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->noHP = (gcnew System::Windows::Forms::TextBox());
			this->namaTamu = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tipeH = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(413, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"From Pemesanan";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(99, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nama Tamu";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(99, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"No Handphone";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(99, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(99, 341);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipe Kamar";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(99, 454);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 29);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Tanggal Check in";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker1->Location = System::Drawing::Point(321, 457);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(202, 26);
			this->dateTimePicker1->TabIndex = 7;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::dateTimePicker1_ValueChanged);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(565, 457);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 29);
			this->label8->TabIndex = 8;
			this->label8->Text = L":";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(870, 456);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 29);
			this->label10->TabIndex = 10;
			this->label10->Text = L":";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(565, 286);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 29);
			this->label11->TabIndex = 11;
			this->label11->Text = L":";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(565, 232);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 29);
			this->label12->TabIndex = 12;
			this->label12->Text = L":";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(565, 174);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 29);
			this->label13->TabIndex = 13;
			this->label13->Text = L":";
			// 
			// Email
			// 
			this->Email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Email->Location = System::Drawing::Point(618, 290);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(479, 26);
			this->Email->TabIndex = 16;
			// 
			// noHP
			// 
			this->noHP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->noHP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->noHP->Location = System::Drawing::Point(618, 232);
			this->noHP->Name = L"noHP";
			this->noHP->Size = System::Drawing::Size(479, 26);
			this->noHP->TabIndex = 17;
			this->noHP->TextChanged += gcnew System::EventHandler(this, &MyForm1::noHP_TextChanged);
			// 
			// namaTamu
			// 
			this->namaTamu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->namaTamu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->namaTamu->Location = System::Drawing::Point(617, 178);
			this->namaTamu->Name = L"namaTamu";
			this->namaTamu->Size = System::Drawing::Size(480, 26);
			this->namaTamu->TabIndex = 18;
			this->namaTamu->TextChanged += gcnew System::EventHandler(this, &MyForm1::namaTamu_TextChanged);
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(602, 456);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(215, 29);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Tanggal Check out";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(565, 341);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 29);
			this->label15->TabIndex = 20;
			this->label15->Text = L":";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker2->Location = System::Drawing::Point(895, 460);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(202, 26);
			this->dateTimePicker2->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(480, 601);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 63);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Pesan";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// tipeH
			// 
			this->tipeH->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tipeH->FormattingEnabled = true;
			this->tipeH->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Deluxe Single\t: Rp.500.000/Malam ", L"Deluxe Twin\t: Rp.800.000/Malam ",
					L"Deluxe Double\t: Rp.1.000.000/Malam", L"Deluxe Queen\t: Rp.1.500.000/Malam"
			});
			this->tipeH->Location = System::Drawing::Point(617, 345);
			this->tipeH->Name = L"tipeH";
			this->tipeH->Size = System::Drawing::Size(480, 28);
			this->tipeH->TabIndex = 23;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->tipeH);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->dateTimePicker2);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->namaTamu);
			this->panel1->Controls->Add(this->noHP);
			this->panel1->Controls->Add(this->Email);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(395, 182);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1221, 714);
			this->panel1->TabIndex = 24;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->ClientSize = System::Drawing::Size(1898, 1024);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm1";
			this->Text = L"pembayaran";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ date = System::Convert::ToString(dateTimePicker1->Value);
		String^ date2 = System::Convert::ToString(dateTimePicker2->Value);
		pembayaran^ pembayaranForm = gcnew pembayaran(namaTamu->Text,date,tipeH->Text,date2);
		
		if (namaTamu->Text == "") {
			MessageBox::Show("tolong masukan semua data");
		}
		else if (noHP->Text == "") {
			MessageBox::Show("tolong masukan semua data");
		}
		else if (Email->Text == "") {
			MessageBox::Show("tolong masukan semua data");
		}
		else if (tipeH->Text == "") {
			MessageBox::Show("tolong masukan semua data");
		}
		else {
			pembayaranForm->ShowDialog();
		};



;
	}
private: System::Void namaTamu_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void noHP_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
