#include<iostream>
#include<string>
using namespace std;

struct Person
{
	string name;
	string surname;
	int age;

	void ShowPersonInfo()
	{
		cout << "Name " << name << "\nSurname " << surname << "\nAge " << age << endl;
	}
};


void FillPerson(Person *person, int personCount)
{
	for (int i = 0; i < personCount; i++)
	{
		cin >> person[0].name;
		cin >> person[0].surname;
		cin >> person[0].age;
		cout << endl;
		person[0].ShowPersonInfo();
	}
}

int main()
{
	int personCount;
	cout << "Enter person count" << endl;
	cin >> personCount;

	Person *person = new Person[personCount];

	FillPerson(person, personCount);

	system("pause");
	return 0;

}