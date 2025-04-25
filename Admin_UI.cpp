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
int main(cli::array<String^>^ args) {
    //user u1( "ahmed", "ahmed", "ahmed");
    //u1.balance = 5000.0;
    //string username = "ahmed";
    //string email = "ahmed";
    //string password = "ahmed";
    //user newUser(username, email, password);
    //Admin A1();
    string uname = "ahmed";
    string mail = "ahmed";
    string hashedPwd = "ahmed";
    user u1(uname, mail, hashedPwd);
	transaction t1("ahmed", "mohamed", 100, TRANSACTION_TYPE::SEND_MONEY, RequestStatus::NONE);
	//u1.history_transaction.push_back(t1);
	u1.add_transaction(t1);
	Admin::all_transactions.push_back(t1);
	transaction t2("ahmed", "mohamed", 200, TRANSACTION_TYPE::REQUEST_MONEY, RequestStatus::ACCEPTED);
	//u1.history_transaction.push_back(t2);
	u1.add_transaction(t2);
	Admin::all_transactions.push_back(t2);
	Payment p1("123456789", "Visa");
	u1.payment_methods.push_back(p1);
    Payment p2("55895", "Vodafone");
    u1.payment_methods.push_back(p2);
    Payment p4("55895", "Vodafone");
    u1.payment_methods.push_back(p4);
    Payment p5("55895", "Vodafone");
    u1.payment_methods.push_back(p5);
    user::allusers.insert({ uname, u1 });
    //id = "mohamed";
    uname = "mohamed";
    mail = "mohamed";
    hashedPwd = "mohamed";
    //Payment p2("55895", "Vodafone");
    user u2(uname, mail, hashedPwd);
    //u2.balance = 200.0;
	u2.setSuspended(true);
    user::allusers.insert({ uname, u2 });
    //id = "amir";
    uname = "amir";
    mail = "amir";
    hashedPwd = "amir";
    user u3(uname, mail, hashedPwd);
    //u3.balance = 1000.0;
    transaction t3("ibrahim", "sayed", 5000, TRANSACTION_TYPE::REQUEST_MONEY, RequestStatus::DECLINED);
    //u3.history_transaction.push_back(t3);
	u3.add_transaction(t3);
	Admin::all_transactions.push_back(t3);
	//transaction t4("ibrahim", "sayed", 5000, TRANSACTION_TYPE::WITHDRAWAL, RequestStatus::NONE);
	////u3.history_transaction.push_back(t4);
	Payment p3("149852", "Bank");
	u3.payment_methods.push_back(p3);
    user::allusers.insert({ uname, u3 });

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SimpleDigitalWallet::Admin_UI form;
    Application::Run(% form);
     

}

