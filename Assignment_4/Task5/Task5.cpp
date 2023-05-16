#include<iostream>
using namespace std;
int str_len(const char* const src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++);
	return i;

}


int str_copy(char* const dest, const char* const src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return i;
}


int str_cat(char* const dest, const char* const src1, const char* const src2)
{
	int len = str_len(src1);

	str_copy(dest, src1);
	str_copy(len + dest, src2);
	return str_copy(dest + len, src2);

}

int str_to_upper_case(char* const dest, const char* const src)
{
	{
		int i;
		//str_copy(dest, src);
		for (i = 0; src[i] != 0; i++)
		{
			dest[i] = src[i];
			if (dest[i] >= 'a' && dest[i] <= 'z')
			{
				dest[i] = dest[i] - 32;
			}
		}
		dest[i] = '\0';
		return i;
	}
}
int main()
{
	//1st function (print len)
	const char* const src = "nouMAN aslam ";
	cout << str_len(src) << endl;

	//2nd function (copy string)
	char dest[40];
	str_copy(dest, src);
	int i;
	for (i = 0; src[i] != 0; i++)
	{
		cout << dest[i];
	}
	cout << i;
	cout << endl;

	//3rd function (concatination)
	const char* const src1 = "nouman  ";
	const char* const src2 = "aslam  ";
	str_cat(dest, src1, src2);

	for (i = 0; dest[i] != '\0'; i++)
	{
		cout << dest[i];
	}
	cout << " " << i << endl;


	//4th function (upper case conversion)
	str_to_upper_case(dest, src);

	for (i = 0; src[i] != '\0'; i++)
	{
		cout << dest[i];
	}
	cout << " " << i;
	system("PAUSE");

	return 0;
}