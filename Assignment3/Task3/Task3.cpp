#include<iostream>
using namespace std;

int gcd_loop(int p, int q)
{

	int r=0;
	for (int i = 1; i <= p && i <= q; i++)
	{
		if (p % i == 0 && q % i == 0)
		{
			r = i;
		}
	}
	return r;
}
int gcd(int p, int q)
{
	
	int r = p % q;
	if ((r) == 0)
		return q;
	else
	{
		return gcd(q, r);
	}
}


void test_gcd()
{

	cout << "values of gcd_loop" << endl;
	cout << gcd_loop(12, 18) << endl;
	cout << gcd_loop(10, 25) << endl;
	cout << gcd_loop(6, 27) << endl;
	cout << gcd_loop(14, 78) << endl;
	cout << gcd_loop(120, 460) << endl;
	cout << gcd_loop(799, 997) << endl;
	cout << gcd_loop(444, 4444) << endl;
	cout << gcd_loop(123, 456) << endl;
	cout << gcd_loop(32768, 256) << endl;

	cout << '\n' << "Values of gcd" << endl;
	cout << gcd(12, 18) << endl;
	cout << gcd(10, 25) << endl;
	cout << gcd(6, 27) << endl;
	cout << gcd(14, 78) << endl;
	cout << gcd(120, 460) << endl;
	cout << gcd(799, 997) << endl;
	cout << gcd(444, 4444) << endl;
	cout << gcd(123, 456) << endl;
	cout << gcd(32768, 256) << endl;
	cout << "Values of gcd_loop and gcd are same" << endl;

	
	
}

int main()
{
      test_gcd();
	return 0;
}

