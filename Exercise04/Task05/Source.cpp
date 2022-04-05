#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

int main() 
{

	vector<int> v1;
	vector<int> v2;

	unsigned n = 100000;

	// push at end:
	auto begin = high_resolution_clock::now();
	for (unsigned i = 0; i < n; i++) 
	{
		v1.push_back(i);
	}
	auto end = high_resolution_clock::now();
	cout 
		<< "Push back lasts: " 
		<<  duration_cast<milliseconds>(end - begin).count() 
		<< " ms" 
		<< endl;

	// insert at the beginning:
	begin = high_resolution_clock::now();
	for (unsigned i = 0; i < n; i++) 
	{
		v2.insert(v2.begin(), i);
	}
	end = high_resolution_clock::now();
	cout
		<< "insert at the beginning lasts: "
		<< duration_cast<milliseconds>(end - begin).count()
		<< " ms"
		<< endl;

	return 0;
}
