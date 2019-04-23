# include <iostream>
# include <string>
# include <ctime>

using namespace std;

class Account {
private:
	string name;
	string surname;
	float money=0;
	int accountNumber;

public:
	void ShowAccountInfo() {
		cout << "Account number:\t " << accountNumber << "\nName:\t\t " << name << "\nSurname:\t " << surname << "\nMoney:\t\t " << money <<" UAN"<< endl;
	}

	void SetName(string newName) {
		name = newName;
	}

	void SetSurname(string newSurname) {
		surname = newSurname;
	}
	
	void Setmoney(float newMoney) {
		money += newMoney;
	}

	void SetMinmoney(float newMoney) {
		money -= newMoney;
	}
	void SetAccountNumber(){
		accountNumber = rand()%2000000+10000000;
	}
	float GetMoney() 
	{
		return money;
	}
};


int main() {
	string name;
	string surname;
	float money;

	bool exit = false;

	Account PersonOne;

	cout << "Enter name" << endl;
	cin >> name;
	PersonOne.SetName(name);

	cout << "Enter surname" << endl;
	cin >> surname;
	PersonOne.SetSurname(surname);

	PersonOne.SetAccountNumber();

	while (exit == false)
	{
		cout << "Balanse = " << PersonOne.GetMoney() <<" UAN"<< endl;

		int choise;
		cout << "1. Put money on the account\n2. Withdraw money from the account\n3. Info\n0. Exit" << endl;
		cin >> choise;

		
		
		if (choise == 0)
		{
			exit = true;
		}
		else if (choise == 1)
		{
			cout << "Enter money" << endl;
			cin >> money;
			PersonOne.Setmoney(money);
		}
		else if (choise == 2)
		{
			cout << "Enter money" << endl;
			cin >> money;
			PersonOne.SetMinmoney(money);
		}
		else if (choise == 3)
		{
			PersonOne.ShowAccountInfo();
		}
		
	}
	system("pause");
	return 0;
}