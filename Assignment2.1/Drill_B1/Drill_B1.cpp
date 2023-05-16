#include <iostream>
using namespace std;

int val1 = 0, val2 = 0;

while (val1 != '|' && val2 != '|')
{
	cout << "Enter 2 integers, terminate with \"|\"" << endl;
	cin >> val1;
	if (val1 == '|')
	{
		return 0;
	}
	cin >> val2;
	if (val2 == '|')
	{
		return 0;
	}
	cout << val1 << " " << val2 << "\n\n";
}


int main()
{


	return 0;
}