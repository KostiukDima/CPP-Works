#include<iostream>
#include<ctime>
using namespace std;

/*        1) Написати функції для роботи з динамічним одновимірним масивом: 
  a) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні [-12..56]. 
									Функція повертає адресу створеного масиву. 
  b) Виводу масиву 
  c) Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. 

*/


void Print(int *const arr, const int size);
int * Fill(int size);
int Push(int *&arr, const int size, int value);



int main()
{
	srand(unsigned(time(NULL)));

	int *pArr;
	
	int size;


	cout << "Enter size array" << endl;
	cin >> size;

	pArr = Fill(size);
	
	Print(pArr, size);
	
	cout << "Enter add value" << endl;
	int value;
	cin >> value;

	size = Push(pArr, size, value);

	Print(pArr, size);

	
	delete[] pArr;
	system("pause");
	return 0;
}

int  * Fill(int size)
{
	int *arr = new int[size];
		
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 68 + (-12);
	}

	return arr;
}
void Print(int *const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i << "] = "  << arr[i] << endl;
	}
}
int Push(int *&arr, int size, int value)
{
	int *tmp = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;

	delete[] arr;
	arr = new int[size + 1];
	arr = tmp;
	return size + 1;
}
