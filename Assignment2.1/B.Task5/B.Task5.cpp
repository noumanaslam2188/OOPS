#include<iostream>
using namespace std;
int main()
{
    double val1 = 0, val2 = 0;

    cout << "Enter two numbers: ";

    while (cin >> val1 >> val2)
    {
        if (val1 < val2)
        {
            cout << "The smaller of the two numbers is the first number: " << val1 << "\n";
            cout << "The largest of the two numbers is the second number: " << val2 << "\n";
        }
        else if (val2 < val1)
        {
            cout << "The smaller of the two numbers is the second number: " << val2 << "\n";
            cout << "The largest of the two numbers is the first number: " << val1 << "\n";
        }

        if ((val1 - val2) < 1.0 / 10000000)
        {
            cout << "The numbers are almost equal. \n";
        }

        cout << "Enter two numbers: ";
    }

	

	return 0;
}