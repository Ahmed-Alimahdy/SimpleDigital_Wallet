#pragma once
#include "Classes/Transaction.h"
#include "Classes/User.h"
#include "profile.h"
#include "Requested_transactions.h"
#include"Balance_managment.h"
#include <msclr/marshal_cppstd.h>
#include "admin.h"
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
        private:
			
            user* current_user; // Declare the User object
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
			button->Paint += gcnew PaintEventHandler(this, &Dashboard::DrawRoundedButtonBorder);
		}
		double TryParseDouble(System::String^ input) {
			double result = 0.0;
			if (Double::TryParse(input, result)) {
				return result;
			}
			else {
				return 0.0; // Default value if parsing fails
			}
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
			this->scrollable_transaction_panel->Controls->Clear();
			if (current_user->get_history_transaction().size() == 0)
			{
				Label^ noTransactionsLabel = gcnew Label();
				noTransactionsLabel->Text = "No transactions yet";
				noTransactionsLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular);
				noTransactionsLabel->AutoSize = true;
				int centerX = (this->scrollable_transaction_panel->Width - noTransactionsLabel->Width)/2 ;
				int centerY = (this->scrollable_transaction_panel->Height - noTransactionsLabel->Height)/2 ;
				noTransactionsLabel->Location = System::Drawing::Point(centerX, centerY);
				this->scrollable_transaction_panel->Controls->Add(noTransactionsLabel);
			}
			else
			{
				int i = 0;
				for(auto it : current_user->get_history_transaction())
				{
					Panel^ panel = gcnew Panel();
					panel->Size = System::Drawing::Size(520, 118);
					panel->BackColor = System::Drawing::SystemColors::ControlLight;
					panel->Location = System::Drawing::Point(0, (i * 135));
					MakeRoundedPanel(panel, 15);
					Label^ transaction_date_label = gcnew Label();
					transaction_date_label->Text = gcnew String(msclr::interop::marshal_as<System::String^>(it.getTimestampAsString()));
					transaction_date_label->Location = System::Drawing::Point(17, 10);
					transaction_date_label->AutoSize = true;
					transaction_date_label->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold);
					Label^ to_form_field = gcnew Label();
					if (it.getType() == TRANSACTION_TYPE::DEPOSIT || it.getType() == TRANSACTION_TYPE::REQUEST_MONEY)
						to_form_field->Text = "From : "+ gcnew String(msclr::interop::marshal_as<System::String^>(it.getSender()));
					else
						to_form_field->Text = "To : "+ gcnew String(msclr::interop::marshal_as<System::String^>(it.getRecipient()));;
					to_form_field->Location = System::Drawing::Point(17, 45);
					to_form_field->AutoSize = true;
					to_form_field->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold);
					Label^ amount_label = gcnew Label();
					amount_label->Text = "amount : "+it.getAmount();
					amount_label->Location = System::Drawing::Point(360, 45);
					amount_label->AutoSize = true;
					amount_label->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold);
					Label^ status_label = gcnew Label();
					it.getStatus() != RequestStatus::NONE?status_label->Text = "Status : " + gcnew String(msclr::interop::marshal_as<System::String^>(it.getStatusString())): status_label->Text = "Status : Accepted";
					if (it.getStatus() == RequestStatus::ACCEPTED|| it.getStatus() == RequestStatus::NONE)
						status_label->ForeColor = System::Drawing::Color::Green;
					else if (it.getStatus() == RequestStatus::DECLINED)
						status_label->ForeColor = System::Drawing::Color::Red;
					status_label->Location = System::Drawing::Point(17, 80);
					status_label->AutoSize = true;
					status_label->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold);
					panel->Controls->Add(transaction_date_label);
					panel->Controls->Add(status_label);
					panel->Controls->Add(to_form_field);
					panel->Controls->Add(amount_label);
					this->Controls->Add(panel);
					this->scrollable_transaction_panel->Controls->Add(panel);
					i++;
				}
			}
		 }
	public:
		Dashboard(void)
		{
			InitializeComponent();
		}
private: System::Windows::Forms::Label^ label3;
public:
	Form^ previous_form;
		Dashboard(Form^ form, user& currentUser)
		{
			InitializeComponent();
			this->current_user = &currentUser;
			previous_form = form;
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
private: System::Windows::Forms::TextBox^ sendername_textbox;

	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ request_button;

private: System::Windows::Forms::DomainUpDown^ amount_textbox;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->request_button = (gcnew System::Windows::Forms::Button());
			this->amount_textbox = (gcnew System::Windows::Forms::DomainUpDown());
			this->sendername_textbox = (gcnew System::Windows::Forms::TextBox());
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
			this->label2->Size = System::Drawing::Size(0, 37);
			this->label2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(8, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 26);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Send Money";
			this->label1->Click += gcnew System::EventHandler(this, &Dashboard::label1_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->label3);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 15);
			this->label3->TabIndex = 12;
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
			this->send_amount_label->Size = System::Drawing::Size(55, 17);
			this->send_amount_label->TabIndex = 11;
			this->send_amount_label->Text = L"amount";
			this->send_amount_label->Click += gcnew System::EventHandler(this, &Dashboard::send_amount_label_Click);
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
			this->recipient_name_label->Size = System::Drawing::Size(116, 17);
			this->recipient_name_label->TabIndex = 10;
			this->recipient_name_label->Text = L"Recipient\'s name";
			this->recipient_name_label->Click += gcnew System::EventHandler(this, &Dashboard::recipient_name_label_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(34, 201);
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
			this->label7->Size = System::Drawing::Size(0, 26);
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
			this->label5->Size = System::Drawing::Size(0, 31);
			this->label5->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(231, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 31);
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
			this->domainUpDown1->Size = System::Drawing::Size(472, 24);
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
			this->textBox1->Size = System::Drawing::Size(472, 21);
			this->textBox1->TabIndex = 0;
			this->textBox1->Tag = L"";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox1_TextChanged);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->request_amount_label);
			this->panel3->Controls->Add(this->sender_name_label);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->request_button);
			this->panel3->Controls->Add(this->amount_textbox);
			this->panel3->Controls->Add(this->sendername_textbox);
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
			this->request_amount_label->Size = System::Drawing::Size(55, 17);
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
			this->sender_name_label->Size = System::Drawing::Size(103, 17);
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
			this->label8->Size = System::Drawing::Size(164, 26);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Request Money";
			this->label8->Click += gcnew System::EventHandler(this, &Dashboard::label8_Click);
			// 
			// request_button
			// 
			this->request_button->BackColor = System::Drawing::Color::Black;
			this->request_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->request_button->ForeColor = System::Drawing::Color::White;
			this->request_button->Location = System::Drawing::Point(33, 190);
			this->request_button->Name = L"request_button";
			this->request_button->Size = System::Drawing::Size(444, 43);
			this->request_button->TabIndex = 3;
			this->request_button->Text = L"Request";
			this->request_button->UseVisualStyleBackColor = false;
			this->request_button->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click_1);
			// 
			// amount_textbox
			// 
			this->amount_textbox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->amount_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->amount_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->amount_textbox->ForeColor = System::Drawing::Color::Black;
			this->amount_textbox->Location = System::Drawing::Point(20, 134);
			this->amount_textbox->Name = L"amount_textbox";
			this->amount_textbox->Size = System::Drawing::Size(472, 24);
			this->amount_textbox->TabIndex = 1;
			this->amount_textbox->SelectedItemChanged += gcnew System::EventHandler(this, &Dashboard::domainUpDown2_SelectedItemChanged);
			this->amount_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Dashboard::domainUpDown2_KeyPress);
			// 
			// sendername_textbox
			// 
			this->sendername_textbox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sendername_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sendername_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->sendername_textbox->ForeColor = System::Drawing::Color::Black;
			this->sendername_textbox->Location = System::Drawing::Point(20, 70);
			this->sendername_textbox->Name = L"sendername_textbox";
			this->sendername_textbox->Size = System::Drawing::Size(472, 21);
			this->sendername_textbox->TabIndex = 0;
			this->sendername_textbox->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox2_TextChanged);
			// 
			// transaction_history_label
			// 
			this->transaction_history_label->AutoSize = true;
			this->transaction_history_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->transaction_history_label->Location = System::Drawing::Point(12, 201);
			this->transaction_history_label->Name = L"transaction_history_label";
			this->transaction_history_label->Size = System::Drawing::Size(194, 26);
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
			this->scrollable_transaction_panel->Size = System::Drawing::Size(550, 548);
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
			this->transaction_button->Click += gcnew System::EventHandler(this, &Dashboard::transaction_button_Click);
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
			this->home_button->Location = System::Drawing::Point(938, 3);
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
			this->add_to_balance->Click += gcnew System::EventHandler(this, &Dashboard::add_to_balance_Click);
			// 
			// current_label
			// 
			this->current_label->AutoSize = true;
			this->current_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->current_label->Location = System::Drawing::Point(18, 38);
			this->current_label->Name = L"current_label";
			this->current_label->Size = System::Drawing::Size(128, 20);
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
			this->balance_label->Size = System::Drawing::Size(117, 20);
			this->balance_label->TabIndex = 1;
			this->balance_label->Text = L"user_balance";
			this->balance_label->Click += gcnew System::EventHandler(this, &Dashboard::balance_label_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1200, 749);
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
	balance_label->Text = String::Format("${0:F2}", current_user->getBalance());
	MakeRoundedPanel(panel2, 15);
	MakeRoundedButton(button3, 15);
	MakeRoundedButton(request_button, 15);
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
	profile^ profile_form = gcnew profile(this);
	profile_form->Show();
	this->Hide();
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
		
		
		


	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		double amountToSend = TryParseDouble(amount_textbox->Text);
		string username = msclr::interop::marshal_as<std::string>(sendername_textbox->Text);
		auto it = user::allusers.find(username);
		if (it != user::allusers.end()) {
			if (!current_user->isSuspended() && !it->second.isSuspended()) {
				transaction t(current_user->getUsername(), username, amountToSend, TRANSACTION_TYPE::REQUEST_MONEY, RequestStatus::PENDING);
				it->second.add_to_requestedtransaction(t);
			}
			else if (current_user->isSuspended())
			{
				label3->Text = String::Format("your account is suspended");
				label3->ForeColor = Color::Red;
			}
			else if (it->second.isSuspended())
			{
				label3->Text = String::Format("the user account is suspended");
				label3->ForeColor = Color::Red;
			}
		}
		else {
			MessageBox::Show("Sender does not exist ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			label3->Text = "User not found";
			label3->ForeColor = Color::Red;
			return;
		}
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double amountToSend = TryParseDouble(domainUpDown1->Text);
	string username = msclr::interop::marshal_as<std::string>(textBox1->Text);
	auto it = user::allusers.find(username);
	if (it != user::allusers.end()) {
		if (current_user->getBalance() < amountToSend) {
			label3->Text = String::Format("Error: Insufficient credit! (Available credit: {0:C})", current_user->getBalance());
			label3->ForeColor = Color::Red;
			return;
		}
		else {
			if (amountToSend <= 0) {
				label3->Text = "Error: Invalid amount!";
				label3->ForeColor = Color::Red;
				return;
			}
			if (!current_user->isSuspended()&& !it->second.isSuspended())
			{
				double newBalance = current_user->getBalance() - amountToSend;
				label3->Text = String::Format("The operation was successful! Remaining balance: {0:C}", newBalance);
				label3->ForeColor = Color::Green;
				current_user->setBalance(newBalance);
				balance_label->Text = String::Format("${0:F2}", current_user->getBalance());
				current_user->add_to_historytransaction(transaction(current_user->getUsername(), username, amountToSend, TRANSACTION_TYPE::SEND_MONEY, RequestStatus::NONE));
				it->second.add_to_historytransaction(transaction(current_user->getUsername(), username, amountToSend, TRANSACTION_TYPE::SEND_MONEY, RequestStatus::NONE));
				this->scrollable_transaction_panel->Controls->Clear();
				generate_transaction_history_panels();
				Admin::alltransactions.push_back(transaction(current_user->getUsername(), username, amountToSend, TRANSACTION_TYPE::SEND_MONEY, RequestStatus::NONE));
				textBox1->Text = "";
				domainUpDown1->Text = "";
			}
			else if(current_user->isSuspended())
			{
				label3->Text = String::Format("your account is suspended");
				label3->ForeColor = Color::Red;
			}
			else if (it->second.isSuspended())
			{
				label3->Text = String::Format("the user account is suspended");
				label3->ForeColor = Color::Red;
			}

		}
	}
	else {
		label3->Text = "User not found";
		label3->ForeColor = Color::Red;
		return;
	}
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
private: System::Void transaction_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Requested_transactions^ transaction_form = gcnew Requested_transactions(this);
	transaction_form->Show();
	this->Hide();
}
private: System::Void add_to_balance_Click(System::Object^ sender, System::EventArgs^ e) {
	Balance_managment^ balance_form = gcnew Balance_managment(this);
	balance_form->Show();
	this->Hide();
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void send_amount_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
