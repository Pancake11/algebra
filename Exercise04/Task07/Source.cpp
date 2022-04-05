#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

#include "IpAddress.h"

using namespace std;
template <typename T>

T convert(string &s) 
{
	stringstream converter(s);
	T n;
	converter >> n;
	return n;
}

void print(IpAddress& a)
{
	cout << a.to_string() << endl;
}

void load_addresses(ifstream  &in, vector<IpAddress> &addresses) 
{
	string line;
	int a, b, c, d;
	string temp;
	while (getline(in, line)) 
	{
		stringstream ss(line);
		getline(ss, temp, '.');
		a = convert<int>(temp);
		getline(ss, temp, '.');
		b = convert<int>(temp);
		getline(ss, temp, '.');
		c = convert<int>(temp);
		getline(ss, temp);
		d = convert<int>(temp);

		addresses.emplace_back(a, b, c, d);
	}
}

int main() {

	ifstream in("ip_addresses.txt");
	if (!in) 
	{
		cout << "unable to open file" << endl;
		return 1;
	}
	vector<IpAddress> addresses;
	load_addresses(in, addresses);
	in.close();

	return 0;
}
