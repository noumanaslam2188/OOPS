#include<iostream>
using namespace std;
class rational_numbers
{
	int numerator;
	int dnominator;
public:
	rational_numbers() :numerator(0), dnominator(0)
	{
	}


	rational_numbers(int a, int b) :numerator(a), dnominator(b)
	{
	}
	void display()
	{
		cout << numerator << " / ";
		cout << dnominator;
	}


	void operator+(rational_numbers a)
	{
		int x, y, z, sum;
		if (a.dnominator != dnominator)
		{
			x = lcm(a.dnominator, dnominator);
		}
		else {
			x = a.dnominator;
		}
		y = x / a.dnominator * a.numerator;
		z = x / dnominator * numerator;
		sum = y + z;

		numerator = sum;
		dnominator = x;
	}


	void operator-(rational_numbers a)
	{
		int x, y, z, diff;
		if (a.dnominator != dnominator)
		{
			x = lcm(a.dnominator, dnominator);
		}
		else {
			x = a.dnominator;
		}
		y = x / a.dnominator * a.numerator;
		z = x / dnominator * numerator;
		diff = y - z;

		numerator = diff;
		dnominator = x;
	}


	void operator*(rational_numbers a)
	{
		numerator = a.numerator * numerator;
		dnominator = a.dnominator * dnominator;
	}


	void operator/(rational_numbers a)
	{
		int c = numerator;
		int d = dnominator;
		numerator = a.numerator * d;
		dnominator = a.dnominator * c;

	}


	bool operator==(rational_numbers a)
	{

		bool flag(a.numerator * dnominator == a.dnominator * numerator);

		return flag;
	}


	bool comparison(rational_numbers a, rational_numbers b)
	{
		int x, y, z, g;
		if (a.dnominator != b.dnominator)
		{
			x = lcm(a.dnominator, b.dnominator);
		}
		else {
			x = a.dnominator;
		}
		y = x / a.dnominator * a.numerator;
		z = x / b.dnominator * b.numerator;
		bool flag = (y > z);
		return flag;

	}


	void conversion(rational_numbers a, rational_numbers b)
	{
		double y;
		y = (double)a.numerator / (double)a.dnominator;
		cout << y;
	}


	int lcm(int a, int b)
	{
		int max;
		max = a;
		while (max <= a * b)
		{
			if (max % a == 0 && max % b == 0)
			{
				return max;
			}
			max++;
		}
	}


	void operator = (rational_numbers);
};
void rational_numbers::operator = (rational_numbers r1) {
	numerator = r1.numerator;
	dnominator = r1.dnominator;
}
int main()
{
	rational_numbers r3, r4;
	cout << "1st rational number " << endl;
	rational_numbers r1(-1, 2);
	r1.display();
	cout << endl << "2nd rational number" << endl;
	rational_numbers r2(-3, 4);
	r2.display();

	r4 = r1;

	cout << endl << "Assignment" << endl;
	r4.display();

	cout << endl << endl << "addition" << endl;
	r2 + r1;
	r2.display();

	cout << endl << endl << "Subtration" << endl;
	r2 - r1;
	r2.display();

	cout << endl << endl << "Multiplication" << endl;
	r2* r1;
	r2.display();

	cout << endl << endl << "Division" << endl;
	r2 / r1;
	r2.display();

	cout << endl << endl << "Equality" << endl;
	cout << "if ans is 1 numbers are equal if ans 0 numbers are not equal" << endl;
	bool x = r2 == r1;
	cout << x;
	cout << endl << endl << "Greater and less than function" << endl;
	cout << "If ans is 1 1st number is greater.if is 0 second number is greater" << endl;
	bool z = r3.comparison(r1, r2);
	cout << z << endl;
	cout << endl << "conversion" << endl;
	r3.conversion(r1, r2);
}