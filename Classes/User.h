#pragma once
#ifndef USER_H
#define USER_H
#include "Classes\Transaction.h"
#include "Classes\payment.h"
#include <string>
#include <unordered_map>
#include <list>
#include"Transaction.h"
class user
{
private:
    string username;
    string email;
    string hashedPassword; 
    list<transaction> history_transaction;
    list<transaction> requested_transaction;
	list<PaymentGateway> payment_methods;
    double balance;
	bool suspended;

public:
    user();
    user(string& uname, string& mail, string& hashedPwd);
    static unordered_map<string, user> allusers;
    string getUsername();
    string getHashedPassword();
    string getEmail();
    double getBalance();
    list<transaction> get_history_transaction();
    double calculate_balance();
};
#endif
