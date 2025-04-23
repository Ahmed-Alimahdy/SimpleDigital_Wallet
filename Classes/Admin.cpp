#include "Admin.h"

static std::unordered_map<std::string, Admin> adminMap;
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

void Admin::updateUserData(string K, string Nname, string Nemail, string Nbalance,bool su)
{
	auto ur_Ed = user::allusers.extract(K);
	ur_Ed.key() = Nname;
	ur_Ed.mapped().setUsername(ur_Ed.key());
	ur_Ed.mapped().setEmail(Nemail);
	ur_Ed.mapped().setBalance(stoi(Nbalance));
	ur_Ed.mapped().setSuspended(su);
	user::allusers.insert(std::move(ur_Ed));

}
