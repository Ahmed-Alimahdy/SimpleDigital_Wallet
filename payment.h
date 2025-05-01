#ifndef PAYMENT_H
#define PAYMENT_H
#include <list>
#include <string>
using namespace std;


class Payment {
private:
    string gatewayNumber;
    string gatewaycategory;

public:
	// Constructor
	Payment();
	static list<string> getwayCategoryList;
    Payment(string number, string category);
    string getGatewayNumber();
    string getGatewayCategory();
    void setGatewayNumber(string number);
    void setGatewayCategory(string category);
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
};

#endif
