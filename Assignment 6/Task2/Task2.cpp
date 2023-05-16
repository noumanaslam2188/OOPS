#include<iostream>
using namespace std;
class Mstring
{
	char* str;
public:

	Mstring()
	{
		str = new char[1];
		str[0] = '\0';
	}

	Mstring(const Mstring& s)//copy constructor
	{
		str = new char[strlen(s.str) + 1];
		//strcpy(str, s.str);

		for (unsigned int i = 0; i != '\0'; i++) {

			str[i] = s.str[i];
		}
	}
	Mstring(const Mstring& s, size_t pos, size_t len)//substring constructor
	{

		str = new char[strlen(s.str) + 1];
		for (unsigned int i = pos; i <= len; i++)
		{
			str[i] = s.str[i];
		}
	}


	Mstring(const char* s, size_t n)//from sequence
	{
		str = new char[n + 1];
		for (unsigned int i = 0; i <= n; i++)
		{
			str[i] = s[i];
		}
	}
	Mstring(size_t n, char c)//fill constructor
	{

		str = new char[n + 1];
		for (unsigned int i = 0; i < n; i++)
		{
			str[n] = c;
		}
	}
	Mstring(Mstring&& s)//move consturctor
	{
		str = s.str;
		s.str = nullptr;
	}
};
int main()
{
	char s[] = "Hellow World";
	Mstring s2(s, 13);
	Mstring s3(5, 'x');
	Mstring s4(s3);
	Mstring s5(s2, 7, 5);

	return 0;
}