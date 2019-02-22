#include<iostream>	

using namespace std;

//1. 	Используя указатели и оператор разыменования, определить наибольшее из двух чисел

/*int main()
{
	int a = 0, b = 0;
	int *pA = &a, *pB = &b;

	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;

	if(*pA > *pB)
	{
		cout << *pA << " > " << *pB << endl;
	}
	else if (*pA < *pB)
	{
		cout << *pA << " < " << *pB << endl;
	}
	else if (*pA == *pB)
	{
		cout << *pA << " = " << *pB << endl;
	}
	system("pause");
	return 0;
}*/



//2.	Используя указатели и оператор разыменования, обменять местами значения 3 - x переменных.

/*int main()
{
	int a = 5, b = 2,c=7, tem=0;
	int *pA = &a, *pB = &b,*pC = &c, *pTem=&tem;

	cout << "a = " << *pA << endl;
	cout << "b = " << *pB << endl;
	cout << "c = " << *pC << endl;
	
	*pTem = *pA;
	*pA = *pB;
	*pB = *pC;
	*pC = *pTem;

	cout << endl;
	cout << "a = " << *pA << endl;
	cout << "b = " << *pB << endl;
	cout << "c = " << *pC << endl;


	system("pause");
	return 0;
}*/

//3.	Написать примитивный калькулятор, пользуясь только указателями.

template<typename T1>
void Sum(T1 *pA, T1 *pB, T1 *pSum);

template<typename T1>
void Difference(T1 *pA, T1 *pB, T1 *pSum);

template<typename T1>
void Product(T1 *pA, T1 *pB, T1 *pSum);

template<typename T1>
void Division(T1 *pA, T1 *pB, T1 *pSum);

int Menu();


int main()
{
	double a = 0, b = 0, sum = 0;
	double *pA = &a, *pB = &b, *pSum = &sum;

	int choise;
	bool v = false;

	while (v != true)
	{
		choise = Menu();
		if (choise == 0)
		{
			v = true;

		}
		else if (choise == 1 || choise == 2 || choise == 3 || choise == 4)
		{
			cout << "Enter a" << endl;
			cin >> a;
			cout << "Enter b" << endl;
			cin >> b;
			if (choise == 1)
			{
				Sum(pA, pB, pSum);
				cout << "Sum = " << sum << endl;
			}
			else if (choise == 2)
			{
				Difference(pA, pB, pSum);
				cout << "Difference = " << sum << endl;
			}
			else if (choise == 3)
			{
				Product(pA, pB, pSum);
				cout << "Product = " << sum << endl;
			}
			else if (choise == 4)
			{
				Division(pA, pB, pSum);
				if (*pB != 0) 
				{
					cout << "Division = " << sum << endl;
				}
			}
			
			system("pause");
			system("cls");
		}
	}

	system("pause");
	return 0;
}

template<typename T1>
void Sum(T1 *pA, T1 *pB, T1 *pSum)
{
	*pSum = (*pA) + (*pB);
}

template<typename T1>
void Difference(T1 *pA, T1 *pB, T1 *pSum)
{
	*pSum = (*pA) - (*pB);
}

template<typename T1>
void Product(T1 *pA, T1 *pB, T1 *pSum)
{
	*pSum = (*pA) * (*pB);
}

template<typename T1>
void Division(T1 *pA, T1 *pB, T1 *pSum)
{
	if (*pB == 0)
	{
		cout << "to 0 can not be divided" << endl;
	}
	else
	{
		*pSum = (*pA) / (*pB);
	}
	
	
}
int Menu()
{
	bool a = false;
	while (a != true)
	{

		cout << "Enter action" << endl;
		cout << "1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\nPress 0 to exit\n";
		int choise = 0;
		cin >> choise;

		if (choise == 0 || choise == 1 || choise == 2 || choise == 3 || choise == 4)
		{
			a = true;
			return choise;
		}
		else
		{
			cout << "There is no such action" << endl;
			system("pause");
			system("cls");
		}

	}
}