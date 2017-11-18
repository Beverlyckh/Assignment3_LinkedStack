/*
 * Customer.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: beverlyackah
 */

#include "Customer.h"
using namespace std;

//Constructor
Customer::Customer(){
}

//Customer object
Customer::Customer(string fName, string lName) {
	this->fName = fName;
	this->lName = lName;
}

//get Customer's name
string Customer:: getName(){
	return fName +" "+ lName;
}

Customer::~Customer() {
	// TODO Auto-generated destructor stub
}
