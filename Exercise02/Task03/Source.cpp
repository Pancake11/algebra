#include <iostream>
#include "Lamp.h"

using namespace std;

int main() 
{
	Lamp l1;
	l1.set_model("Antifoni");
	l1.set_producer("Ikea");
	l1.set_nr_lights(1);
	l1.set_power(53);

	cout << l1.to_string() << endl;

	Lamp l2("Kvart");
	l2.set_producer("Ikea");
	l2.set_nr_lights(3);
	l2.set_power(80);

	cout << l2.to_string() << endl;

	return 0;
}