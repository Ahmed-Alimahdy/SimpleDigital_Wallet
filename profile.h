#pragma once
#include"Requested_transactions.h"
#include <msclr/marshal_cppstd.h>
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
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::Form
	{
	private:
		user* current_user;
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
			button->Paint += gcnew PaintEventHandler(this, &profile::DrawRoundedButtonBorder);
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

		void MakeRoundedTextBox(TextBox^ textBox, int radius) {
			GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
			System::Drawing::Rectangle bounds = textBox->ClientRectangle;
			int diameter = radius * 2;

			// Define the rounded rectangle path
			path->AddArc(bounds.X, bounds.Y, diameter, diameter, 180, 90);
			path->AddArc(bounds.Right - diameter, bounds.Y, diameter, diameter, 270, 90);
			path->AddArc(bounds.Right - diameter, bounds.Bottom - diameter, diameter, diameter, 0, 90);
			path->AddArc(bounds.X, bounds.Bottom - diameter, diameter, diameter, 90, 90);
			path->CloseFigure();

			// Set the region of the TextBox to the rounded rectangle
			textBox->Region = gcnew System::Drawing::Region(path);

			// Optional: Add a border by drawing the path
			textBox->BorderStyle = BorderStyle::None; // Remove default border
			textBox->Paint += gcnew PaintEventHandler(this, &profile::DrawRoundedBorder);
		}

		void DrawRoundedBorder(Object^ sender, PaintEventArgs^ e) {
			TextBox^ textBox = safe_cast<TextBox^>(sender);
			GraphicsPath^ path = gcnew Drawing2D::GraphicsPath();
			System::Drawing::Rectangle bounds = textBox->ClientRectangle;
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
		void generate_payment_methods_panels()
		{
			if (current_user->get_payment_methods().size() == 0)
			{
			Label^ noTransactionsLabel = gcnew Label();
			noTransactionsLabel->Text = "No payment methods yet";
			noTransactionsLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold);
			noTransactionsLabel->AutoSize = true;
			int centerX = (this->scrollable_payment_panel->Width - noTransactionsLabel->Width) /6 ;
			int centerY = (this->scrollable_payment_panel->Height - noTransactionsLabel->Height) / 3;
			noTransactionsLabel->Location = System::Drawing::Point(centerX, centerY);
			this->scrollable_payment_panel->Controls->Add(noTransactionsLabel);
			}
			else
			{
				int i = 0;
			for (auto it:current_user->get_payment_methods())
			{

				Panel^ panel = gcnew Panel();
				panel->Size = System::Drawing::Size(450, 83);
				panel->BackColor = System::Drawing::Color::White;
				panel->Location = System::Drawing::Point(0, (i * 100));
				panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				Label^ payment_method_id_label = gcnew Label();
				payment_method_id_label->Text = gcnew String(msclr::interop::marshal_as<System::String^>(it.getGatewayNumber()));  //"1"
				payment_method_id_label->Location = System::Drawing::Point(17, 10);
				payment_method_id_label->AutoSize = true;
				Label^ payment_category_label = gcnew Label();
				payment_category_label->Text = gcnew String(msclr::interop::marshal_as<System::String^>(it.getGatewayCategory()));
				payment_category_label->Location = System::Drawing::Point(17, 45);
				payment_category_label->AutoSize = true;
			
				Button^ remove_button = gcnew Button();
				remove_button->Text = "Remove"; 
				remove_button->Name = gcnew String(msclr::interop::marshal_as<System::String^>(it.getGatewayNumber()));
				remove_button->Click += gcnew System::EventHandler(this, &profile::remove_button_Click);
				remove_button->BackColor = System::Drawing::Color::Red; 
				remove_button->ForeColor = System::Drawing::Color::White;   
				remove_button->Location = System::Drawing::Point(370, 20);
				remove_button->AutoSize = true;
				remove_button->Size = System::Drawing::Size(70, 30);
				panel->Controls->Add(payment_method_id_label);
				panel->Controls->Add(payment_category_label);
				panel->Controls->Add(remove_button);
				this->Controls->Add(panel);
				this->scrollable_payment_panel->Controls->Add(panel);
				i++;
			}
			}
		}
	public:
		Form^ dashboard;
		profile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->current_user = &currentUser;
		}
		profile(Form^ form, Form^ form2, user* u) {
			InitializeComponent();
			dashboard_form = form;
			login = form2;
			current_user = u;
		}
		profile(Form^ form, Form^ form2, Form^ form3, user* u) {
			InitializeComponent();
			dashboard_form = form;
			current_user = u;
			requsted_transactions = form2;
			login = form3;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ manage_payment_method_label;
	private: System::Windows::Forms::Panel^ black_panel;
	private: System::Windows::Forms::Button^ logout_button;
	private: System::Windows::Forms::Button^ transaction_button;
	private: System::Windows::Forms::Button^ profile_button;
	private: System::Windows::Forms::Button^ home_button;
	private: System::Windows::Forms::PictureBox^ wallet_icon;
	private: System::Windows::Forms::Label^ wallet_label;
	private:System::Windows::Forms::Panel^ scrollable_payment_panel;
	private: System::Windows::Forms::TextBox^ VisaNumber;
	private: System::Windows::Forms::TextBox^ VisaCategory;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pic_panel;
    private: System::Windows::Forms::PictureBox^ profile_picbox;
    private: System::Windows::Forms::Label^ name_label;
    private: System::Windows::Forms::Panel^ profile_panel;
    private: System::Windows::Forms::TextBox^ username_textbox;
    private: System::Windows::Forms::Label^ username_label;
    private: System::Windows::Forms::Label^ details_label;
    private: System::Windows::Forms::TextBox^ email_textbox;
    private: System::Windows::Forms::Label^ email_label;
    private: System::Windows::Forms::Button^ save_button;
    private: System::Windows::Forms::TextBox^ password_textbox;
    private: System::Windows::Forms::Label^ password_label;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(profile::typeid));
			this->pic_panel = (gcnew System::Windows::Forms::Panel());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->profile_picbox = (gcnew System::Windows::Forms::PictureBox());
			this->profile_panel = (gcnew System::Windows::Forms::Panel());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->email_textbox = (gcnew System::Windows::Forms::TextBox());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->details_label = (gcnew System::Windows::Forms::Label());
			this->VisaNumber = (gcnew System::Windows::Forms::TextBox());
			this->VisaCategory = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->scrollable_payment_panel = (gcnew System::Windows::Forms::Panel());
			this->manage_payment_method_label = (gcnew System::Windows::Forms::Label());
			this->black_panel = (gcnew System::Windows::Forms::Panel());
			this->logout_button = (gcnew System::Windows::Forms::Button());
			this->transaction_button = (gcnew System::Windows::Forms::Button());
			this->profile_button = (gcnew System::Windows::Forms::Button());
			this->home_button = (gcnew System::Windows::Forms::Button());
			this->wallet_icon = (gcnew System::Windows::Forms::PictureBox());
			this->wallet_label = (gcnew System::Windows::Forms::Label());
			this->pic_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_picbox))->BeginInit();
			this->profile_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->black_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->BeginInit();
			this->SuspendLayout();
			// 
			// pic_panel
			// 
			this->pic_panel->BackColor = System::Drawing::Color::Gainsboro;
			this->pic_panel->Controls->Add(this->name_label);
			this->pic_panel->Controls->Add(this->profile_picbox);
			this->pic_panel->ForeColor = System::Drawing::Color::Black;
			this->pic_panel->Location = System::Drawing::Point(12, 132);
			this->pic_panel->Name = L"pic_panel";
			this->pic_panel->Size = System::Drawing::Size(610, 124);
			this->pic_panel->TabIndex = 0;
			this->pic_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &profile::profile_panel_Paint);
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->Location = System::Drawing::Point(132, 50);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(235, 32);
			this->name_label->TabIndex = 1;
			this->name_label->Text = L"Bruno fernandes";
			// 
			// profile_picbox
			// 
			this->profile_picbox->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_picbox.ErrorImage")));
			this->profile_picbox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_picbox.Image")));
			this->profile_picbox->Location = System::Drawing::Point(27, 19);
			this->profile_picbox->Name = L"profile_picbox";
			this->profile_picbox->Size = System::Drawing::Size(80, 80);
			this->profile_picbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->profile_picbox->TabIndex = 0;
			this->profile_picbox->TabStop = false;
			this->profile_picbox->Click += gcnew System::EventHandler(this, &profile::pictureBox1_Click);
			// 
			// profile_panel
			// 
			this->profile_panel->BackColor = System::Drawing::Color::Gainsboro;
			this->profile_panel->Controls->Add(this->save_button);
			this->profile_panel->Controls->Add(this->password_textbox);
			this->profile_panel->Controls->Add(this->password_label);
			this->profile_panel->Controls->Add(this->email_textbox);
			this->profile_panel->Controls->Add(this->email_label);
			this->profile_panel->Controls->Add(this->username_textbox);
			this->profile_panel->Controls->Add(this->username_label);
			this->profile_panel->Controls->Add(this->details_label);
			this->profile_panel->ForeColor = System::Drawing::Color::Transparent;
			this->profile_panel->Location = System::Drawing::Point(12, 320);
			this->profile_panel->Name = L"profile_panel";
			this->profile_panel->Size = System::Drawing::Size(610, 421);
			this->profile_panel->TabIndex = 1;
			this->profile_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &profile::profile_panel_Paint_1);
			// 
			// save_button
			// 
			this->save_button->BackColor = System::Drawing::Color::Black;
			this->save_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_button->ForeColor = System::Drawing::Color::White;
			this->save_button->Location = System::Drawing::Point(16, 373);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(158, 38);
			this->save_button->TabIndex = 7;
			this->save_button->Text = L"Save changes";
			this->save_button->UseVisualStyleBackColor = false;
			this->save_button->Click += gcnew System::EventHandler(this, &profile::button1_Click);
			// 
			// password_textbox
			// 
			this->password_textbox->BackColor = System::Drawing::Color::LightGray;
			this->password_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_textbox->Location = System::Drawing::Point(16, 313);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(546, 23);
			this->password_textbox->TabIndex = 6;
			this->password_textbox->UseSystemPasswordChar = true;
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::Black;
			this->password_label->Location = System::Drawing::Point(14, 278);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(103, 24);
			this->password_label->TabIndex = 5;
			this->password_label->Text = L"Password";
			// 
			// email_textbox
			// 
			this->email_textbox->BackColor = System::Drawing::Color::LightGray;
			this->email_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_textbox->Location = System::Drawing::Point(17, 215);
			this->email_textbox->Multiline = true;
			this->email_textbox->Name = L"email_textbox";
			this->email_textbox->Size = System::Drawing::Size(544, 24);
			this->email_textbox->TabIndex = 4;
			this->email_textbox->Text = L"bruno@gmail.com";
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->ForeColor = System::Drawing::Color::Black;
			this->email_label->Location = System::Drawing::Point(14, 181);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(61, 24);
			this->email_label->TabIndex = 3;
			this->email_label->Text = L"Email";
			// 
			// username_textbox
			// 
			this->username_textbox->BackColor = System::Drawing::Color::LightGray;
			this->username_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_textbox->Location = System::Drawing::Point(16, 125);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(545, 23);
			this->username_textbox->TabIndex = 2;
			this->username_textbox->Text = L"Bruno fernandes";
			this->username_textbox->TextChanged += gcnew System::EventHandler(this, &profile::username_textbox_TextChanged);
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::Color::Black;
			this->username_label->Location = System::Drawing::Point(11, 91);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(105, 24);
			this->username_label->TabIndex = 1;
			this->username_label->Text = L"Username";
			// 
			// details_label
			// 
			this->details_label->AutoSize = true;
			this->details_label->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->details_label->ForeColor = System::Drawing::Color::Black;
			this->details_label->Location = System::Drawing::Point(9, 15);
			this->details_label->Name = L"details_label";
			this->details_label->Size = System::Drawing::Size(211, 35);
			this->details_label->TabIndex = 0;
			this->details_label->Text = L"Profile details";
			// 
			// VisaNumber
			// 
			this->VisaNumber->BackColor = System::Drawing::Color::LightGray;
			this->VisaNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->VisaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VisaNumber->ForeColor = System::Drawing::Color::Black;
			this->VisaNumber->Location = System::Drawing::Point(9, 63);
			this->VisaNumber->Name = L"VisaNumber";
			this->VisaNumber->Size = System::Drawing::Size(462, 31);
			this->VisaNumber->TabIndex = 0;
			this->VisaNumber->TextChanged += gcnew System::EventHandler(this, &profile::VisaNumber_TextChanged);
			this->VisaNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &profile::VisaNumber_KeyPress);
			// 
			// VisaCategory
			// 
			this->VisaCategory->BackColor = System::Drawing::Color::LightGray;
			this->VisaCategory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->VisaCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VisaCategory->ForeColor = System::Drawing::Color::Black;
			this->VisaCategory->Location = System::Drawing::Point(9, 160);
			this->VisaCategory->Name = L"VisaCategory";
			this->VisaCategory->Size = System::Drawing::Size(462, 31);
			this->VisaCategory->TabIndex = 1;
			this->VisaCategory->TextChanged += gcnew System::EventHandler(this, &profile::VisaCategory_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gateway Number";
			this->label1->Click += gcnew System::EventHandler(this, &profile::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Gateway Category";
			this->label2->Click += gcnew System::EventHandler(this, &profile::label2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(9, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(462, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add Payment Method";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &profile::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->VisaNumber);
			this->panel1->Controls->Add(this->VisaCategory);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(696, 435);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(474, 306);
			this->panel1->TabIndex = 5;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &profile::panel1_Paint);
			// 
			// scrollable_payment_panel
			// 
			this->scrollable_payment_panel->AutoScroll = true;
			this->scrollable_payment_panel->BackColor = System::Drawing::Color::Transparent;
			this->scrollable_payment_panel->Location = System::Drawing::Point(690, 132);
			this->scrollable_payment_panel->Name = L"scrollable_payment_panel";
			this->scrollable_payment_panel->Size = System::Drawing::Size(480, 280);
			this->scrollable_payment_panel->TabIndex = 0;
			this->scrollable_payment_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &profile::scrollable_payment_panel_Paint);
			// 
			// manage_payment_method_label
			// 
			this->manage_payment_method_label->AutoSize = true;
			this->manage_payment_method_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->manage_payment_method_label->Location = System::Drawing::Point(685, 96);
			this->manage_payment_method_label->Name = L"manage_payment_method_label";
			this->manage_payment_method_label->Size = System::Drawing::Size(349, 32);
			this->manage_payment_method_label->TabIndex = 1;
			this->manage_payment_method_label->Text = L"Manage payment methods";
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
			this->black_panel->TabIndex = 2;
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
			this->logout_button->Click += gcnew System::EventHandler(this, &profile::logout_button_Click);
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
			this->transaction_button->Click += gcnew System::EventHandler(this, &profile::transaction_button_Click);
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
			this->profile_button->Click += gcnew System::EventHandler(this, &profile::profile_button_Click);
			// 
			// home_button
			// 
			this->home_button->BackColor = System::Drawing::Color::ForestGreen;
			this->home_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home_button->ForeColor = System::Drawing::Color::ForestGreen;
			this->home_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_button.Image")));
			this->home_button->Location = System::Drawing::Point(938, 2);
			this->home_button->Name = L"home_button";
			this->home_button->Size = System::Drawing::Size(49, 52);
			this->home_button->TabIndex = 5;
			this->home_button->UseVisualStyleBackColor = false;
			this->home_button->Click += gcnew System::EventHandler(this, &profile::home_button_Click);
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
			this->wallet_label->Location = System::Drawing::Point(63, 1);
			this->wallet_label->Name = L"wallet_label";
			this->wallet_label->Size = System::Drawing::Size(139, 58);
			this->wallet_label->TabIndex = 10;
			this->wallet_label->Text = L"Easy wallet";
			this->wallet_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// profile
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Location = Drawing::Point(0, 0);
			this->Controls->Add(this->black_panel);
			this->Controls->Add(this->manage_payment_method_label);
			this->Controls->Add(this->scrollable_payment_panel);
			this->Controls->Add(this->profile_panel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pic_panel);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"profile";
			this->Text = L"profile";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &profile::profile_FormClosing);
			this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
			this->pic_panel->ResumeLayout(false);
			this->pic_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_picbox))->EndInit();
			this->profile_panel->ResumeLayout(false);
			this->profile_panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->black_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion

private: System::Void profile_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string username = msclr::interop::marshal_as<std::string>(username_textbox->Text);
	string email = msclr::interop::marshal_as<std::string>(email_textbox->Text);
	string password = msclr::interop::marshal_as<std::string>(password_textbox->Text);
	string specialChars = "!@$%^&*+#";
	char c = '@';
	//start the conditions 
	auto it = user::allusers.find(username);
	if (username.empty() || password.empty() || email.empty()) { //check if any field is empty
		MessageBox::Show("Please fill all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		username_textbox->Text = "";
		email_textbox->Text = "";
		password_textbox->Text = "";
		return;
	}
	if (password.find_first_of(specialChars) == std::string::npos) { // checking pass contain special char
		MessageBox::Show("Password must contain at least one special character (!@$%^&*+#)!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		username_textbox->Text = "";
		email_textbox->Text = "";
		password_textbox->Text = "";
		return;
	}
	if (email.find_first_of(c) == std::string::npos) { // checking pass contain special char
		MessageBox::Show("Email must contain @ sign .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		username_textbox->Text = "";
		email_textbox->Text = "";
		password_textbox->Text = "";
		return;
	}
	if (it != user::allusers.end() || it->first == current_user->getUsername()) { //check if username exists
		MessageBox::Show("Username is not valid.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		username_textbox->Text = "";
		email_textbox->Text = "";
		password_textbox->Text = "";
		return;
	}
	else {
		current_user->setUsername(username);
		current_user->setEmail(email);
		current_user->setHashedPassword(password);
		name_label->Text = String::Format(username_textbox->Text);
	}
	// initialize texts and current user 
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void VisaNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void VisaCategory_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void profile_Load(System::Object^ sender, System::EventArgs^ e) {

	MakeRoundedTextBox(username_textbox, 5);
	MakeRoundedTextBox(password_textbox,5);
	MakeRoundedTextBox(email_textbox, 5);
	MakeRoundedTextBox(VisaCategory, 5);
	MakeRoundedTextBox(VisaNumber, 5);
	generate_payment_methods_panels();
	MakeRoundedPanel(profile_panel, 15);
	MakeRoundedPanel(pic_panel, 15);
	MakeRoundedPanel(panel1, 15);
	MakeRoundedButton(save_button, 15);
	MakeRoundedButton(button1, 15);
}
private: System::Void home_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	dashboard_form->Show();
}
private: System::Void profile_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void transaction_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Requested_transactions^ transaction_form = gcnew Requested_transactions(dashboard_form,this,login,current_user);
	transaction_form->Show();
}
private: System::Void scrollable_payment_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void remove_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = dynamic_cast<Button^>(sender);
		if (button != nullptr)
		{
			string number = msclr::interop::marshal_as<string>(button->Name);
			current_user->remove_payment_method(number);
			this->scrollable_payment_panel->Controls->Clear();
			generate_payment_methods_panels();
		}
	}

private: System::Void VisaNumber_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b' && e->KeyChar != '.') {
		e->Handled = true;
	}

}
	private: System::Void logout_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		login->Show();
	}
private: System::Void profile_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void profile_panel_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
