#include "MyVectorString.h"

MyVectorString::MyVectorString(unsigned n, string val) 
{
	values = new string[n];
	for (unsigned i = 0; i < n; i++) 
	{
		values[i] = val;
	}
	next = n;
	cap = n;
}

MyVectorString::~MyVectorString() 
{
	if (values != nullptr) 
	{
		delete[] values;
	}
}

void MyVectorString::push_back(string val) 
{
	if (next == cap) 
	{
		grow();
	}
	values[next++] = val;
}

unsigned MyVectorString::size() 
{
	return next;
}

unsigned MyVectorString::capacity() 
{
	return cap;
}

string MyVectorString::at(unsigned i) 
{
	return values[i];
}

void MyVectorString::grow() 
{
	// new capacity
	cap += 5;
	// new space
	string *new_values = new string[cap];
	// copy
	for (unsigned i = 0; i < next; i++) 
	{
		new_values[i] = values[i];
	}
	// release
	delete[] values;
	// copy address
	values = new_values;
}
