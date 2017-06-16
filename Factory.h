#ifndef FACTORY_H
#define	FACTORY_H

#include "AbstractFactory.h"

class Factory : public AbstractFactory
{
	public:
		Factory();
		Product* createProduct();
		Product2* createProduct2();
		~Factory();
};

#endif
