#pragma once
#include <string>
using namespace std;

class MyVectorString
{
public:
	MyVectorString(unsigned n, string val);
	~MyVectorString();
	void push_back(string val);
	unsigned size();
	unsigned capacity();
	string at(unsigned i);
private:
	string* values = nullptr;
	unsigned next = 0;
	unsigned cap = 0;
	void grow();
};

