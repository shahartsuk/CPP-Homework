#include "Animal.h"
#include<iostream>
#include<string.h>
#pragma warning (disable:4996)

void Animal::setCode(int aCode)
{
	code = aCode;
}
void Animal::printCode()
{
	printf("The code is:%d\n", code);
}
void Animal::setName(char aName[])
{
	strcpy(name, aName);
}
void Animal::printName()
{
	printf("The name is:%s\n", name);
}