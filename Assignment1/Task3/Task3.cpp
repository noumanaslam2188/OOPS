//Conversion of Miles into Kilometers
#include<iostream>
using namespace std;
int main()
{

    const float miles2km = 1.609;
    int miles;
   // cout << "Enter the number of miles for conversion into kilometers" << endl;
    while (cin >> miles)
    {
        float result = miles * miles2km;
        cout << result<<endl;
        cout << "Enter the number of miles for conversion into kilometers" << endl;
    }
    return 0;
}