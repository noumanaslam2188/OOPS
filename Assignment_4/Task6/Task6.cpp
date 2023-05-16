#include<iostream>
using namespace std;

void swap_by_pointer(int* const a, int* const b)
{
	int z = *a;
	*a = *b;
	*b = z;
	cout << " The value of a after swaping is " << *a << endl;
	cout << "The value b after swaping is " << *b << endl;
	cout << " The adress of a " << &a << endl;
	cout << "The adress of b " << &b << endl;
}


int main()
{
	
	int x = 10;
	int y = 20;
	cout <<&x<<" " <<x << endl;
	cout <<&y<<" "<< y << endl;
	swap_by_pointer(&x, &y);
	cout <<&x<<" "<< x << endl;
	cout <<&y<<" "<< y << endl;
		
	return 0;
}
