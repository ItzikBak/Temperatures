#pragma once
#include "common.h"

class Celsius
{
public:
	Celsius() { temperature = 0; }
	Celsius(double temp) :temperature(temp) {}
	Celsius(const Fahrenheit& fahr_temp);

	double getTemperature() const;
	void   setTemperature(double temp);

	operator Fahrenheit () ;

	friend std::ostream& operator <<(std::ostream& os, const Celsius& temp);

private:
	double temperature;
};