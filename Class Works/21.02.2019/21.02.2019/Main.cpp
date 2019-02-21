#include<iostream>
#include<ctime>
using namespace std;

void Print(int *pArr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "] = " << *(pArr + i) << endl;
	}
}
void Sort(int *pArr, const int SIZE);

void Fill(int *pArr, const int SIZE);

void Foo(int *pArr, int *pArr2, const int SIZE);

int main()
{
	/*const int SIZE = 5;
	int arr[SIZE]{6,8,9,8,4},sum=0,min=0,max=0,pozmin=0,pozmax=0,tmp=0;
	int *pArr = arr;
		
	Print(pArr, SIZE);

	cout << endl;

	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << "arr [" << i << "] = " << *(pArr + i) << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		sum += *(pArr + i);
	}

	cout <<"Sum = "<< sum << endl;
	
	min = *pArr;
	max = *pArr;
	for (int i = 0; i < SIZE; i++)
	{
		if (min > *(pArr + i))
		{
			min = *(pArr + i);
			pozmin = i;
		}
		if (max < *(pArr + i))
		{
			max = *(pArr + i);
			pozmax = i;
		}

	}
	tmp=arr[pozmin] ;
	arr[pozmin] = arr[pozmax];
	arr[pozmax] = tmp;
	   	
	cout <<"Min = "<< min << endl;
	cout <<"Max = "<<max << endl;
	

	Print(pArr, SIZE);*/


	/*const int SIZE = 5,SIZE2 = SIZE*2;
	int arrOne[SIZE]{ 1,5,21,12,48 }, arrTwo[SIZE]{3,26,41,23,73}, arrThree[SIZE2];
	int *pArrOne = arrOne, *pArrTwo = arrTwo,*pArrThree=arrThree;

	Sort(pArrOne, SIZE);
	cout << "Arr One" << endl;
	Print(pArrOne, SIZE);
	
	Sort(pArrTwo, SIZE);
	cout << "\nArr Two" << endl;
	Print(pArrTwo, SIZE);
	
	for (int i = 0; i < SIZE2; i++)
	{
		if (i<SIZE)
		{
			arrThree[i] = arrOne[i];
		}
		if (i >= SIZE)
		{
			arrThree[i] = arrTwo[i-SIZE];
		}
	}

	Sort(pArrThree, SIZE2);
	cout << "\nArr Three" << endl;
	Print(pArrThree, SIZE2);*/


	const int SIZE = 5, SIZE2=5, SIZE3 = SIZE+SIZE2;
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

	
	cout << "Elements of an array arrOne that do not occur in arrTwo";
	Foo(pArrOne, pArrTwo, SIZE);

	cout << endl;

	cout << "Elements of an array arrTwo that do not occur in arrOne";
	Foo(pArrTwo, pArrOne, SIZE);


	system("pause");
	return 0;
}

void Sort(int *pArr, const int SIZE)
{
	int tmp;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (*(pArr+i) < *(pArr+j) && i != j)
			{
				tmp = *(pArr + i);
				*(pArr + i) = *(pArr + j);
				*(pArr + j) = tmp;
			}
		}		
	}
}
void Fill(int *pArr, const int SIZE)
{	
	
	for (int i = 0; i < SIZE; i++)
	{
		*(pArr + i) = rand() % 20;
	}
}
void Foo(int *pArr,int *pArr2, const int SIZE)
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