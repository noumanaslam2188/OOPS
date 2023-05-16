#include<iostream>
using namespace std;
int factorize(int n)
{
	while (n != 1)
		for (int i = 2; i <= n; i++)
		{

			if (n % i == 0)
			{
			cout<< i << " ";
			n = n / i;
			break;

			}
		}
	cout << endl;
	return 0;

}

int main()
{
	 factorize(4);
	 factorize(16);
	 factorize(99);
	 factorize(888);
	 factorize(9725);
	 factorize(78924);
	 factorize(901456);
	 factorize(6543210);

}