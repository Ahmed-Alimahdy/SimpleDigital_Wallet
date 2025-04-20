#pragma once
#include "Classes/User.h"
namespace SimpleDigitalWallet {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{

		property System::String^ PlaceholderText
		{
			void set(System::String^ value) { placeholder = value; Invalidate(); }
			System::String^ get() { return placeholder; }
		}
		void MakeRoundedPanel(Panel^ panel, int radius) {
			GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
			System::Drawing::Rectangle  bounds = panel->ClientRectangle;
			int diameter = radius * 2;
			path->AddArc(bounds.X, bounds.Y, diameter, diameter, 180, 90);
			path->AddArc(bounds.Right - diameter, bounds.Y, diameter, diameter, 270, 90);
			path->AddArc(bounds.Right - diameter, bounds.Bottom - diameter, diameter, diameter, 0, 90);
			path->AddArc(bounds.X, bounds.Bottom - diameter, diameter, diameter, 90, 90);
			path->CloseFigure();
			panel->Region = gcnew System::Drawing::Region(path);
		}

		void generate_transaction_history_panels()
		{
			/*if (user_account->history_transaction.size() == 0)
			{*/
				/*Label^ noTransactionsLabel = gcnew Label();
				noTransactionsLabel->Text = "No transactions yet";
				noTransactionsLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular);
				noTransactionsLabel->AutoSize = true;
				int centerX = (this->scrollable_transaction_panel->Width - noTransactionsLabel->Width) /6 ;
				int centerY = (this->scrollable_transaction_panel->Height - noTransactionsLabel->Height) / 3;
				noTransactionsLabel->Location = System::Drawing::Point(centerX, centerY);
				this->scrollable_transaction_panel->Controls->Add(noTransactionsLabel);*/
			//}
			//else
			//{
				for (int i = 0;i < 20;i++)
				{
					/*transaction t = user_account->history_transaction.front();
					user_account->history_transaction.pop_front();*/
					Panel^ panel = gcnew Panel();
					panel->Size = System::Drawing::Size(450, 83);
					panel->BackColor = System::Drawing::SystemColors::ControlLight;
					panel->Location = System::Drawing::Point(0, (i * 100));
					MakeRoundedPanel(panel, 15);
					Label^ transaction_date_label = gcnew Label();
					transaction_date_label->Text = gcnew String(/*t.getTimestampAsString().c_str()*/"19/4/2025");  //"1"
					transaction_date_label->Location = System::Drawing::Point(17, 10);
					transaction_date_label->AutoSize = true;
					Label^ to_form_field = gcnew Label();
					/*if (t.getType() == TRANSACTION_TYPE::WITHDRAWAL || t.getType() == TRANSACTION_TYPE::REQUEST_MONEY)
						to_form_field->Text = "From";
					else*/
						to_form_field->Text = "To: ";  
					to_form_field->Location = System::Drawing::Point(17, 45);
					to_form_field->AutoSize = true;
					Label^ sender_reciever_label = gcnew Label();
					/*if (t.getType() == TRANSACTION_TYPE::SEND_MONEY) {
						sender_reciever_label->Text = gcnew String(t.getSender().c_str());
					}
					else if (t.getType() == TRANSACTION_TYPE::REQUEST_MONEY) {*/
						sender_reciever_label->Text = gcnew String(/*t.getRecipient().c_str()*/"John Smith"); //"2"
					//}
					sender_reciever_label->Location = System::Drawing::Point(146, 45);
					sender_reciever_label->AutoSize = true;
					Label^ amount_label = gcnew Label();
					amount_label->Text = "amount: $100"; //t.getAmount();
					amount_label->Location = System::Drawing::Point(300, 30);
					amount_label->AutoSize = true;
					panel->Controls->Add(transaction_date_label);
					panel->Controls->Add(to_form_field);
					panel->Controls->Add(sender_reciever_label);
					panel->Controls->Add(amount_label);
					this->Controls->Add(panel);
					this->scrollable_transaction_panel->Controls->Add(panel);
				}
			//}
		 }
	public:
		/*user* user_account;*/
		Dashboard(void)
		{
			InitializeComponent();
			//
			// Initialize the test pointer with a valid user object
			//
		}
		Dashboard(user* user_account)
		{
			InitializeComponent();
			/*this->user_account = user_account;*/
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
	private: System::Windows::Forms::Panel^ black_panel;
	private: System::Windows::Forms::PictureBox^ wallet_icon;
	private: System::Windows::Forms::Label^ wallet_label;
	private: System::Windows::Forms::Button^ home_button;
	private: System::Windows::Forms::Button^ transaction_button;
	private: System::Windows::Forms::Button^ profile_button;
	private: System::Windows::Forms::Button^ logout_button;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ current_label;
	private: System::Windows::Forms::Label^ balance_label;
	private: System::Windows::Forms::Label^ transaction_history_label;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::Panel^ scrollable_transaction_panel;
    private: System::Windows::Forms::Button^ add_to_balance;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
    private: System::Windows::Forms::Button^ button3;
	private: System::String^ placeholder;
	private: System::Drawing::Color placeholderColor;
private: System::Windows::Forms::Label^ recipient_name_label;
private: System::Windows::Forms::Label^ sender_name_label;
private: System::Windows::Forms::Label^ send_amount_label;
private: System::Windows::Forms::Label^ request_amount_label;
















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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->send_amount_label = (gcnew System::Windows::Forms::Label());
			this->recipient_name_label = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->request_amount_label = (gcnew System::Windows::Forms::Label());
			this->sender_name_label = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->transaction_history_label = (gcnew System::Windows::Forms::Label());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->scrollable_transaction_panel = (gcnew System::Windows::Forms::Panel());
			this->black_panel = (gcnew System::Windows::Forms::Panel());
			this->logout_button = (gcnew System::Windows::Forms::Button());
			this->transaction_button = (gcnew System::Windows::Forms::Button());
			this->profile_button = (gcnew System::Windows::Forms::Button());
			this->home_button = (gcnew System::Windows::Forms::Button());
			this->wallet_icon = (gcnew System::Windows::Forms::PictureBox());
			this->wallet_label = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->add_to_balance = (gcnew System::Windows::Forms::Button());
			this->current_label = (gcnew System::Windows::Forms::Label());
			this->balance_label = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->black_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(518, 466);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 46);
			this->label2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(8, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Send Money";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->send_amount_label);
			this->panel1->Controls->Add(this->recipient_name_label);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->domainUpDown1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(683, 252);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(24);
			this->panel1->Size = System::Drawing::Size(504, 244);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel1_Paint);
			// 
			// send_amount_label
			// 
			this->send_amount_label->AutoSize = true;
			this->send_amount_label->BackColor = System::Drawing::SystemColors::ControlLight;
			this->send_amount_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->send_amount_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->send_amount_label->Location = System::Drawing::Point(21, 119);
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
			this->recipient_name_label->Location = System::Drawing::Point(20, 61);
			this->recipient_name_label->Name = L"recipient_name_label";
			this->recipient_name_label->Size = System::Drawing::Size(138, 20);
			this->recipient_name_label->TabIndex = 10;
			this->recipient_name_label->Text = L"Recipient\'s name";
			this->recipient_name_label->Click += gcnew System::EventHandler(this, &Dashboard::recipient_name_label_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Gray;
			this->button3->Location = System::Drawing::Point(34, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(444, 43);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
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
			this->label7->Click += gcnew System::EventHandler(this, &Dashboard::label7_Click);
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
			this->domainUpDown1->Location = System::Drawing::Point(21, 139);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(472, 30);
			this->domainUpDown1->TabIndex = 2;
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &Dashboard::domainUpDown1_SelectedItemChanged);
			this->domainUpDown1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Dashboard::domainUpDown1_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->AccessibleDescription = L"";
			this->textBox1->AccessibleName = L"";
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(21, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(472, 27);
			this->textBox1->TabIndex = 0;
			this->textBox1->Tag = L"";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox1_TextChanged);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->request_amount_label);
			this->panel3->Controls->Add(this->sender_name_label);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->domainUpDown2);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(684, 509);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(504, 247);
			this->panel3->TabIndex = 11;
			// 
			// request_amount_label
			// 
			this->request_amount_label->AutoSize = true;
			this->request_amount_label->BackColor = System::Drawing::SystemColors::ControlLight;
			this->request_amount_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->request_amount_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->request_amount_label->Location = System::Drawing::Point(22, 114);
			this->request_amount_label->Name = L"request_amount_label";
			this->request_amount_label->Size = System::Drawing::Size(64, 20);
			this->request_amount_label->TabIndex = 12;
			this->request_amount_label->Text = L"amount";
			// 
			// sender_name_label
			// 
			this->sender_name_label->AutoSize = true;
			this->sender_name_label->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sender_name_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sender_name_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->sender_name_label->Location = System::Drawing::Point(20, 51);
			this->sender_name_label->Name = L"sender_name_label";
			this->sender_name_label->Size = System::Drawing::Size(121, 20);
			this->sender_name_label->TabIndex = 11;
			this->sender_name_label->Text = L"Sender\'s name";
			this->sender_name_label->Click += gcnew System::EventHandler(this, &Dashboard::sender_name_label_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label8->Location = System::Drawing::Point(7, 6);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(212, 32);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Request Money";
			this->label8->Click += gcnew System::EventHandler(this, &Dashboard::label8_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Gray;
			this->button2->Location = System::Drawing::Point(33, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(444, 43);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Request";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click_1);
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->domainUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->domainUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->domainUpDown2->ForeColor = System::Drawing::Color::Black;
			this->domainUpDown2->Location = System::Drawing::Point(20, 134);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(472, 30);
			this->domainUpDown2->TabIndex = 1;
			this->domainUpDown2->SelectedItemChanged += gcnew System::EventHandler(this, &Dashboard::domainUpDown2_SelectedItemChanged);
			this->domainUpDown2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Dashboard::domainUpDown2_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(20, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(472, 27);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox2_TextChanged);
			// 
			// transaction_history_label
			// 
			this->transaction_history_label->AutoSize = true;
			this->transaction_history_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->transaction_history_label->Location = System::Drawing::Point(12, 201);
			this->transaction_history_label->Name = L"transaction_history_label";
			this->transaction_history_label->Size = System::Drawing::Size(254, 32);
			this->transaction_history_label->TabIndex = 0;
			this->transaction_history_label->Text = L"Transaction history";
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(385, 297);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(8, 8);
			this->hScrollBar1->TabIndex = 1;
			// 
			// scrollable_transaction_panel
			// 
			this->scrollable_transaction_panel->AutoScroll = true;
			this->scrollable_transaction_panel->BackColor = System::Drawing::Color::White;
			this->scrollable_transaction_panel->Location = System::Drawing::Point(12, 252);
			this->scrollable_transaction_panel->Name = L"scrollable_transaction_panel";
			this->scrollable_transaction_panel->Size = System::Drawing::Size(629, 548);
			this->scrollable_transaction_panel->TabIndex = 2;
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
			this->black_panel->Size = System::Drawing::Size(1200, 62);
			this->black_panel->TabIndex = 0;
			this->black_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::black_panel_Paint);
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
			this->profile_button->Click += gcnew System::EventHandler(this, &Dashboard::profile_button_Click);
			// 
			// home_button
			// 
			this->home_button->BackColor = System::Drawing::Color::ForestGreen;
			this->home_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home_button->ForeColor = System::Drawing::Color::ForestGreen;
			this->home_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_button.Image")));
			this->home_button->Location = System::Drawing::Point(938, 1);
			this->home_button->Name = L"home_button";
			this->home_button->Size = System::Drawing::Size(49, 52);
			this->home_button->TabIndex = 5;
			this->home_button->UseVisualStyleBackColor = false;
			this->home_button->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Controls->Add(this->add_to_balance);
			this->panel2->Controls->Add(this->current_label);
			this->panel2->Controls->Add(this->balance_label);
			this->panel2->Location = System::Drawing::Point(12, 68);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1176, 100);
			this->panel2->TabIndex = 3;
			// 
			// add_to_balance
			// 
			this->add_to_balance->BackColor = System::Drawing::Color::LightGray;
			this->add_to_balance->ForeColor = System::Drawing::Color::LightGray;
			this->add_to_balance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_to_balance.Image")));
			this->add_to_balance->Location = System::Drawing::Point(1077, 20);
			this->add_to_balance->Name = L"add_to_balance";
			this->add_to_balance->Size = System::Drawing::Size(61, 56);
			this->add_to_balance->TabIndex = 2;
			this->add_to_balance->UseVisualStyleBackColor = false;
			// 
			// current_label
			// 
			this->current_label->AutoSize = true;
			this->current_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->current_label->Location = System::Drawing::Point(18, 38);
			this->current_label->Name = L"current_label";
			this->current_label->Size = System::Drawing::Size(159, 25);
			this->current_label->TabIndex = 0;
			this->current_label->Text = L"Current Balance:";
			this->current_label->Click += gcnew System::EventHandler(this, &Dashboard::current_label_Click);
			// 
			// balance_label
			// 
			this->balance_label->AutoSize = true;
			this->balance_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->balance_label->Location = System::Drawing::Point(185, 39);
			this->balance_label->Name = L"balance_label";
			this->balance_label->Size = System::Drawing::Size(66, 25);
			this->balance_label->TabIndex = 1;
			this->balance_label->Text = L"$0.00";
			this->balance_label->Click += gcnew System::EventHandler(this, &Dashboard::balance_label_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 800);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->black_panel);
			this->Controls->Add(this->scrollable_transaction_panel);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->transaction_history_label);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->black_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void amount_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void transaction_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	generate_transaction_history_panels();
	MakeRoundedPanel(panel2, 15);
}
private: System::Void sender_reciever_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void profile_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void black_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void current_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void balance_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		}
		private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

		}
		private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {

		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			double amountToSend;
			if (!Double::TryParse(domainUpDown1->Text, amountToSend)) {
				label7->Text = "Please enter a valid amount";
				label7->ForeColor = Color::Red;
				return;
			}
			if (amountToSend <= 0) {
				label7->Text = "The amount must be greater than zero";
				label7->ForeColor = Color::Red;
				return;
			}
			/*if (u.balance < amountToSend) {
				label7->Text = String::Format("Error: Insufficient credit! (Available credit: {0:C})", u.balance);
				label7->ForeColor = Color::Red;
				return;
			}*/
			else {
				/*try {*/
					//std::string toAccount = msclr::interop::marshal_as<std::string>(textBox1->Text);
					//Transaction* newTransaction = new Transaction(
					//	toAccount,
					//	amountToSend,
					//	TRANSACTION_TYPE::SEND_MONEY,
					//	RequestStatus::PENDING
					//);
				//u.balance -= amountToSend;
				//label7->Text = String::Format("The operation was successful! Remaining balance: {0:C}", u.balance);
				label7->ForeColor = Color::Green;
			/*	DateTime now = DateTime::Now;
				String^ formattedDate = now.ToString("yyyy/MM/dd HH:mm");
				String^ amountStr = amountToSend.ToString("C");
				String^ statusStr = GetStatusString(newTransaction->getStatus());*/
				//String^ entry = String::Format("[{0}] {1} -> {2}: {3} ({4})",
				//	formattedDate,
				//	gcnew String(newTransaction->getSender().c_str()),
				//	gcnew String(newTransaction->getRecipient().c_str()),
				//	amountStr,
				//	statusStr
				//);
				//std::list<std::string> history_transaction_log;
				//// Assuming 'newTransaction' is a Transaction*
				//u.history_transaction.emplace_front(std::make_shared<Transaction>(*newTransaction));
			/*}*/
			/*catch (Exception^ ex) {
				MessageBox::Show("Transmission failed: " + ex->Message);
			}*/
			}
		}
			   /*   String^ GetStatusString(RequestStatus status) {
					  switch (status) {
					  case RequestStatus::PENDING: return "PENDING";
					  case RequestStatus::ACCEPTED: return "ACCEPTED";
					  case RequestStatus::NONE: return "NONE";
					  case RequestStatus::DECLINED: return "DECLINED";
					  default: return "UnKnown";
					  }
				  }*/

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void recipient_name_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void domainUpDown2_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void sender_name_label_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
