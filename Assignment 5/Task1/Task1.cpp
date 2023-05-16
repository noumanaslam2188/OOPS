#include<iostream>
#include<fstream>
using namespace std;
struct section
{
	int numberofboys;
	int numberofgirls;
};
section totalboysandgirls(section a, section b)
{
	section s;
	s.numberofboys = a.numberofboys + b.numberofboys;
	s.numberofgirls = a.numberofgirls + b.numberofgirls;
	return s;	
}
int total_students(section *x)
{
	int sum;
	sum = x->numberofboys+ x->numberofgirls;
	return sum;
}
int main()
{
	section secA;
	secA.numberofboys = 48;
	secA.numberofgirls = 6;
	section secB;
	secB.numberofboys = 50;
	secB.numberofgirls = 2;
	
	section s= totalboysandgirls(secA, secB);

	int sum = total_students(&s);

	ofstream outfile("data.txt");
	outfile <<"total number of boys "<< s.numberofboys<<endl;
	outfile << "total number of girls " << s.numberofgirls<<endl;
	outfile << "sum is " << sum;
}