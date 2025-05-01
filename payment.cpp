#include "payment.h"

#include <iostream> 
using namespace std;

// Constructor implementation
Payment::Payment(string number, string category) {
	gatewayNumber = number;
	gatewaycategory = category;
}
Payment::Payment() {
	gatewayNumber = "";
	gatewaycategory = "";
}

list<string>Payment::getwayCategoryList = { "VISA", "MASTERCARD", "AMEX", "DISCOVER", "VODAFONE_CASH","FAWRY_PAY","INSTAPAY","PAYMOP","TPAY","PAYTABS","MEEZA","KHALES", "PAYPAL", "OTHER" };
// Getter for gatewayNumber
string Payment::getGatewayNumber() {
	return gatewayNumber;
}

// Getter for gatewayCategory
string Payment::getGatewayCategory() {
	// Convert enum to string
	
	return gatewaycategory;
	
}



// Setter for gatewayNumber
void Payment::setGatewayNumber(string number) {
	gatewayNumber = number;
}

// Setter for gatewayCategory
void Payment::setGatewayCategory(string category) {
	gatewaycategory = category;
}
void Payment::serialize(std::ostream& os){
	os << gatewayNumber << '\n' << gatewaycategory << '\n';
}

void Payment::deserialize(std::istream& is) {
	getline(is, gatewayNumber);
	getline(is, gatewaycategory);
}
