//#include <string>
#include "Admin_UI.h"
#include "Classes/User.h"
#include "Classes/Admin.h"
#include "Classes/Transaction.h"
#include "Classes/payment.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SimpleDigitalWallet:: Admin_UI form;
	Application::Run(% form);
}

