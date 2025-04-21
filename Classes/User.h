#pragma once
#include "Classes\Transaction.h"
#include <string>
#include <unordered_map>
#include <list>
using namespace std;
class user
{
private:
    string username;
    string email;
    string hashedPassword; // Removed duplicate declaration
    list<transaction> history_transaction;
    list<transaction> requested_transaction;
    double balance;

public:
    static unordered_map<string, user> allusers;
    user();
    user(string& uname, string& mail, string& hashedPwd);
    string getUsername();
    string getHashedPassword();
    string getEmail();
    double getBalance();
    list<transaction> get_history_transaction();
    double calculate_balance();
};
