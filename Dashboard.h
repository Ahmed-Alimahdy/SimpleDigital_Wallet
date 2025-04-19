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
	private: System::Windows::Forms::Label^ transaction_history_label;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::Panel^ scrollable_transaction_panel;












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
			this->transaction_history_label = (gcnew System::Windows::Forms::Label());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->scrollable_transaction_panel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
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
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 800);
			this->Controls->Add(this->scrollable_transaction_panel);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->transaction_history_label);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
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
}
private: System::Void sender_reciever_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
