#include "Factory.h"
#include <vector>

int main(int argc, char *argv[])
{
	Factory *factory = new Factory();
	Product *test = factory->createProduct();
	Product2 * test2 = factory->createProduct2();
	std::vector<AbstractProduct*> test3;
	test3.push_back(test);
	test3.push_back(test2);

	for (int i=0; i<test3.size(); i++)
	{
		test3[i]->doSomething();
	}

}
