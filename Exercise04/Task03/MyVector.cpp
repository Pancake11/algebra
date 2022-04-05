#include "MyVector.h"

MyVector::MyVector(unsigned n, string value) 
{
	for (unsigned i = 0; i < n; i++) 
	{
		values[i] = value;
	}
	s = n;
}

unsigned MyVector::size() 
{
	return s;
}

string MyVector::at(unsigned i) 
{
	return values[i];
}
