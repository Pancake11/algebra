#include <iostream>

using namespace std;

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	if (b == 0)
	{
		throw runtime_error("Divisor must not be zero");
	}
	return a / b;
}

int square_root(int a)
{
	if (a <= 0)
	{
		throw exception("The number must not be less than 0");
	}
	return sqrt(a);
}

int main()
{
	int a;
	cout << "insert first number:";
	cin >> a;

	int b;
	cout << "insert second number:";
	cin >> b;

	cout << a << " * " << b << " = " << multiply(a, b) << endl;

	try
	{
		cout << a << " / " << b << " = " << divide(a, b) << endl;
	}
	//catch (const std::runtime_error& e)
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}	

	try
	{
		cout << "sqrt(" << a << ") = " << square_root(a) << endl;
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}