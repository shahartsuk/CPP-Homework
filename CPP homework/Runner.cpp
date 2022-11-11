#include "Runner.h"
#include<string.h>
#include<iostream>
#pragma warning (disable:4996)
void Runner::dogRunner()
{
	char dogName[100];
	for (int i = 0; i < COUNT; i++)
	{
		this->dogsList[i] = new Dog;
		sprintf(dogName,"DogName%d",i+1);
		dogsList[i]->setName(dogName);
		dogsList[i]->setCode(i+1);
		dogsList[i]->setGurimCount(i+5);
		dogsList[i]->printAll();
	}
	for (int d = 0; d < COUNT; d++)
	{
		delete(dogsList[d]);
	}
	
}

void Runner::catRunner()
{
	char catName[100];
	for (int i = 0; i < COUNT; i++)
	{
		this->catsList[i] = new Cat;
		sprintf(catName, "CatName%d", i + 1);
		catsList[i]->setName(catName);
		catsList[i]->setCode(i + 1);
		catsList[i]->setGurimCount(i + 5);
		catsList[i]->setAge(i + 12);
		catsList[i]->printAll();
	}
	for (int d = 0; d < COUNT; d++)
	{
		delete(catsList[d]);
	}
}
void Runner::sonRunner()
{
	this->Moti = new Son;
	Moti->setAge(15);
}
void Runner::fatherRunner()
{
	this->Avraham = new Father;
	Avraham->setAge(15);
}
