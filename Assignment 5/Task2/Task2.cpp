#include<iostream>
using namespace std;
class length
{
	int feet;
	double inch;
public:
	length() :feet(0), inch(0) {}
	length(int ft, double i) :feet(ft), inch(i) {}
	
	void operator+(length l1)
	{

		inch = inch + l1.inch;
		feet = feet + l1.feet;
		if (inch >= 12)
		{
			feet += 1;
			inch = inch - 12;
		}
	}
	void operator-(length l1)
	{

		inch = inch - l1.inch;
		feet = feet - l1.feet;

		if (inch < 0)
		{
			feet -= 1;
			inch = inch + 12;
		}

	}

	void print()
	{
		//cout << "inches = " << inch << endl;
		cout << feet<<"'-"<<inch<<"\"";
	}
};
int main()
{
	length l1(12, 6.6);
	//length l2(14, 9.5);
	length l3(13, 2.2);

	cout << "addition" << endl;
	l3+l1;
	l3.print();

	cout << endl << "subtration" << endl;
	l3-l1;
	l3.print();
	
	return 0;
}