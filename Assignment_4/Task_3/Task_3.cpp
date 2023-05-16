#include<iostream>
using namespace std;
void swap(float& a, float& b) {
	float temp = a;
	a = b;
	b = temp;
}

void swap_arrays(float a[], float b[], const int N)
{
	/*
	float temp;
	for(int i=0;i<N;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
		
	}
	*/

	for (int i = 0; i < N; i++)
	{
		swap(a[i], b[i]);

	}
}

int main()
{
	const int N = 5;
	float	x[N] = { 1.1,2.2,3.3,4.4,5.4 };
	float	y[N] = { 5.55,4.44,3.33,2.22,1.11 };
	swap_arrays(x, y, N);
	cout << "Array 1 is : " << endl;
	for (int i = 0; i < N; i++)
	{
		cout <<x[i] <<" ";
	}
	cout <<endl<< "Array 2 is : " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << y[i]<<" ";
	}
}