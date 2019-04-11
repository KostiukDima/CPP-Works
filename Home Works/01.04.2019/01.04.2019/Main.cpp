#include <string>
#include<iostream>

using namespace std;

//  Описати структуру «Людина». Передбачити: 

/*Заповнення масиву людей
Вивід інформації з сортуванням по прізвищу та імені
Вивід списку іменників місяця з вказанням дати народження
Зміна розміру масиву при додаванні та видаленнні записів
Пошук по прізвищу та імені
Редагування запису
Роботу організувати через меню.Пункти меню обовязково є типами перелічуваної константи*/


struct Person
{
	char name[256];
	char surname[256];
	int day;
	int month;


	void ShowPersonInfo()
	{
		cout << "Name\t\t" << name << "\nSurname\t\t" << surname <<"\nDate of birth\t"<<day<<"."<<month<< endl<<endl;
	}
};

void AddPerson(Person *&person, int personCount)
{
	Person *tmp = new Person[personCount + 1];

	for (int i = 0; i < personCount; i++)
	{
		strcpy_s(tmp[i].name, person[i].name);
		strcpy_s(tmp[i].surname, person[i].surname);
		tmp[i].day = person[i].day;
		tmp[i].month = person[i].month;
	}

	cout << "Enter name" << endl;
	cin >> tmp[personCount].name;
	cout << "Enter surname" << endl;
	cin >> tmp[personCount].surname;
	cout << "Enter your date of birth(day)" << endl;
	cin >> tmp[personCount].day;
	cout << "Enter your date of birth(month)" << endl;
	cin >> tmp[personCount].month;
	cin.get();
	
	delete[] person;

	person = new Person[personCount + 1];
	person = tmp;
	
}

void ShowInfo(Person *&person, int personCount)
{
	int sort;
	cout << "1. Sort by name\n2. Sort by surname" << endl;
	cin >> sort;

	if (sort == 1) 
	{
		for (int j = 65; j < 91; j++)
		{
			for (int i = 0; i < personCount; i++)
			{
				if (int (person[i].name[0]) == j || int (person[i].name[0]) == j + 32)
				{
					person[i].ShowPersonInfo();
				}
			}
		}
	}
	else if (sort == 2)
	{
		for (int j = 65; j < 91; j++)
		{
			for (int i = 0; i < personCount; i++)
			{
				if (int(person[i].surname[0])==j || int (person[i].surname[0]) == j+32)
				{
					person[i].ShowPersonInfo();
				}
			}
		}
	}
	else if (sort == 3)
	{
		cout << "Wrong choise" << endl;
	}
}

void ListOfBirthdays(Person *&person, int personCount)
{
	int month;
	cout << "Enter month"<<endl;
	cin >> month;

	
	for (int i = 0; i < personCount; i++)
	{
		if (int (person[i].month) == month)
		{
			person[i].ShowPersonInfo();
		}
	}
}

void Search(Person *&person, int personCount)
{
	int search;
	cout << "1. Search by name\n2. Search by surname" << endl;
	cin >> search;
	int counter=0;
	
	char sear[256];
	cout << "Enter the item to search" << endl;
	cin >> sear;
	int len = strlen(sear);
	int poz;

	if (search == 1)
	{		
		for (int i = 0; i < personCount; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if ( int(person[i].name[j]) == int(sear[j]) )
				{
					counter++;
					poz = i;
				}
			}			
		}
		if (len == counter)
		{
			person[poz].ShowPersonInfo();
		}
	}
	else if (search == 2)
	{
		for (int i = 0; i < personCount; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (int(person[i].surname[j]) == int(sear[j]))
				{
					counter++;
					poz = i;
				}
			}			
		}
		if (len == counter)
		{
			person[poz].ShowPersonInfo();
		}
	}
	else if (search == 3)
	{
		cout << "Wrong choise" << endl;
	}
}

int DelSearch(Person *&person, int personCount, int search)
{
	int counter = 0;

	char sear[256];
	cout << "Enter the item to search" << endl;
	cin >> sear;
	int len = strlen(sear);
	int poz;

	if (search == 1)
	{
		for (int i = 0; i < personCount; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (int(person[i].name[j]) == int(sear[j]))
				{
					counter++;
					poz = i;
				}
			}
		}		
	}
	else if (search == 2)
	{
		for (int i = 0; i < personCount; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (int(person[i].surname[j]) == int(sear[j]))
				{
					counter++;
					poz = i;
				}
			}
		}
	}
	else if (search == 3)
	{
		cout << "Wrong choise" << endl;
	}

	return poz;
}

void DelPerson(Person *&person, int personCount, int del, int choise)
{
	Person *tmp = new Person[personCount - 1];

	for (int i = 0; i < del; i++)
	{
		strcpy_s(tmp[i].name, person[i].name);
		strcpy_s(tmp[i].surname, person[i].surname);
		tmp[i].day = person[i].day;
		tmp[i].month = person[i].month;
	}
	for (int i = del; i < personCount-1; i++)
	{
		strcpy_s(tmp[i].name, person[i+1].name);
		strcpy_s(tmp[i].surname, person[i+1].surname);
		tmp[i].day = person[i+1].day;
		tmp[i].month = person[i+1].month;
	}
		
	delete[] person;

	person = new Person[personCount - 1];
	person = tmp;

}

int main()
{
	bool exit = false;
	int choise = 0;

	int personCount;
	cout << "Enter person count" << endl;
	cin >> personCount;

	Person *person = new Person[personCount];

	for (int i = 0; i < personCount; i++)
	{
		cout << "Enter name" << endl;
		cin >> person[i].name;
		cout << "Enter surname" << endl;
		cin >> person[i].surname;
		cout << "Enter your date of birth(day)" << endl;
		cin >> person[i].day;
		cout << "Enter your date of birth(month)" << endl;
		cin >> person[i].month;
		cin.get();
	}

	while (exit!=true)
	{
		cout << "1. Show Personal Info\n2. List of birthdays\n3. Add or remove person\n4. Search by name and surname\n0. Exit" << endl;
		cin>>choise;

		if (choise == 0)
		{
			exit = true;
		}
		else if (choise == 1)
		{
			ShowInfo(person, personCount);
		}
		else if (choise == 2)
		{
			ListOfBirthdays(person, personCount);
		}
		else if (choise == 3)
		{
			int action;
			cout << "1. Add person\n2. Delete person" << endl;
			cin >> action;
			
			if (action == 1)
			{				
				AddPerson(person, personCount);
				personCount++;
			}
			else if (action == 2)
			{
				int choise;
				cout << "1. Delete by name\n2. Delete by surname" << endl;
				cin >> choise;
								
				int del;
				del=DelSearch(person, personCount,choise);
							
				DelPerson(person, personCount, del, choise);
			}
			else
			{
				cout << "Wrong chose" << endl;
			}			
		}
		else if (choise == 4)
		{
			Search(person, personCount);
		}
		else
		{
			cout << "Wrong choise" << endl;
		}
	}
	
	delete[] person;
	
	system("pause");
	return 0;
}