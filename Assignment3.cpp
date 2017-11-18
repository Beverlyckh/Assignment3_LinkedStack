//===================================================================================================
// Name        : Assignment3.cpp
// Author      : Beverly ACKAH
// Description : BarberShop App in C++.
//				Program to manage waiting lines and to process customers in the same order they arrive
//====================================================================================================

#include "BarberShop.h"
#include "Customer.h"
#include <iostream>
using namespace std;


int main() {
	BarberShop shop;
	Customer customer1("MARK","KILGORE");
	Customer customer2("RICK","GRIMM");
	shop.addCustomer(customer1);
	shop.addCustomer(customer2);
	Customer nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;
	Customer customer3("JILL","WOLFF");
	shop.addCustomer(customer3);
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;

	return 0;
}
