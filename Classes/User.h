#pragma once
#include <string>
#include <unordered_map>
#include <list>
using namespace std;
class user
{
private:
    string username;
    string email;
    //list<transaction> history_transaction;
    //list<transaction> requested_transaction;
    double balance;
public:
    static unordered_map<string, user> allusers;
    user();
    user(string& uname, string& mail, string& hashedPwd);
    string hashedPassword;
    string getUsername();
    string getEmail();
    double getBalance();
    unordered_map<string, user>& getAllusers();
    //list<transaction> get_history_transaction();
    double calculate_balance();
    void edit_balance();
    void display_transaction_history();
    void add_to_transaction_history();
    void send_request(double, string);
    void send_money(double, string);
    void edit_profile(string, string, string, string);
    void change_password(string, string);
    void delete_account();
};
