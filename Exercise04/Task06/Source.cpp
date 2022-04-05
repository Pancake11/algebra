#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Contact.h"

using namespace std;

void load_contacts(ifstream  &in, vector<Contact> &contacts) 
{
	string line;
	string firstname;
	string lastname;
	while (getline(in, line)) 
	{
		stringstream ss(line);
		getline(ss, firstname, ';');
		getline(ss, lastname);
		contacts.emplace_back(firstname, lastname);
	}
}

void print_if_found(vector<Contact> &contacts, char query) 
{
	for (auto it = contacts.begin(); it != contacts.end(); ++it) 
	{
		if (it->firstname[0] == query || it->lastname[0] == query)
		{
			cout << it->firstname << " " << it->lastname << endl;
		}
	}
}

int main() 
{

	ifstream in("contacts.txt");
	if (!in) 
	{
		cout << "Unable to open file" << endl;
		return 1;
	}
	vector<Contact> contacts;
	load_contacts(in, contacts);
	in.close();

	char query;
	while (true) 
	{
		cout << "Insert first letter of the firstname or the lastname (or 0 to quit): ";
		cin >> query;

		if (query == '0') 
		{
			break;
		}
		print_if_found(contacts, query);
	}

	return 0;
}
