#include<iostream>
using namespace std;

void print_a_b_c()
{
    char i;
    cout << "Decimal Values of Capital ABC " << endl;
    for (i = 'A'; i <= 'Z'; i++)
    {
        cout << i << " ";
        cout << dec << int(i) << " ";
    }

    cout << endl << endl << "Hexa Decimal values of Capital ABC " << endl;
    for (i = 'A'; i <= 'Z'; i++)
    {
        cout << i << " ";
        cout << hex << int(i) << " ";
    }


    cout << endl << endl << "Decimal Values of small abc" << endl;
    for (i = 'a'; i <= 'z'; i++)
    {
        cout << i << " ";
        cout << dec << int(i) << " ";
    }

    cout << endl << endl << "Hexa Decimal Values of small abc" << endl;
    for (i = 'a'; i <= 'z'; i++)
    {
        cout << i << " ";
        cout << hex << int(i) << " ";
    }
    cout << endl;
}

void print_digits()
{
    cout << endl << "Decimal values of Digits 0-9" << endl;

    for (int i = '0'; i <= '9'; i++)
    {
       // cout << i << " ";
        cout<<dec<< int(i) << " ";
    }


    cout << endl << endl << "Hexa Decimal values of Digits 0-9" << endl;
    for (int i = '0'; i <= '9'; i++)
    {
        
        cout << hex << int(i) <<  " ";
    }
    cout << endl << endl;
}
int main()
{
    print_a_b_c();
    print_digits();

}