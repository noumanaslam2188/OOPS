#include<iostream>
using namespace std;
double avg_array(double arr[], const int size)
{
	double sum = 0;
	double avr;

	for ( int i = 0; i < size; i++){
		sum += arr[i];
	}
	avr = sum / size;
	return avr;
}

int main()
{
	double sum = 0;
	double avg = 0;
	int size;
	
	cout << "enter the size of an array" << endl;
	cin >> size;
	double* arr;
	arr = new double[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = (double)rand();
		cout << arr[i] << " ";
	}

	avg=avg_array(arr, size);
	cout << endl << avg;
	delete[] arr;
}