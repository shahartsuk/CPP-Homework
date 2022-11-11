#pragma once
#include "Son.h"
#include "Father.h"
#include "Cat.h"
#include "Dog.h"
#include "Blog.h"
#define COUNT 5
class Runner
{
public:
	Son* Moti;
	Father* Avraham;
	Cat* catsList[COUNT];
	Dog* dogsList[COUNT];

	void dogRunner();
	void catRunner();
	void sonRunner();
	void fatherRunner();
};

