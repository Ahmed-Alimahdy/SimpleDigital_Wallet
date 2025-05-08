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
    std::string encryptedPassword = xorEncryptDecrypt(password, 'K');

    size_t usernameLen = username.size();
    size_t passwordLen = encryptedPassword.size();

    os.write(reinterpret_cast<const char*>(&usernameLen), sizeof(usernameLen));
    os.write(username.c_str(), usernameLen);

    os.write(reinterpret_cast<const char*>(&passwordLen), sizeof(passwordLen));
    os.write(encryptedPassword.c_str(), passwordLen);
}

void Admin::deserialize(std::istream& is) {
    size_t usernameLen, passwordLen;
    char* buffer;

    if (!is.read(reinterpret_cast<char*>(&usernameLen), sizeof(usernameLen))) return;
    buffer = new char[usernameLen + 1];
    if (!is.read(buffer, usernameLen)) {
        delete[] buffer;
        return;
    }
    buffer[usernameLen] = '\0';
    username = xorEncryptDecrypt(std::string(buffer), 'K');
    delete[] buffer;

    if (!is.read(reinterpret_cast<char*>(&passwordLen), sizeof(passwordLen))) return;
    buffer = new char[passwordLen + 1];
    if (!is.read(buffer, passwordLen)) {
        delete[] buffer;
        return;
    }
    buffer[passwordLen] = '\0';
    password = xorEncryptDecrypt(std::string(buffer), 'K');
    delete[] buffer;
}



string Admin::xorEncryptDecrypt(const std::string& input, char key = 'K') {
    string output = input;
    for (char& c : output)
        c ^= key;
    return output;
}
void Admin::saveAlladmins(const std::string& filename) {
    std::ofstream ofs(filename);
    if (!ofs) return;

    ofs << adminMap.size() << '\n';
    for (auto& pair : adminMap) {
        pair.second.serialize(ofs);
    }

    // Save all transactions at the end
    ofs << all_transactions.size() << '\n';
    for (auto& t : all_transactions) {
        t.serialize(ofs);
    }

}


void Admin::loadAlladmins(const std::string& filename) {
    std::ifstream ifs(filename);
    if (!ifs) {
        adminMap.clear();
        all_transactions.clear();
        return;
    }

    ifs.seekg(0, std::ios::end);
    if (ifs.tellg() == 0) {
        adminMap.clear();
        all_transactions.clear();
        ifs.close();
        return;
    }
    ifs.seekg(0, std::ios::beg);

    size_t count;
    if (!(ifs >> count)) {
        adminMap.clear();
        all_transactions.clear();
        ifs.close();
        return;
    }
    ifs.ignore(); // Ignore newline

    adminMap.clear();
    for (size_t i = 0; i < count; ++i) {
        Admin a;
        try {
            a.deserialize(ifs);
            if (ifs.fail()) continue;
            adminMap[a.username] = a;
        }
        catch (...) {
            continue;
        }
    }

    // Load all transactions
    size_t t_size;
    if (!(ifs >> t_size)) {
        all_transactions.clear();
        return;
    }
    ifs.ignore(); // Ignore newline

    all_transactions.clear();
    for (size_t i = 0; i < t_size; ++i) {
        transaction t;
        t.deserialize(ifs);
        all_transactions.push_back(t);
    }

    ifs.close();
}
