#pragma once
#ifndef Transaction_H
#define TRansaction_H
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
    string id;
    string recipient;
    double amount;
    time_t timestamp;
    TRANSACTION_TYPE type;
    RequestStatus status;

public:
    transaction(string from, string to, double amount,
=========

>>>>>>>>> Temporary merge branch 2
    transaction(const std::string& from, const std::string& to, double amount,
        TRANSACTION_TYPE t, RequestStatus s = RequestStatus::NONE);
    transaction();
    // Getters
    string getSender() const;
    string getRecipient() const;
    double getAmount() const;
    string getTimestampAsString() const;
    TRANSACTION_TYPE getType() const;
    RequestStatus getStatus() const;

    // Setters
    void setStatus(RequestStatus newStatus);
    void setId(string id);
	void setSender(string sender);
	void setRecipient(string recipient);
	void setAmount(double amount);
	void setType(TRANSACTION_TYPE type);
	void setTimestamp(time_t timestamp);


    // Utility functions
    string getTypeString() const;
    string getStatusString() const;
    string getId() const;

    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
};
#endif