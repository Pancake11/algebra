#pragma once
#include <string>

class Rectangle
{
public:
	Rectangle(int width, int height);
	std::string shape(char edge, char content, bool draw_content) const;
private:
	int width;
	int height;
};

