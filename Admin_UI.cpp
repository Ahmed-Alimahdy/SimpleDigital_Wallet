#include "Admin_UI.h"



using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SimpleDigitalWallet:: Admin_UI form;
	Application::Run(% form);
}