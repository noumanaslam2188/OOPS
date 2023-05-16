#include<iostream>
using namespace std;
int main()
{
	int val1, val2, val3;
	cout << "Enter 3 integer numbers: " << endl;
	cin >> val1 >> val2 >> val3;

	cout << val1 << "," << val2 << "," << val3;

	// idea for solution:
	//		just test which value is the smallest and put it into "smallest"
	//		then test which ofthe remaining two values is the smaller and put it into "middle"
	//		then but the remaining variable int "largest"
	int smallest = 0;
	int middle = 0;
	int largest = 0;
	if (val1 <= val2 && val1 <= val3)
	{
		smallest = val1;
		if (val2 <= val3) {
			middle = val2;
			largest = val3;
		}
		else {
			middle = val3;
			largest = val2;
		}
	}
	else if (val2 <= val1 && val2 <= val3) {
		smallest = val2;
		if (val1 <= val3) {
			middle = val1;
			largest = val3;
		}
		else {
			middle = val3;
			largest = val1;
		}
	}
	else {	// since neither val1 nor val2 was smaller than val3, val3 must be the smallest
		smallest = val3;
		if (val1 <= val2) {
			middle = val1;
			largest = val2;
		}
		else {
			middle = val2;
			largest = val1;
		}
	}

	cout << "values sorted : " << smallest << ", " << middle << ", " << largest << endl;

	return 0;
}