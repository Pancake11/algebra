#include <iostream>
#include "MyVector.h"

using namespace std;

int main() 
{
	MyVector v(10, "HELLOOOO");
	for (unsigned i = 0; i < v.size(); i++) 
	{
		cout << v.at(i) << endl;
	}

	return 0;
}