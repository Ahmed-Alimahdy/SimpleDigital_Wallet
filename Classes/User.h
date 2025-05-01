#pragma once
#ifndef USER_H
#define USER_H
#include "payment.h"
#include "Classes\Transaction.h"

#include <string>
#include <unordered_map>
#include <list>
class user
{
private:
    string username;
    string email;
    string hashedPassword; // Removed duplicate declaration
    list<transaction> history_transaction;
    list<transaction> requested_transaction;
    double balance;

    bool suspended=false;


public:
    list<Payment> payment_methods;
    user();
    user(string uname, string mail, string hashedPwd);
    bool isSuspended();
    static unordered_map<string, user> allusers;

    user();
    user(string& uname, string& mail, string& hashedPwd);

    string getUsername();
    string getHashedPassword();
    string getEmail();
    double getBalance();

    //bool getsuspended();
    list<transaction> get_history_transaction();
    double calculate_balance();
    void setUsername(string uname);
    void setEmail(string mail);
    void setHashedPassword(string hashedPwd);
    void setBalance(double bal);
	void setSuspended(bool susp);
    void add_transaction(transaction);

    list<transaction> get_history_transaction();
    double calculate_balance();

};
#endif
