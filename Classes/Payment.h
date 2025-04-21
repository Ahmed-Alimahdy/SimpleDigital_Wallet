#pragma once
#include "user.h"
#include <unordered_map>
class PaymentGateway {
private:
    string gatewayName;
    vector<std::string> linkedBanks;
    unordered_map<string, double> bankBalances;
    double transferFeePercent;

    bool isBankLinked(const std::string& bankName) const;

public:
    // Constructor
    PaymentGateway(std::string name, double feePercent);

    // Bank linking
    void linkBank(const std::string& bankName, double initialBalance);
    void showLinkedBanks() const;

    // Money operations
    bool transferToWallet(user& user, double amount, const std::string& fromBank);
    bool transferFromWallet(user& user, double amount, const std::string& toBank);
    bool transferBetweenUsers(user& sender, user& receiver, double amount);

    // Helper
    double calculateFee(double amount) const;
    std::string getGatewayName() const;
};