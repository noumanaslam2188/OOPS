#include<iostream>
using namespace std;
int main()
{

	const double A = 4.0;
	const double A_MINUS = 3.67;
	const double B_PLUS = 3.33;
	const double B = 3.0;
	const double B_MINUS = 2.67;
	const double C_PLUS = 2.33;
	const double C = 2.0;
	const double C_MINUS = 1.67;
	const double D_PLUS = 1.33;
	const double D = 1.00;
	const double F = 0.0;
	const double G = 0;
	const double H = 0;

	string subject_code;
	string grade_obtained;
	double credit_hours;
	double grade_point = 0;
	double total_time = 0;
	double total_credit = 0;
	double final_gpa = 0;
	int option;



	for (;;)
	{

	
		cout << "Enter subject code" << endl;
		cin >> subject_code;
		cout << "Enter credit hours" << endl;
		while (!(cin >> credit_hours))

		{
			cout << "It must be a number " << endl;
			cin.clear();
			cin.ignore();
		}
		cout << "Enter the obtained grades" << endl;
		cin >> grade_obtained;

		if (grade_obtained == "A" || grade_obtained == "a")
		{
			 grade_point = credit_hours * A;
			 cout << "outstanding" << endl;
		}
		else if (grade_obtained == "A-" || grade_obtained == "a-")
		{
			grade_point = credit_hours * A_MINUS;
			 cout << "Excellent" << endl;
		}
		else if (grade_obtained == "B+" || grade_obtained == "b+")
		{
			grade_point = credit_hours * B_PLUS;
			 cout << "Very Good" << endl;
		}
		else if (grade_obtained == "B" || grade_obtained == "b")
		{
			grade_point = credit_hours * B;
			 cout << "Good" << endl;
		}
		else if (grade_obtained == "B-" || grade_obtained == "b-")
		{
			grade_point = credit_hours * B_MINUS;
			 cout << "Above Avrage" << endl;
		}
		else if (grade_obtained == "C+" || grade_obtained == "c+")
		{
			grade_point = credit_hours * C_PLUS;
			 cout << "Avrage" << endl;
		}
		else if (grade_obtained == "C" || grade_obtained == "c")
		{
			grade_point = credit_hours *C;
			 cout << "Moderate" << endl;
		}
		else if (grade_obtained == "C-" || grade_obtained == "c-")
		{
			grade_point = credit_hours * C_MINUS;
			 cout << "Acceptable" << endl;
		}
		else if (grade_obtained == "D+" || grade_obtained == "d+")
		{
			grade_point = credit_hours * D_PLUS;
			cout << "Pass" << endl;
		}
		else if (grade_obtained == "D" || grade_obtained == "d")
		{
			grade_point = credit_hours * D;
				 cout << "Pass" << endl;
		}
		else if (grade_obtained == "F" || grade_obtained == "f")
		{
			grade_point = credit_hours *F;
				 cout << "Fail" << endl;
		}
		else if (grade_obtained == "G" || grade_obtained == "g")
		{
			cout << "Your course is Incomplete" << endl;
		}
		else if (grade_obtained == "H" || grade_obtained == "h")
		{
			cout << "You Withdraw the subject" << endl;
		}
		else
		{
			cout << "Invalid Input" << endl;
		}

		total_time = total_time + grade_point;
		total_credit = total_credit + credit_hours;

		cout << "Do you want to enter another grade (1 - Yes, 2 - no): ";
		cin >> option;
		if (option == 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}


	final_gpa = total_time / total_credit;
	cout << "Final GPA is " << final_gpa;
	if (final_gpa >= 3.67 && final_gpa <= 4)
	{
		cout << "  Outstanding" << endl;
	}
	else if (final_gpa >= 3.33 && final_gpa <3.67)
	{
		cout << "  Excellent" << endl;
	}
	else if (final_gpa >= 3 && final_gpa <3.33)
	{
		cout << "  Very Good" << endl;
	}
	else if (final_gpa >= 2.67 && final_gpa < 3)
	{
		cout << "  Good" << endl;
	}
	else if (final_gpa >= 2.33 && final_gpa >2.67)
	{
		cout << "  Above Avrage" << endl;
	}
	else if (final_gpa >= 2 && final_gpa > 2.33)
	{
		cout << " Avrage" << endl;
	}
	else if (final_gpa >= 1.67 && final_gpa > 2)
	{
		cout << "  Moderate" << endl;
	}
	else if (final_gpa >= 1.33 && final_gpa > 1.67)
	{
		cout << "  Acceptable" << endl;
	}
	else if (final_gpa >= 1 && final_gpa > 1.33)
	{
		cout << "  Pass" << endl;
	}
	else if (final_gpa >=0 && final_gpa > 1)
	{
		cout << "  Pass" << endl;
	}
	else if (final_gpa <=0)
	{
		cout << "  Fail" << endl;
	}
	return 0;
}