#include<iostream>
using namespace std;
int main()
{
    int i,  k;

    for (i = 2;  i< 1000; i++)
    {
        bool isPrime = true;

        for ( k= 2; k*k < i; k++)
        {
            if (i % k == 0) 
            { 
                isPrime = false;   
            }
        }
        if (isPrime)
        {
            cout <<" "<< i;
        }

    }
    return 0;
}