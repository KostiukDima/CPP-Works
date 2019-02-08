#include<iostream>
#include<ctime>
using namespace std;

/*1. Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.Перевірити роботу функції для 
одновимірних масивів довжини 10 та довжини 7 функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-26..54]
функцію Print(), яка виводить елементи масиву на екран
перевантажені функції :
- для знаходження суми елементів масиву
- для знаходження мінімального елемента масиву до вказаної верхньої межі проміжку(від початку до вказаного індексу)*/


int Fill(int arrOne[], const int SIZE);
int Print(int arrOne[], const int SIZE);
int Calculation(int arrOne[], const int SIZE);
int Calculation(int arrOne[], const int SIZE, int choise);

int main()
{
	const int SIZE = 10;
	int arrOne[SIZE],  sum=0, choise = 0;
	
	
	Fill(arrOne, SIZE);

	Print(arrOne, SIZE);

	cout << "Sum array One = " << Calculation(arrOne, SIZE) << endl;
	
	cout << "Enter the top limit  ";
	cin >> choise;
	cout << "Minimum value arrOne = " << Calculation(arrOne,SIZE ,choise)<<endl;


	system("pause");
	return 0;
}
int Fill(int arrOne[], const int SIZE)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		arrOne[i] = rand() %80 +(-26);
	}
	return 0;
}
int Print(int arrOne[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrOne[i] << "\t";
	}
	return 0;
}
int Calculation(int arrOne[], const int SIZE)
{
	int sum=0;
	for (int i = 0; i < SIZE; i++)
	{
		sum+=arrOne[i] ;
	}
	return sum;
}
int Calculation(int arrOne[],const int SIZE,int choise)
{
	int min = arrOne[0];
	for (int i = 0; i < choise; i++)
	{
		if (arrOne[i] < min)
		{
			min = arrOne[i];
		}
	}
	return min;
}