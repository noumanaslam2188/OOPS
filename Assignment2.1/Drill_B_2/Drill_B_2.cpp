#include<iostream>
using namespace std;
int main()
{
    double val1 = 0, val2 = 0;
    double smallest = 0;
    double largest = 0;
    cout << "Enter two  values separated by a space (followed by 'Enter'): "<<endl;

    while (cin >> val1 >> val2)
    {
        if (val1 < smallest)
        {
            smallest = val1;
            largest = val2;
           
        }
        else if (val2>largest )
        {
            largest = val2;
            smallest = val1;
        }

        
        cout << "The smaller of the two numbers is : " << smallest << "\n";
        cout << "The largest of the two numbers is : " << largest << "\n";
        if ((val1 - val2) < 1.0 / 1e7)
        {
            cout << "The numbers are almost equal. \n";
        }
        cout << '\n'<<"Enter two  values separated by a space(followed by 'Enter') : " << endl;
    }



    return 0;
}














































