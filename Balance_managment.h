#pragma once
#include "profile.h"
#include"Requested_transactions.h"
namespace SimpleDigitalWallet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	
	/// <summary>
	/// Summary for Balance_managment
	/// </summary>
	public ref class Balance_managment : public System::Windows::Forms::Form
	{
		void MakeRoundedButton(Button^ button, int radius) {
			GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
			System::Drawing::Rectangle bounds = button->ClientRectangle;
			int diameter = radius * 2;

			// Define the rounded rectangle path
			path->AddArc(bounds.X, bounds.Y, diameter, diameter, 180, 90);
			path->AddArc(bounds.Right - diameter, bounds.Y, diameter, diameter, 270, 90);
			path->AddArc(bounds.Right - diameter, bounds.Bottom - diameter, diameter, diameter, 0, 90);
			path->AddArc(bounds.X, bounds.Bottom - diameter, diameter, diameter, 90, 90);
			path->CloseFigure();

			// Set the region of the Button to the rounded rectangle
			button->Region = gcnew System::Drawing::Region(path);

			// Optional: Add a border by drawing the path
			button->FlatStyle = FlatStyle::Flat; // Ensure the button has a flat style
			button->Paint += gcnew PaintEventHandler(this, &Balance_managment::DrawRoundedButtonBorder);
		}

		void DrawRoundedButtonBorder(Object^ sender, PaintEventArgs^ e) {
			Button^ button = safe_cast<Button^>(sender);
			GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
			System::Drawing::Rectangle bounds = button->ClientRectangle;
			int radius = 10; // Adjust radius as needed
			int diameter = radius * 2;

			// Define the rounded rectangle path
			path->AddArc(bounds.X, bounds.Y, diameter, diameter, 180, 90);
			path->AddArc(bounds.Right - diameter, bounds.Y, diameter, diameter, 270, 90);
			path->AddArc(bounds.Right - diameter, bounds.Bottom - diameter, diameter, diameter, 0, 90);
			path->AddArc(bounds.X, bounds.Bottom - diameter, diameter, diameter, 90, 90);
			path->CloseFigure();

			Pen^ pen = gcnew Pen(Color::Gray, 2); // Adjust color and thickness as needed
			e->Graphics->DrawPath(pen, path);
		}
	public:
		Form^ dashboard_form;
		Balance_managment(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Balance_managment(Form^ form) {
			InitializeComponent();
			dashboard_form = form;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Balance_managment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ black_panel;
	protected:
	private: System::Windows::Forms::Button^ logout_button;
	private: System::Windows::Forms::Button^ transaction_button;
	private: System::Windows::Forms::Button^ profile_button;
	private: System::Windows::Forms::Button^ home_button;
	private: System::Windows::Forms::PictureBox^ wallet_icon;
	private: System::Windows::Forms::Label^ wallet_label;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ send_amount_label;
	private: System::Windows::Forms::Label^ recipient_name_label;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Balance_managment::typeid));
			this->black_panel = (gcnew System::Windows::Forms::Panel());
			this->logout_button = (gcnew System::Windows::Forms::Button());
			this->transaction_button = (gcnew System::Windows::Forms::Button());
			this->profile_button = (gcnew System::Windows::Forms::Button());
			this->home_button = (gcnew System::Windows::Forms::Button());
			this->wallet_icon = (gcnew System::Windows::Forms::PictureBox());
			this->wallet_label = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->send_amount_label = (gcnew System::Windows::Forms::Label());
			this->recipient_name_label = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->black_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// black_panel
			// 
			this->black_panel->BackColor = System::Drawing::Color::ForestGreen;
			this->black_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->black_panel->Controls->Add(this->logout_button);
			this->black_panel->Controls->Add(this->transaction_button);
			this->black_panel->Controls->Add(this->profile_button);
			this->black_panel->Controls->Add(this->home_button);
			this->black_panel->Controls->Add(this->wallet_icon);
			this->black_panel->Controls->Add(this->wallet_label);
			this->black_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->black_panel->Location = System::Drawing::Point(0, 0);
			this->black_panel->Name = L"black_panel";
			this->black_panel->Size = System::Drawing::Size(1182, 62);
			this->black_panel->TabIndex = 1;
			// 
			// logout_button
			// 
			this->logout_button->BackColor = System::Drawing::Color::ForestGreen;
			this->logout_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->logout_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_button->ForeColor = System::Drawing::Color::ForestGreen;
			this->logout_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout_button.Image")));
			this->logout_button->Location = System::Drawing::Point(1136, 3);
			this->logout_button->Name = L"logout_button";
			this->logout_button->Size = System::Drawing::Size(49, 50);
			this->logout_button->TabIndex = 8;
			this->logout_button->UseVisualStyleBackColor = false;
			// 
			// transaction_button
			// 
			this->transaction_button->BackColor = System::Drawing::Color::ForestGreen;
			this->transaction_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->transaction_button->ForeColor = System::Drawing::Color::ForestGreen;
			this->transaction_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"transaction_button.Image")));
			this->transaction_button->Location = System::Drawing::Point(1070, 4);
			this->transaction_button->Name = L"transaction_button";
			this->transaction_button->Size = System::Drawing::Size(49, 50);
			this->transaction_button->TabIndex = 7;
			this->transaction_button->UseVisualStyleBackColor = false;
			this->transaction_button->Click += gcnew System::EventHandler(this, &Balance_managment::transaction_button_Click);
			// 
			// profile_button
			// 
			this->profile_button->BackColor = System::Drawing::Color::ForestGreen;
			this->profile_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profile_button->ForeColor = System::Drawing::Color::ForestGreen;
			this->profile_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_button.Image")));
			this->profile_button->Location = System::Drawing::Point(1004, 5);
			this->profile_button->Name = L"profile_button";
			this->profile_button->Size = System::Drawing::Size(49, 50);
			this->profile_button->TabIndex = 6;
			this->profile_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->profile_button->UseVisualStyleBackColor = false;
			this->profile_button->Click += gcnew System::EventHandler(this, &Balance_managment::profile_button_Click);
			// 
			// home_button
			// 
			this->home_button->BackColor = System::Drawing::Color::ForestGreen;
			this->home_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home_button->ForeColor = System::Drawing::Color::ForestGreen;
			this->home_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_button.Image")));
			this->home_button->Location = System::Drawing::Point(938, 3);
			this->home_button->Name = L"home_button";
			this->home_button->Size = System::Drawing::Size(49, 52);
			this->home_button->TabIndex = 5;
			this->home_button->UseVisualStyleBackColor = false;
			this->home_button->Click += gcnew System::EventHandler(this, &Balance_managment::home_button_Click);
			// 
			// wallet_icon
			// 
			this->wallet_icon->BackColor = System::Drawing::Color::White;
			this->wallet_icon->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->wallet_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wallet_icon.Image")));
			this->wallet_icon->InitialImage = nullptr;
			this->wallet_icon->Location = System::Drawing::Point(5, 8);
			this->wallet_icon->Name = L"wallet_icon";
			this->wallet_icon->Size = System::Drawing::Size(52, 44);
			this->wallet_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->wallet_icon->TabIndex = 9;
			this->wallet_icon->TabStop = false;
			// 
			// wallet_label
			// 
			this->wallet_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->wallet_label->ForeColor = System::Drawing::Color::White;
			this->wallet_label->Location = System::Drawing::Point(58, 0);
			this->wallet_label->Name = L"wallet_label";
			this->wallet_label->Size = System::Drawing::Size(139, 58);
			this->wallet_label->TabIndex = 10;
			this->wallet_label->Text = L"Easy wallet";
			this->wallet_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->send_amount_label);
			this->panel1->Controls->Add(this->recipient_name_label);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->domainUpDown1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 168);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(24);
			this->panel1->Size = System::Drawing::Size(1158, 251);
			this->panel1->TabIndex = 10;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(375, 77);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(482, 37);
			this->comboBox1->TabIndex = 12;
			// 
			// send_amount_label
			// 
			this->send_amount_label->AutoSize = true;
			this->send_amount_label->BackColor = System::Drawing::SystemColors::ControlLight;
			this->send_amount_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->send_amount_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->send_amount_label->Location = System::Drawing::Point(371, 121);
			this->send_amount_label->Name = L"send_amount_label";
			this->send_amount_label->Size = System::Drawing::Size(64, 20);
			this->send_amount_label->TabIndex = 11;
			this->send_amount_label->Text = L"amount";
			// 
			// recipient_name_label
			// 
			this->recipient_name_label->AutoSize = true;
			this->recipient_name_label->BackColor = System::Drawing::SystemColors::ControlLight;
			this->recipient_name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recipient_name_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->recipient_name_label->Location = System::Drawing::Point(371, 56);
			this->recipient_name_label->Name = L"recipient_name_label";
			this->recipient_name_label->Size = System::Drawing::Size(134, 20);
			this->recipient_name_label->TabIndex = 10;
			this->recipient_name_label->Text = L"Payment method";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(393, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(444, 43);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(27, 195);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 32);
			this->label7->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(255, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 38);
			this->label5->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(231, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 38);
			this->label6->TabIndex = 5;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->domainUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->domainUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->domainUpDown1->ForeColor = System::Drawing::Color::Black;
			this->domainUpDown1->Location = System::Drawing::Point(375, 144);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(482, 30);
			this->domainUpDown1->TabIndex = 2;
			this->domainUpDown1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Balance_managment::domainUpDown1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(533, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Add Money";
			this->label1->Click += gcnew System::EventHandler(this, &Balance_managment::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->domainUpDown2);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Location = System::Drawing::Point(12, 425);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(24);
			this->panel2->Size = System::Drawing::Size(1158, 274);
			this->panel2->TabIndex = 11;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(375, 80);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(482, 37);
			this->comboBox2->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(371, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"amount";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(371, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Payment method";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(393, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(444, 43);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Withdraw";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 32);
			this->label4->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(255, 239);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 38);
			this->label8->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(231, 239);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 38);
			this->label9->TabIndex = 5;
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->domainUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->domainUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->domainUpDown2->ForeColor = System::Drawing::Color::Black;
			this->domainUpDown2->Location = System::Drawing::Point(375, 144);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(482, 30);
			this->domainUpDown2->TabIndex = 2;
			this->domainUpDown2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Balance_managment::domainUpDown2_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(520, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(218, 32);
			this->label10->TabIndex = 8;
			this->label10->Text = L"withdraw Money";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(461, 107);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(315, 38);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Balance managment";
			this->label11->Click += gcnew System::EventHandler(this, &Balance_managment::label11_Click);
			// 
			// Balance_managment
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->black_panel);
			this->Name = L"Balance_managment";
			this->Text = L"Balance_managment";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Balance_managment::Balance_managment_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Balance_managment::Balance_managment_Load);
			this->black_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Balance_managment_Load(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Add("Credit Card");
	comboBox1->Items->Add("Debit Card");
	comboBox1->Items->Add("PayPal");
	comboBox2->Items->Add("Bank Account");
	comboBox2->Items->Add("Wallet Balance");
	domainUpDown1->Text = "0.00";
	domainUpDown2->Text = "0.00";
	MakeRoundedButton(button3, 10);
	MakeRoundedButton(button1, 10);

}
 
private: System::Void domainUpDown1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b' && e->KeyChar != '.') {
		e->Handled = true;
	}
}

private: System::Void domainUpDown2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b' && e->KeyChar != '.') {
		e->Handled = true;
	}
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void home_button_Click(System::Object^ sender, System::EventArgs^ e) {
	dashboard_form->Show();
	this->Hide();
}
private: System::Void profile_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	profile^ form = gcnew profile(dashboard_form);
	form->Show();
}
private: System::Void transaction_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Requested_transactions^ form = gcnew Requested_transactions(dashboard_form);
	form->Show();
}

private: System::Void Balance_managment_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
};
}
