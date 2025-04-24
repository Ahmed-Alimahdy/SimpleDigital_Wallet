#pragma once
#include <string>
#include <list>
#include "User.h"
class Admin {
public:
    std::string username, password;
    Admin();
	Admin(std::string username, std::string password) : username(username), password(password) {}
    static std::list<transaction> all_transactions;
	static Admin currentAdmin;
    static std::unordered_map<std::string, Admin> adminMap;
    //void adminDashboard();
    void viewAllUsers();//GUI
    user findUser(); //user class behaviour,not needed

    void addUser(string name, string email, string balance,string pass,bool su);
    void viewUserData();//GUI
    void deleteUser(string k);
    void updateUserData(string K,string Nname,string Nemail,string Nbalance, bool su);
    void suspendUser(user);

    void viewAllTransactions();

    void logout();
    void addAdmin();
};