#include<iostream>
using namespace std;
class controller
{
	int a;
public:
	controller():a(0){}
	virtual void on()
	{
		a = 1;
	}
	virtual void off()
	{
		a = 0;
	}
	virtual int set_level(int x)
	{

		a= x;
		return x;
	}
	virtual void show()
	{
		if (a == 0)
		{
			cout << "class is off" << endl;
		}
		else if (a== 1)
		{
			cout << "class is on" << endl;
		}
	}
};
class test :public controller
{
	int b;
public:
	test():b(1){}
	void show()
	{
		if (b == 0)
		{
			cout << "current level of class is off" << endl;
		}
		else if (b == 1)
		{
			cout << "crurrent level of class is on" << endl;
		}
	}
};
class room:public controller
{
	int temp;
public:
	int set_level(int z)
	{
		temp = z;
		return temp;
	}
};
int main()
{
	int x= 1;
	int z = 0;


	controller* ptr;
	controller c1;
	ptr=&c1;
	ptr->on();
	ptr->off();
	int d=ptr->set_level(x);
	ptr->show();

	test t1;
	ptr = &t1;
	ptr->show();


	
	room r1;
	ptr = &r1;
	ptr->set_level(z);
	cout << z;
	


}