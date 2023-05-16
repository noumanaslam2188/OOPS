#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, discriminant,x1, x2,real_part,imaginary_part;
	cout << "Enter the values 1st a then b then c" << endl;
	cin >> a >> b >> c;
	discriminant =b * b-4 * a * c;
	
	if (discriminant > 0)
	{
		x1 = (-b + sqrt(discriminant) / (2 * a));
		x2 = (-b - sqrt(discriminant) / (2 * a));
		cout << "Roots are real and different " << endl;
		cout << "The roots of x1= " << x1 << '\n' << "The roots of x2= " << x2 << endl;
	}
	else if (discriminant == 0)
	{
		cout << "Roots are real and same  " << endl;
		x1 = (-b + sqrt(discriminant) / (2 * a));
		cout << "x1=x2 = " << x1 << endl;
	}
	else
	{
		real_part = -b /( 2 * a);
		imaginary_part = sqrt(-discriminant) / (2 * a);
		cout << "Roots are complex and different " << endl;
		cout << "x1= " << real_part << "+" << imaginary_part<<"i" << endl;
		cout << "x2= " << real_part << "-" << imaginary_part<<"i" << endl;
	}
	return 0;
}