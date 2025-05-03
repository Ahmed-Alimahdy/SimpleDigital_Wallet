#pragma once
#include "Classes\User.h"
#include"Dashboard.h"
#include"Admin_UI1.h"
#include <msclr/marshal_cppstd.h>

namespace SimpleDigitalWallet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sign
	/// </summary>
	public ref class Sign : public System::Windows::Forms::Form
	{
	public:
		Sign(void)
		{
			InitializeComponent();
			pnlSignUp->Hide();
			pnlTerms->Hide();
			label15->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sign()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;








	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ pnlTerms;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlSignUp;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sign::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pnlTerms = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlSignUp = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pnlTerms->SuspendLayout();
			this->pnlSignUp->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(12, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 81);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign in";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Sign::label1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(153, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 44);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Sign::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGreen;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Lime;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(26, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 44);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Sign::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label5->Location = System::Drawing::Point(144, 318);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Terms and Conditions";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &Sign::label5_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::DarkGreen;
			this->checkBox1->Location = System::Drawing::Point(26, 314);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(115, 22);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Sign::checkBox1_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(26, 275);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(280, 22);
			this->textBox2->TabIndex = 13;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Sign::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(26, 218);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(280, 22);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Sign::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkGreen;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label4->Location = System::Drawing::Point(23, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Password";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label3->Location = System::Drawing::Point(23, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Username";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(23, 429);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(163, 18);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Don\'t have an account\?";
			this->label6->Click += gcnew System::EventHandler(this, &Sign::label6_Click);
			// 
			// pnlTerms
			// 
			this->pnlTerms->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlTerms.BackgroundImage")));
			this->pnlTerms->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlTerms->Controls->Add(this->button3);
			this->pnlTerms->Controls->Add(this->textBox3);
			this->pnlTerms->Controls->Add(this->label2);
			this->pnlTerms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlTerms->Location = System::Drawing::Point(0, 0);
			this->pnlTerms->Name = L"pnlTerms";
			this->pnlTerms->Size = System::Drawing::Size(982, 553);
			this->pnlTerms->TabIndex = 23;
			this->pnlTerms->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Sign::pnlTerms_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkGreen;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Lime;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(478, 443);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(95, 39);
			this->button3->TabIndex = 2;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Sign::button3_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(82, 100);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(491, 337);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = resources->GetString(L"textBox3.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(306, 36);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Terms and Conditions";
			// 
			// pnlSignUp
			// 
			this->pnlSignUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlSignUp.BackgroundImage")));
			this->pnlSignUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlSignUp->Controls->Add(this->label15);
			this->pnlSignUp->Controls->Add(this->textBox7);
			this->pnlSignUp->Controls->Add(this->label14);
			this->pnlSignUp->Controls->Add(this->textBox6);
			this->pnlSignUp->Controls->Add(this->button4);
			this->pnlSignUp->Controls->Add(this->label13);
			this->pnlSignUp->Controls->Add(this->label11);
			this->pnlSignUp->Controls->Add(this->label12);
			this->pnlSignUp->Controls->Add(this->textBox4);
			this->pnlSignUp->Controls->Add(this->textBox5);
			this->pnlSignUp->Controls->Add(this->label9);
			this->pnlSignUp->Controls->Add(this->label10);
			this->pnlSignUp->Controls->Add(this->label8);
			this->pnlSignUp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlSignUp->Location = System::Drawing::Point(0, 0);
			this->pnlSignUp->Name = L"pnlSignUp";
			this->pnlSignUp->Size = System::Drawing::Size(982, 553);
			this->pnlSignUp->TabIndex = 24;
			this->pnlSignUp->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Sign::pnlSignUp_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(144, 139);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(142, 16);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Name is already taken";
			this->label15->Click += gcnew System::EventHandler(this, &Sign::label15_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(55, 321);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(276, 22);
			this->textBox7->TabIndex = 29;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox7->PasswordChar = this->textBox4->PasswordChar; // Match textBox7 to textBox4
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Sign::textBox7_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::DarkGreen;
			this->label14->Location = System::Drawing::Point(52, 300);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 18);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Confirm Password";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(55, 215);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(276, 22);
			this->textBox6->TabIndex = 27;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Sign::textBox6_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkGreen;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Lime;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(153, 365);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 37);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Submit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Sign::button4_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::DarkGreen;
			this->label13->Location = System::Drawing::Point(52, 194);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 18);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Email";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(72, 415);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(176, 18);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Already have an account\?";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Lime;
			this->label12->Location = System::Drawing::Point(260, 415);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 18);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Login";
			this->label12->Click += gcnew System::EventHandler(this, &Sign::label12_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(55, 269);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '•';
			this->textBox4->Size = System::Drawing::Size(280, 22);
			this->textBox4->TabIndex = 20;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Sign::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(55, 158);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(280, 22);
			this->textBox5->TabIndex = 19;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Sign::textBox5_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkGreen;
			this->label9->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label9->Location = System::Drawing::Point(52, 248);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Password";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &Sign::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkGreen;
			this->label10->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label10->Location = System::Drawing::Point(52, 137);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 18);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Username";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkGreen;
			this->label8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label8->Location = System::Drawing::Point(41, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(250, 81);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Sign Up";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &Sign::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label7->Location = System::Drawing::Point(203, 431);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 16);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Sign Up";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &Sign::label7_Click_1);
			// 
			// Sign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->pnlSignUp);
			this->Controls->Add(this->pnlTerms);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Sign";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign";
			this->Load += gcnew System::EventHandler(this, &Sign::Sign_Load);
			this->pnlTerms->ResumeLayout(false);
			this->pnlTerms->PerformLayout();
			this->pnlSignUp->ResumeLayout(false);
			this->pnlSignUp->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Sign_Load(System::Object^ sender, System::EventArgs^ e) {
		user::loadAllUsers("User.txt");
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
	{
		button1->Enabled = true;
	}
	else
	{
		button1->Enabled = false;
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTerms->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTerms->Hide();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlSignUp->Show();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlSignUp->Hide();
}
private: System::Void pnlSignUp_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlSignUp->Hide();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pnlTerms->Hide();
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	pnlSignUp->Show();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	label15->Hide();
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	// Change System::String to std::string
	string username = msclr::interop::marshal_as<std::string>(textBox5->Text);
	string email = msclr::interop::marshal_as<std::string>(textBox6->Text);
	string password = msclr::interop::marshal_as<std::string>(textBox4->Text);
	string confirmPassword = msclr::interop::marshal_as<std::string>(textBox7->Text);
	string specialChars = "!@$%^&*+#";

	// Check textboxes if empty
	if (username.empty() || email.empty() || password.empty() || confirmPassword.empty()) {
		MessageBox::Show("Please fill all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	//  To be sure confirm pass == pass
	if (password != confirmPassword) {
		MessageBox::Show("Passwords do not match!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox4->Text = "";
		textBox7->Text = "";
		return;
	}

	// Check if pass contain special char or not
	if (password.find_first_of(specialChars) == std::string::npos) {
		MessageBox::Show("Password must contain at least one special character (!@$%^&*+#)!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox4->Text = "";
		textBox7->Text = "";
		return;
	}

	// Check Username if exist
	if (user::allusers.find(username) != user::allusers.end()) {
		label15->Show();
		textBox5->Text = "";
		return;
	}

	// Create New user
	user newUser(username, email, password);
	user::allusers[username] = newUser;

	MessageBox::Show("Sign Up Successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	pnlSignUp->Hide();
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Change System::String to std::string
	string username = msclr::interop::marshal_as<std::string>(textBox1->Text);
	string password = msclr::interop::marshal_as<std::string>(textBox2->Text);
	// Check username and password if exists
	auto it = user::allusers.find(username);
	// Check textboxes if empty
	if (username.empty() || password.empty()) {
		MessageBox::Show("Please fill all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (username == "Admin" && password == "@dmin")
	{
		MessageBox::Show("Sign In Successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Admin_UI^ admin = gcnew Admin_UI(this);
		admin->Show();
		this->Hide();
	}
	else if (it != user::allusers.end()) {
		if (it->second.getHashedPassword() == password) {
			MessageBox::Show("Sign In Successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Dashboard^ dashboard = gcnew Dashboard(this, it->second);
			dashboard->Show();
			this->Hide();
		}
	}
	else {
		MessageBox::Show("Invalid Username or Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->Text = "";
		textBox2->Text = "";
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlTerms_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
