#pragma once

namespace SimpleDigitalWallet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::Form
	{
		void generate_payment_methods_panels()
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
				panel->BackColor = System::Drawing::Color::White;
				panel->Location = System::Drawing::Point(0, (i * 100));
				panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				Label^ payment_method_id_label = gcnew Label();
				payment_method_id_label->Text = gcnew String(/*t.getTimestampAsString().c_str()*/"Visa**** 1234");  //"1"
				payment_method_id_label->Location = System::Drawing::Point(17, 10);
				payment_method_id_label->AutoSize = true;
				Label^ payment_category_label = gcnew Label();
				/*if (t.getType() == TRANSACTION_TYPE::WITHDRAWAL || t.getType() == TRANSACTION_TYPE::REQUEST_MONEY)
					to_form_field->Text = "From";
				else*/
				payment_category_label->Text = "Bank Misr";
				payment_category_label->Location = System::Drawing::Point(17, 45);
				payment_category_label->AutoSize = true;
			
				Button^ remove_button = gcnew Button();
				remove_button->Text = "Remove"; //t.getAmount();
				remove_button->BackColor = System::Drawing::Color::Red; // Light red
				remove_button->ForeColor = System::Drawing::Color::White;   // Text color remains white
				remove_button->Location = System::Drawing::Point(370, 20);
				remove_button->AutoSize = true;
				remove_button->Size = System::Drawing::Size(70, 40);
				panel->Controls->Add(payment_method_id_label);
				panel->Controls->Add(payment_category_label);
				panel->Controls->Add(remove_button);
				this->Controls->Add(panel);
				this->scrollable_payment_panel->Controls->Add(panel);
			}
			//}
		}
	public:
		profile(void)
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
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(profile::typeid));
			this->scrollable_payment_panel = (gcnew System::Windows::Forms::Panel());
			this->manage_payment_method_label = (gcnew System::Windows::Forms::Label());
			this->black_panel = (gcnew System::Windows::Forms::Panel());
			this->logout_button = (gcnew System::Windows::Forms::Button());
			this->transaction_button = (gcnew System::Windows::Forms::Button());
			this->profile_button = (gcnew System::Windows::Forms::Button());
			this->home_button = (gcnew System::Windows::Forms::Button());
			this->wallet_icon = (gcnew System::Windows::Forms::PictureBox());
			this->wallet_label = (gcnew System::Windows::Forms::Label());
			this->black_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->BeginInit();
			this->SuspendLayout();
			// 
			// scrollable_payment_panel
			// 
			this->scrollable_payment_panel->AutoScroll = true;
			this->scrollable_payment_panel->BackColor = System::Drawing::Color::Transparent;
			this->scrollable_payment_panel->Location = System::Drawing::Point(690, 149);
			this->scrollable_payment_panel->Name = L"scrollable_payment_panel";
			this->scrollable_payment_panel->Size = System::Drawing::Size(480, 280);
			this->scrollable_payment_panel->TabIndex = 0;
			// 
			// manage_payment_method_label
			// 
			this->manage_payment_method_label->AutoSize = true;
			this->manage_payment_method_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->manage_payment_method_label->Location = System::Drawing::Point(684, 114);
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
			this->Controls->Add(this->black_panel);
			this->Controls->Add(this->manage_payment_method_label);
			this->Controls->Add(this->scrollable_payment_panel);
			this->Name = L"profile";
			this->Text = L"profile";
			this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
			this->black_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wallet_icon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void profile_Load(System::Object^ sender, System::EventArgs^ e) {
		generate_payment_methods_panels();
	}
	};
}
