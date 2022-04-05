#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int generate_random(int min, int max) 
{
	return rand() % (max - min + 1) + min;
}

int main() 
{
	srand(time(nullptr));
	vector<int> v;

	// ensure vector capacity of 100
	v.reserve(100);

	// insert 100 random numbers in vector on the beginning
	int min = 1;
	int max = 100;
	for (unsigned i = 0; i < v.capacity(); i++) 
	{
		v.insert(v.begin(), generate_random(min, max));
	}
	// print using at
	for (unsigned i = 0; i < v.size(); i++) 
	{
		cout << v.at(i) << " ";
	}
	cout << endl;

	// change vector size to 50, use iterator to print numbers
	v.resize(50);
	for (auto it = v.begin(); it != v.end(); ++it) 
	{
		cout << *it << " ";
	}
	cout << endl;

	// change vector capacity to 30, use iterator to print numbers backwards
	v.reserve(30);
	for (auto it = v.rbegin(); it != v.rend(); ++it) 
	{
		cout << *it << " ";
	}
	cout << endl;

	// create second vector with capacity 30, copy first into second, in one line
	vector<int> second(30);
	second = v;
	// even quicker
	//vector<int> second(v);

	// clear the contents of first vector (all elements at once)
	v.clear();

	// delete first 10 numbers from second vector and print first and last element
	second.erase(second.begin(), second.begin() + 10);
	cout << second.front() << " " << second.back() << endl;

	// delete all elements from the second vector
	for (auto it = second.begin(); it != second.end(); ) 
	{
		it = second.erase(it);
	}
	cout << second.size() << endl;

	return 0;
}