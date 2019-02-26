#include<iostream>
#include<ctime>
using namespace std;

void Fill(int (&arr)[10], const int &SIZE)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
	}
}
void Print(int(&arr)[10], const int &SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "] = " << arr[i] << endl;
	}
}
void Min(int(&arr)[10], const int &SIZE, int &min)
{
	min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		
		if (min>arr[i])
		{
			min = arr[i];
		}
	}
}

int main()
{
	/*int a = 5, b = 10, c = 2;
	int &RA = a, &RB = b, &RC = c;
	
	int rez = RA * RB*RC;
	cout <<rez<<endl;
	
	float sa = (RA * RB * RC) / 3;
	cout << sa << endl;

	int min = RA;
	if(min>RB)
	{
		min = RB;
	}
	if (min > RC)
	{
		min = RC;
	}
	cout << min << endl;*/
	
	
	const int SIZE = 10;
	int arr[SIZE];
	int &RArr = arr[SIZE];
	const int  &RSize = SIZE;
	int min = 0, &Rmin = min;

	Fill(arr, RSize);
	Print(arr, RSize);
	Min(arr, RSize, Rmin);

	cout << min;

	system("pause");
	return 0;
}