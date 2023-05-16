#include<iostream>
using namespace std;
int main()
{
	double percentage;
	string grade;
	cout << "-1 is for withdraw " << endl;
	cout << "-2 is for Incomplete " << endl;
	cout << "enter your percentage" << endl;
	
	while (cin>>percentage )
	{
	
		 if (percentage > 100 )
		{
		cout << "Your Input is not valid" << endl;
		
		}
		else if (percentage >= 85 && percentage <= 100)
		{
			cout << "Your Grade is A+                  Outstanding" << endl;
		}
		else if (percentage >= 80 && percentage < 85)
		{
			cout << "Your Grade is A-                  Exellent" << endl;
		}
		else if (percentage >= 75 && percentage < 80)
		{
			cout << "Your Grade is B+                  Very Good" << endl;
		}
		else if (percentage >= 70 && percentage < 75)
		{
			cout << "Your Grade is B                   Good" << endl;
		}
		else if (percentage >= 65 && percentage <70)
		{
			cout << "Your Grade is B-                  Above Avrage" << endl;
		}
		else if (percentage >= 61 && percentage <65)
		{
			cout << "Your Grade is C+                  Avrage" << endl;
		}
		else if (percentage >= 58 && percentage <61)
		{
			cout << "Your Grade is C                  Moderate" << endl;
		}
		else if (percentage >= 55 && percentage <58)
		{
			cout << "Your Grade is C-                 Acceptable" << endl;
		}
		else if (percentage >= 53 && percentage <55)
		{
			cout << "Your Grade is D+                 Pass" << endl;
		}
		else if (percentage >= 50 && percentage < 53)
		{
			cout << "Your Grade is D-                 Pass" << endl;
		}
		else if (percentage >= 0 && percentage<50)
		{
			cout << "Your Grade is F                  Fail" << endl;
		}
		else if (percentage == -1)
		{
			cout << "Withdraw" << endl;
		}
		else if (percentage == -2)
		{
			cout << "Incomplete" << endl;
		}
		else if (percentage < -2)
		{
			cout << "Your input is not valid" << endl;
		}
		cout << "Do you want to check again?" << endl;
	}
	
	
}