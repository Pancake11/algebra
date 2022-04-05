#include "MyVectorChar.h"

void MyVectorChar::push_back(char val) 
{
	values[next++] = val;
}

unsigned MyVectorChar::size() 
{
	return next;
}

char MyVectorChar::at(unsigned i) 
{
	return values[i];
}
