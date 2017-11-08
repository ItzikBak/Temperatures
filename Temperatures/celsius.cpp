#include "clesius.h"
#include "fahrenheit.h"  //Fahrenheit.getTemperature()


Celsius::Celsius(const Fahrenheit& fahr_temp)
{
	temperature = (fahr_temp.getTemperature() - CEL2FAHR_ADD ) / CEL2FAHR_MUL ;
}

double Celsius::getTemperature() const
{
	return temperature;
}

void Celsius::setTemperature(double temp)
{
	temperature = temp;
}

Celsius::operator Fahrenheit () 
{
	Fahrenheit fahr(*this);
	return fahr;
}


ostream& operator<<(ostream& os, const Celsius& temp)
{
	os << temp.getTemperature() << "\xA7 C";
	return os;
}