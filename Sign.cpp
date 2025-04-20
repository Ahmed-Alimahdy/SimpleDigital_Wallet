#include "Sign.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SimpleDigitalWallet::Sign form;
	Application::Run(% form);
}