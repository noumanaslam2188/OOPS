#include<iostream>
using namespace std;
int main()
{
	const double m_to_cm = 100;
	const double in_to_cm = 2.54;
	const double ft_to_in = 12;
	double number = 0;
	string unit;


	cout << "enter a number" << endl;
	cout << "and then enter these units  m, cm, in, ft" << endl;

	while (cin >> number >> unit)
	{

		cout << "you have entered " << number << unit << endl;



		if (unit == "m")
		{
			cout << "meters are converted into cm = " << number * m_to_cm << endl;
		}
		else if (unit == "in")
		{
			cout << "inches are converted into cm = " << number * in_to_cm << endl;
		}
		else if (unit == "ft")
		{
			cout << "feets are coverted into inches = " << number * ft_to_in << endl;
		}
		else if (unit == "cm")
		{
			cout << "centimeters are converted into meters = " << number / m_to_cm << endl;
		}

		else
		{
			cout << "I dont know these units " << endl;
			cout<< "please enter m,cm,in and ft" << endl;
		}
	}
	return 0;
}