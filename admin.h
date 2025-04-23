#pragma once
#include <string>
#include <list>
#include <unordered_map>
#include "Classes/User.h"
#include "Classes/Transaction.h"
class Admin {
    string username, password;
public:
	Admin(string& uname, string& pass);
    static list<transaction> all_transactions;
	static unordered_map<string,Admin> all_admins;
    //getters
	string getUsername();
	string getPassword();
	//setters
	void setUsername(string& uname);
	void setPassword(string& pass);
     
};