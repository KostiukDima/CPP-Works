#include<iostream>	
#include<ctime>
using namespace std;

//                1. Сгенерировать десять массивов из случайных чисел.Вывести их и сумму их элементов на экран.
//  Найти среди них один с максимальной суммой элементов.Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
//                     Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.

/*
template<typename T1>
void Fill(T1 arr[], const int SIZE);
template<typename T1>
void Print(T1 arr[], const int SIZE);
template<typename T1>
void Sum(T1 arr[], const int SIZE);

int main()
{
	
	const int SIZE = 11;
	int arr1[SIZE], arr2[SIZE], arr3[SIZE], arr4[SIZE], arr5[SIZE], arr6[SIZE], arr7[SIZE], arr8[SIZE], arr9[SIZE], arr10[SIZE], arrRez[2][10], max = 0;

	srand(unsigned(time(NULL)));

	Fill(arr1,SIZE);
	Fill(arr2, SIZE);
	Fill(arr3, SIZE);
	Fill(arr4, SIZE);
	Fill(arr5, SIZE);
	Fill(arr6, SIZE);
	Fill(arr7, SIZE);
	Fill(arr8, SIZE);
	Fill(arr9, SIZE);
	Fill(arr10, SIZE);
	
	Sum(arr1, SIZE);
	Sum(arr2, SIZE);
	Sum(arr3, SIZE);
	Sum(arr4, SIZE);
	Sum(arr5, SIZE);
	Sum(arr6, SIZE);
	Sum(arr7, SIZE);
	Sum(arr8, SIZE);
	Sum(arr9, SIZE);
	Sum(arr10, SIZE);


	Print(arr1,SIZE);
	Print(arr2, SIZE);
	Print(arr3, SIZE);
	Print(arr4, SIZE); 
	Print(arr5, SIZE);
	Print(arr6, SIZE);
	Print(arr7, SIZE);
	Print(arr8, SIZE);
	Print(arr9, SIZE);
	Print(arr10, SIZE);

	
	
	arrRez[0][0] = arr1[10];
	arrRez[1][0] = 1;
	arrRez[0][1] = arr2[10];
	arrRez[1][1] = 2;
	arrRez[0][2] = arr3[10];
	arrRez[1][2] = 3;
	arrRez[0][3] = arr4[10];
	arrRez[1][3] = 4;
	arrRez[0][4] = arr5[10];
	arrRez[1][4] = 5;
	arrRez[0][5] = arr6[10];
	arrRez[1][5] = 6;
	arrRez[0][6] = arr7[10];
	arrRez[1][6] = 7;
	arrRez[0][7] = arr8[10];
	arrRez[1][7] = 8;
	arrRez[0][8] = arr9[10];
	arrRez[1][8] = 9;
	arrRez[0][9] = arr10[10];
	arrRez[1][9] = 10;

	

	int  tem = 0, buf = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arrRez[0][i] > arrRez[0][j] && i != j)
			{

				tem = arrRez[1][i];
				arrRez[1][i] = arrRez[1][j];
				arrRez[1][j] = tem;
				buf = arrRez[0][i];
				arrRez[0][i] = arrRez[0][j];
				arrRez[0][j] = buf;
			}
		}
	}
	
	
	cout << "Max arr No " << arrRez[1][0]<<endl;
	cout << "Sum max arr " << arrRez[0][0] << endl;
	
	if (arrRez[0][0]==arr1[10])
	{
		Print(arr1, SIZE);
	}
	else if (arrRez[0][0] == arr2[10])
	{
		Print(arr2, SIZE);
	}
	else if (arrRez[0][0] == arr3[10])
	{
		Print(arr3, SIZE);
	}
	else if (arrRez[0][0] == arr4[10])
	{
		Print(arr4, SIZE);
	}
	else if (arrRez[0][0] == arr5[10])
	{
		Print(arr5, SIZE);
	}
	else if (arrRez[0][0] == arr6[10])
	{
		Print(arr6, SIZE);
	}
	else if (arrRez[0][0] == arr7[10])
	{
		Print(arr7, SIZE);
	}
	else if (arrRez[0][0] == arr8[10])
	{
		Print(arr8, SIZE);
	}
	else if (arrRez[0][0] == arr9[10])
	{
		Print(arr9, SIZE);
	}
	else if (arrRez[0][0] == arr10[10])
	{
		Print(arr10, SIZE);
	}

	system("pause");
	return 0;
}
template<typename T1>
void Fill(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE-1; i++)
	{
		arr[i] = rand() % 50;
		arr[10] = 0;
	}
}
template<typename T1>
void Print(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout<<endl;
}
template<typename T1>
void Sum(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE-1 ; i++)
	{
		arr[10] +=  arr[i];
	}
}
*/

//2. Банкомат.Реалізувати перевантажені функції там, де це необхідно.
//- Є реєстрація користувача(логін по номеру карти(масив  int), пароль(масив int), або логін по номеру телефону(масив int)).
//- Вхід в аккаунт через логін і пароль або через логін      і    номер телефону(масив int).
//- Переказ грошей або на картку або на телефон.
//- Вивід грошей або ціле число(передати int) або дробове число(передати double).Перевірити баланс(на екра).


int Bank(int arrMoney[], int number);

int main()
{
	int arrPhone[3]{380980,380981,380982}, arrLogin[3]{1111,2222,3333 }, arrMoney[3]{1000,2000,3000 }, arrPass[3]{111,222,333};
	int number=4,phone = 0, login = 0, password = 0,choise=0;
	bool a = false, b = false, a1 = false, a2 = false;

	while (b != true)
	{
		while (a != true)
		{
			cout << "Authorization via login(1) or phone(2)(Press 0 to exit)" << endl;
			cin >> choise;

			if (choise == 0)
			{
				b = true;
				a = true;
			}
			else if (choise == 1 || choise == 2)
			{
				a = true;
			}
			else
			{
				cout << "Wrong choise" << endl;
				system("pause");
				system("cls");
			}
		}


		if (choise == 1)
		{
			while (a1 != true)
			{
				cout << "Enter your login" << endl;
				cin >> login;
				for (int i = 0; i < 3; i++)
				{
					if (login == arrLogin[i])
					{						
						number = i; 
						a1 = true;						
					}
				}
				if (login != arrLogin[0] && login != arrLogin[1] && login != arrLogin[2])
				{
					cout << "Wrong login" << endl;
					system("pause");
					system("cls");
				}
			}
		}
		else if (choise == 2)
		{
			while (a2 != true)
			{
				cout << "Enter your phone" << endl;
				cin >> phone;

				for (int i = 0; i < 3; i++)
				{
					if (phone == arrPhone[i])
					{
						number = i;
						a2=true;
					}
				}
				if (phone != arrPhone[0] && phone != arrPhone[1] && phone != arrPhone[2])
				{
					cout << "Wrong phone" << endl;
					system("pause");
					system("cls");
				}
			}
		}
		if (number == 0 || number == 1 || number == 2)
		{
			for (int i = 3; i > 0; i--)
			{
				cout << "Enter your password" << endl;
				cin >> password;

				if (password == arrPass[number])
				{
					Bank(arrMoney, number);
					i = 0;					
				}
				else
				{
					cout << "Wrong password has " << i - 1 << " attempts" << endl;
					system("pause");
					system("cls");
				}
			}
		}
	
	b = true;
	}
	system("pause");
	return 0;
}
int Bank(int arrMoney[],int number)
{
	int choise = 0;
	bool f = false, f1 = false;
	
	while (f != true)
	{
		cout << "Balance  " << arrMoney[number] << endl;
		cout << "1 Money transfer\n2 Withdraw money\n(Press 0 to exit)" << endl;
		cin >> choise;		
		if (choise == 0)
		{
			f = true;
		}
		else if (choise == 1)
		{
			int trans = 0, money = 0, num = 0;
			while (f1 != true)
			{
				cout << "0 On the card\n1 On the phone" << endl;
				cin >> trans;
				if (trans==0||trans ==2)
				{
					f1 = true;
				}
				else
				{
					cout << "Wrong choise" << endl;
					system("pause");
					system("cls");
				}
			}
			if (trans == 0)
			{
				cout << "Enter number card" << endl;
				cin >> num;
				cout << "Enter money" << endl;
				cin >> money;
				if (arrMoney[number] >= money)
				{
					cout << "Transaction completed" << endl;
					arrMoney[number] -= money;
					system("pause");
					system("cls");
				}
				else
				{
					cout << "Not enough money" << endl;
					system("pause");
					system("cls");
				}
			}
			else if (trans == 1)
			{
				cout << "Enter number phone" << endl;
				cin >> num;
				cout << "Enter money" << endl;
				cin >> money;
				if (arrMoney[number] >= money)
				{
					cout << "Transaction completed" << endl;
					arrMoney[number] -= money;
					system("pause");
					system("cls");
				}
				else
				{
					cout << "Not enough money" << endl;
					system("pause");
					system("cls");
				}
			}
			
		}
		else if (choise == 2)
		{
			int money = 0;
			cout << "Enter money" << endl;
			cin >> money;
			if (arrMoney[number] >= money)
			{
				cout << "Take the money" << endl;
				arrMoney[number] -= money;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Not enough money" << endl;
				system("pause");
				system("cls");
			}

		}
		else if (choise != 0&& choise != 1&& choise != 2)
		{
			cout << "Wrong choise"<<endl;
			system("pause");
			system("cls");
		}
	}
	return 0;
}

