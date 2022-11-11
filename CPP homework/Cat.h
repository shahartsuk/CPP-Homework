#pragma once
#include "Animal.h"
class Cat:public Animal
{
private:
	int gurimCount;
	int age;

public:
	void setGurimCount(int count);
	void printGurimCount();
	void setAge(int aAge);
	void printAge();
	void printAll();
};

