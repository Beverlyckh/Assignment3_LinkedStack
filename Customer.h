/*
 * Customer.h
 *
 *  Created on: Nov 12, 2017
 *      Author: beverlyackah
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <iostream>
#include "LinkedStack.h"
using namespace std;

class Customer {
public:
	string fName, lName;
	Customer();
	Customer(string fName, string lName);
	string getName();
	~Customer();

};

#endif /* CUSTOMER_H_ */
