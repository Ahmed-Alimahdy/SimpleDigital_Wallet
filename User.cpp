#include"Classes/User.h"
#include <iostream>
#include <fstream> 
using namespace std;
user::user()
{
	username = "";
	hashedPassword = "";
	email = "";
	balance = 0;
	suspended = false;
}
user::user(string uname, string mail, string hashedPwd)
{
	username = uname;
	email = mail;
	hashedPassword = hashedPwd;
	balance = 0;
	suspended = false;
}
unordered_map<string, user> user::allusers;
string user::getUsername()
{
	return username;
}
string user::getEmail()
{
	return email;
}
string user::getHashedPassword()
{
	return hashedPassword;
}
double user::getBalance()
{
	return balance;
}
double user::calculate_balance()
{
	double total = 0;
	for (auto& transaction : history_transaction)
	{
		if (transaction.getType() == TRANSACTION_TYPE::SEND_MONEY)
			total -= transaction.getAmount();
		else if (transaction.getType() == TRANSACTION_TYPE::DEPOSIT)
			total += transaction.getAmount();
	}
	return total;
}
list<transaction> user::get_requested_transaction()
{
	return requested_transaction;
}
list<transaction> user::get_history_transaction()
{
	return history_transaction;
}
bool user::isSuspended()
{
	return suspended;
}
list<Payment> user::get_payment_methods()
{
	return payment_methods;
}
void user::setUsername(string uname)
{
	username = uname;
}
void user::setEmail(string mail)
{
	email = mail;
}
void user::setHashedPassword(string hashedPwd)
{
	hashedPassword = hashedPwd;
}
void user::setBalance(double bal)
{
	balance = bal;
}
void user::setSuspended(bool susp)
{
	suspended = susp;
}
void user::add_to_historytransaction(transaction trans)
{
	history_transaction.push_back(trans);
}
void user::add_payment_method(Payment payment)
{
	payment_methods.push_back(payment);
}
void user::remove_payment_method(string number)
{
	for (auto it = payment_methods.begin(); it != payment_methods.end(); ++it)
	{
		if (it->getGatewayNumber() == number)
		{
			payment_methods.erase(it);
			break;
		}
	}
}
string user::xorEncryptDecrypt(const std::string& input, char key = 'K') {
	string output = input;
	for (char& c : output)
		c ^= key;
	return output;
}
void user::add_to_requestedtransaction(transaction trans)
{
	requested_transaction.push_back(trans);
}
void user::remove_from_requestedtransaction(string id)
{
	for (auto it = requested_transaction.begin(); it != requested_transaction.end(); ++it)
	{
		if (it->getId() == id)
		{
			requested_transaction.erase(it);
			break;
		}
	}
}
void user::serialize(std::ostream& os) {
	os << username << '\n' << email << '\n';

	// Encrypt the hashed password before writing
	std::string encryptedPassword = xorEncryptDecrypt(hashedPassword);
	os << encryptedPassword << '\n';

	os << balance << '\n' << suspended << '\n';

	os << history_transaction.size() << '\n';
	for (auto& t : history_transaction)
		t.serialize(os);

	os << requested_transaction.size() << '\n';
	for (auto& t : requested_transaction)
		t.serialize(os);

	os << payment_methods.size() << '\n';
	for (auto& p : payment_methods)
		p.serialize(os);
}


void user::deserialize(std::istream& is) {
	std::getline(is, username);
	std::getline(is, email);
	std::getline(is, hashedPassword);

	// Decrypt the hashed password
	hashedPassword = xorEncryptDecrypt(hashedPassword);

	is >> balance >> suspended;
	is.ignore();

	// Deserialize history_transaction
	size_t h_size;
	is >> h_size;
	is.ignore();
	history_transaction.clear();
	for (size_t i = 0; i < h_size; ++i) {
		transaction t;
		t.deserialize(is);
		history_transaction.push_back(t);
	}

	// Deserialize requested_transaction
	size_t r_size;
	is >> r_size;
	is.ignore();
	requested_transaction.clear();
	for (size_t i = 0; i < r_size; ++i) {
		transaction t;
		t.deserialize(is);
		requested_transaction.push_back(t);
	}

	// Deserialize payment_methods
	size_t p_size;
	is >> p_size;
	is.ignore();
	payment_methods.clear();
	for (size_t i = 0; i < p_size; ++i) {
		Payment p;
		p.deserialize(is);
		payment_methods.push_back(p);
	}
}

void user::saveAllUsers(const std::string& filename) {
	ofstream ofs(filename);
	if (!ofs) return;

	ofs << allusers.size() << '\n';
	for (auto &it : allusers) {
		user usr = it.second;
		usr.serialize(ofs);
	}
}

void user::loadAllUsers(const std::string& filename) {
	std::ifstream ifs(filename);
	if (!ifs) {
		// File doesn't exist or can't be opened; initialize empty user list
		allusers.clear();
		return;
	}

	// Check if the file is empty
	ifs.seekg(0, std::ios::end);
	if (ifs.tellg() == 0) {
		// File is empty; initialize empty user list
		allusers.clear();
		ifs.close();
		return;
	}
	ifs.seekg(0, std::ios::beg); // Reset to beginning of file

	size_t count;
	if (!(ifs >> count)) {
		// Failed to read count (e.g., file is malformed); initialize empty user list
		allusers.clear();
		ifs.close();
		return;
	}
	ifs.ignore(); // Ignore newline

	allusers.clear();
	for (size_t i = 0; i < count; ++i) {
		user usr;
		// Deserialize and check if successful
		try {
			usr.deserialize(ifs);
			if (ifs.fail()) {
				// Deserialization failed; skip this user or handle appropriately
				continue;
			}
			allusers[usr.username] = usr;
		}
		catch (const std::exception& e) {
			// Handle any exceptions during deserialization
			continue; // Skip invalid user data
		}
	}

	ifs.close();
}



