//take input from user and display their sum in fractions
#include<iostream>
using namespace std;
int main()
{
    char dumychar;
    int a, b, c, d, num, den;
    cout << "Enter 1st fraction: " << endl;
    cin >> a >> dumychar >> b;
    cout << "Enter the 2nd fraction: " << endl;
    cin >> c >> dumychar >> d;
    num = (a * d) + (b * c);
    den = b * d;
    cout << "Result=" << num << "/" << den << endl;
    return 0;
}