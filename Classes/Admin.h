#pragma once
#include <string>
#include "User.h"
class Admin {
    string username, password;

    //void adminDashboard();
    void viewAllUsers();
    user findUser(); //user class behaviour

    void addUser();
    void viewUserData();
    void deleteUser(user);
    void updateUserData(user);
    void suspendUser(user);

    void viewAllTransactions();

    void logout();
    void addAdmin();
};