#include<iostream>
using namespace std;

int gcd(int p, int q)
{
	int r=0;
	if ((r = p % q) == 0)
		return q;
	else
	{
		return gcd(r, q);
	}
}
int main()
{
	
	cout << gcd(12, 18) << endl;
	




	return 0;
}

