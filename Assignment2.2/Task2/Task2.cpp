#include<iostream>
using namespace std;
int main()
{
	int s_num, e_num,multiply;
	cout << "Enter the number for the multiplication table" << endl;
	cin >> multiply;
	cout << "Enter number you want to start table from " << endl;
	cin >> s_num;
	cout << "Enter number where you want to end the table " << endl;
	cin >> e_num;


	if (s_num > e_num)
	{
		swap(s_num, e_num);
	}
		
		/*while (s_num <= e_num)
		{
			cout << s_num << endl;
			s_num = s_num + 1;
		}

		
		for (s_num; s_num <= e_num; s_num = s_num + 1)
		{
			cout << s_num << endl;
		}*/

	for (s_num; s_num <= e_num; s_num += 1)
	{
		cout << multiply << "*"<<s_num<<"="<<multiply*s_num<<endl;
	}
	
}