/*
 * BarberShop.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: beverlyackah
 */

#include "BarberShop.h"

void BarberShop::addCustomer(Customer& customer){

	s1.push(customer);
}

Customer BarberShop::nextCustomer(){
	if(s2.isEmpty()){

			while(!s1.isEmpty()){
				Customer customer = s1.pop();
				s2.push(customer);
			}

	}
	Customer c1 = s2.pop();
	return c1;

}
