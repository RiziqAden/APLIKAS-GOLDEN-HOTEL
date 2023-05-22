#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for pembayaran
	/// </summary>
	public ref class pembayaran : public System::Windows::Forms::Form
	{
	public:
		pembayaran(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		pembayaran(String^namaTamu,String^datetime1,String^TipeH,String^datetime2) {
			InitializeComponent();
			label1->Text = namaTamu;
			label2->Text = datetime1;
			label4->Text = TipeH;
			label6->Text = datetime2;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~pembayaran()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(pembayaran::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label1->Location = System::Drawing::Point(364, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"nama";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(362, 275);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"date";
			this->label2->Click += gcnew System::EventHandler(this, &pembayaran::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label3->Location = System::Drawing::Point(159, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(384, 220);
			this->label3->TabIndex = 2;
			this->label3->Text = resources->GetString(L"label3.Text");
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &pembayaran::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(362, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(229, 356);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(236, 216);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label5->Location = System::Drawing::Point(207, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(294, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Silakan scan Qr berikut untuk membayar";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(360, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"dataQ";
			// 
			// pembayaran
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(703, 676);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->MaximizeBox = false;
			this->Name = L"pembayaran";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"pembayaran";
			this->Load += gcnew System::EventHandler(this, &pembayaran::pembayaran_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void pembayaran_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
