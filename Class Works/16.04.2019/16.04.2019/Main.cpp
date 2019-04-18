
#include<iostream>

#include<string>

using namespace std;

struct Time
{
	unsigned int hour : 5;
	unsigned int minute : 6;
	unsigned int year : 11;

	void ShowInfo()
	{
		cout << "Year\t" << year << "\nTime\t" << hour << ":" << minute << endl;
	}

};

int main()
{
	int hour,year,minute;

	Time Date;
	
	cout << "Enter year ";
	cin >> year;
	cout << "Enter hour ";
	cin>>hour;
	cout << "Enter minute ";
	cin>>minute;

	Date.hour = hour;
	Date.year = year;
	Date.minute = minute;

	Date.ShowInfo();

	system("pause");
	return 0;
}