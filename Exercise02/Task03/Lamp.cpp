#include "Lamp.h"
#include <sstream>

Lamp::Lamp()
{
	set_producer("");
	set_model("");
	set_nr_lights(0);
	set_power(0);
}

Lamp::Lamp(const std::string model) : Lamp()
{
	set_model(model);
}

std::string Lamp::get_model() const
{
	return model;
}

void Lamp::set_model(const std::string model)
{
	this->model = model;
}

std::string Lamp::get_producer() const
{
	return producer;
}

void Lamp::set_producer(const std::string producer)
{
	this->producer = producer;
}

int Lamp::get_nr_lights() const
{
	return nr_lights;
}

void Lamp::set_nr_lights(const int nr_lights)
{
	this->nr_lights = nr_lights;
}

double Lamp::get_power() const
{
	return power;
}

void Lamp::set_power(const double power)
{
	this->power = power;
}

std::string Lamp::to_string() const
{
	std::stringstream ss;
	ss
		<< "model: " << model
		<< ", producer:" << producer
		<< ", nr lights: " << nr_lights
		<< ", power: " << power << "W";
	return ss.str();
}