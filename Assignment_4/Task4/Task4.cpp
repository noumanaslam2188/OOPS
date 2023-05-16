#include<iostream>
using namespace std;
void mat_add(int mat_out[], int mat_in1[], int mat_in2[])
{
	for (int i = 0; i < 4; i++){
		mat_out[i] = mat_in1[i] + mat_in2[i];
	}
}

void mat_mul(int mat_out[], int mat_in1[], int mat_in2[])
{
	mat_out[0] = mat_in1[0] * mat_in2[0] + mat_in1[1] * mat_in2[2];
	mat_out[1] = mat_in1[0] * mat_in2[1] + mat_in1[1] * mat_in2[3];
	mat_out[2] = mat_in1[2] * mat_in2[0] + mat_in1[3] * mat_in2[2];
	mat_out[3]=  mat_in1[2] * mat_in2[1] + mat_in1[3] * mat_in2[3];
	
}
int main()
{
	int mat_in1[4] = { 1,2,3,4 };
	int mat_in2[4] = { 5,6,7,8 };
	int mat_out[4];	// { 19,22,43,50}

	mat_add(mat_out, mat_in1, mat_in2);

	for (int i = 0; i < 4; i++)
	{
		cout << mat_out[i] << " ";
	}
	cout << endl;

	mat_mul(mat_out, mat_in1, mat_in2);
	for (int i = 0; i < 4; i++)
	{
		cout << mat_out[i] << " ";
	}

}








