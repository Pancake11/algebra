#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "IpAddress.h"

using namespace std;

int convert(string& s)
{
	stringstream converter(s);
	int n;
	converter >> n;
	return n;
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
		a = convert(temp);
		getline(ss, temp, '.');
		b = convert(temp);
		getline(ss, temp, '.');
		c = convert(temp);
		getline(ss, temp);	
		d = convert(temp);

		addresses.emplace_back(a, b, c, d);
	}
}

int count_found(vector<IpAddress> &addresses, char c) 
{
	int counter = 0;
	for (auto it = addresses.begin(); it != addresses.end(); ++it) 
	{
		if (it->which_class() == c) 
		{
			counter++;
		}
	}
	return counter;
}

void paint(char c, int n) 
{
	cout << "Class " << c << ": ";
	for (int i = 0; i < n; i++) 
	{
		cout << "#";
	}
	cout << " (" << n << ")" << endl;
}

int main() 
{

	ifstream in("ip_addresses.txt");
	if (!in) 
	{
		cout << "Unable to open file" << endl;
		return 1;
	}
	vector<IpAddress> addresses;
	load_addresses(in, addresses);
	in.close();

	char classes[] = { 'A', 'B', 'C', 'D', 'E' };
	for (unsigned i = 0; i < sizeof(classes) / sizeof(char); i++) 
	{
		paint(classes[i], count_found(addresses, classes[i]));
	}

	return 0;
}
