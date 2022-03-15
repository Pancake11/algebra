#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void read_file(const string& fname)
{
	ifstream in(fname);
	if (!in)
	{
		throw exception("Unable to open the file");
	}
	string line;
	while (getline(in, line))
	{
		cout << line << endl;
	}
	in.close();
}

int main() 
{
	string fname;
	cout << "Insert file name:";
	getline(cin, fname);

	try
	{
		read_file(fname);
	}
	catch (const std::exception& e)
	{
		cout << "Error: " << e.what() << endl;
		return 1;
	}
	
	return 0;
}