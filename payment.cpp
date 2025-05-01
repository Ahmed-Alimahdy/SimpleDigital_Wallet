#include "payment.h"

#include <iostream> 
using namespace std;

// Constructor implementation
Payment::Payment(string number, string category) {
	gatewayNumber = number;
	gatewaycategory = category;
}

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
