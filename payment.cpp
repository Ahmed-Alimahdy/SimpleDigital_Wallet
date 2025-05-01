#include "payment.h"

#include <iostream> 
using namespace std;

// Constructor implementation
Payment::Payment(string number, string category) {
	gatewayNumber = number;
	gatewaycategory = category;
}
// Default constructor
Payment::Payment() {
	gatewayNumber = "";
	gatewaycategory = "";
}

// Getter for gatewayNumber
string Payment::getGatewayNumber() {
	return gatewayNumber;
}

// Getter for gatewayCategory
string Payment::getGatewayCategory() {
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
void Payment::serialize(ostream& os){
	os << gatewayNumber << '\n' << gatewaycategory << '\n';
}

void Payment::deserialize(istream& is) {
	getline(is, gatewayNumber);
	getline(is, gatewaycategory);
}
