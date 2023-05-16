#include<iostream>
using namespace std;
int main()
{
    int val1, val2;
    int smallest=0;
    int largest=0;
    cout << " Enter two  values separated by a space (followed by 'Enter'): " << endl;

    while(cin >> val1 >> val2)
    {
        if (val1 == val2)
        {
            cout << "numbers are equal" << endl;
        }
 
     else if (val1 < smallest)
        {
            smallest = val1;
            largest = val2;

        }
        else if (val2 > largest)
        {
            largest = val2;
            smallest = val1;
        }


        cout << "The smallest of the two numbers is : " << smallest <<endl;
        cout << "The largest of the two numbers is : " << largest <<endl;

        cout <<'\n' << "Enter two  values separated by a space (followed by 'Enter'): " << endl;
    }



    return 0;
}
