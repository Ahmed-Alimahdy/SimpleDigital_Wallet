#pragma once
#ifndef USER_H
#define USER_H
#include "Transaction.h"
#include "payment.h"
#include <string>
#include <unordered_map>
#include <list>
class user
{
private:
    string username;
    string email;
    string hashedPassword;
    list<transaction> history_transaction;
    list<transaction> requested_transaction;
    list<Payment> payment_methods;
    double balance;
    bool suspended;

public:
    user();
    user(string uname, string mail, string hashedPwd);
    // Getters
    bool isSuspended();
    static unordered_map<string, user> allusers;
    string getUsername();
    string getHashedPassword();
    string getEmail();
    double getBalance();
    list<transaction> get_history_transaction();
    double calculate_balance();
    //setters
	void setUsername(string uname);
	void setEmail(string mail);
	void setHashedPassword(string hashedPwd);
	void setBalance(double bal);
	void setSuspended(bool susp);
    void add_to_historytransaction(transaction);
	void add_to_requestedtransaction(transaction);
	void add_payment_method(Payment payment);
	void remove_payment_method(string number);
	void remove_from_requestedtransaction(string);
};
#endif
