#include<iostream>
#include<ctime>
#include <windows.h>
using namespace std;
// 1. Даний масив чисел.Написати функцію, яка сортує масив по зростанню або по спаданню, в залежності від третього параметра функції.
//                                     Якщо він рівний 0, сортування йде по спаданню, якщо 1, тоді по зростанню.
/*int Fill(int arrOne[], const int SIZE);
int Print(int arrOne[], const int SIZE);
int Sort(int arrOne[], const int SIZE,int choise);

int main()
{
	const int SIZE = 10;
	int arrOne[SIZE], choise;
	bool a = false;
	
	
	Fill(arrOne,SIZE);

	Print(arrOne,SIZE);

	while (a != true)
	{
		
		cout << "0 Sorted by recession\n1 Sort by growth" << endl;
		cin >> choise;
		if (choise==0||choise==1)
		{
			a = true;
		}
		else
		{
			cout << "Wrong choice" << endl;
		}
	}


	Sort(arrOne, SIZE,choise);

	system("pause");
	return 0;
}

int Fill(int arrOne[], const int SIZE)
{
	srand(unsigned(time(NULL)));

	for (int i = 0; i < SIZE; i++)
	{
		arrOne[i] = rand() % 50;
	}	
	return 0;
}

int Print(int arrOne[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout<<arrOne[i]<<"\t";
	}
	return 0;
}

int Sort(int arrOne[],const int SIZE,int choise)
{
	int tmp = 0;
		
	if (choise == 0) 
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (arrOne[i] > arrOne[j] && i != j)
				{
					tmp = arrOne[i];
					arrOne[i] = arrOne[j];
					arrOne[j] = tmp;
				}
			}
			for (int i = 0; i < SIZE; i++)
			{
				cout << arrOne[i] << "\t";
			}
			Sleep(125);
			system("cls");
		}
		
	}
	else if (choise == 1)
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (arrOne[i] < arrOne[j] && i != j)
				{
					tmp = arrOne[i];
					arrOne[i] = arrOne[j];
					arrOne[j] = tmp;
				}
			}
			for (int i = 0; i < SIZE; i++)
			{
				cout << arrOne[i] << "\t";
			}
			Sleep(125);
			system("cls");
		}

	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrOne[i] << "\t";
	}
	cout << endl;
	return 0;
}*/

//2. Дано 2 паралельних одновимірних масиви : масив назв товарів(масив рядків) та масив цін товарів.Впорядкувати масиви за зростанням цін.
//           Вивести назви та ціни товарів за заростанням та спаданням цін.Використати алгоритм впорядкування методом бульбашки.

int main()
{
	int  arrProducts[5];
	float arrPrice[5], tem = 0, buf = 0;

	for (int i = 0; i < 5; i++)
	{
		switch (i) {
		case 0:
			cout << "Enter the price of an apple";
			arrProducts[i] = i;
			cout << endl;
			break;
		case 1:
			cout << "Enter the price of milk";
			arrProducts[i] = i;
			cout << endl;
			break;
		case 2:
			cout << "Enter the price of candy";
			arrProducts[i] = i;
			cout << endl;
			break;
		case 3:
			cout << "Enter the price of bread";
			arrProducts[i] = i;
			cout << endl;
			break;
		case 4:
			cout << "Enter the price of water";
			arrProducts[i] = i;
			cout << endl;
			break;			
		}	
	cin >> arrPrice[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arrPrice[i] > arrPrice[j]) 
			{

				tem = arrPrice[i];
				arrPrice[i] = arrPrice[j];
				arrPrice[j] = tem;
				buf = arrProducts[i];
				arrProducts[i] = arrProducts[j];
				arrProducts[j] = buf;
			}
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (arrProducts[i] == 0)
		{
			cout << "The price of an apple\t" << arrPrice[i] << endl;
		}
		if (arrProducts[i] == 1)
		{
			cout << "The price of milk\t" << arrPrice[i] << endl;
		}			
		if (arrProducts[i] == 2)
		{
			cout << "The price of candy\t" << arrPrice[i] << endl;
		}
		if (arrProducts[i] == 3)
		{
			cout << "The price of bread\t" << arrPrice[i] << endl;
		}
		if (arrProducts[i] == 4)
		{
			cout << "The price of water\t" << arrPrice[i] << endl;
		}
	}
	
	system("pause");
	return 0;
}
