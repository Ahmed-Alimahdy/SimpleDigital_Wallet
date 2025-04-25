#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SimpleDigitalWallet {

	/// <summary>
	/// Summary for User_Control
	/// </summary>
	public ref class User_Control : public System::Windows::Forms::UserControl
	{
	public:
		User_Control(void)
		{
			InitializeComponent();
			MakeRoundedPanel(panel1, 25);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~User_Control()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ LB_Name;
	
	protected:
	public: System::Windows::Forms::Label^ LB_Email;
	public: System::Windows::Forms::Label^ LB_Balance;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	public: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ clickable_button;

	public:

	public:

	public:
	private:

	protected:




	public:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(User_Control::typeid));
			this->LB_Name = (gcnew System::Windows::Forms::Label());
			this->LB_Email = (gcnew System::Windows::Forms::Label());
			this->LB_Balance = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->clickable_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LB_Name
			// 
			this->LB_Name->AutoSize = true;
			this->LB_Name->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LB_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Name->Location = System::Drawing::Point(104, 26);
			this->LB_Name->Name = L"LB_Name";
			this->LB_Name->Size = System::Drawing::Size(181, 29);
			this->LB_Name->TabIndex = 0;
			this->LB_Name->Text = L"ahmed ebrahim";
			this->LB_Name->Click += gcnew System::EventHandler(this, &User_Control::LB_Name_Click);
			// 
			// LB_Email
			// 
			this->LB_Email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LB_Email->AutoSize = true;
			this->LB_Email->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LB_Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Email->Location = System::Drawing::Point(104, 60);
			this->LB_Email->Name = L"LB_Email";
			this->LB_Email->Size = System::Drawing::Size(388, 29);
			this->LB_Email->TabIndex = 2;
			this->LB_Email->Text = L"ahmedebrahim200515@gmail.com";
			this->LB_Email->Click += gcnew System::EventHandler(this, &User_Control::LB_Email_Click);
			// 
			// LB_Balance
			// 
			this->LB_Balance->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LB_Balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB_Balance->Location = System::Drawing::Point(355, 26);
			this->LB_Balance->Name = L"LB_Balance";
			this->LB_Balance->Size = System::Drawing::Size(202, 29);
			this->LB_Balance->TabIndex = 3;
			this->LB_Balance->Text = L"5000";
			this->LB_Balance->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->LB_Balance->Click += gcnew System::EventHandler(this, &User_Control::LB_Balance_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(23, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->LB_Balance);
			this->panel1->Controls->Add(this->LB_Email);
			this->panel1->Controls->Add(this->LB_Name);
			this->panel1->Controls->Add(this->clickable_button);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(566, 105);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &User_Control::panel1_Paint);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &User_Control::panel1_MouseUp);
			// 
			// clickable_button
			// 
			this->clickable_button->BackColor = System::Drawing::Color::Transparent;
			this->clickable_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clickable_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clickable_button->FlatAppearance->BorderSize = 0;
			this->clickable_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clickable_button->Location = System::Drawing::Point(0, 0);
			this->clickable_button->Name = L"clickable_button";
			this->clickable_button->Size = System::Drawing::Size(566, 105);
			this->clickable_button->TabIndex = 5;
			this->clickable_button->UseVisualStyleBackColor = false;
			this->clickable_button->Click += gcnew System::EventHandler(this, &User_Control::clickable_button_Click);
			// 
			// User_Control
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->Controls->Add(this->panel1);
			this->Name = L"User_Control";
			this->Size = System::Drawing::Size(566, 128);
			this->Load += gcnew System::EventHandler(this, &User_Control::User_Control_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

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
#pragma endregion
	public:delegate void UserControlClickEventHandler(Object^ sender, User_Control^ userControl);
	public:event UserControlClickEventHandler^ OnUserControlClick;
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void LB_Balance_Click(System::Object^ sender, System::EventArgs^ e) {
	OnUserControlClick(this, this);

}
private: System::Void LB_Name_Click(System::Object^ sender, System::EventArgs^ e) {
	OnUserControlClick(this, this);

}
private: System::Void User_Control_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void panel1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		//panel1->BackColor = System::Drawing::SystemColors::ControlDark;
		panel1->Cursor = System::Windows::Forms::Cursors::Hand;
}
private: System::Void panel1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//panel1->BackColor = System::Drawing::SystemColors::ControlLight;

}
private: System::Void panel1_Click(System::Object^ sender, System::EventArgs^ e) {
	//panel1->BackColor = System::Drawing::SystemColors::ControlDark;


}
private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	panel1->BackColor = System::Drawing::SystemColors::ControlDark;
	LB_Name->BackColor = System::Drawing::SystemColors::ControlDark;
	LB_Email->BackColor = System::Drawing::SystemColors::ControlDark;
	LB_Balance->BackColor = System::Drawing::SystemColors::ControlDark;
	pictureBox1->BackColor = System::Drawing::SystemColors::ControlDark;
}

private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	panel1->BackColor = System::Drawing::SystemColors::ControlLight;
	LB_Name->BackColor = System::Drawing::SystemColors::ControlLight;
	LB_Email->BackColor = System::Drawing::SystemColors::ControlLight;
	LB_Balance->BackColor = System::Drawing::SystemColors::ControlLight;
	pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
	OnUserControlClick(this, this);
	//panel1->BackColor = System::Drawing::SystemColors::ControlLight;
	//panel1->Cursor = System::Windows::Forms::Cursors::Hand;
	//panel1->BackColor = System::Drawing::SystemColors::ControlDark;
	//MessageBox::Show("hi");
	//this->ParentForm->Hide();
	//this->ParentForm->Show();
	//this->ParentForm->Close();
	//this->ParentForm->Show();
	//this->ParentForm->Hide();
}
private: System::Void clickable_button_Click(System::Object^ sender, System::EventArgs^ e) {
	OnUserControlClick(this, this);

}
private: System::Void LB_Email_Click(System::Object^ sender, System::EventArgs^ e) {
	OnUserControlClick(this, this);

}
};
}
