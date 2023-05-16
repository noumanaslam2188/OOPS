//program to input 2 values from user and display smaller,larger,sum,difference,product,ratio of values
#include<iostream>
using namespace std;
int main()
{
	int val1, val2, largest = 0, smallest = 0;
	cout << "enter two values" << endl;
	cin >> val1 >> val2;
	if (val1 > val2)
	{
		
		largest = val1;
		smallest = val2;

	}
	else {
		
		largest=val2;
		smallest=val1;
	}

	int sum, difference, product,ratio,result;
	sum = val1 + val2;
	difference = largest - smallest;
	product = val1 * val2;
	ratio = largest / smallest;
	cout << "smallest value" << smallest << endl;
	cout << "largest value" << largest << endl;
	cout << "sum is = " << sum << endl;
	cout << "difference is = " << difference << endl;
	cout << "product is = " << product << endl;
	cout << "ratio is = " << ratio << endl;


	return 0;
}