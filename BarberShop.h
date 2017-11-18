/*
 * BarberShop.h
 *
 *  Created on: Nov 12, 2017
 *      Author: beverlyackah
 */
#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include "Customer.h"
#include <iostream>
#include "LinkedStack.h"
using namespace std;

class BarberShop{
	LinkedStack<Customer> s1;
	LinkedStack<Customer> s2;
public:
	void addCustomer(Customer&);
	Customer nextCustomer();
};

#endif
