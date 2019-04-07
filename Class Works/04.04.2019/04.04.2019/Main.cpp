#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Contact
{
	string name;
	string surname;
	string number;
};


int main()
{
	bool exit = false;
	int choise = 0;

	string path = "PB.txt";

	while (exit != true)
	{
		cout << "1. Add contact\n2. Look at the contacts\n0. Exit" << endl;
		cin >> choise;


		if (choise == 0)
		{
			exit = true;
		}
		else if (choise == 1)
		{
			ofstream writeFile;
			writeFile.open(path, ofstream::app);

			Contact newContact;
			cout << "Enter name" << endl;
			cin >> newContact.name;
			cout << "Enter surname" << endl;
			cin >> newContact.surname;
			cout << "Enter number" << endl;
			cin >> newContact.number;

			if (!writeFile.is_open())
			{
				cout << "dotn open file" << endl;
			}
			else
			{
				writeFile << "Name: " << newContact.name << endl << "Surname: " << newContact.surname << endl << "Number: " << newContact.number << endl << endl;
			}
			writeFile.close();


		}
		else if (choise == 2)
		{
			ifstream readFile;

			readFile.open(path);
			if (!readFile.is_open())
			{
				cout << "Canot open" << endl;
			}
			else
			{
				string Data;
				while (!readFile.eof())
				{
					getline(readFile, Data);
					cout << Data << endl;
				}
			}
			readFile.close();
		}
		else {
			cout << "wrong choise";
		}
	}

	system("pause");
	return 0;
}