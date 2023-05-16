#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class publication
{
	string title;
	int price;
public:
	publication() :price(0) {}
	void get_data()
	{
		fstream myfile("data_input.txt");

	myfile << "Enter the title of Book" << endl;
		getline(myfile, title);
		myfile << "Enter the price of Book" << endl;
	myfile >> price;
	}
	void put_data()
	{
		fstream myfile("data_output.txt");
		myfile << "Title of Book is " << title;
		myfile<< "Price of Book is " << price;
	}


};


class Ebook :public publication
{
	int page_count;
public:
	Ebook() :page_count(0) {}
	void get_data()
	{
		//fstream myfile("data_in.txt");
		cout << "Enter the pages of Book" << endl;
		cin>> page_count;
	}
	void put_data()
	{
		//fstream myfile("data_out.txt");
		cout << "Pages of Book : " << page_count;
	}
};


class Audiobook :public publication
{
	int playing_mins;
public:
	void get_data()
	{
	//	fstream myfile("data_in.txt");
	cout << "Enter the playing time in minutes " << endl;
		cin >> playing_mins;
	}
	void put_data()
	{
		//fstream myfile("data_out.txt");
		cout << "Playing time in minutes : " << playing_mins << endl;
	}
};

int main()
{
	



	publication p1;
	p1.get_data();
	p1.put_data();


	Ebook e1;
	e1.get_data();
	e1.put_data();


	Audiobook a1;
	a1.get_data();
	a1.put_data();





	

}