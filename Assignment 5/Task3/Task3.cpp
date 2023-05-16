#include<iostream>
#include<math.h>

using namespace std;

class complex {
	double real_part;
	double imag_part;
public:
	complex() :real_part(0), imag_part(0) {}

	complex(double a, double b) :real_part(a), imag_part(b) {}

	void display()
	{
		cout << real_part;
		if (imag_part > 0) {
			cout<<" +j";
			cout << imag_part << endl;
		}
		else {
			cout << " -j";
			cout <<-imag_part << endl;
		}
	}

	void operator+(complex c1)
	{
		real_part += c1.real_part;
		imag_part += c1.imag_part;
	}

	void operator-(complex c1)
	{
		real_part -= c1.real_part;
		imag_part -= c1.imag_part;
	}

	void operator*(complex c1)
	{
		real_part = c1.real_part * real_part - c1.imag_part * imag_part;
		imag_part = c1.real_part * imag_part + c1.imag_part * real_part;
	}

	void operator/(complex c1)
	{
		real_part = (real_part * c1.real_part + imag_part * c1.imag_part) /
			(c1.real_part * c1.real_part + c1.imag_part * c1.imag_part);


		imag_part = (imag_part * c1.real_part + real_part * c1.imag_part) /
			(c1.real_part * c1.real_part + c1.imag_part * c1.imag_part);

	}

	bool operator==(complex c1)
	{
		bool flag = (c1.real_part == real_part && c1.imag_part == imag_part);
		return flag;
	}


	bool comparison(complex c1, complex c2)
	{
		double a, b, c, d;
		a = c1.real_part * c1.real_part + c1.imag_part * c1.imag_part;
		b = c2.real_part * c2.real_part + c2.imag_part * c2.imag_part;
		c = sqrt(a);
		d = sqrt(b);
		bool flag = (a > b);

		return flag;
	}
};
int main()
{
	complex c3;
	cout << "1st complex number" << endl;
	complex c1(-14, 56);
	c1.display();
	cout << "2nd comlex number" << endl;
	complex c2(54, -4);
	c2.display();
	cout << endl;

	cout << "Addition" << endl;
	c2 + c1;
	c2.display();

	cout << "Subtraction" << endl;
	c2 - c1;
	c2.display();

	cout << "Multiplication" << endl;
	c2* c1;
	c2.display();

	cout << "Division" << endl;
	c2 / c1;
	c2.display();

	cout << "Equality" << endl;
	cout << "if numbers are equal it will display 1 otherwise it will display 0 " << endl;
	bool z = c2 == c1;
	cout << z;

	cout << endl << "comparison" << endl;
	cout << "if ans is 1 then 1st number is greater if ans is 0 2nd number is greater" << endl;
	bool x = c2.comparison(c1, c2);
	cout  << x << endl;

	return 0;
}