#include<iostream>
using namespace std;
int main()
{
	string first_name, friend_name;
	char friend_gender;

	int age;
	int friend_age;
	cout << "Enter the name or the person you want to :" << endl;
	cin >> first_name;
	cout << "Dear " << first_name << "," << endl;
	cout << "How are you?" << endl;
	cout << "I am fine and I miss you" << endl;

	cout << "Whats your friend name" << endl;
	cin >> friend_name;
	cout << "Have you seen him " << friend_name << " lately" << endl;

	cout << "Enter Your Gender m is for male and f is for female :" << endl;

	cin >> friend_gender;

		if (friend_gender == 'm')
		{
			cout << "if you see him "<<friend_name<<" please ask him to call me"<<endl;
		}
		else if (friend_gender == 'f')
		{
			cout << "if you see her " << friend_name << " please ask her to call me" << endl;
			
		}
	
	while (friend_gender != 'm' && friend_gender != 'f')
	{
		cout << "your input is not valid" << endl;

		exit(0);

	}


	cout << "Whats your Age" << endl;
	cin >> age;

	if (age > 0 && age <= 110) {
		cout << "I hear you just had a birthday and you are " << age << " years old!\n";
		if (age < 12) {
			cout << "Next year you will be " << age + 1 << '\n';
		}
		if (age == 17) {
			cout << "Next year you will be able to vote\n";
		}
		if (age > 70) {
			cout << "I hope you are enjoying retirement\n";
		}
	}
	else {
		cout << "You are kidding!\n";
	}


	cout << "Your's sincerely " << endl << endl << endl;
	cout << first_name << endl;
	return 0;

}