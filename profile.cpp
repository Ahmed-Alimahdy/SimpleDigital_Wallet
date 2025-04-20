#include "profile.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(cli::array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SimpleDigitalWallet::profile form;
    Application::Run(% form);
}
