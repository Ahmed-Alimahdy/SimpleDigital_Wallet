#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
using namespace std;

class Payment {
private:
    string gatewayNumber;
    string gatewaycategory;

public:
	// Constructor
	Payment();
    Payment(string number, string category);
    string getGatewayNumber();
    string getGatewayCategory();
    void setGatewayNumber(string number);
    void setGatewayCategory(string category);
    void serialize(ostream& os);
    void deserialize(istream& is);
};

#endif
