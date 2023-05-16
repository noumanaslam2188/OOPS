#include<iostream>
using namespace std;
int main()
{
	int a, b,larger=0,smaller=0;
	cout << "enter values" << endl;
	cin >> a >> b;
	if (a > b)
	{
		 larger=a;
		 smaller = b;
	}
	else if(a<b)
	{
		larger = b;
		smaller = a;
	}
	int sum = a + b;
	int sub = larger - smaller;
	int mul = a * b;
	double ratio = larger / smaller;
	cout << "larger " << larger
		<< "smaller " << smaller
		<< "sum " << sum
		<< "subtration " << sub
		<< "multiplicaton " << mul
		<< "ratio " << ratio;
}