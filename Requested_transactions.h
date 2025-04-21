#pragma once
namespace SimpleDigitalWallet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for Requested_transactions
	/// </summary>
	public ref class Requested_transactions : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel;

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
			   button->Paint += gcnew PaintEventHandler(this, &Requested_transactions::DrawRoundedButtonBorder);
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


	private: System::Void GeneratePanels() {
		int panelCount = 12;
		for (int i = 0; i < panelCount; i++) {
			Panel^ panel = gcnew Panel();
			panel->Size = System::Drawing::Size(350, 150); 
			panel->BackColor = System::Drawing::Color::LightGray;
			panel->Margin = System::Windows::Forms::Padding(10); 







			Label^ label = gcnew Label();
			label->Text = "John Smith";
			label->AutoSize = true;
			label->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold); // Increased font size
			label->Location = System::Drawing::Point(90, 30);
			panel->Controls->Add(label);

			Label^ sender_label = gcnew Label();
			sender_label->Text = "Sender: ";
			sender_label->AutoSize = true;
			sender_label->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold); // Increased font size
			sender_label->Location = System::Drawing::Point(20, 30);
			panel->Controls->Add(sender_label);

			Label^ amount_label = gcnew Label();
			amount_label->Text = "Amount: $";
			amount_label->AutoSize = true;
			amount_label->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold); // Increased font size
			amount_label->Location = System::Drawing::Point(20, 70);
			panel->Controls->Add(amount_label);

			Label^ amount_label2 = gcnew Label();
			amount_label2->Text = "200";
			amount_label2->AutoSize = true;
			amount_label2->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold); // Increased font size
			amount_label2->Location = System::Drawing::Point(110, 70);
			panel->Controls->Add(amount_label2);

			Button^ accept_button= gcnew Button();
			accept_button->Text = "Accept";
			accept_button->AutoSize = true;
			accept_button->BackColor = System::Drawing::Color::Green;
			accept_button->ForeColor = System::Drawing::Color::White;
			accept_button->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold); // Increased font size
			accept_button->Location = System::Drawing::Point(190, 100);
			accept_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			accept_button->FlatAppearance->BorderColor = accept_button->BackColor;
			accept_button->FlatAppearance->BorderSize = 1;
			panel->Controls->Add(accept_button);

			Button^ deny_button = gcnew Button();
			deny_button->Text = "Deny";
			deny_button->AutoSize = true;
			deny_button->BackColor = System::Drawing::Color::Gray;
			deny_button->ForeColor = System::Drawing::Color::Black;
			deny_button->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold); // Increased font size
			deny_button->Location = System::Drawing::Point(270, 100);
			deny_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			deny_button->FlatAppearance->BorderColor = deny_button->BackColor;
			deny_button->FlatAppearance->BorderSize = 1;
			panel->Controls->Add(deny_button);

			MakeRoundedButton(accept_button, 7);
			MakeRoundedButton(deny_button, 7);
			MakeRoundedPanel(panel, 7);
			// Add the panel to the FlowLayoutPanel
			flowLayoutPanel->Controls->Add(panel);
		}
	}

	public:
		Form^ form1;
		Requested_transactions(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Requested_transactions(Form ^form)
		{
			InitializeComponent();
			form1 = form;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Requested_transactions()
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
	private: System::Windows::Forms::Label^ requsted_transaction_label;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Requested_transactions::typeid));
			this->black_panel = (gcnew System::Windows::Forms::Panel());
			this->logout_button = (gcnew System::Windows::Forms::Button());
			this->transaction_button = (gcnew System::Windows::Forms::Button());
			this->profile_button = (gcnew System::Windows::Forms::Button());
			this->home_button = (gcnew System::Windows::Forms::Button());
			this->wallet_icon = (gcnew System::Windows::Forms::PictureBox());
			this->wallet_label = (gcnew System::Windows::Forms::Label());
			this->requsted_transaction_label = (gcnew System::Windows::Forms::Label());
			this->black_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->BeginInit();
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
			this->profile_button->Click += gcnew System::EventHandler(this, &Requested_transactions::profile_button_Click);
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
			this->home_button->Click += gcnew System::EventHandler(this, &Requested_transactions::home_button_Click);
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
			// requsted_transaction_label
			// 
			this->requsted_transaction_label->AutoSize = true;
			this->requsted_transaction_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->requsted_transaction_label->Location = System::Drawing::Point(12, 86);
			this->requsted_transaction_label->Name = L"requsted_transaction_label";
			this->requsted_transaction_label->Size = System::Drawing::Size(321, 32);
			this->requsted_transaction_label->TabIndex = 2;
			this->requsted_transaction_label->Text = L"Requested_transactions";
			// 
			// Requested_transactions
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1182, 753);
			this->Controls->Add(this->requsted_transaction_label);
			this->Controls->Add(this->black_panel);
			this->Name = L"Requested_transactions";
			this->Text = L"Requested_transactions";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Requested_transactions::Requested_transactions_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Requested_transactions::Requested_transactions_Load);
			this->black_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Requested_transactions_Load(System::Object^ sender, System::EventArgs^ e) {
		// Initialize the FlowLayoutPanel
		flowLayoutPanel = gcnew System::Windows::Forms::FlowLayoutPanel();
		flowLayoutPanel->Location = System::Drawing::Point(12, 130); // Adjust position as needed
		flowLayoutPanel->Size = System::Drawing::Size(1150, 600); // Adjust size as needed
		flowLayoutPanel->AutoScroll = true;
		flowLayoutPanel->FlowDirection = System::Windows::Forms::FlowDirection::LeftToRight;
		flowLayoutPanel->WrapContents = true;
		flowLayoutPanel->BackColor = System::Drawing::Color::White;

		// Add the FlowLayoutPanel to the form
		this->Controls->Add(flowLayoutPanel);

		// Generate panels dynamically
		GeneratePanels();
	}
	private: System::Void home_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		form1->Show();
	}
private: System::Void profile_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	form1->Show();
}
private: System::Void Requested_transactions_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
}
};
}
