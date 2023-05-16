#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "enter 4 numbers" << endl;
	cin >> a >> b >> c >> d;
	cout << a << " / " << b<<" + "<<c<<" / "<<d;
	int sum = a * d + b * c / b * d;
	cout <<"sum is "<< sum;
	
}