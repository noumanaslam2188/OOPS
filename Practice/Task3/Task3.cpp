#include<iostream>
using namespace std;
int main()
{
	string first_name, friend_name;
	char friend_gender = 0;
	int age, friend_age;
	cout << "Enter your first name " << endl;
	cin >> first_name;
	cout << "Hello " << first_name << endl;
	cout << "Enter your first name or the person you want to write " << endl;
	cout << "Dear " << first_name << "," << endl;
	cout << "How are you ?" << endl << "I am fine " << "I miss you " << endl;
	cout << "enter your friend name " << endl;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately" << endl;
	cout << "Enter your friend gender" << endl << "Enter m for male and f for female" << endl;
	for (int i = 0; i < 3; i++)
	{
		exit(0);
		while (friend_gender != 'm' && friend_gender != 'f')
		{
			cin >> friend_gender;

			if (friend_gender == 'm')
			{
				cout << "if you " << friend_name << " ask him to call me" << endl;
			}
			else if (friend_gender == 'f')
			{
				cout << "if you " << friend_name << " ask her to call me" << endl;
			}
			else
			{
				cout << "please enter valid input " << endl;
			}
		}
	}
	

	cout << "enter the age " << endl;
	cin >> age;
	if (age <= 0 && age >= 110)
	{
		cout << "Are you kidding me" << endl;
	}
	else
	{
		cout << "I have just hear that its your birthday and you are " << age << " year old" << endl;
	}
	cout << "Dear friend please enter your age " << endl;
	cin >> friend_age;
	if (friend_age < 12)
	{
		cout << "Next year you will be " << age+1;
	}
	if (friend_age == 17)
	{
		cout << "next year you will be able to vote " << endl;
	}
	if (friend_age > 70)
	{
		cout << "Hope you are enjoying your retirement " << endl;
	}
	cout << "Yours Sincerely " << endl << endl << endl;
	cout << "Nomi" << endl;
}