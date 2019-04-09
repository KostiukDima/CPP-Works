#include<iostream>
#include <string>
using namespace std;

//  Написати програму, яка реалізує телефонну книгу з вказаною користувачем кількістю абонентів 
//        і всіма необхідними функціями.Використати вкладені структури(для адреси чи ПІБ).

struct Data
{
	string number;
	string city;
	string street;
	int buildingNumber;

	void ShowDataInfo()
	{
		cout << "Phone number " << number << "\nCity " << city << "\nStreet " << street << "\nBuilding number " << buildingNumber << endl;
	}
};


struct Person
{
	string name;
	string surname;
	
	Data data;

	void ShowPersonInfo()
	{
		cout << "Name " << name << "\nSurname " << surname << endl;
	}
};


void FillPerson(Person *person, int personCount)
{
	for (int i = 0; i < personCount; i++)
	{
		cout << "Enter name" << endl;
		cin >> person[i].name;
		cout << "Enter surname" << endl;
		cin >> person[i].surname;
		cout << "Enter phone number" << endl;
		cin >> person[i].data.number;
		cout << "Enter city" << endl;
		cin >> person[i].data.city;
		cout << "Enter street" << endl;
		cin >> person[i].data.street;
		cout << "Enter building number" << endl;
		cin >> person[i].data.buildingNumber;
		
	}
}

void ShowInfo(Person *person, int personCount)
{
	for (int i = 0; i < personCount; i++)
	{
		person[i].ShowPersonInfo();
		person[i].data.ShowDataInfo();
	}
}

int main()
{

	int personCount;
	cout << "Enter person count" << endl;
	cin >> personCount;

	Person *person = new Person[personCount];


	FillPerson(person, personCount);

	ShowInfo(person, personCount);
	
	delete[] person;

	system("pause");
	return 0;
}