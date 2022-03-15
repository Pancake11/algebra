#pragma once
#include <string>

class Lamp
{
public:
	Lamp();
	Lamp(const std::string model);
	std::string get_model() const;
	void set_model(const std::string model);
	std::string get_producer() const;
	void set_producer(const std::string proizvodac);
	int get_nr_lights() const;
	void set_nr_lights(const int broj_sijalica);
	double get_power() const;
	void set_power(const double snaga);
	std::string to_string() const;
private:
	std::string model;
	std::string producer;
	int nr_lights;
	double power;
};