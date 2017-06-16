#include "Factory.h"

Factory::Factory()
{
}

Product* Factory::createProduct()
{
	return new Product();
}

Product2* Factory::createProduct2()
{
	return new Product2();
}

Factory::~Factory()
{
}
