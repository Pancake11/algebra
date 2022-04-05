#include <iostream>

#include "MyVectorString.h"

using namespace std;

void print(MyVectorString& v) 
{
	cout << "s=" << v.size() << ", c=" << v.capacity() << ": ";
	for (unsigned i = 0; i < v.size(); i++)
		cout << v.at(i);
	cout << endl;
}

int main() 
{
	MyVectorString v(5, "-");
	print(v);
	for (int i = 0; i < 32; i++) 
	{
		v.push_back("x");
		print(v);
	}
	return 0;
}

