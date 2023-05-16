#include<iostream>
using namespace std;
int factorial_loop(int n)
{
	int f = 1;
	if (n< 0)
	{
		cout << "input positive number" << endl;
	}
	
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
		
	}
	
	return f;
}
int main()
{
	 cout<<factorial_loop(8);
	 return 0;
}
