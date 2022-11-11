#pragma once

class Animal
{
private:
	int code;
	char name[100];

public:
	void setCode(int num);
	void printCode();
	void setName(char str[]);
	void printName();
};

