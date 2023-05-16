#include<iostream>
#include<vector>
using namespace std;
class name_pairs
{
	string name;
	double age;
public:
	name_pairs()
	{
		age = 0;
	}
	vector<string>v_name;
	vector<double>v_age;

	void read_names()
	{
		v_name.push_back("Choudhary");
		v_name.push_back("Usman");
		v_name.push_back("Arsalan"); 
		
	}
	void read_ages()
	{
		for (unsigned int i = 0; i < v_name.size(); i++)
		{
			cin >> age;
			v_age.push_back(age);
		}
	}
	void print()
	{
		for (unsigned int i = 0; i < v_name.size(); i++)
		{
			cout << "Person " << i <<" "<< v_name[i] ;
			cout << " age " << v_age[i] << endl;
		}
		
	}
	void sort()
	{
		for (unsigned int i = 0; i < v_name.size()-1; i++)
		{
			for (unsigned int j = 1; j < v_name.size(); j++)
			{
				if (v_name[i] > v_name[j])
				{
					string temp;
					temp= v_name[i];
					v_name[i] = v_name[j];
					v_name[j] = temp;

					double atemp = v_age[i];
					v_age[i] = v_age[j];
					v_age[j] = atemp;
				}
			}
		}
	}
};
int main()
{
	name_pairs n1;
	n1.read_names();
	cout << "enter age " << endl;
	n1.read_ages();
	n1.print();
	cout << "Sorted" << endl;
	n1.sort();
	n1.print();

}