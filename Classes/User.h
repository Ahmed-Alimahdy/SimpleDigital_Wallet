#pragma once
//#ifndef USER_H
//#define USER_H
#include "Transaction.h"
#include "payment.h"
#include <string>
#include <unordered_map>
#include <list>
//#include"Transaction.h"
class user
{
private:
    string username;
    string email;
    string hashedPassword;
    list<transaction> requested_transaction;
    double balance;
    bool suspended=false;

public:
    list<Payment> payment_methods;
    list<transaction> history_transaction;
    user();
    user(string& uname, string& mail, string& hashedPwd);
    static unordered_map<string, user> allusers;
    string getUsername();
    string getHashedPassword();
    string getEmail();
    double getBalance();
    bool getsuspended();
    list<transaction> get_history_transaction();
    double calculate_balance();
    void setUsername(string& uname);
    void setHashedPassword(string& hashedPwd);
    void setEmail(string& mail);
    void setBalance(double balance);
	void setSuspended(bool suspended);
};
