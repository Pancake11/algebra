#include "Rectangle.h"

#include <sstream>

Rectangle::Rectangle(int width, int height)
{
	if (width <= 0 || height <= 0) 
	{
		throw std::exception("Rectangle sides must not be less than 0");
	}
	this->width = width;
	this->height = height;
}

std::string Rectangle::shape(char edge, char content, bool draw_content) const
{	
	std::stringstream ss;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
			{
				ss << edge;
			}
			else
			{
				if (draw_content)
				{
					ss << content;
				}
				else
				{
					ss << " ";
				}
			}
		}
		ss << std::endl;
	}
	return ss.str();
}

