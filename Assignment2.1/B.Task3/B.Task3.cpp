#include<iostream>
using namespace std;
int main()
{
	int n1, n2 ;
	cout << "enter Two numbers" << endl;
	while (true)
	{
		cin >> n1 >> n2;
		if (!cin >> n1 >> n2)
		{
			cout << "it must be a number" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}
		else {
			break;
		}
	}
	if (n1 == n2)
	{
		cout << "numbers are equal " << endl;
	}
	else
	{
		cout << "numbers are not equal" << endl;

	}
	
	
	return 0;
}