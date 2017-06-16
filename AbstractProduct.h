#ifndef AbstractProduct_H
#define AbstractProduct_H

class AbstractProduct
{
	public:
		AbstractProduct() {};
		virtual void doSomething() = 0;
		~AbstractProduct() {};
};

#endif
