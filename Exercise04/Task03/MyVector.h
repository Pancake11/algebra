#pragma once
#include <string>
using namespace std;

class MyVector 
{
private:
	string values[50];
	unsigned s;
public:
	MyVector(unsigned n, string value);
	unsigned size();
	string at(unsigned i);
};

