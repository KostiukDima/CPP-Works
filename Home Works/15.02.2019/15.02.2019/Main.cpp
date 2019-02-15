#include<iostream>
#include<ctime>
using namespace std;

//Написати рекурсивну функцію, яка отримує ціле число і виводить його у двійковій системі числення

/*void Foo(int arrNumber[], int number, int i);

int main()
{
	int arrNumber[100];
	int number = 0, i=1;

	cout << "Enter number" << endl;
	cin >> number;
	Foo(arrNumber, number, i);
	
	
	for (int j = arrNumber[0]; j!=0 ; j--)
	{
		cout << arrNumber[j];

	}
	cout << endl;
	system("pause");
	return 0;
}

void Foo(int arrNumber[],int number,int i)
{
	
	if (number % 2 == 0)
	{
		arrNumber[i] = 0;
		number /= 2;
	}
	else if (number % 2 != 0)
	{
		arrNumber[i] = 1;
		number = number - 1;
		number = number/2;
		
	}
	
	arrNumber[0] = i;
	i++;
	if (number > 0)
	{
		Foo(arrNumber, number,  i);
	}
	
}*/

//Написати рекурсивну логічну функцію, яка перевіряє чи переданий у функцію масив впорядкований за зростанням(не спаданням).

int Print(int arrOne[], const int SIZE);
int Foo(int arrOne[], int SIZE, int i, int j, int counter, int size);

int main()
{
	const int SIZE=6;
	int rez=0,arrOne[SIZE]{2,8,32,45,54,74},counter=0,i=0,j=1;
	int size = SIZE;

	Print(arrOne, SIZE);
	cout << endl;
	
	rez=Foo(arrOne, SIZE,i,j,counter,size);
	
	if (rez == size - 1)
	{
		cout << "Array arranged in ascending order" << endl;
	}
	else 
	{
		cout << "Array is not ordered in ascending order" << endl;
	}
		
	system("pause");
	return 0;
}

int Print(int arrOne[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrOne[i] << "   ";
	}
	return 0;
}

int Foo(int arrOne[], int SIZE,int i,int j,int counter,int size)
{
	
	if (arrOne[i]<arrOne[j]&&j<size&&i<size-1)
	{
		counter++;
		
	}
	i++;
	j++;
	SIZE--;
	if (SIZE != 0)
	{
		Foo(arrOne, SIZE, i, j, counter,size);
	}
	if (SIZE == 0)
	{
		return counter;
	}
}