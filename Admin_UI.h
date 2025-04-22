#pragma once
 #include "User_Control.h"
namespace SimpleDigitalWallet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic; // Add this line to include List

	/// <summary>
	/// Summary for Admin_UI
	/// </summary>
	public ref class Admin_UI : public System::Windows::Forms::Form
	{
	public:
		Admin_UI(void)
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
		~Admin_UI()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ Users_page;
	private: System::Windows::Forms::Label^ Users_lable;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel_Users_Data;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ searchTextBox;
	private: List<User_Control^>^ users;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ LB_Name_info;
	public: System::Windows::Forms::Label^ LB_Email_info;
	public: System::Windows::Forms::Label^ LB_Balance_info;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ suspended_LB;
	private: System::Windows::Forms::Button^ Edit_button;
	private: System::Windows::Forms::Button^ Transactions_button;
	public:



	public: System::Windows::Forms::Label^ No_user_ms;
	private: System::Windows::Forms::Panel^ UserInfo_panal;
	private: System::Windows::Forms::Button^ Save_button;
	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::CheckBox^ suspended_checkBox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ BalanceEdit_Box;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ EmailEdit_Box;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ UserEdit_Box;
	private: System::Windows::Forms::Panel^ Transactions_user_panel;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ Tr_label;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ DownTransaction_button;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel_Users_Transaction;
	private: System::Windows::Forms::Button^ Add_user_button;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ password_Box;

	private:


	private: System::ComponentModel::IContainer^ components;
	public:
	private:
	public:
	private:



	private:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_UI::typeid));
			this->Users_page = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel_Users_Data = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Users_lable = (gcnew System::Windows::Forms::Label());
			this->UserInfo_panal = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->password_Box = (gcnew System::Windows::Forms::TextBox());
			this->Add_user_button = (gcnew System::Windows::Forms::Button());
			this->Transactions_user_panel = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel_Users_Transaction = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->DownTransaction_button = (gcnew System::Windows::Forms::Button());
			this->Tr_label = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->suspended_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->BalanceEdit_Box = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->EmailEdit_Box = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->UserEdit_Box = (gcnew System::Windows::Forms::TextBox());
			this->Save_button = (gcnew System::Windows::Forms::Button());
			this->LB_Email_info = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LB_Name_info = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Transactions_button = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LB_Balance_info = (gcnew System::Windows::Forms::Label());
			this->suspended_LB = (gcnew System::Windows::Forms::Label());
			this->Edit_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->No_user_ms = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Users_page->SuspendLayout();
			this->UserInfo_panal->SuspendLayout();
			this->Transactions_user_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Users_page
			// 
			this->Users_page->Controls->Add(this->label3);
			this->Users_page->Controls->Add(this->searchTextBox);
			this->Users_page->Controls->Add(this->label2);
			this->Users_page->Controls->Add(this->label1);
			this->Users_page->Controls->Add(this->flowLayoutPanel_Users_Data);
			this->Users_page->Controls->Add(this->Users_lable);
			this->Users_page->Controls->Add(this->UserInfo_panal);
			this->Users_page->Controls->Add(this->No_user_ms);
			this->Users_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Users_page->Location = System::Drawing::Point(0, 0);
			this->Users_page->Name = L"Users_page";
			this->Users_page->Size = System::Drawing::Size(1200, 800);
			this->Users_page->TabIndex = 1;
			this->Users_page->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin_UI::Users_page_Paint);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Olive;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(169, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(198, 2);
			this->label3->TabIndex = 5;
			// 
			// searchTextBox
			// 
			this->searchTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->searchTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTextBox->Location = System::Drawing::Point(168, 193);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(199, 19);
			this->searchTextBox->TabIndex = 4;
			this->searchTextBox->TextChanged += gcnew System::EventHandler(this, &Admin_UI::searchTextBox_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"User Name:";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Olive;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(626, 230);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2, 547);
			this->label1->TabIndex = 2;
			this->label1->Click += gcnew System::EventHandler(this, &Admin_UI::label1_Click);
			// 
			// flowLayoutPanel_Users_Data
			// 
			this->flowLayoutPanel_Users_Data->AutoScroll = true;
			this->flowLayoutPanel_Users_Data->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel_Users_Data->Location = System::Drawing::Point(12, 230);
			this->flowLayoutPanel_Users_Data->Name = L"flowLayoutPanel_Users_Data";
			this->flowLayoutPanel_Users_Data->Size = System::Drawing::Size(592, 547);
			this->flowLayoutPanel_Users_Data->TabIndex = 1;
			this->flowLayoutPanel_Users_Data->WrapContents = false;
			// 
			// Users_lable
			// 
			this->Users_lable->AutoSize = true;
			this->Users_lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Users_lable->Location = System::Drawing::Point(308, 99);
			this->Users_lable->Name = L"Users_lable";
			this->Users_lable->Size = System::Drawing::Size(588, 73);
			this->Users_lable->TabIndex = 0;
			this->Users_lable->Text = L"Users Informations";
			this->Users_lable->Click += gcnew System::EventHandler(this, &Admin_UI::Users_lable_Click);
			// 
			// UserInfo_panal
			// 
			this->UserInfo_panal->BackColor = System::Drawing::SystemColors::Control;
			this->UserInfo_panal->Controls->Add(this->label12);
			this->UserInfo_panal->Controls->Add(this->password_Box);
			this->UserInfo_panal->Controls->Add(this->Add_user_button);
			this->UserInfo_panal->Controls->Add(this->Transactions_user_panel);
			this->UserInfo_panal->Controls->Add(this->suspended_checkBox);
			this->UserInfo_panal->Controls->Add(this->label10);
			this->UserInfo_panal->Controls->Add(this->BalanceEdit_Box);
			this->UserInfo_panal->Controls->Add(this->label9);
			this->UserInfo_panal->Controls->Add(this->EmailEdit_Box);
			this->UserInfo_panal->Controls->Add(this->label8);
			this->UserInfo_panal->Controls->Add(this->cancel_button);
			this->UserInfo_panal->Controls->Add(this->UserEdit_Box);
			this->UserInfo_panal->Controls->Add(this->Save_button);
			this->UserInfo_panal->Controls->Add(this->LB_Email_info);
			this->UserInfo_panal->Controls->Add(this->label6);
			this->UserInfo_panal->Controls->Add(this->LB_Name_info);
			this->UserInfo_panal->Controls->Add(this->label7);
			this->UserInfo_panal->Controls->Add(this->Transactions_button);
			this->UserInfo_panal->Controls->Add(this->label5);
			this->UserInfo_panal->Controls->Add(this->LB_Balance_info);
			this->UserInfo_panal->Controls->Add(this->suspended_LB);
			this->UserInfo_panal->Controls->Add(this->Edit_button);
			this->UserInfo_panal->Controls->Add(this->label4);
			this->UserInfo_panal->Location = System::Drawing::Point(634, 230);
			this->UserInfo_panal->Name = L"UserInfo_panal";
			this->UserInfo_panal->Size = System::Drawing::Size(563, 498);
			this->UserInfo_panal->TabIndex = 17;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Olive;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(149, 294);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(198, 2);
			this->label12->TabIndex = 28;
			// 
			// password_Box
			// 
			this->password_Box->BackColor = System::Drawing::SystemColors::Control;
			this->password_Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_Box->Location = System::Drawing::Point(148, 267);
			this->password_Box->Name = L"password_Box";
			this->password_Box->Size = System::Drawing::Size(199, 28);
			this->password_Box->TabIndex = 27;
			this->password_Box->UseSystemPasswordChar = true;
			// 
			// Add_user_button
			// 
			this->Add_user_button->BackColor = System::Drawing::Color::Olive;
			this->Add_user_button->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Add_user_button->FlatAppearance->BorderSize = 0;
			this->Add_user_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add_user_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_user_button->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Add_user_button->Location = System::Drawing::Point(451, 15);
			this->Add_user_button->Name = L"Add_user_button";
			this->Add_user_button->Size = System::Drawing::Size(103, 43);
			this->Add_user_button->TabIndex = 26;
			this->Add_user_button->Text = L"+ Add";
			this->Add_user_button->UseVisualStyleBackColor = false;
			this->Add_user_button->Click += gcnew System::EventHandler(this, &Admin_UI::Add_user_button_Click);
			// 
			// Transactions_user_panel
			// 
			this->Transactions_user_panel->Controls->Add(this->flowLayoutPanel_Users_Transaction);
			this->Transactions_user_panel->Controls->Add(this->DownTransaction_button);
			this->Transactions_user_panel->Controls->Add(this->Tr_label);
			this->Transactions_user_panel->Controls->Add(this->label11);
			this->Transactions_user_panel->Location = System::Drawing::Point(0, 493);
			this->Transactions_user_panel->Name = L"Transactions_user_panel";
			this->Transactions_user_panel->Size = System::Drawing::Size(563, 25);
			this->Transactions_user_panel->TabIndex = 25;
			// 
			// flowLayoutPanel_Users_Transaction
			// 
			this->flowLayoutPanel_Users_Transaction->Location = System::Drawing::Point(12, 115);
			this->flowLayoutPanel_Users_Transaction->Name = L"flowLayoutPanel_Users_Transaction";
			this->flowLayoutPanel_Users_Transaction->Size = System::Drawing::Size(542, 367);
			this->flowLayoutPanel_Users_Transaction->TabIndex = 9;
			// 
			// DownTransaction_button
			// 
			this->DownTransaction_button->BackColor = System::Drawing::Color::Olive;
			this->DownTransaction_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DownTransaction_button.BackgroundImage")));
			this->DownTransaction_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->DownTransaction_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DownTransaction_button->FlatAppearance->BorderSize = 0;
			this->DownTransaction_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DownTransaction_button->Location = System::Drawing::Point(523, 3);
			this->DownTransaction_button->Name = L"DownTransaction_button";
			this->DownTransaction_button->Size = System::Drawing::Size(40, 29);
			this->DownTransaction_button->TabIndex = 8;
			this->DownTransaction_button->UseVisualStyleBackColor = false;
			this->DownTransaction_button->Click += gcnew System::EventHandler(this, &Admin_UI::DownTransaction_button_Click);
			// 
			// Tr_label
			// 
			this->Tr_label->AutoSize = true;
			this->Tr_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tr_label->Location = System::Drawing::Point(195, 25);
			this->Tr_label->Name = L"Tr_label";
			this->Tr_label->Size = System::Drawing::Size(227, 29);
			this->Tr_label->TabIndex = 7;
			this->Tr_label->Text = L"Trancactions history";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Olive;
			this->label11->Dock = System::Windows::Forms::DockStyle::Top;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(563, 5);
			this->label11->TabIndex = 6;
			// 
			// suspended_checkBox
			// 
			this->suspended_checkBox->AutoSize = true;
			this->suspended_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->suspended_checkBox->Location = System::Drawing::Point(12, 339);
			this->suspended_checkBox->Name = L"suspended_checkBox";
			this->suspended_checkBox->Size = System::Drawing::Size(137, 29);
			this->suspended_checkBox->TabIndex = 24;
			this->suspended_checkBox->Text = L"suspended";
			this->suspended_checkBox->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Olive;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(111, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(198, 2);
			this->label10->TabIndex = 23;
			// 
			// BalanceEdit_Box
			// 
			this->BalanceEdit_Box->BackColor = System::Drawing::SystemColors::Control;
			this->BalanceEdit_Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->BalanceEdit_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BalanceEdit_Box->Location = System::Drawing::Point(110, 203);
			this->BalanceEdit_Box->Name = L"BalanceEdit_Box";
			this->BalanceEdit_Box->Size = System::Drawing::Size(199, 28);
			this->BalanceEdit_Box->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Olive;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(86, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(394, 2);
			this->label9->TabIndex = 21;
			// 
			// EmailEdit_Box
			// 
			this->EmailEdit_Box->BackColor = System::Drawing::SystemColors::Control;
			this->EmailEdit_Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EmailEdit_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailEdit_Box->Location = System::Drawing::Point(85, 146);
			this->EmailEdit_Box->Name = L"EmailEdit_Box";
			this->EmailEdit_Box->Size = System::Drawing::Size(395, 28);
			this->EmailEdit_Box->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Olive;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(149, 107);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(216, 2);
			this->label8->TabIndex = 19;
			// 
			// cancel_button
			// 
			this->cancel_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel_button->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->cancel_button->FlatAppearance->BorderSize = 0;
			this->cancel_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_button->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->cancel_button->Location = System::Drawing::Point(451, 429);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(103, 43);
			this->cancel_button->TabIndex = 17;
			this->cancel_button->Text = L"cancel";
			this->cancel_button->UseVisualStyleBackColor = false;
			this->cancel_button->Click += gcnew System::EventHandler(this, &Admin_UI::cancel_button_Click);
			// 
			// UserEdit_Box
			// 
			this->UserEdit_Box->BackColor = System::Drawing::SystemColors::Control;
			this->UserEdit_Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserEdit_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserEdit_Box->Location = System::Drawing::Point(148, 81);
			this->UserEdit_Box->Name = L"UserEdit_Box";
			this->UserEdit_Box->Size = System::Drawing::Size(217, 28);
			this->UserEdit_Box->TabIndex = 18;
			// 
			// Save_button
			// 
			this->Save_button->BackColor = System::Drawing::Color::Olive;
			this->Save_button->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Save_button->FlatAppearance->BorderSize = 0;
			this->Save_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Save_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save_button->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Save_button->Location = System::Drawing::Point(319, 429);
			this->Save_button->Name = L"Save_button";
			this->Save_button->Size = System::Drawing::Size(103, 43);
			this->Save_button->TabIndex = 16;
			this->Save_button->Text = L"Save";
			this->Save_button->UseVisualStyleBackColor = false;
			// 
			// LB_Email_info
			// 
			this->LB_Email_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Email_info->Location = System::Drawing::Point(80, 145);
			this->LB_Email_info->Name = L"LB_Email_info";
			this->LB_Email_info->Size = System::Drawing::Size(474, 29);
			this->LB_Email_info->TabIndex = 7;
			this->LB_Email_info->Text = L"ahmedebrahim200515@gmail.com";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 29);
			this->label6->TabIndex = 11;
			this->label6->Text = L"balance:";
			// 
			// LB_Name_info
			// 
			this->LB_Name_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Name_info->Location = System::Drawing::Point(143, 79);
			this->LB_Name_info->Name = L"LB_Name_info";
			this->LB_Name_info->Size = System::Drawing::Size(396, 29);
			this->LB_Name_info->TabIndex = 6;
			this->LB_Name_info->Text = L"ahmed ebrahim";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(7, 267);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 29);
			this->label7->TabIndex = 12;
			this->label7->Text = L"payment:";
			this->label7->Click += gcnew System::EventHandler(this, &Admin_UI::label7_Click);
			// 
			// Transactions_button
			// 
			this->Transactions_button->BackColor = System::Drawing::Color::Olive;
			this->Transactions_button->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Transactions_button->FlatAppearance->BorderSize = 0;
			this->Transactions_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Transactions_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Transactions_button->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Transactions_button->Location = System::Drawing::Point(12, 429);
			this->Transactions_button->Name = L"Transactions_button";
			this->Transactions_button->Size = System::Drawing::Size(158, 43);
			this->Transactions_button->TabIndex = 15;
			this->Transactions_button->Text = L"Transactions";
			this->Transactions_button->UseVisualStyleBackColor = false;
			this->Transactions_button->Click += gcnew System::EventHandler(this, &Admin_UI::Transactions_button_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 29);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Email:";
			// 
			// LB_Balance_info
			// 
			this->LB_Balance_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Balance_info->Location = System::Drawing::Point(105, 203);
			this->LB_Balance_info->Name = L"LB_Balance_info";
			this->LB_Balance_info->Size = System::Drawing::Size(200, 29);
			this->LB_Balance_info->TabIndex = 8;
			this->LB_Balance_info->Text = L"5000";
			// 
			// suspended_LB
			// 
			this->suspended_LB->AutoSize = true;
			this->suspended_LB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->suspended_LB->ForeColor = System::Drawing::Color::Green;
			this->suspended_LB->Location = System::Drawing::Point(7, 339);
			this->suspended_LB->Name = L"suspended_LB";
			this->suspended_LB->Size = System::Drawing::Size(163, 29);
			this->suspended_LB->TabIndex = 13;
			this->suspended_LB->Text = L"Unsuspended";
			// 
			// Edit_button
			// 
			this->Edit_button->BackColor = System::Drawing::Color::Olive;
			this->Edit_button->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Edit_button->FlatAppearance->BorderSize = 0;
			this->Edit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Edit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Edit_button->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Edit_button->Location = System::Drawing::Point(451, 429);
			this->Edit_button->Name = L"Edit_button";
			this->Edit_button->Size = System::Drawing::Size(103, 43);
			this->Edit_button->TabIndex = 14;
			this->Edit_button->Text = L"Edit";
			this->Edit_button->UseVisualStyleBackColor = false;
			this->Edit_button->Click += gcnew System::EventHandler(this, &Admin_UI::Edit_button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 29);
			this->label4->TabIndex = 9;
			this->label4->Text = L"User Name:";
			// 
			// No_user_ms
			// 
			this->No_user_ms->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->No_user_ms->AutoSize = true;
			this->No_user_ms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->No_user_ms->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->No_user_ms->Location = System::Drawing::Point(721, 432);
			this->No_user_ms->Name = L"No_user_ms";
			this->No_user_ms->Size = System::Drawing::Size(411, 55);
			this->No_user_ms->TabIndex = 16;
			this->No_user_ms->Text = L"NO User Selected";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Olive;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1200, 73);
			this->panel1->TabIndex = 2;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Admin_UI::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &Admin_UI::timer2_Tick);
			// 
			// Admin_UI
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1200, 800);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Users_page);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Admin_UI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_UI";
			this->Load += gcnew System::EventHandler(this, &Admin_UI::Admin_UI_Load);
			this->Users_page->ResumeLayout(false);
			this->Users_page->PerformLayout();
			this->UserInfo_panal->ResumeLayout(false);
			this->UserInfo_panal->PerformLayout();
			this->Transactions_user_panel->ResumeLayout(false);
			this->Transactions_user_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:int count=0;
	private: System::Void Users_page_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		No_user_ms->Show();
		UserInfo_panal->Hide();
		UserEdit_Box->Hide();
		EmailEdit_Box->Hide();
		BalanceEdit_Box->Hide();
		suspended_checkBox->Hide();
		Save_button->Hide();
		cancel_button->Hide();
		label8->Hide();
		label9->Hide();
		label10->Hide();
		password_Box->Hide();
		label12->Hide();
	}
private: System::Void Admin_UI_Load(System::Object^ sender, System::EventArgs^ e) {
	users = gcnew List<User_Control^>();
	for (int i = 0; i <5 ; i++)
	{

	User_Control^ userControl = gcnew User_Control();
	userControl->LB_Name->Text = "ahmed";
	userControl->LB_Balance->Text = "5000";
	userControl->LB_Email->Text = "ahmedebrahim57@gmail.com";
	//flowLayoutPanel_Users_Data->Controls->Add(userControl);
	userControl->OnUserControlClick += gcnew User_Control::UserControlClickEventHandler(this, &Admin_UI::UserControl_Click);
	users->Add(userControl);
	}
	for (int i = 0; i < 5; i++)
	{

		User_Control^ userControl = gcnew User_Control();
		userControl->LB_Name->Text = "mohamed";
		userControl->LB_Balance->Text = "1000";
		userControl->LB_Email->Text = "mohamed#ss@gmail.com";
		userControl->OnUserControlClick += gcnew User_Control::UserControlClickEventHandler(this, &Admin_UI::UserControl_Click);
		//flowLayoutPanel_Users_Data->Controls->Add(userControl);
		users->Add(userControl);
	}
	UpdateUserDisplay(users);
	
}
	 void UpdateUserDisplay(List<User_Control^>^ usersToDisplay)
	   {
		   flowLayoutPanel_Users_Data->Controls->Clear();
		   for each (User_Control ^ user in usersToDisplay)
		   {
			   flowLayoutPanel_Users_Data->Controls->Add(user);
		   }
	   }
private: System::Void Users_lable_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void searchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ searchText = searchTextBox->Text->ToLower();
	List<User_Control^>^ filteredUsers = gcnew List<User_Control^>();

	for each (User_Control ^ user in users)
	{
		if (user->LB_Name->Text->ToLower()->Contains(searchText))
		{
			filteredUsers->Add(user);
		}
	}

	UpdateUserDisplay(filteredUsers);
}
	   void UserControl_Click(Object^ sender, User_Control^ userControl)
	   {
		   //MessageBox::Show("User control clicked: " + userControl->LB_Name->Text);
		   LB_Name_info->Text = userControl->LB_Name->Text;
		   LB_Email_info->Text = userControl->LB_Email->Text;
		   LB_Balance_info->Text = userControl->LB_Balance->Text;
		   UserInfo_panal->Show();
		   No_user_ms->Hide();

		   // Show overlay panel for focused mode
		   //overlayPanel->Visible = true;
		   //overlayPanel->BringToFront();
		   //UserInfo_panal->BringToFront(); // Keep UserInfo_panal on top
		   //button1->BringToFront(); // Keep Edit button accessible
		   //button2->BringToFront(); // Keep Transactions button accessible

		   UserEdit_Box->Hide();
		   EmailEdit_Box->Hide();
		   BalanceEdit_Box->Hide();
		   suspended_checkBox->Hide();
		   Save_button->Hide();
		   cancel_button->Hide();
		   label8->Hide();
		   label9->Hide();
		   label10->Hide();
		   password_Box->Hide();
		   label12->Hide();
		   // Show the labels and hide the text boxes
		   LB_Name_info->Show();
		   LB_Email_info->Show();
		   LB_Balance_info->Show();
		   suspended_LB->Show();
		   Add_user_button->Show();
		   label7->Text = "payment:";
		   // Show the Edit and Transactions buttons
		   Edit_button->Show();
		   Transactions_button->Show();
	   }
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Edit_button_Click(System::Object^ sender, System::EventArgs^ e) {
	//
	// LB_Name_info
	UserEdit_Box->Text = LB_Name_info->Text;
	EmailEdit_Box->Text = LB_Email_info->Text;
	BalanceEdit_Box->Text = LB_Balance_info->Text;
	if (suspended_LB->Text == "suspended")
	{
		suspended_checkBox->Checked = true;
	}
	else
	{
		suspended_checkBox->Checked = false;
	}
	// Hide the labels and show the text boxes
	LB_Name_info->Hide();
	LB_Email_info->Hide();
	LB_Balance_info->Hide();
	suspended_LB->Hide();
	Add_user_button->Hide();
	// Show the text boxes and buttons
	UserEdit_Box->Show();
	EmailEdit_Box->Show();
	BalanceEdit_Box->Show();
	suspended_checkBox->Show();
	Save_button->Show();
	cancel_button->Show();
	label8->Show();
	label9->Show();
	label10->Show();
	// Hide the Edit and Transactions buttons
	Edit_button->Hide();
	Transactions_button->Hide();

}
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	// Hide the text boxes and buttons
	UserEdit_Box->Hide();
	EmailEdit_Box->Hide();
	BalanceEdit_Box->Hide();
	suspended_checkBox->Hide();
	Save_button->Hide();
	cancel_button->Hide();
	label8->Hide();
	label9->Hide();
	label10->Hide();
	password_Box->Hide();
	label12->Hide();
	// Show the labels and hide the text boxes
	LB_Name_info->Show();
	LB_Email_info->Show();
	LB_Balance_info->Show();
	suspended_LB->Show();
	Add_user_button->Show();
	label7->Text = "payment:";


	// Show the Edit and Transactions buttons
	Edit_button->Show();
	Transactions_button->Show();
}
private: System::Void Transactions_button_Click(System::Object^ sender, System::EventArgs^ e) {
	//timer2->Stop();
	//timer1->Start();
	count = 0;
	Transactions_user_panel->Location = System::Drawing::Point(0, 493);
	Transactions_user_panel->Height = 25;
	Transactions_user_panel->BringToFront();
	timer1->Interval = 20;
	timer1->Start();
}
	  
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//if (count < 10)
	//{
	//	if (Transactions_user_panel->Location== System::Drawing::Point(0,493)&&Transactions_user_panel->Height == 49.3)
	//	{
	//		timer1->Stop();
	//		count = 0;
	//	}
	//	else {
	//	Transactions_user_panel->Location = System::Drawing::Point(0, 0 + (count * 49.3));
	//	Transactions_user_panel->Height += 49.3;
	//	count++;
	//	}
	//}
	//else
	//{
	//	timer1->Stop();
	//	count = 0;
	//}
	const int targetHeight = 518;
	const int targetY = 0;
	const int initialY = 493;
	const int initialHeight = 25;
	const int totalSteps = 25;

	if (count < totalSteps) {
		float progress = static_cast<float>(count) / totalSteps;
		int currentHeight = initialHeight + static_cast<int>((targetHeight - initialHeight) * progress);
		int currentY = initialY - static_cast<int>((initialY - targetY) * progress);
		Transactions_user_panel->Height = currentHeight;
		Transactions_user_panel->Location = System::Drawing::Point(0, currentY);
		count++;
	}
	else {
		Transactions_user_panel->Height = targetHeight;
		Transactions_user_panel->Location = System::Drawing::Point(0, targetY);
		timer1->Stop();
		count = 0;
	}
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	//if (count < 10)
	//{
	//	Transactions_user_panel->Location = System::Drawing::Point(0, 493 - (count * 49.3));
	//	count++;
	//}
	//else
	//{
	//	timer2->Stop();
	//	count = 0;
	//	//Transactions_user_panel->Hide();
	//	//UserInfo_panal->BringToFront();
	//	//overlayPanel->Visible = false;
	//	//overlayPanel->SendToBack();
	//}
	const int targetHeight = 25;
	const int targetY = 493;
	const int initialY = 0;
	const int initialHeight = 518;
	const int totalSteps = 25;

	if (count < totalSteps) {
		float progress = static_cast<float>(count) / totalSteps;
		int currentHeight = initialHeight - static_cast<int>((targetHeight + initialHeight) * progress);
		int currentY = initialY + static_cast<int>((initialY + targetY) * progress);
		Transactions_user_panel->Height = currentHeight;
		Transactions_user_panel->Location = System::Drawing::Point(0, currentY);
		count++;
	}
	else {
		Transactions_user_panel->Height = targetHeight;
		Transactions_user_panel->Location = System::Drawing::Point(0, targetY);
		timer2->Stop();
		count = 0;
	}
	
}

private: System::Void DownTransaction_button_Click(System::Object^ sender, System::EventArgs^ e) {
	count = 0;
	Transactions_user_panel->Location = System::Drawing::Point(0, 0);
	Transactions_user_panel->Height = 518;
	//Transactions_user_panel->BringToFront();
	timer2->Interval = 20;
	timer2->Start();

}
private: System::Void Add_user_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//label6->Location = System::Drawing::Point(7, 267);
	UserEdit_Box->Text ="";
	EmailEdit_Box->Text = "";
	BalanceEdit_Box->Text = "";
	label7->Text="password:";
	password_Box->Show();
	label12->Show();
	suspended_checkBox->Checked = false;
	LB_Name_info->Hide();
	LB_Email_info->Hide();
	LB_Balance_info->Hide();
	suspended_LB->Hide();
	Add_user_button->Hide();
	// Show the text boxes and buttons
	UserEdit_Box->Show();
	EmailEdit_Box->Show();
	BalanceEdit_Box->Show();
	suspended_checkBox->Show();
	Save_button->Show();
	cancel_button->Show();
	label8->Show();
	label9->Show();
	label10->Show();
	// Hide the Edit and Transactions buttons
	Edit_button->Hide();
	Transactions_button->Hide();
	Add_user_button->Hide();
	
}
};
}
