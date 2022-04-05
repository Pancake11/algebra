#include <iostream>
#include <vector>

using namespace std;

int main() 
{	
	vector<int> v;
	// if we reserve enough capacity, vector does not need to grow!
	//v.reserve(500);

	int grew = 0;
	int last_capacity = v.capacity();
	//cout << "size:" << v.size() << ", " << "capacity: " << last_capacity << endl;

	for (unsigned i = 0; i < 500; i++) 
	{
		v.push_back(i);
		if (last_capacity != v.capacity()) 
		{
			grew++;
			last_capacity = v.capacity();
			//cout << "size:" << v.size() << ", " << "capacity: " << last_capacity << endl;
		}
	}

	cout << "Vector grew " << grew << " times" << endl;

	return 0;
}
