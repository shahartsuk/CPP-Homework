#pragma once
#include "Animal.h"
class Dog: public Animal
{
private:
	int gurimCount;

public:
	void setGurimCount(int count);
	void printGurimCount();
	void printAll();
};

