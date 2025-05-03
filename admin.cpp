#include "Admin.h"

//static std::unordered_map<std::string, Admin> adminMap;
std::list<transaction> Admin::all_transactions;
std::unordered_map<std::string, Admin> Admin::adminMap;
Admin::Admin()
{
	this->username = "admin";
	this->password = "admin";
}

void Admin::addUser(string name, string email, string balance, string pass, bool su)
{
	user newUser(name, email, pass);
	newUser.setBalance(stod(balance));
	newUser.setSuspended(su);
	user::allusers.insert({ name, newUser });
}

void Admin::viewUserData()
{

}

void Admin::deleteUser(string k)
{
	user::allusers.erase(k);
}
//SUGGEST AHMED IBRAHIM && AHMED EZZAT

void Admin::updateUserData(string K, string Nname, string Nemail, string Nbalance, bool su)
{
    auto it = user::allusers.find(K);
    if (it != user::allusers.end()) {
        user updatedUser = it->second;
        updatedUser.setUsername(Nname);
        updatedUser.setEmail(Nemail);
        updatedUser.setBalance(stod(Nbalance));
        updatedUser.setSuspended(su);
        user::allusers.erase(it);
        user::allusers.insert({ Nname, updatedUser });
    }
}

Admin* Admin::currentAdmin = new Admin("admin", "admin");