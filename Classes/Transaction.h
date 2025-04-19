#pragma once
#ifndef Transaction_H
#define Transaction_H
#include <string>
#include <chrono>
using namespace std;

enum class TRANSACTION_TYPE {
    SEND_MONEY,
    REQUEST_MONEY,
    DEPOSIT,
    WITHDRAWAL,
};

enum class RequestStatus {
    NONE,
    PENDING,
    ACCEPTED,
    DECLINED,
};

class transaction {
private:
    string sender;
    string recipient;
    double amount;
    time_t timestamp;
    TRANSACTION_TYPE type;
    RequestStatus status;

public:
    transaction(const std::string& from, const std::string& to, double amount,
        TRANSACTION_TYPE t, RequestStatus s = RequestStatus::NONE);
    // Getters
    string getSender() const;
    string getRecipient() const;
    double getAmount() const;
    string getTimestampAsString() const;
    TRANSACTION_TYPE getType() const;
    RequestStatus getStatus() const;

    // Setters
    void setStatus(RequestStatus newStatus);

    // Utility functions
    string getTypeString() const;
    string getStatusString() const;
};
#endif