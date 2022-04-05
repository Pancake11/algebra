#include <iostream>
#include "MyVectorChar.h"

using namespace std;

int main() 
{
	MyVectorChar v;

	v.push_back('a');
	for (unsigned i = 0; i < v.size(); i++)
		cout << v.at(i) << endl;

	v.push_back('b');
	for (unsigned i = 0; i < v.size(); i++)
		cout << v.at(i) << endl;
	
	v.push_back('c');
	for (unsigned i = 0; i < v.size(); i++)
		cout << v.at(i) << endl;

	return 0;
}