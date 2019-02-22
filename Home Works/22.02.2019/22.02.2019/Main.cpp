#include<iostream>
#include<ctime>
using namespace std;

void Print(int *pArr, const int SIZE);
void Fill(int *pArr, const int SIZE);
void Foo(int *pArr, int *pArr2, const int SIZE);


int main()
{
	const int SIZE = 5, SIZE2 = 5, SIZE3 = SIZE + SIZE2;
	int arrOne[SIZE], arrTwo[SIZE2], arrThree[SIZE3];
	int *pArrOne = arrOne, *pArrTwo = arrTwo, *pArrThree = arrThree;

	srand(unsigned(time(NULL)));

	Fill(pArrOne, SIZE);
	cout << "Arr One" << endl;
	Print(pArrOne, SIZE);

	Fill(pArrTwo, SIZE);
	cout << "\nArr Two" << endl;
	Print(pArrTwo, SIZE);

	for (int i = 0; i < SIZE3; i++)
	{
		if (i < SIZE)
		{
			arrThree[i] = arrOne[i];
		}
		if (i >= SIZE)
		{
			arrThree[i] = arrTwo[i - SIZE];
		}
	}

	cout << "\nArr Three" << endl;
	Print(pArrThree, SIZE3);


	cout << "Elements of an array arrOne that do not occur in arrTwo"<<endl;
	Foo(pArrOne, pArrTwo, SIZE);

	cout << endl;

	cout << "Elements of an array arrTwo that do not occur in arrOne"<<endl;
	Foo(pArrTwo, pArrOne, SIZE);

	cout << "Elements of arrays A and B that are not common to them"<<endl;
	Foo(pArrOne, pArrTwo, SIZE);	
	Foo(pArrTwo, pArrOne, SIZE);

	system("pause");
	return 0;
}

void Fill(int *pArr, const int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{
		*(pArr + i) = rand() % 20;
	}
}

void Foo(int *pArr, int *pArr2, const int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{
		int v = 0;
		for (int j = 0; j < SIZE; j++)
		{
			if (*(pArr + i) != *(pArr2 + j))
			{
				v++;
			}
		}
		if (v == SIZE)
		{
			cout << *(pArr + i) << endl;
		}
	}
}

void Print(int *pArr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "] = " << *(pArr + i) << endl;
	}
}