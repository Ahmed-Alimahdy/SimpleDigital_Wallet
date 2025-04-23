#pragma once


namespace SimpleDigitalWallet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin_UI
	/// </summary>
	public ref class Admin_UI : public System::Windows::Forms::Form
	{
	public:
		Admin_UI(void)
		{
			InitializeComponent();
			MakeRoundedPanel(scrollableTransactionsPanel, 20);
			generate_transaction_history_panels();
			editAdminPasswordTextbox->Hide();
			editAdminUsernameTextbox->Hide();
			confirmEditAdmin->Hide();
			cancelEditAdmin->Hide();
			addAdminConfirmationLabel->Hide();
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

	private: System::Windows::Forms::Panel^ topPanel;

	private: System::Windows::Forms::Label^ addAdminLabel;
	private: System::Windows::Forms::TextBox^ editAdminPasswordTextbox;
	private: System::Windows::Forms::TextBox^ editAdminUsernameTextbox;
	private: System::Windows::Forms::Button^ confirmEditAdmin;
	private: System::Windows::Forms::Button^ cancelEditAdmin;
	private: System::Windows::Forms::Label^ addAdminConfirmationLabel;




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
			this->decLine1 = (gcnew System::Windows::Forms::Panel());
			this->addAdminPanel = (gcnew System::Windows::Forms::Panel());
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
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->addAdminPanel->SuspendLayout();
			this->allTransactionsPanel->SuspendLayout();
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
			this->addAdminPanel->Location = System::Drawing::Point(0, 67);
			this->addAdminPanel->Name = L"addAdminPanel";
			this->addAdminPanel->Size = System::Drawing::Size(1184, 682);
			this->addAdminPanel->TabIndex = 1;
			this->addAdminPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin_UI::transactionsPanel_Paint);
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
			this->confirmEditAdmin->Location = System::Drawing::Point(369, 88);
			this->confirmEditAdmin->Name = L"confirmEditAdmin";
			this->confirmEditAdmin->Size = System::Drawing::Size(75, 23);
			this->confirmEditAdmin->TabIndex = 16;
			this->confirmEditAdmin->Text = L"Confirm";
			this->confirmEditAdmin->UseVisualStyleBackColor = true;
			this->confirmEditAdmin->Click += gcnew System::EventHandler(this, &Admin_UI::confirmEditAdmin_Click);
			// 
			// cancelEditAdmin
			// 
			this->cancelEditAdmin->Location = System::Drawing::Point(450, 88);
			this->cancelEditAdmin->Name = L"cancelEditAdmin";
			this->cancelEditAdmin->Size = System::Drawing::Size(75, 23);
			this->cancelEditAdmin->TabIndex = 15;
			this->cancelEditAdmin->Text = L"Cancel";
			this->cancelEditAdmin->UseVisualStyleBackColor = true;
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
			this->editAdminUsernameTextbox->Location = System::Drawing::Point(37, 50);
			this->editAdminUsernameTextbox->Name = L"editAdminUsernameTextbox";
			this->editAdminUsernameTextbox->Size = System::Drawing::Size(167, 24);
			this->editAdminUsernameTextbox->TabIndex = 13;
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
			this->scrollableTransactionsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
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
			this->editAdminProfileBtn->Location = System::Drawing::Point(450, 88);
			this->editAdminProfileBtn->Name = L"editAdminProfileBtn";
			this->editAdminProfileBtn->Size = System::Drawing::Size(75, 23);
			this->editAdminProfileBtn->TabIndex = 10;
			this->editAdminProfileBtn->Text = L"Edit";
			this->editAdminProfileBtn->UseVisualStyleBackColor = true;
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
			this->addAdminUsernameTextfield->TextChanged += gcnew System::EventHandler(this, &Admin_UI::textBox1_TextChanged);
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
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::Green;
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(1184, 68);
			this->topPanel->TabIndex = 12;
			this->topPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin_UI::topPanel_Paint);
			// 
			// Admin_UI
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1184, 749);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->addAdminPanel);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void transactionsPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void switchToAdminProfileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	allTransactionsPanel->Hide();
	
}
private: System::Void switchToAllTransactionsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	allTransactionsPanel->Show();
}


	   /////////////////





	   void MakeRoundedPanel(Panel^ panel, int radius) {
		   System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
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
		   
		   for (int i = 0; i < 20; i++)
		   {
			   
			   Panel^ panel = gcnew Panel();
			   panel->Size = System::Drawing::Size(530, 83);
			   panel->BackColor = System::Drawing::SystemColors::ControlLight;
			   panel->Location = System::Drawing::Point(0, (i * 100));
			   MakeRoundedPanel(panel, 15);
			   Label^ transaction_date_label = gcnew Label();
			   transaction_date_label->Text = gcnew String("19/4/2025"); 
			   transaction_date_label->Location = System::Drawing::Point(17, 10);
			   transaction_date_label->AutoSize = true;
			   Label^ to_form_field = gcnew Label();

			   Label^ status_label = gcnew Label();
			   status_label->Text = gcnew String("Status : " + "Completed");  
			   status_label->Location = System::Drawing::Point(290, 10);  
			   panel->Controls->Add(status_label);

			   Label^ from_label = gcnew Label();
			   from_label->Text = gcnew String("From: " + "Sender");
			   from_label->Location = System::Drawing::Point(50, 60); 
			   panel->Controls->Add(from_label);
			   
			   to_form_field->Text = gcnew String("To : " + "Recepient");
			   to_form_field->Location = System::Drawing::Point(50, 40);
			   to_form_field->AutoSize = true;
			   Label^ sender_reciever_label = gcnew Label();
			  
			   
			   sender_reciever_label->Location = System::Drawing::Point(146, 45);
			   sender_reciever_label->AutoSize = true;
			   Label^ amount_label = gcnew Label();
			   amount_label->Text = "amount : " + "100" + "$";
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

	//adminMap[addAdminUsernameTextfield->Text] = new Admin(username = addAdminUsernameTextfield->Text, password = addAdminPasswordTextfield->Text);
	addAdminConfirmationLabel->Show();
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
private: System::Void confirmEditAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	//std::string oldUsername = adminUsernameLabel->Text;
	//std::string newUsername = editAdminUsernameTextbox->Text;
	//if (adminMap.find(oldUsername) != adminMap.end()) {
	//	Admin tempAdmin = adminMap[oldUsername];
	//	tempAdmin.username = newUsername;
	//	adminMap.erase(oldUsername);
	//	adminMap[newUsername] = tempAdmin;
	//}
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
private: System::Void topPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Admin_UI_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addAdminConfirmationLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};

