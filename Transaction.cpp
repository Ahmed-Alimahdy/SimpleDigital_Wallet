#include"Classes\Transaction.h"
#include <iostream>
transaction::transaction(string from, string to, double amount,
	TRANSACTION_TYPE t, RequestStatus s)
{
	sender = from;
	recipient = to;
	this->amount = amount;
	type = t;
	status = s;
	timestamp = time(nullptr);
	id = to + "_" + from +"_"+ to_string(amount);
}
string transaction::getSender() const
{
	return sender;
}
string transaction::getRecipient() const
{
	return recipient;
}
double transaction::getAmount() const
{
	return amount;
}
string transaction::getTimestampAsString() const
{
	char buffer[80];
	struct tm timeinfo;
	localtime_s(&timeinfo, &timestamp);
	strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);
	return string(buffer);
}
TRANSACTION_TYPE transaction::getType() const
{
	return type;
}
RequestStatus transaction::getStatus() const
{
	return status;
}
void transaction::setStatus(RequestStatus newStatus)
{
	status = newStatus;
}
string transaction::getTypeString() const
{
	switch (type)
	{
	case TRANSACTION_TYPE::SEND_MONEY:
		return "Send Money";
	case TRANSACTION_TYPE::REQUEST_MONEY:
		return "Request Money";
	case TRANSACTION_TYPE::DEPOSIT:
		return "Deposit";
	case TRANSACTION_TYPE::WITHDRAWAL:
		return "Withdrawal";
	default:
		return "Unknown Type";
	}
}
string transaction::getStatusString() const
{
	switch (status)
	{
	case RequestStatus::NONE:
		return "None";
	case RequestStatus::PENDING:
		return "Pending";
	case RequestStatus::ACCEPTED:
		return "Accepted";
	case RequestStatus::DECLINED:
		return "Declined";
	default:
		return "Unknown Status";
	}
}
void transaction::setId(string id)
{
	this->id = id;
}
void transaction::setSender(string sender)
{
	this->sender = sender;
}
void transaction::setRecipient(string recipient)
{
	this->recipient = recipient;
}
void transaction::setAmount(double amount)
{
	this->amount = amount;
}
void transaction::setType(TRANSACTION_TYPE type)
{
	this->type = type;
}
void transaction::setTimestamp(time_t timestamp)
{
	this->timestamp = timestamp;
}
string transaction::getId() const
{
	return id;
}
