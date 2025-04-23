#include"User.h"
using namespace std;
user::user()
{
	username = "";
	hashedPassword = "";
	email = "";
	balance = 0;
}
user::user(string& uname, string& mail, string& hashedPwd)
{
	username = uname;
	email = mail;
	hashedPassword = hashedPwd;
	balance = 0;
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
bool user::getsuspended()
{
	return this->suspended;
}
void user::setSuspended(bool suspended)
{
	this->suspended = suspended;
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
void user::setUsername(string& uname)
{
	this->username = uname;
}
void user::setHashedPassword(string& hashedPwd)
{
	this->hashedPassword = hashedPwd;
}
void user::setEmail(string& mail)
{
	this->email = mail;
}
void user::setBalance(double balance)
{
	this->balance = balance;
}
list<transaction> user::get_history_transaction()
{
	return history_transaction;
}