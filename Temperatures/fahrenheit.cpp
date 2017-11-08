#include "fahrenheit.h"
#include "clesius.h"	//Celsius.getTemperature()

Fahrenheit::Fahrenheit(const Celsius& cel_temp)
{
	temperature = cel_temp.getTemperature() * CEL2FAHR_MUL + CEL2FAHR_ADD;
}

double Fahrenheit::getTemperature() const
{
	return temperature;
}

void Fahrenheit::setTemperature(double temp)
{
	temperature = temp;
}

Fahrenheit::operator Celsius ()
{
	Celsius cel(*this);
	return cel;
}

ostream& operator<<(ostream& os, const Fahrenheit& temp)
{
	os << temp.getTemperature() << "\xA7 F";
	return os;
}