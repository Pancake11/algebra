#include "MyVectorNum.h"
using namespace std;

MyVectorNum::iterator::iterator(int* ptr) 
{
	this->ptr = ptr;
}

int& MyVectorNum::iterator::operator*() 
{
	return *ptr;
}

MyVectorNum::iterator& MyVectorNum::iterator::operator++() 
{
	ptr++;
	return *this;
}

bool MyVectorNum::iterator::operator==(const MyVectorNum::iterator& rhs)
{
	return ptr == rhs.ptr;
}

bool MyVectorNum::iterator::operator!=(const MyVectorNum::iterator& rhs)
{
	return ptr != rhs.ptr;
}

void MyVectorNum::push_back(int val)
{
	values[next++] = val;
}

MyVectorNum::iterator MyVectorNum::begin()
{
	return values;
}

MyVectorNum::iterator MyVectorNum::end()
{
	return (values + next);
}