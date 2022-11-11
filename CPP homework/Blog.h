#pragma once
class Blog
{
public:
	char name[100];
	char text[1000];
	int lineCount;

	Blog(char aName[100], int blogSize);

	void saveInFile();
	char* loadFromFile();
	void addLine(char* txt);
	void print();
};

