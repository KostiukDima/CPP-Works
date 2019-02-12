/*#include<iostream>

using namespace std;
int sum = 0;

int Foo(int a, int b)
{
	
	int c = a+1;

	if (a == b) 
	{
		cout << "Sum = " << sum;
		return 0;
		
	}

	sum += (a + c);
	
	cout << a << "+" << c << "=" << a+c << endl;
	
	a++;
	c++;
	return Foo(a,b);
}


int main()
{
	int a, b;
	
	cout << "Enter diapazon"<<endl;
	cin >> a >> b;
	
	Foo(a,b);
	
	cout<<endl;

	system("pause");
	return 0;
}*/

#include<iostream>
#include<ctime>
#include<Windows.h>
using namespace std;

template<typename T1>
void Fill(T1 arrOne[], const int SIZE);
template<typename T1>
void Print(T1 arrOne[], const int SIZE);
template<typename T1>
int Sort(T1 arrOne[], const int SIZE, bool choise);


int main()
{
	const int SIZE = 10;
	int arrOne[SIZE];
	bool choise = true, a=false;

	srand(unsigned(time(NULL)));
		

	Fill(arrOne, SIZE);

	Print(arrOne, SIZE);


	cout << "\n0 Decrease\n1 Growth\n";
		cin >> choise;
	
	Sort (arrOne, SIZE, choise);


	system("pause");
	return 0;
}

template<typename T1>
void Fill(T1 arrOne[], const int SIZE)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		arrOne[i] = rand() % 50 ;
	}	
}
template<typename T1>
void Print(T1 arrOne[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrOne[i] << "\t";
	}	
}
template<typename T1>
int Sort(T1 arrOne[], const int SIZE, bool choise)
{
	int tmp = 0;

	if (choise == false)
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
	else if (choise == true)
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
}