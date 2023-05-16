#include<iostream>
using namespace std;
//*
//void swap_by_value(int* a, int* b)
//{
//	int z = *a;
//	*a = *b;
//	*b = z;
//	cout << " The value of a after swaping is " << *a << endl;
//	cout << "The value b after swaping is " << *b << endl;
//}
void swap_by_value(int a, int b)
{
	int z = a;
	a = b;
	b = z;
	cout << " The value of a after swaping is " << a << endl;
	cout << "The value b after swaping is " << b << endl;
}
//*/
/*void swap_by_value(int *a, int *b)
{
	cout << " The value of a after swaping is " << *a << endl;
	cout << "The value b after swaping is " << *b << endl; 

	int z = *a;
	*a = *b;
	*b = z;

	cout << " The value of a after swaping is " << a << endl;
	cout << "The value b after swaping is " << b << endl;
}*/

/*void swap_by_value(int* a, int* b)
{
	cout << " The value of a  before  swaping is  " << *a << endl;
	cout << "The value b before swaping swaping is " << *b << endl;
	
}
*/

void swap_by_refrence(int &a, int &b)
{
	cout << " The value of a  before  swaping is  " << a << endl;
	cout << "The value b before swaping swaping is" << b << endl;

	int z = a;
	a = b;
	b = z;
	cout << " The value of a after swaping is " << a << endl;
	cout << "The value b after swaping is " << b << endl;
}
int main()
{
	int x = 10;
	int y = 20;
	cout << " The value of a  before  swaping is  " << x << endl;
	cout << "The value b before swaping swaping is" << y << endl;
	swap_by_value(x, y);
	//swap_by_value(&x, &y);
	cout << " The value of a  after  swaping is  " << x << endl;
	cout << "The value b before after swaping is" << y << endl;
    swap_by_refrence(x, y);
/*	void swap_by_value();
	{

		int z = a;
		a = b;
		b = z;
		cout << " The value of a after swaping is " << a << endl;
		cout << "The value b after swaping is " << b << endl;


	}
	*/
	return 0;
}
	