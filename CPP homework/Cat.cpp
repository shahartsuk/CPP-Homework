#include "Cat.h"
#include<iostream>
void Cat::setGurimCount(int count)
{
	gurimCount = count;
}
void Cat::printGurimCount()
{
	printf("The count of her puppis is:%d\n", gurimCount);
}

void Cat::setAge(int aAge)
{
	this->age = aAge;
}
void Cat::printAge()
{
	printf("This cat age is:%d\n", age);
}
void Cat::printAll()
{
	this->printCode();
	this->printName();
	this->printGurimCount();
	this->printAge();
}