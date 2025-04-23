#include"admin.h"
Admin::Admin(string& uname, string& pass)
{
	username = uname;
	password = pass;
}
string Admin::getUsername()
{
	return username;
}
string Admin::getPassword()
{
	return password;
}
void Admin::setUsername(string& uname)
{
	username = uname;
}
void Admin::setPassword(string& pass)
{
	password = pass;
}