#include "Admin.h"
using namespace std;
#include <fstream>
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
void Admin::serialize(std::ostream& os) {
    std::string encryptedUsername = xorEncryptDecrypt(username,'K');
    std::string encryptedPassword = xorEncryptDecrypt(password,'K');

    size_t usernameLen = encryptedUsername.size();
    size_t passwordLen = encryptedPassword.size();
    for (auto& t : all_transactions)
        t.serialize(os);
    os.write(reinterpret_cast<const char*>(&usernameLen), sizeof(usernameLen));
    os.write(encryptedUsername.c_str(), usernameLen);

    os.write(reinterpret_cast<const char*>(&passwordLen), sizeof(passwordLen));
    os.write(encryptedPassword.c_str(), passwordLen);
}


void Admin::deserialize(std::istream& is) {
    size_t usernameLen, passwordLen;
    char* buffer;

    // Read and decrypt username
    is.read(reinterpret_cast<char*>(&usernameLen), sizeof(usernameLen));
    buffer = new char[usernameLen + 1];
    is.read(buffer, usernameLen);
    buffer[usernameLen] = '\0';
    username = xorEncryptDecrypt(std::string(buffer),'K');
    delete[] buffer;
    
    // Read and decrypt password
    is.read(reinterpret_cast<char*>(&passwordLen), sizeof(passwordLen));
    buffer = new char[passwordLen + 1];
    is.read(buffer, passwordLen);
    buffer[passwordLen] = '\0';
    password = xorEncryptDecrypt(std::string(buffer),'K');
    delete[] buffer;

    //// Deserialize history_transaction
    //size_t h_size;
    //is >> h_size;
    //is.ignore();
    //all_transactions.clear();
    //for (size_t i = 0; i < h_size; ++i) {
    //    transaction t;
    //    t.deserialize(is);
    //    all_transactions.push_back(t);
    //}
}

string Admin::xorEncryptDecrypt(const std::string& input, char key = 'K') {
    string output = input;
    for (char& c : output)
        c ^= key;
    return output;
}
void Admin::saveAlladmins(const std::string& filename) {
    std::ofstream ofs(filename, std::ios::binary);
    if (!ofs) {
        //std::cerr << "Error opening file for saving admins: " << filename << std::endl;
        return;
    }

    size_t count = adminMap.size();
    ofs.write(reinterpret_cast<const char*>(&count), sizeof(count));

    for (auto& pair : adminMap) {
        pair.second.serialize(ofs);
    }

    ofs.close();
}
void Admin::loadAlladmins(const std::string& filename) {
    std::ifstream ifs(filename, std::ios::binary);
    if (!ifs) {
       // cerr << "Admin file not found: " << filename << std::endl;
        return;
    }

    size_t count;
    ifs.read(reinterpret_cast<char*>(&count), sizeof(count));

    for (size_t i = 0; i < count; ++i) {
        Admin a;
        a.deserialize(ifs);
        adminMap[a.username] = a;
    }

    ifs.close();
}


