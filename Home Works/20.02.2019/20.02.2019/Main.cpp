#include<iostream>	

using namespace std;

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
	double a = 10, b = 5, sum = 0;
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
				cout << "Division = " << sum << endl;
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
	*pSum = (*pA) / (*pB);
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