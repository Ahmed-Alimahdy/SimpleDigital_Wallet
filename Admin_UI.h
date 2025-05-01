#pragma once




#include <msclr/marshal_cppstd.h>
#include "User_Control.h"
#include "Classes/user.h"
#include "Classes/Admin.h"
//user selected_user;
std::string key;

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

			//Admin::currentAdmin = new Admin("admin", "admin");
			InitializeComponent();
			addAdminPanel->Hide();
			No_user_ms->Show();
			MakeRoundedPanel(scrollableTransactionsPanel, 20);
			generate_transaction_history_panels();
			editAdminPasswordTextbox->Hide();
			editAdminUsernameTextbox->Hide();
			confirmEditAdmin->Hide();
			cancelEditAdmin->Hide();
			addAdminConfirmationLabel->Hide();
			usernameExistsLabel->Hide();
			adminUsenameLabel->Text = makeFunnyString(Admin::currentAdmin->username);
			adminPasswordLabel->Text = makeFunnyString(Admin::currentAdmin->password);
			invalidLabel->Hide();
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


	private: System::Windows::Forms::Panel^ addAdminPanel;
	private: System::Windows::Forms::TextBox^ addAdminUsernameTextfield;
	private: System::Windows::Forms::Label^ addAdminUsernameLabel;



	private: System::Windows::Forms::Label^ adminPasswordLabel;
	private: System::Windows::Forms::Label^ adminUsenameLabel;
	private: System::Windows::Forms::Button^ addAdminButton;
	private: System::Windows::Forms::TextBox^ addAdminPasswordTextfield;
	private: System::Windows::Forms::Label^ addAdminPasswordLabel;
	private: System::Windows::Forms::Panel^ decLine1;


	private: System::Windows::Forms::Button^ editAdminProfileBtn;






	private: System::Windows::Forms::Panel^ allTransactionsPanel;
	private: System::Windows::Forms::Label^ allTransactionsLabel;
	private: System::Windows::Forms::Panel^ scrollableTransactionsPanel;
	private: System::Windows::Forms::Button^ switchToAdminProfileBtn;
	private: System::Windows::Forms::Panel^ decLine2;



	private: System::Windows::Forms::Label^ addAdminLabel;
	private: System::Windows::Forms::TextBox^ editAdminPasswordTextbox;
	private: System::Windows::Forms::TextBox^ editAdminUsernameTextbox;
	private: System::Windows::Forms::Button^ confirmEditAdmin;
	private: System::Windows::Forms::Button^ cancelEditAdmin;
	private: System::Windows::Forms::Label^ addAdminConfirmationLabel;



	private: System::Windows::Forms::Panel^ Users_page;
	private: System::Windows::Forms::Label^ Users_lable;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel_Users_Data;
	private: System::Windows::Forms::Panel^ top_panal;

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
	private: System::Windows::Forms::Label^ massage_name_LB;
	private: System::Windows::Forms::Button^ Delete_button;
	public: System::Windows::Forms::Label^ payments_label;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button_to_users;
	private: System::Windows::Forms::Label^ usernameExistsLabel;
	private: System::Windows::Forms::Button^ button_to_Admin;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ logout_Admin_button;
	private: System::Windows::Forms::Label^ Adress_wallet;
	private: System::Windows::Forms::Label^ invalidLabel;

	public:

	public:


	private:


	private: System::ComponentModel::IContainer^ components;
	public:
	private:


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
			this->decLine1 = (gcnew System::Windows::Forms::Panel());
			this->addAdminPanel = (gcnew System::Windows::Forms::Panel());
			this->invalidLabel = (gcnew System::Windows::Forms::Label());
			this->usernameExistsLabel = (gcnew System::Windows::Forms::Label());
			this->addAdminConfirmationLabel = (gcnew System::Windows::Forms::Label());
			this->confirmEditAdmin = (gcnew System::Windows::Forms::Button());
			this->cancelEditAdmin = (gcnew System::Windows::Forms::Button());
			this->editAdminPasswordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->editAdminUsernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->addAdminLabel = (gcnew System::Windows::Forms::Label());
			this->decLine2 = (gcnew System::Windows::Forms::Panel());
			this->allTransactionsPanel = (gcnew System::Windows::Forms::Panel());
			this->allTransactionsLabel = (gcnew System::Windows::Forms::Label());
			this->scrollableTransactionsPanel = (gcnew System::Windows::Forms::Panel());
			this->switchToAdminProfileBtn = (gcnew System::Windows::Forms::Button());
			this->editAdminProfileBtn = (gcnew System::Windows::Forms::Button());
			this->addAdminButton = (gcnew System::Windows::Forms::Button());
			this->addAdminPasswordTextfield = (gcnew System::Windows::Forms::TextBox());
			this->addAdminPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->addAdminUsernameTextfield = (gcnew System::Windows::Forms::TextBox());
			this->addAdminUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->adminPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->adminUsenameLabel = (gcnew System::Windows::Forms::Label());
			this->No_user_ms = (gcnew System::Windows::Forms::Label());
			this->Users_page = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel_Users_Data = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Users_lable = (gcnew System::Windows::Forms::Label());
			this->UserInfo_panal = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Delete_button = (gcnew System::Windows::Forms::Button());
			this->massage_name_LB = (gcnew System::Windows::Forms::Label());
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
			this->payments_label = (gcnew System::Windows::Forms::Label());
			this->top_panal = (gcnew System::Windows::Forms::Panel());
			this->Adress_wallet = (gcnew System::Windows::Forms::Label());
			this->logout_Admin_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_to_Admin = (gcnew System::Windows::Forms::Button());
			this->button_to_users = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->addAdminPanel->SuspendLayout();
			this->allTransactionsPanel->SuspendLayout();
			this->Users_page->SuspendLayout();
			this->UserInfo_panal->SuspendLayout();
			this->Transactions_user_panel->SuspendLayout();
			this->top_panal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// decLine1
			// 
			this->decLine1->BackColor = System::Drawing::Color::Black;
			this->decLine1->Location = System::Drawing::Point(25, 117);
			this->decLine1->Name = L"decLine1";
			this->decLine1->Size = System::Drawing::Size(500, 2);
			this->decLine1->TabIndex = 0;
			// 
			// addAdminPanel
			// 
			this->addAdminPanel->BackColor = System::Drawing::SystemColors::Control;
			this->addAdminPanel->Controls->Add(this->invalidLabel);
			this->addAdminPanel->Controls->Add(this->usernameExistsLabel);
			this->addAdminPanel->Controls->Add(this->addAdminConfirmationLabel);
			this->addAdminPanel->Controls->Add(this->confirmEditAdmin);
			this->addAdminPanel->Controls->Add(this->cancelEditAdmin);
			this->addAdminPanel->Controls->Add(this->editAdminPasswordTextbox);
			this->addAdminPanel->Controls->Add(this->editAdminUsernameTextbox);
			this->addAdminPanel->Controls->Add(this->addAdminLabel);
			this->addAdminPanel->Controls->Add(this->decLine2);
			this->addAdminPanel->Controls->Add(this->allTransactionsPanel);
			this->addAdminPanel->Controls->Add(this->editAdminProfileBtn);
			this->addAdminPanel->Controls->Add(this->decLine1);
			this->addAdminPanel->Controls->Add(this->addAdminButton);
			this->addAdminPanel->Controls->Add(this->addAdminPasswordTextfield);
			this->addAdminPanel->Controls->Add(this->addAdminPasswordLabel);
			this->addAdminPanel->Controls->Add(this->addAdminUsernameTextfield);
			this->addAdminPanel->Controls->Add(this->addAdminUsernameLabel);
			this->addAdminPanel->Controls->Add(this->adminPasswordLabel);
			this->addAdminPanel->Controls->Add(this->adminUsenameLabel);
			this->addAdminPanel->Location = System::Drawing::Point(0, 73);
			this->addAdminPanel->Name = L"addAdminPanel";
			this->addAdminPanel->Size = System::Drawing::Size(1200, 727);
			this->addAdminPanel->TabIndex = 1;
			this->addAdminPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin_UI::transactionsPanel_Paint);
			// 
			// invalidLabel
			// 
			this->invalidLabel->AutoSize = true;
			this->invalidLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->invalidLabel->ForeColor = System::Drawing::Color::DarkRed;
			this->invalidLabel->Location = System::Drawing::Point(76, 421);
			this->invalidLabel->Name = L"invalidLabel";
			this->invalidLabel->Size = System::Drawing::Size(61, 12);
			this->invalidLabel->TabIndex = 19;
			this->invalidLabel->Text = L"Invalid Profile";
			// 
			// usernameExistsLabel
			// 
			this->usernameExistsLabel->AutoSize = true;
			this->usernameExistsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usernameExistsLabel->ForeColor = System::Drawing::Color::DarkRed;
			this->usernameExistsLabel->Location = System::Drawing::Point(76, 421);
			this->usernameExistsLabel->Name = L"usernameExistsLabel";
			this->usernameExistsLabel->Size = System::Drawing::Size(110, 12);
			this->usernameExistsLabel->TabIndex = 18;
			this->usernameExistsLabel->Text = L"Username Already Exists";
			// 
			// addAdminConfirmationLabel
			// 
			this->addAdminConfirmationLabel->AutoSize = true;
			this->addAdminConfirmationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addAdminConfirmationLabel->ForeColor = System::Drawing::Color::DarkRed;
			this->addAdminConfirmationLabel->Location = System::Drawing::Point(76, 421);
			this->addAdminConfirmationLabel->Name = L"addAdminConfirmationLabel";
			this->addAdminConfirmationLabel->Size = System::Drawing::Size(116, 12);
			this->addAdminConfirmationLabel->TabIndex = 17;
			this->addAdminConfirmationLabel->Text = L"Admin Added Successfully";
			this->addAdminConfirmationLabel->Click += gcnew System::EventHandler(this, &Admin_UI::addAdminConfirmationLabel_Click);
			// 
			// confirmEditAdmin
			// 
			this->confirmEditAdmin->BackColor = System::Drawing::Color::Black;
			this->confirmEditAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmEditAdmin->ForeColor = System::Drawing::Color::White;
			this->confirmEditAdmin->Location = System::Drawing::Point(369, 88);
			this->confirmEditAdmin->Name = L"confirmEditAdmin";
			this->confirmEditAdmin->Size = System::Drawing::Size(75, 23);
			this->confirmEditAdmin->TabIndex = 16;
			this->confirmEditAdmin->Text = L"Confirm";
			this->confirmEditAdmin->UseVisualStyleBackColor = false;
			this->confirmEditAdmin->Click += gcnew System::EventHandler(this, &Admin_UI::confirmEditAdmin_Click);
			// 
			// cancelEditAdmin
			// 
			this->cancelEditAdmin->BackColor = System::Drawing::Color::Black;
			this->cancelEditAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelEditAdmin->ForeColor = System::Drawing::Color::White;
			this->cancelEditAdmin->Location = System::Drawing::Point(450, 88);
			this->cancelEditAdmin->Name = L"cancelEditAdmin";
			this->cancelEditAdmin->Size = System::Drawing::Size(75, 23);
			this->cancelEditAdmin->TabIndex = 15;
			this->cancelEditAdmin->Text = L"Cancel";
			this->cancelEditAdmin->UseVisualStyleBackColor = false;
			this->cancelEditAdmin->Click += gcnew System::EventHandler(this, &Admin_UI::cancelEditAdmin_Click);
			// 
			// editAdminPasswordTextbox
			// 
			this->editAdminPasswordTextbox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->editAdminPasswordTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->editAdminPasswordTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->editAdminPasswordTextbox->Location = System::Drawing::Point(257, 51);
			this->editAdminPasswordTextbox->Name = L"editAdminPasswordTextbox";
			this->editAdminPasswordTextbox->Size = System::Drawing::Size(167, 24);
			this->editAdminPasswordTextbox->TabIndex = 14;
			// 
			// editAdminUsernameTextbox
			// 
			this->editAdminUsernameTextbox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->editAdminUsernameTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->editAdminUsernameTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->editAdminUsernameTextbox->Location = System::Drawing::Point(25, 50);
			this->editAdminUsernameTextbox->Name = L"editAdminUsernameTextbox";
			this->editAdminUsernameTextbox->Size = System::Drawing::Size(167, 24);
			this->editAdminUsernameTextbox->TabIndex = 13;
			this->editAdminUsernameTextbox->TextChanged += gcnew System::EventHandler(this, &Admin_UI::editAdminUsernameTextbox_TextChanged);
			// 
			// addAdminLabel
			// 
			this->addAdminLabel->AutoSize = true;
			this->addAdminLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAdminLabel->Location = System::Drawing::Point(71, 160);
			this->addAdminLabel->Name = L"addAdminLabel";
			this->addAdminLabel->Size = System::Drawing::Size(236, 33);
			this->addAdminLabel->TabIndex = 12;
			this->addAdminLabel->Text = L"Add New Admin";
			// 
			// decLine2
			// 
			this->decLine2->BackColor = System::Drawing::Color::Black;
			this->decLine2->Location = System::Drawing::Point(564, 45);
			this->decLine2->Name = L"decLine2";
			this->decLine2->Size = System::Drawing::Size(2, 600);
			this->decLine2->TabIndex = 11;
			// 
			// allTransactionsPanel
			// 
			this->allTransactionsPanel->BackColor = System::Drawing::SystemColors::Control;
			this->allTransactionsPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->allTransactionsPanel->Controls->Add(this->allTransactionsLabel);
			this->allTransactionsPanel->Controls->Add(this->scrollableTransactionsPanel);
			this->allTransactionsPanel->Controls->Add(this->switchToAdminProfileBtn);
			this->allTransactionsPanel->Location = System::Drawing::Point(572, 45);
			this->allTransactionsPanel->Name = L"allTransactionsPanel";
			this->allTransactionsPanel->Size = System::Drawing::Size(612, 608);
			this->allTransactionsPanel->TabIndex = 8;
			// 
			// allTransactionsLabel
			// 
			this->allTransactionsLabel->AutoSize = true;
			this->allTransactionsLabel->BackColor = System::Drawing::SystemColors::Control;
			this->allTransactionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->allTransactionsLabel->ForeColor = System::Drawing::Color::Black;
			this->allTransactionsLabel->Location = System::Drawing::Point(6, 13);
			this->allTransactionsLabel->Name = L"allTransactionsLabel";
			this->allTransactionsLabel->Size = System::Drawing::Size(240, 33);
			this->allTransactionsLabel->TabIndex = 12;
			this->allTransactionsLabel->Text = L"All Transactions";
			this->allTransactionsLabel->Click += gcnew System::EventHandler(this, &Admin_UI::allTransactionsLabel_Click);
			// 
			// scrollableTransactionsPanel
			// 
			this->scrollableTransactionsPanel->AutoScroll = true;
			this->scrollableTransactionsPanel->BackColor = System::Drawing::SystemColors::Control;
			this->scrollableTransactionsPanel->Location = System::Drawing::Point(12, 49);
			this->scrollableTransactionsPanel->Name = L"scrollableTransactionsPanel";
			this->scrollableTransactionsPanel->Size = System::Drawing::Size(591, 548);
			this->scrollableTransactionsPanel->TabIndex = 11;
			// 
			// switchToAdminProfileBtn
			// 
			this->switchToAdminProfileBtn->BackColor = System::Drawing::Color::Blue;
			this->switchToAdminProfileBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->switchToAdminProfileBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->switchToAdminProfileBtn->Location = System::Drawing::Point(619, 565);
			this->switchToAdminProfileBtn->Name = L"switchToAdminProfileBtn";
			this->switchToAdminProfileBtn->Size = System::Drawing::Size(87, 32);
			this->switchToAdminProfileBtn->TabIndex = 10;
			this->switchToAdminProfileBtn->Text = L"Switch";
			this->switchToAdminProfileBtn->UseVisualStyleBackColor = false;
			this->switchToAdminProfileBtn->Click += gcnew System::EventHandler(this, &Admin_UI::switchToAdminProfileBtn_Click);
			// 
			// editAdminProfileBtn
			// 
			this->editAdminProfileBtn->BackColor = System::Drawing::Color::Black;
			this->editAdminProfileBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->editAdminProfileBtn->ForeColor = System::Drawing::Color::White;
			this->editAdminProfileBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->editAdminProfileBtn->Location = System::Drawing::Point(450, 88);
			this->editAdminProfileBtn->Name = L"editAdminProfileBtn";
			this->editAdminProfileBtn->Size = System::Drawing::Size(75, 23);
			this->editAdminProfileBtn->TabIndex = 10;
			this->editAdminProfileBtn->Text = L"Edit";
			this->editAdminProfileBtn->UseVisualStyleBackColor = false;
			this->editAdminProfileBtn->Click += gcnew System::EventHandler(this, &Admin_UI::editAdminProfileBtn_Click);
			// 
			// addAdminButton
			// 
			this->addAdminButton->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addAdminButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAdminButton->ForeColor = System::Drawing::Color::White;
			this->addAdminButton->Location = System::Drawing::Point(77, 472);
			this->addAdminButton->Name = L"addAdminButton";
			this->addAdminButton->Size = System::Drawing::Size(309, 35);
			this->addAdminButton->TabIndex = 7;
			this->addAdminButton->Text = L"Add Admin";
			this->addAdminButton->UseVisualStyleBackColor = false;
			this->addAdminButton->Click += gcnew System::EventHandler(this, &Admin_UI::addAdminButton_Click);
			// 
			// addAdminPasswordTextfield
			// 
			this->addAdminPasswordTextfield->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->addAdminPasswordTextfield->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addAdminPasswordTextfield->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addAdminPasswordTextfield->Location = System::Drawing::Point(77, 392);
			this->addAdminPasswordTextfield->Name = L"addAdminPasswordTextfield";
			this->addAdminPasswordTextfield->Size = System::Drawing::Size(309, 26);
			this->addAdminPasswordTextfield->TabIndex = 6;
			this->addAdminPasswordTextfield->UseSystemPasswordChar = true;
			// 
			// addAdminPasswordLabel
			// 
			this->addAdminPasswordLabel->AutoSize = true;
			this->addAdminPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addAdminPasswordLabel->Location = System::Drawing::Point(72, 347);
			this->addAdminPasswordLabel->Name = L"addAdminPasswordLabel";
			this->addAdminPasswordLabel->Size = System::Drawing::Size(118, 29);
			this->addAdminPasswordLabel->TabIndex = 5;
			this->addAdminPasswordLabel->Text = L"password";
			// 
			// addAdminUsernameTextfield
			// 
			this->addAdminUsernameTextfield->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->addAdminUsernameTextfield->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addAdminUsernameTextfield->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addAdminUsernameTextfield->Location = System::Drawing::Point(77, 277);
			this->addAdminUsernameTextfield->Name = L"addAdminUsernameTextfield";
			this->addAdminUsernameTextfield->Size = System::Drawing::Size(309, 26);
			this->addAdminUsernameTextfield->TabIndex = 4;
			// 
			// addAdminUsernameLabel
			// 
			this->addAdminUsernameLabel->AutoSize = true;
			this->addAdminUsernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addAdminUsernameLabel->Location = System::Drawing::Point(72, 232);
			this->addAdminUsernameLabel->Name = L"addAdminUsernameLabel";
			this->addAdminUsernameLabel->Size = System::Drawing::Size(120, 29);
			this->addAdminUsernameLabel->TabIndex = 3;
			this->addAdminUsernameLabel->Text = L"username";
			// 
			// adminPasswordLabel
			// 
			this->adminPasswordLabel->AutoSize = true;
			this->adminPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminPasswordLabel->Location = System::Drawing::Point(252, 45);
			this->adminPasswordLabel->Name = L"adminPasswordLabel";
			this->adminPasswordLabel->Size = System::Drawing::Size(118, 29);
			this->adminPasswordLabel->TabIndex = 1;
			this->adminPasswordLabel->Text = L"password";
			// 
			// adminUsenameLabel
			// 
			this->adminUsenameLabel->AutoSize = true;
			this->adminUsenameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminUsenameLabel->Location = System::Drawing::Point(32, 45);
			this->adminUsenameLabel->Name = L"adminUsenameLabel";
			this->adminUsenameLabel->Size = System::Drawing::Size(120, 29);
			this->adminUsenameLabel->TabIndex = 0;
			this->adminUsenameLabel->Text = L"username";
			this->adminUsenameLabel->Click += gcnew System::EventHandler(this, &Admin_UI::adminUsenameLabel_Click);
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
			this->No_user_ms->Location = System::Drawing::Point(702, 434);
			this->No_user_ms->Name = L"No_user_ms";
			this->No_user_ms->Size = System::Drawing::Size(411, 55);
			this->No_user_ms->TabIndex = 16;
			this->No_user_ms->Text = L"NO User Selected";
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
			this->Users_page->Size = System::Drawing::Size(1200, 788);
			this->Users_page->TabIndex = 1;
			this->Users_page->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin_UI::Users_page_Paint);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Green;
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
			this->label1->BackColor = System::Drawing::Color::Green;
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
			this->UserInfo_panal->Controls->Add(this->listBox1);
			this->UserInfo_panal->Controls->Add(this->Delete_button);
			this->UserInfo_panal->Controls->Add(this->massage_name_LB);
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
			this->UserInfo_panal->Controls->Add(this->payments_label);
			this->UserInfo_panal->Location = System::Drawing::Point(634, 230);
			this->UserInfo_panal->Name = L"UserInfo_panal";
			this->UserInfo_panal->Size = System::Drawing::Size(563, 498);
			this->UserInfo_panal->TabIndex = 17;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::Gray;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(11, 303);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox1->Size = System::Drawing::Size(549, 58);
			this->listBox1->TabIndex = 33;
			// 
			// Delete_button
			// 
			this->Delete_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Delete_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete_button->FlatAppearance->BorderSize = 0;
			this->Delete_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete_button->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Delete_button->Location = System::Drawing::Point(11, 15);
			this->Delete_button->Name = L"Delete_button";
			this->Delete_button->Size = System::Drawing::Size(103, 43);
			this->Delete_button->TabIndex = 30;
			this->Delete_button->Text = L"X Delete";
			this->Delete_button->UseVisualStyleBackColor = false;
			this->Delete_button->Click += gcnew System::EventHandler(this, &Admin_UI::Delete_button_Click);
			// 
			// massage_name_LB
			// 
			this->massage_name_LB->AutoSize = true;
			this->massage_name_LB->ForeColor = System::Drawing::Color::Red;
			this->massage_name_LB->Location = System::Drawing::Point(149, 114);
			this->massage_name_LB->Name = L"massage_name_LB";
			this->massage_name_LB->Size = System::Drawing::Size(155, 13);
			this->massage_name_LB->TabIndex = 29;
			this->massage_name_LB->Text = L"* this user Name is already exist";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Green;
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
			this->Add_user_button->BackColor = System::Drawing::Color::Black;
			this->Add_user_button->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->flowLayoutPanel_Users_Transaction->AutoScroll = true;
			this->flowLayoutPanel_Users_Transaction->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel_Users_Transaction->Location = System::Drawing::Point(12, 115);
			this->flowLayoutPanel_Users_Transaction->Name = L"flowLayoutPanel_Users_Transaction";
			this->flowLayoutPanel_Users_Transaction->Size = System::Drawing::Size(542, 367);
			this->flowLayoutPanel_Users_Transaction->TabIndex = 9;
			this->flowLayoutPanel_Users_Transaction->WrapContents = false;
			// 
			// DownTransaction_button
			// 
			this->DownTransaction_button->BackColor = System::Drawing::Color::Green;
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
			this->label11->BackColor = System::Drawing::Color::Green;
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
			this->suspended_checkBox->Location = System::Drawing::Point(12, 372);
			this->suspended_checkBox->Name = L"suspended_checkBox";
			this->suspended_checkBox->Size = System::Drawing::Size(137, 29);
			this->suspended_checkBox->TabIndex = 24;
			this->suspended_checkBox->Text = L"suspended";
			this->suspended_checkBox->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Green;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(111, 231);
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
			this->BalanceEdit_Box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Admin_UI::BalanceEdit_Box_KeyPress);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Green;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(86, 174);
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
			this->label8->BackColor = System::Drawing::Color::Green;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(149, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(216, 2);
			this->label8->TabIndex = 19;
			// 
			// cancel_button
			// 
			this->cancel_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel_button->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->UserEdit_Box->Leave += gcnew System::EventHandler(this, &Admin_UI::UserEdit_Box_Leave);
			// 
			// Save_button
			// 
			this->Save_button->BackColor = System::Drawing::Color::Black;
			this->Save_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Save_button->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
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
			this->Save_button->Click += gcnew System::EventHandler(this, &Admin_UI::Save_button_Click);
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
			// 
			// Transactions_button
			// 
			this->Transactions_button->BackColor = System::Drawing::Color::Black;
			this->Transactions_button->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->suspended_LB->Location = System::Drawing::Point(7, 372);
			this->suspended_LB->Name = L"suspended_LB";
			this->suspended_LB->Size = System::Drawing::Size(163, 29);
			this->suspended_LB->TabIndex = 13;
			this->suspended_LB->Text = L"Unsuspended";
			// 
			// Edit_button
			// 
			this->Edit_button->BackColor = System::Drawing::Color::Black;
			this->Edit_button->Cursor = System::Windows::Forms::Cursors::Hand;
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
			// payments_label
			// 
			this->payments_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payments_label->ForeColor = System::Drawing::Color::Gray;
			this->payments_label->Location = System::Drawing::Point(7, 298);
			this->payments_label->Name = L"payments_label";
			this->payments_label->Size = System::Drawing::Size(553, 71);
			this->payments_label->TabIndex = 31;
			this->payments_label->Text = L"No payments";
			this->payments_label->UseCompatibleTextRendering = true;
			// 
			// top_panal
			// 
			this->top_panal->BackColor = System::Drawing::Color::Green;
			this->top_panal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->top_panal->Controls->Add(this->Adress_wallet);
			this->top_panal->Controls->Add(this->logout_Admin_button);
			this->top_panal->Controls->Add(this->pictureBox1);
			this->top_panal->Controls->Add(this->button_to_Admin);
			this->top_panal->Controls->Add(this->button_to_users);
			this->top_panal->Dock = System::Windows::Forms::DockStyle::Top;
			this->top_panal->Location = System::Drawing::Point(0, 0);
			this->top_panal->Name = L"top_panal";
			this->top_panal->Size = System::Drawing::Size(1200, 73);
			this->top_panal->TabIndex = 2;
			// 
			// Adress_wallet
			// 
			this->Adress_wallet->AutoSize = true;
			this->Adress_wallet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adress_wallet->ForeColor = System::Drawing::SystemColors::Control;
			this->Adress_wallet->Location = System::Drawing::Point(107, 26);
			this->Adress_wallet->Name = L"Adress_wallet";
			this->Adress_wallet->Size = System::Drawing::Size(134, 29);
			this->Adress_wallet->TabIndex = 4;
			this->Adress_wallet->Text = L"Easy wallet";
			// 
			// logout_Admin_button
			// 
			this->logout_Admin_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout_Admin_button.BackgroundImage")));
			this->logout_Admin_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logout_Admin_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logout_Admin_button->FlatAppearance->BorderSize = 0;
			this->logout_Admin_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Green;
			this->logout_Admin_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Green;
			this->logout_Admin_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_Admin_button->Location = System::Drawing::Point(1116, 10);
			this->logout_Admin_button->Name = L"logout_Admin_button";
			this->logout_Admin_button->Size = System::Drawing::Size(68, 54);
			this->logout_Admin_button->TabIndex = 3;
			this->logout_Admin_button->UseVisualStyleBackColor = true;
			this->logout_Admin_button->Click += gcnew System::EventHandler(this, &Admin_UI::logout_Admin_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button_to_Admin
			// 
			this->button_to_Admin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_to_Admin.BackgroundImage")));
			this->button_to_Admin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_to_Admin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_to_Admin->FlatAppearance->BorderSize = 0;
			this->button_to_Admin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Green;
			this->button_to_Admin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Green;
			this->button_to_Admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_to_Admin->Location = System::Drawing::Point(1042, 10);
			this->button_to_Admin->Name = L"button_to_Admin";
			this->button_to_Admin->Size = System::Drawing::Size(52, 54);
			this->button_to_Admin->TabIndex = 1;
			this->button_to_Admin->UseVisualStyleBackColor = true;
			this->button_to_Admin->Click += gcnew System::EventHandler(this, &Admin_UI::button_to_Admin_Click);
			// 
			// button_to_users
			// 
			this->button_to_users->BackColor = System::Drawing::Color::Green;
			this->button_to_users->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_to_users.BackgroundImage")));
			this->button_to_users->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_to_users->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_to_users->FlatAppearance->BorderSize = 0;
			this->button_to_users->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Green;
			this->button_to_users->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Green;
			this->button_to_users->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_to_users->ForeColor = System::Drawing::Color::Transparent;
			this->button_to_users->Location = System::Drawing::Point(953, 13);
			this->button_to_users->Name = L"button_to_users";
			this->button_to_users->Size = System::Drawing::Size(58, 51);
			this->button_to_users->TabIndex = 0;
			this->button_to_users->UseVisualStyleBackColor = false;
			this->button_to_users->Click += gcnew System::EventHandler(this, &Admin_UI::button_to_users_Click);
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
			this->ClientSize = System::Drawing::Size(1200, 788);
			this->Controls->Add(this->addAdminPanel);
			this->Controls->Add(this->top_panal);
			this->Controls->Add(this->Users_page);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Admin_UI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_UI";
			this->Load += gcnew System::EventHandler(this, &Admin_UI::Admin_UI_Load);
			this->addAdminPanel->ResumeLayout(false);
			this->addAdminPanel->PerformLayout();
			this->allTransactionsPanel->ResumeLayout(false);
			this->allTransactionsPanel->PerformLayout();
			this->Users_page->ResumeLayout(false);
			this->Users_page->PerformLayout();
			this->UserInfo_panal->ResumeLayout(false);
			this->UserInfo_panal->PerformLayout();
			this->Transactions_user_panel->ResumeLayout(false);
			this->Transactions_user_panel->PerformLayout();
			this->top_panal->ResumeLayout(false);
			this->top_panal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void transactionsPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}

	private: System::Void switchToAdminProfileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		allTransactionsPanel->Hide();

	}
		   //private: System::Void switchToAllTransactionsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		   //	
		   //	allTransactionsPanel->Show();
		   //}


				  /////////////////





				  /*void MakeRoundedPanel(Panel^ panel, int radius) {
					  System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
					  System::Drawing::Rectangle  bounds = panel->ClientRectangle;
					  int diameter = radius * 2;
					  path->AddArc(bounds.X, bounds.Y, diameter, diameter, 180, 90);
					  path->AddArc(bounds.Right - diameter, bounds.Y, diameter, diameter, 270, 90);
					  path->AddArc(bounds.Right - diameter, bounds.Bottom - diameter, diameter, diameter, 0, 90);
					  path->AddArc(bounds.X, bounds.Bottom - diameter, diameter, diameter, 90, 90);
					  path->CloseFigure();
					  panel->Region = gcnew System::Drawing::Region(path);
				  }*/

		   void generate_transaction_history_panels()
		   {
			   int i = 0;
			   for (auto it = Admin::all_transactions.begin(); it != Admin::all_transactions.end(); i++, it++)
			   {

				   Panel^ panel = gcnew Panel();
				   panel->Size = System::Drawing::Size(530, 90);
				   panel->BackColor = System::Drawing::SystemColors::ControlLight;
				   panel->Location = System::Drawing::Point(0, (i * 100));
				   MakeRoundedPanel(panel, 15);
				   Label^ transaction_date_label = gcnew Label();
				   transaction_date_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
				   transaction_date_label->Text = gcnew String(makeFunnyString(it->getTimestampAsString()));
				   transaction_date_label->Location = System::Drawing::Point(17, 10);
				   transaction_date_label->AutoSize = true;
				   Label^ to_form_field = gcnew Label();

				   String^ stautus = gcnew String(it->getStatusString().c_str());
				   Label^ status_label = gcnew Label();
				   status_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
				   status_label->Text = gcnew String(makeFunnyString("Status : " + (it->getStatusString())));
				   status_label->Location = System::Drawing::Point(290, 10);
				   status_label->AutoSize = true;
				   panel->Controls->Add(status_label);
				   if (stautus == "Accepted")
				   {
					   status_label->Text = gcnew String("Accepted");
					   status_label->ForeColor = System::Drawing::Color::Green;
				   }
				   else if (stautus == "Declined")
				   {
					   status_label->Text = gcnew String("Declined");
					   status_label->ForeColor = System::Drawing::Color::Red;
				   }

				   Label^ from_label = gcnew Label();
				   from_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
				   from_label->Text = gcnew String(makeFunnyString("From : " + it->getSender()));
				   from_label->Location = System::Drawing::Point(17, 60);
				   from_label->AutoSize = true;
				   panel->Controls->Add(from_label);

				   to_form_field->Text = gcnew String(makeFunnyString("To : " + it->getRecipient()));
				   to_form_field->Location = System::Drawing::Point(17, 40);
				   to_form_field->AutoSize = true;
				   to_form_field->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
				   Label^ sender_reciever_label = gcnew Label();
				   sender_reciever_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);


				   sender_reciever_label->Location = System::Drawing::Point(146, 45);
				   sender_reciever_label->AutoSize = true;
				   Label^ amount_label = gcnew Label();
				   amount_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
				   //amount_label->Text = makeFunnyString("amount : " + it->getAmount().ToString("F2") + "$");
				   amount_label->Text = makeFunnyString(msclr::interop::marshal_as<std::string>("amount : " + it->getAmount().ToString("F2") + "$"));
				   amount_label->Location = System::Drawing::Point(290, 35);
				   amount_label->AutoSize = true;
				   panel->Controls->Add(transaction_date_label);
				   panel->Controls->Add(to_form_field);
				   panel->Controls->Add(sender_reciever_label);
				   panel->Controls->Add(amount_label);
				   this->Controls->Add(panel);
				   this->scrollableTransactionsPanel->Controls->Add(panel);
			   }

		   }




	private: System::Void addAdminButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (addAdminUsernameTextfield->Text == "" || addAdminPasswordTextfield->Text == "" /*|| !checkAdminValidity()*/)
		{
			invalidLabel->Show();
			usernameExistsLabel->Hide();
			addAdminConfirmationLabel->Hide();
			return;
		}
		else if (Admin::adminMap.find(makeString(addAdminUsernameTextfield->Text)) != Admin::adminMap.end()) {
			usernameExistsLabel->Show();
			addAdminConfirmationLabel->Hide();
			invalidLabel->Hide();
			addAdminUsernameTextfield->Text = "";
			addAdminPasswordTextfield->Text = "";
			return;
		}




		new Admin(makeString(addAdminUsernameTextfield->Text), makeString(addAdminPasswordTextfield->Text));
		Admin::adminMap.emplace(
			makeString(addAdminUsernameTextfield->Text), Admin(makeString(addAdminUsernameTextfield->Text),
				makeString(addAdminPasswordTextfield->Text))
		);
		addAdminConfirmationLabel->Show();
		usernameExistsLabel->Hide();
		invalidLabel->Hide();
		addAdminUsernameTextfield->Text = "";
		addAdminPasswordTextfield->Text = "";
	}
	private: System::Void allTransactionsLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void editAdminProfileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		editAdminProfileBtn->Hide();
		editAdminUsernameTextbox->Show();
		editAdminPasswordTextbox->Show();
		confirmEditAdmin->Show();
		cancelEditAdmin->Show();
		editAdminUsernameTextbox->Text = adminUsenameLabel->Text;
		editAdminPasswordTextbox->Text = adminPasswordLabel->Text;
		adminPasswordLabel->Hide();
		adminUsenameLabel->Hide();
	}
	private: System::Void cancelEditAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		editAdminProfileBtn->Show();
		editAdminUsernameTextbox->Hide();
		editAdminPasswordTextbox->Hide();
		confirmEditAdmin->Hide();
		cancelEditAdmin->Hide();
		adminPasswordLabel->Show();
		adminUsenameLabel->Show();
		editAdminUsernameTextbox->Text = "";
		editAdminPasswordTextbox->Text = "";
	}

	public:int count = 0;
	private: System::Void Users_page_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		ResetUsersPageUI();
	}
		   Void ResetUsersPageUI() {
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
			   massage_name_LB->Hide();
			   Delete_button->Hide();

		   }
	private: System::Void Admin_UI_Load(System::Object^ sender, System::EventArgs^ e) {

		draw_usercontrols();
	}
		   void draw_usercontrols()
		   {
			   //string username = "ahmed";
	   //string email = "ahmed";
	   //string password = "ahmed";
	   //user newUser(username, email, password);
			   users = gcnew List<User_Control^>();
			   //for (int i = 0; i <5 ; i++)
			   //{

			   //User_Control^ userControl = gcnew User_Control();
			   //userControl->LB_Name->Text = "ahmed";
			   //userControl->LB_Balance->Text = "5000";
			   //userControl->LB_Email->Text = "ahmedebrahim57@gmail.com";
			   ////flowLayoutPanel_Users_Data->Controls->Add(userControl);
			   //userControl->OnUserControlClick += gcnew User_Control::UserControlClickEventHandler(this, &Admin_UI::UserControl_Click);
			   //users->Add(userControl);
			   //}
			   //for (int i = 0; i < 5; i++)
			   //{

			   //	User_Control^ userControl = gcnew User_Control();
			   //	userControl->LB_Name->Text = "mohamed";
			   //	userControl->LB_Balance->Text = "1000";
			   //	userControl->LB_Email->Text = "mohamed#ss@gmail.com";
			   //	userControl->OnUserControlClick += gcnew User_Control::UserControlClickEventHandler(this, &Admin_UI::UserControl_Click);
			   //	//flowLayoutPanel_Users_Data->Controls->Add(userControl);
			   //	users->Add(userControl);
			   //}
			   for (auto u : user::allusers)
			   {
				   User_Control^ userControl = gcnew User_Control();
				   userControl->LB_Name->Text = gcnew System::String(u.second.getUsername().c_str());
				   userControl->LB_Balance->Text = gcnew System::String(u.second.getBalance().ToString());
				   userControl->LB_Email->Text = gcnew System::String(u.second.getEmail().c_str());
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
			   //selected_user=user::allusers[key];
			   LB_Name_info->Text = userControl->LB_Name->Text;
			   key = msclr::interop::marshal_as<std::string>(LB_Name_info->Text);
			   LB_Email_info->Text = userControl->LB_Email->Text;
			   LB_Balance_info->Text = userControl->LB_Balance->Text;
			   if (user::allusers[key].isSuspended())
			   {
				   suspended_LB->Text = "suspended";
				   suspended_LB->ForeColor = System::Drawing::Color::Red;
			   }
			   else
			   {
				   suspended_LB->Text = "Unsuspended";
				   suspended_LB->ForeColor = System::Drawing::Color::Green;
			   }
			   user* user_account = &user::allusers[key];
			   if (user_account->payment_methods.size() != 0)
			   {
				   //string payments = "";
				   listBox1->Items->Clear(); // Clear previous items
				   for (auto p : user_account->payment_methods)
				   {
					   //payments += p.getGatewayCategory() + " --> " + p.getGatewayNumber() + "||";
					   System::String^ paymentInfo =
						   gcnew System::String(p.getGatewayCategory().c_str()) + " --> " +
						   gcnew System::String(p.getGatewayNumber().c_str());
					   listBox1->Items->Add(paymentInfo);
				   }
			   }
			   else
			   {
				   listBox1->Items->Clear(); // Clear previous items
				   listBox1->Items->Add("No Payments");
			   }

			   generate_transaction_history_panels2();

			   UserInfo_panal->Show();
			   No_user_ms->Hide();
			   massage_name_LB->Hide();

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
			   Delete_button->Show();
			   label7->Text = "payment:";
			   payments_label->Show();
			   listBox1->Show();
			   // Show the Edit and Transactions buttons
			   Edit_button->Show();
			   Transactions_button->Show();
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
		//user::allusers[selected_user.getUsername()];
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
		Delete_button->Hide();

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
		massage_name_LB->Hide();
		// Show the labels and hide the text boxes
		LB_Name_info->Show();
		LB_Email_info->Show();
		LB_Balance_info->Show();
		suspended_LB->Show();
		Add_user_button->Show();
		label7->Text = "payment:";
		payments_label->Show();
		listBox1->Show();


		// Show the Edit and Transactions buttons
		Edit_button->Show();
		Transactions_button->Show();
		Delete_button->Show();
	}
	private: System::Void Transactions_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//timer2->Stop();
		//timer1->Start();
		count = 0;
		Transactions_user_panel->Location = System::Drawing::Point(0, 493);
		Transactions_user_panel->Height = 25;
		Transactions_user_panel->BringToFront();
		//generate_transaction_history_panels();
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
		//UserEdit_Box->Focus();
		UserEdit_Box->Text = "";
		EmailEdit_Box->Text = "";
		BalanceEdit_Box->Text = "";
		label7->Text = "password:";
		password_Box->Show();
		password_Box->Text = "";
		label12->Show();
		suspended_checkBox->Checked = false;
		LB_Name_info->Hide();
		LB_Email_info->Hide();
		LB_Balance_info->Hide();
		suspended_LB->Hide();
		Add_user_button->Hide();
		payments_label->Hide();
		listBox1->Hide();
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
		Delete_button->Hide();
		UserEdit_Box->Focus();

	}


		   void MakeRoundedPanel(System::Windows::Forms::Panel^ panel, int radius)
		   {
			   System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			   path->AddArc(0, 0, radius, radius, 180, 90);
			   path->AddArc(panel->Width - radius, 0, radius, radius, 270, 90);
			   path->AddArc(panel->Width - radius, panel->Height - radius, radius, radius, 0, 90);
			   path->AddArc(0, panel->Height - radius, radius, radius, 90, 90);
			   path->CloseAllFigures();
			   panel->Region = gcnew System::Drawing::Region(path);
		   }
		   void generate_transaction_history_panels2()
		   {
			   flowLayoutPanel_Users_Transaction->Controls->Clear();
			   int count_t = 0;
			   user* user_account = &user::allusers[key];
			   if (user_account->get_history_transaction().size() == 0)
			   {
				   Label^ noTransactionsLabel = gcnew Label();
				   noTransactionsLabel->Text = "No transactions yet";
				   noTransactionsLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular);
				   noTransactionsLabel->AutoSize = true;
				   int centerX = (this->flowLayoutPanel_Users_Transaction->Width - noTransactionsLabel->Width) / 6;
				   int centerY = (this->flowLayoutPanel_Users_Transaction->Height - noTransactionsLabel->Height) / 3;
				   noTransactionsLabel->Location = System::Drawing::Point(centerX, centerY);
				   this->flowLayoutPanel_Users_Transaction->Controls->Add(noTransactionsLabel);
			   }
			   else
			   {
				   for (auto t : user_account->get_history_transaction())
				   {
					   /*transaction t = user_account->history_transaction.front();
					   user_account->history_transaction.pop_front();*/
					   Panel^ panel = gcnew Panel();
					   panel->Size = System::Drawing::Size(515, 83);
					   panel->BackColor = System::Drawing::SystemColors::ControlLight;
					   panel->Location = System::Drawing::Point(0, (count_t * 100));
					   MakeRoundedPanel(panel, 15);
					   Label^ transaction_date_label = gcnew Label();
					   transaction_date_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
					   transaction_date_label->Text = gcnew String(t.getTimestampAsString().c_str()/*"19/4/2025"*/);  //"1"
					   transaction_date_label->Location = System::Drawing::Point(17, 10);
					   transaction_date_label->AutoSize = true;
					   Label^ to_form_field = gcnew Label();
					   to_form_field->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
					   to_form_field->Text = "To: ";
					   to_form_field->Location = System::Drawing::Point(17, 45);
					   to_form_field->AutoSize = true;
					   Label^ sender_reciever_label = gcnew Label();
					   sender_reciever_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
					   sender_reciever_label->Text = gcnew String(t.getSender().c_str());
					   sender_reciever_label->Location = System::Drawing::Point(55, 45);
					   sender_reciever_label->AutoSize = true;
					   if (t.getType() == TRANSACTION_TYPE::WITHDRAWAL || t.getType() == TRANSACTION_TYPE::REQUEST_MONEY)
					   {
						   to_form_field->Text = "From:";
						   sender_reciever_label->Location = System::Drawing::Point(75, 45);
					   }
					   if (t.getType() == TRANSACTION_TYPE::SEND_MONEY) {
						   sender_reciever_label->Text = gcnew String(t.getSender().c_str());
					   }
					   else if (t.getType() == TRANSACTION_TYPE::REQUEST_MONEY) {
						   sender_reciever_label->Text = gcnew String(t.getRecipient().c_str()/*"John Smith"*/); //"2"
					   }
					   Label^ amount_label = gcnew Label();
					   amount_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
					   //amount_label->Text = t.getAmount() /*"amount: $100"*/; //t.getAmount();
					   //amount_label->Text = gcnew System::String(("amount: $" + std::to_string(t.getAmount())).c_str());
					   amount_label->Text = "amount: $" + t.getAmount().ToString("F2");
					   amount_label->Location = System::Drawing::Point(300, 45);
					   amount_label->AutoSize = true;
					   String^ stautus = gcnew String(t.getStatusString().c_str());
					   Label^ status_label = gcnew Label();
					   status_label->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point);
					   status_label->Text = gcnew String("");
					   status_label->Location = System::Drawing::Point(300, 10);
					   status_label->AutoSize = true;
					   if (stautus == "Accepted")
					   {
						   status_label->Text = gcnew String("Accepted");
						   status_label->ForeColor = System::Drawing::Color::Green;
					   }
					   else if (stautus == "Declined")
					   {
						   status_label->Text = gcnew String("Declined");
						   status_label->ForeColor = System::Drawing::Color::Red;
					   }
					   panel->Controls->Add(transaction_date_label);
					   panel->Controls->Add(to_form_field);
					   panel->Controls->Add(sender_reciever_label);
					   panel->Controls->Add(status_label);
					   panel->Controls->Add(amount_label);
					   this->Controls->Add(panel);
					   this->flowLayoutPanel_Users_Transaction->Controls->Add(panel);
					   count_t++;
				   }
			   }
		   }
	private: System::Void Save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin currentAdmin1;// this should be the current admin
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
		payments_label->Show();//show that?!
		listBox1->Show();
		// Show the Edit and Transactions buttons
		Edit_button->Show();
		Transactions_button->Show();
		Delete_button->Show();
		if (suspended_checkBox->Checked)
		{
			suspended_LB->Text = "suspended";
		}
		else
		{
			suspended_LB->Text = "unsuspended";
		}
		//it is Add user
		if (label7->Text == "password:")
		{
			string username = msclr::interop::marshal_as<std::string>(UserEdit_Box->Text);
			string email = msclr::interop::marshal_as<std::string>(EmailEdit_Box->Text);
			string balance = msclr::interop::marshal_as<std::string>(BalanceEdit_Box->Text);
			string password = msclr::interop::marshal_as<std::string>(password_Box->Text);
			string specialChars = "!@$%^&*+#";


			if (username.empty() || email.empty() || balance.empty() || password.empty()) {
				Add_user_button_Click(nullptr, gcnew System::EventArgs());
				UserEdit_Box->Text = gcnew System::String(username.c_str());
				EmailEdit_Box->Text = gcnew System::String(email.c_str());
				BalanceEdit_Box->Text = gcnew System::String(balance.c_str());
				password_Box->Text = gcnew System::String(password.c_str());
				MessageBox::Show("Please fill all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (password.length() < 8) {
				Add_user_button_Click(nullptr, gcnew System::EventArgs());
				UserEdit_Box->Text = gcnew System::String(username.c_str());
				EmailEdit_Box->Text = gcnew System::String(email.c_str());
				BalanceEdit_Box->Text = gcnew System::String(balance.c_str());
				password_Box->Text = "";
				MessageBox::Show("Password must have at least 8 characters", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;

			}
			if (password.find_first_of(specialChars) == std::string::npos) {
				Add_user_button_Click(nullptr, gcnew System::EventArgs());
				UserEdit_Box->Text = gcnew System::String(username.c_str());
				EmailEdit_Box->Text = gcnew System::String(email.c_str());
				BalanceEdit_Box->Text = gcnew System::String(balance.c_str());
				password_Box->Text = "";
				MessageBox::Show("Password must contain at least one special character (!@$%^&*+#)!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;

			}

			//here will check to the errors:
			//auto ur_Ed = user::allusers.extract(key);
			//ur_Ed.key() = username;
			//ur_Ed.mapped().setUsername(ur_Ed.key());
			//ur_Ed.mapped().setEmail(newemail);
			//ur_Ed.mapped().setBalance(stoi(newbalance));
			if (suspended_checkBox->Checked)
			{
				//ur_Ed.mapped().setSuspended(true);
				currentAdmin1.addUser(username, email, balance, password, true);
				suspended_LB->Text = "suspended";
				suspended_LB->ForeColor = System::Drawing::Color::Red;
			}
			else
			{
				//ur_Ed.mapped().setSuspended(false);

				currentAdmin1.addUser(username, email, balance, password, false);
				suspended_LB->Text = "unsuspended";
				suspended_LB->ForeColor = System::Drawing::Color::Green;
			}
			//user::allusers.insert(std::move(ur_Ed));
			LB_Name_info->Text = UserEdit_Box->Text;
			LB_Email_info->Text = EmailEdit_Box->Text;
			LB_Balance_info->Text = BalanceEdit_Box->Text;
			label7->Text = "payment:";
			listBox1->Items->Clear(); // Clear previous items
			listBox1->Items->Add("No Payments");
			flowLayoutPanel_Users_Transaction->Controls->Clear();
			Label^ noTransactionsLabel = gcnew Label();
			noTransactionsLabel->Text = "No transactions yet";
			noTransactionsLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular);
			noTransactionsLabel->AutoSize = true;
			int centerX = (this->flowLayoutPanel_Users_Transaction->Width - noTransactionsLabel->Width) / 6;
			int centerY = (this->flowLayoutPanel_Users_Transaction->Height - noTransactionsLabel->Height) / 3;
			noTransactionsLabel->Location = System::Drawing::Point(centerX, centerY);
			this->flowLayoutPanel_Users_Transaction->Controls->Add(noTransactionsLabel);
			key = msclr::interop::marshal_as<std::string>(LB_Name_info->Text);
			draw_usercontrols();
		}
		//it is Edit user
		else
		{
			string username = msclr::interop::marshal_as<std::string>(UserEdit_Box->Text);
			string newemail = msclr::interop::marshal_as<std::string>(EmailEdit_Box->Text);
			string newbalance = msclr::interop::marshal_as<std::string>(BalanceEdit_Box->Text);
			if (username.empty() || newemail.empty() || newbalance.empty()) {
				Edit_button_Click(nullptr, gcnew System::EventArgs());
				MessageBox::Show("Please fill all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			//here will check to the errors:
			//auto ur_Ed = user::allusers.extract(key);
			//ur_Ed.key() = username;
			//ur_Ed.mapped().setUsername(ur_Ed.key());
			//ur_Ed.mapped().setEmail(newemail);
			//ur_Ed.mapped().setBalance(stoi(newbalance));
			if (suspended_checkBox->Checked)
			{
				//ur_Ed.mapped().setSuspended(true);
				currentAdmin1.updateUserData(key, username, newemail, newbalance, true);
				suspended_LB->Text = "suspended";
				suspended_LB->ForeColor = System::Drawing::Color::Red;
			}
			else
			{
				//ur_Ed.mapped().setSuspended(false);

				currentAdmin1.updateUserData(key, username, newemail, newbalance, false);
				suspended_LB->Text = "unsuspended";
				suspended_LB->ForeColor = System::Drawing::Color::Green;
			}
			//user::allusers.insert(std::move(ur_Ed));
			LB_Name_info->Text = UserEdit_Box->Text;
			LB_Email_info->Text = EmailEdit_Box->Text;
			LB_Balance_info->Text = BalanceEdit_Box->Text;
			draw_usercontrols();
		}
	}
	private: System::Void UserEdit_Box_Leave(System::Object^ sender, System::EventArgs^ e) {
		string username = msclr::interop::marshal_as<std::string>(UserEdit_Box->Text);
		if (username == key && label7->Text == "payment:")
		{
			return;
		}
		else if (user::allusers.find(username) != user::allusers.end()) {
			//label15->Show();
			//textBox5->Text = "";
			massage_name_LB->Show();
			label8->BackColor = System::Drawing::Color::Red;
			Save_button->Enabled = false;
			Save_button->BackColor = System::Drawing::Color::Gray;
			//Save_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			return;
		}
		else {
			//label15->Hide();
			//textBox5->Text = "valid";
			massage_name_LB->Hide();
			label8->BackColor = System::Drawing::Color::Green;
			Save_button->Enabled = true;
			Save_button->BackColor = System::Drawing::Color::Black;


		}
	}
	private: System::Void BalanceEdit_Box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b' && e->KeyChar != '.') {
			e->Handled = true;
		}
		else if (e->KeyChar == '.' && safe_cast<TextBox^>(sender)->Text->Contains(".")) {
			e->Handled = true;
		}

	}
	private: System::Void Delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin currentAdmin1;// this should be the current admin
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
			"Are you sure you want to delete this user?", "Confirm Delete",
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Warning
		);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			currentAdmin1.deleteUser(key);
			ResetUsersPageUI();
			draw_usercontrols();
		}
	}
	private: string makeString(System::String^ word)
	{
		std::string str = msclr::interop::marshal_as<std::string>(word);
		return str;
	}
	private: System::String^ makeFunnyString(string word)
	{

		return gcnew String(msclr::interop::marshal_as<System::String^>(word));
	}

	private: System::Void confirmEditAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string oldUsername = makeString(adminUsenameLabel->Text);
		std::string newUsername = makeString(editAdminUsernameTextbox->Text);
		if (Admin::adminMap.find(oldUsername) != Admin::adminMap.end()) {
			Admin tempAdmin = Admin::adminMap[oldUsername];
			tempAdmin.username = newUsername;
			Admin::adminMap.erase(oldUsername);
			Admin::adminMap[newUsername] = tempAdmin;
		}
		adminUsenameLabel->Text = editAdminUsernameTextbox->Text;
		adminPasswordLabel->Text = editAdminPasswordTextbox->Text;
		editAdminProfileBtn->Show();
		editAdminUsernameTextbox->Hide();
		editAdminPasswordTextbox->Hide();
		confirmEditAdmin->Hide();
		cancelEditAdmin->Hide();
		adminPasswordLabel->Show();
		adminUsenameLabel->Show();
		editAdminUsernameTextbox->Text = "";
		editAdminPasswordTextbox->Text = "";
	}


	private: System::Void addAdminConfirmationLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_to_Admin_Click(System::Object^ sender, System::EventArgs^ e) {
		addAdminPanel->Show();

	}
	private: System::Void button_to_users_Click(System::Object^ sender, System::EventArgs^ e) {
		addAdminPanel->Hide();

	}

	private: System::Void logout_Admin_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//return to sing page	
	}
	private: System::Void editAdminUsernameTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adminUsenameLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}


