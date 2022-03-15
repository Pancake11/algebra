#include <iostream>
#include <array>
#include <algorithm>


using namespace std;

void init_array(array<int, 100> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] = i + 1;
	}
}

bool prime(int& n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return n != 1;
}

void print_if_prime(int& n)
{
	if (prime(n))
	{
		cout << n << endl;
	}
}

int main()
{
	array<int, 100> arr;
	init_array(arr);

	//for_each(arr.begin(), arr.end(), print_if_prime);
	// revert it
	//reverse(arr.begin(), arr.end());
	//for_each(arr.begin(), arr.end(), print_if_prime);
	// or even better
	for_each(arr.rbegin(), arr.rend(), print_if_prime);
	
	return 0;
}