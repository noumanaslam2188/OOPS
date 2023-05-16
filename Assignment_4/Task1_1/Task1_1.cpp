#include<iostream>
using namespace std;
void rand_num_filler(int vec[], int len, int range)
{
	for (int i = 0; i < len; i++)
		vec[i] = -rand() %range;
}
int vec_max(int vec[], int len, int& pos)
{
	pos = 0;
	int max=vec[pos] ;
	
	for (int i = 1; i < len; i++)
	{
		if (max < vec[i])
		{
			pos = i;
			max = vec[pos];
		}
	}

	return max;

}
void vec_add_index(int vec[], int len)
{
	for (int i = 0; i < len; i++)
	{
		vec[i] += i;
	}
}
int main()
{
	const int LEN = 16;
	int vec[LEN] = {};
	int max_num = 1000;
	int pos = 0;

	 rand_num_filler(vec,  LEN, max_num);


	int max_val = vec_max(vec, LEN, pos);
	for (int i = 0; i < LEN; i++)
	{
		cout << vec[i] << endl;
	}
	cout << "Max value : "<< max_val;
	cout << "    pos : " << pos;
	cout << endl << endl;


	vec_add_index(vec, LEN);
     for (int i = 0; i < LEN; i++)
	{
		cout << vec[i] << endl;
	}
	return 0;
}
