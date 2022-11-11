#pragma once
#include "Father.h"
class Son:public Father
{
private:
	int sonAge;
public:
	void SonFunc();
	void setAge(int age);
	
};

