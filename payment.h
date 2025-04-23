#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
using namespace std;

class Payment {
private:
    string gatewayNumber;
    string gatewaycategory;

public:
    Payment(string number, string category);
    string getGatewayNumber();
    string getGatewayCategory();
    void setGatewayNumber(string number);
    void setGatewayCategory(string category);
};

#endif
