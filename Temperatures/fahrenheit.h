#pragma once
#include "common.h"

class Fahrenheit
{
public:
	Fahrenheit() { temperature = 0; }
	Fahrenheit(double temp) :temperature(temp) {}
	Fahrenheit(const Celsius& cel_temp);
	
	double getTemperature() const;
	void   setTemperature(double temp);

	operator Celsius ();


	friend std::ostream& operator <<(std::ostream& os, const Fahrenheit& temp);

private:
	double temperature;
};