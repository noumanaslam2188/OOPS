//Take the input from user to check even or odd
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number: " << endl;
    while (!(cin >> n))
    {
        cout << "it must be a number" << endl;
        cin.clear();
        cin.ignore(100);
    }
    
    if (n % 2 == 0)
    {
        cout << "Yes! Number is even" << endl;
    }
    else 
    {
        cout << "No! Number is odd" << endl;
    }
    

    return 0;
}