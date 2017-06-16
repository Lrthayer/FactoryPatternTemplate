#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "Product.h"
#include "Product2.h"

class AbstractFactory
{
	public:
		AbstractFactory() {};
		virtual Product* createProduct() = 0;
		virtual Product2* createProduct2() = 0;
		~AbstractFactory() {};
};

#endif
