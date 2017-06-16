#ifndef PRODUCT2_H
#define PRODUCT2_H

#include "AbstractProduct.h"

#include <iostream>

class Product2 : public AbstractProduct
{
	friend class Factory;
	public:
		void doSomething();
	private:
		Product2();
		~Product2();
};

#endif
