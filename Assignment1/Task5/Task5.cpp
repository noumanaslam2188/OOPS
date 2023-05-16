/*Modify the above program to input floating point valuesand store them in double variable.compare the outputs of
two programs for some inputs of your choice.are the results are the same?should they be the same?*/
#include<iostream>
using namespace std;
int main()
{
	//By using double data type it gives proper answer......largest and smallest value
	double val1, val2, largest = 0, smallest = 0;
	cout << "enter two values" << endl;
	cin >> val1 >> val2;
	if (val1 > val2)
	{
		
		largest = val1;
		smallest = val2;

	}
	else {
		
		val2 = largest;
		val1 = smallest;
	}
	//Using double data type with sum,difference,product and ratio answer is not correct
	//But through float data type answer is correct
	//Int data type has answer without floating points
	float sum, difference, product, ratio;
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