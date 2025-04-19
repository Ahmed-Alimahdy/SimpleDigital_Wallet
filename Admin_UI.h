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
	private: System::Windows::Forms::Panel^ Side_panal;
	protected:
	private: System::Windows::Forms::Panel^ panel1;

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
			this->Side_panal = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Side_panal
			// 
			this->Side_panal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Side_panal->Dock = System::Windows::Forms::DockStyle::Left;
			this->Side_panal->Location = System::Drawing::Point(0, 0);
			this->Side_panal->Name = L"Side_panal";
			this->Side_panal->Size = System::Drawing::Size(217, 761);
			this->Side_panal->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(214, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(970, 761);
			this->panel1->TabIndex = 1;
			// 
			// Admin_UI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 761);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Side_panal);
			this->Name = L"Admin_UI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_UI";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
