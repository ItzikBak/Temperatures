#include "clesius.h"
#include "fahrenheit.h"

int main(int argc, char* argv)
{
	/*
	// testing
	celsius cel_temp(1);
	fahrenheit fahr_temp(cel_temp);
	cout << "the temp in celsius:" << cel_temp << endl;
	cout << "the temp in fahr:" << fahr_temp << endl;
	*/
	// all temp's here are in celsius
	Celsius cel(100);
	Fahrenheit fahr(cel);

	cout << "                Temperatures Table                    " << endl;
	cout << " ==================================================== " << endl;
	cout << " |         Case           |    Celsius | Fahrenheit | " << endl;
	cout << " ---------------------------------------------------- " << endl;
	cout << " |  Water boiling         |    " << cel << "  |   " << fahr << "   |" << endl;
	cout << " ---------------------------------------------------- " << endl;
	
	cel.setTemperature(0);
	cout << " |  Water freezing        |     " << cel << "   |   " << Fahrenheit(cel) << "    |" << endl;
	cout << " ---------------------------------------------------- " << endl;
	
	fahr.setTemperature(-459.67);
	cel = fahr;
	cout << " |  Absolute zero         | " << cel << " | " << fahr << " |" << endl;
	cout << " ---------------------------------------------------- " << endl;

	cel.setTemperature(233);
	fahr = cel;
	cout << " |  Ignition Temperature  |            |            |" << endl;
	cout << " |	   Of Paper       |   " << cel << "   |   " << fahr << " |" << endl;
	cout << " ==================================================== " << endl;
	cout << endl;
	cout << " Please refer to: http://www.slate.com/articles/health_and_science/explainer/2012/06/ray_bradbury_death_does_paper_really_burn_at_451_degrees_fahrenheit_.html" << endl;

}