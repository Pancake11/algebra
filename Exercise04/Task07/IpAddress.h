#pragma once
#include <string>

class IpAddress 
{
public:
	IpAddress(int a, int b, int c, int d);
	std::string to_string();
	char which_class();
private:
	int a, b, c, d;
};

