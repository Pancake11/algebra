#pragma once

class MyVectorChar 
{
private:
	char values[10];
	unsigned next = 0;
public:
	void push_back(char val);
	unsigned size();
	char at(unsigned i);
};

