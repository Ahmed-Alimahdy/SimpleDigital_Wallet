#pragma once
#ifndef USER_H
#define USER_H
#include <unordered_map>
#include <list>
#include"Transaction.h"
class user
{
private:
    string username;
    string email;
    string hashedPassword;
    list<transaction> requested_transaction;
public:
    double balance;
    list<transaction> history_transaction;
    static unordered_map<string, user> allusers;
    string getUsername();
    string getEmail();
    double getBalance();
    unordered_map<string, user>& getAllusers();
    list<transaction> get_history_transaction();
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
#endif
