#include<iostream>
using namespace std;
int main()
{
	double val1 = 0, val2 = 0;
	cout << "enter a number" << endl;
	while (cin >> val1)
	{
		
		cout << val1 << " is the greatest number so far" << endl;
		cout << "enter a new number" << endl;
		cin >> val2;
		if (val2 > val1)
		{
			cout << val2 << " is largest so far" << endl;
		}
		else
		{
			cout << val1 << " is still largest so far " << endl;
		}
		cout << "enter a number" << endl;
	}
	return 0;
}