#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include <list>
#include <unordered_map>
#include "Classes/User.h"
#include "Classes/Transaction.h"
class Admin {
    string username, password;
public:
	Admin(string& uname, string& pass);
	list<transaction> alltransactions;
	static unordered_map<string,Admin> all_admins;
    //getters
	string getUsername();
	string getPassword();
	//setters
	void setUsername(string& uname);
	void setPassword(string& pass);
     
};
#endif