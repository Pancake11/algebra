#include <iostream>
#include "MyVectorNum.h"

using namespace std;

int main() 
{
	MyVectorNum v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back((i + 1) * 10);
	}

	for (MyVectorNum::iterator it = v.begin(); it != v.end(); ++it) 
	{
		cout << *it << endl;
	}

	return 0;
}
