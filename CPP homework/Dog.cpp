#include "Dog.h"
#include<iostream>
void Dog::setGurimCount(int count)
{
	gurimCount = count;
}
void Dog::printGurimCount()
{
	printf("The count of her puppis is:%d\n", gurimCount);
}
void Dog::printAll()
{
	this->printCode();
	this->printName();
	this->printGurimCount();
}