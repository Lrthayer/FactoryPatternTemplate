#ifndef PRODUCT_H
#define PRODUCT_H

#include "AbstractProduct.h"

#include <iostream>

class Product : public AbstractProduct
{
	friend class Factory;
	public:
		void doSomething();
	private:
		Product();
		~Product();
};

#endif
