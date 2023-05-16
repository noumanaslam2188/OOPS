#include<iostream>
using namespace std;

const double cm_to_m = 0.01;
const double in_to_m = 0.0254;
const double ft_to_m = 0.3048;

double conver_to_meters(double number, string unit)
{
	if (unit == "m")
	{
		cout << "meters are already meters  = " << number << "m" << endl;
	}
	else if (unit == "in")
	{
		cout << "inches are converted into meters = " << number * in_to_m << "m" << endl;
	}
	else if (unit == "ft")
	{
		cout << "feets are coverted into meters = " << number * ft_to_m << "m" << endl;
	}
	else if (unit == "cm")
	{
		cout << "centimeters are converted into meters = " << number * cm_to_m << "m" << endl;
	}
	else
	{
		return number;
	}
}

int main()
{

	double sum = 0, largest = 0, smallest = 0, count = 0;
	double number = 0;
	double valuemeter = 0;
	string unit;


	cout << "enter a number" << endl;
	cout << "and then enter these units  m, cm, in, ft" << endl;

	while (cin >> number >> unit)
	{

		cout << "you have entered " << number << unit << endl;

		valuemeter = conver_to_meters(number, unit);

		if (valuemeter < largest)
		{
			
			largest = valuemeter;
		}
		else if (valuemeter > smallest)
		{
			
			smallest = valuemeter;
		}

		sum += valuemeter;
		count++;

		cout << "The smallest: " << smallest << "m\n"
			<< "The largest: " << largest << "m\n"
			<< "Number of values entered: " << count << '\n'
			<< "The sum of values: " << sum << "m\n";
	}
	return 0;
}