#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#include "Point3d.h"

using namespace std;

void print(Point3d &t) 
{
	cout << "T(" << t.x << ", " << t.y << ", " << t.z << ");" << endl;
}

int main() 
{
	vector<Point3d> points;

	ifstream in("points.txt");
	if (!in) 
	{
		cout << "unable to open file" << endl;
		return 1;
	}

	int x, y, z;
	while(true) 
	{
		if (!(in >> x)) 
		{
			break;
		}
		in >> y;
		in >> z;
		//points.emplace(points.end(), x, y, z);
		points.emplace_back(x, y, z);
	}

	in.close();

	// check
	for_each(points.begin(), points.end(), print);

	return 0;
}