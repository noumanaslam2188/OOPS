#include<iostream>
using namespace std;
void reverse(int rev_arr[], int src_arr[], const int size)
{
	for (int i = 0; i < size; i++) {
		rev_arr[size - 1 - i] = src_arr[i];
	}
}

void swap_array(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	/*

	int e = size - 1;

	//while (s < e)
	{
		for (int s = 0; s < size / 2; s++)
		{
			swap(arr[s], arr[e]);
			e--;
		}
	}
	*/


}
int main()
{
	const int size = 4;
	int arr[size] = { 1,2,3,4 };
	int rev_arr[4];

	reverse(rev_arr, arr, size);
	for (int i = 0; i < size; i++) {
		cout << rev_arr[i];
	}
	cout << endl;



	swap_array(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}


}