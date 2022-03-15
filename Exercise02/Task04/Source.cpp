#include <iostream>

#include "Rectangle.h"

using namespace std;

int main() 
{
	try
	{
		//Rectangle p(-5, 8);
		//Rectangle p(5, -8);
		Rectangle p(5, 8);

		cout << p.shape('x', '-', true);
		cout << endl;
		cout << p.shape('x', '-', false);
	}
	catch (const exception &e)
	{
		cout << "Error: " << e.what() << endl;
	}

	return 0;
}