#include<iostream>
using namespace std;
int main()
{
	int val1, val2;
	cout << "enter two values to check weather which one is smaller and lager value" << endl;
	while (cin >> val1 >> val2)
	{
		if (val1 > val2)
		{
			cout << "the larger value is " << val1 << endl;
			cout << "the smaller value is " << val2 << endl;

		}
		else
		{
			cout << "the smaller  value is  " << val1 << endl;
			cout << "the larger value is " << val2 << endl;

		}
		cout << "enter two values to check weather which one is smaller and lager value" << endl;
	}
	return 0;
}




