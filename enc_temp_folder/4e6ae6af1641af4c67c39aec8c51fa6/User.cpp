#include"Classes/User.h"
using namespace std;
user::user()
{
	username = "";
	hashedPassword = "";
	email = "";
	balance = 0;
	suspended = false;
}
user::user(string& uname, string& mail, string& hashedPwd)
{
	username = uname;
	email = mail;
	hashedPassword = hashedPwd;
	balance = 0;
	suspended = false;
	history_transaction.push_back(transaction("ahmed", "ali", 1000, TRANSACTION_TYPE::SEND_MONEY, RequestStatus::ACCEPTED));
	history_transaction.push_back(transaction("ahmed", "ali", 1000, TRANSACTION_TYPE::REQUEST_MONEY, RequestStatus::DECLINED));
}
unordered_map<string, user> user::allusers;
string user::getUsername()
{
	return username;
}
string user::getEmail()
{
	return email;
}
string user::getHashedPassword()
{
	return hashedPassword;
}
double user::getBalance()
{
	return balance;
}
double user::calculate_balance()
{
	double total = 0;
	for (auto& transaction : history_transaction)
	{
		if (transaction.getType() == TRANSACTION_TYPE::SEND_MONEY)
			total -= transaction.getAmount();
		else if (transaction.getType() == TRANSACTION_TYPE::DEPOSIT)
			total += transaction.getAmount();
	}
	return total;
}
list<transaction> user::get_history_transaction()
{
	return history_transaction;
}
bool user::isSuspended()
{
	return suspended;
}
