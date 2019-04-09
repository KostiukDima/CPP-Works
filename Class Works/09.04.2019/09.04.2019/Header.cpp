#include "Header.h"
#include<iostream>
#include<ctime>

using namespace std;

void Print(int * const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i << "] = " << arr[i] << endl;
	}
}

void Fill(int * const arr, const int size)
{
	srand(unsigned(time(NULL)));

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;

	}
}

void Index(int *& arr, int size, int value, int index)
{
	int *tmp = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[index] = value;
	for (int i = index + 1; i < size + 1; i++)
	{
		tmp[i] = arr[i - 1];
	}

	delete[] arr;
	arr = new int[size + 1];
	arr = tmp;
}

void DelIndex(int *& arr, int size, int index)
{
	int *tmp = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}

	for (int i = index; i < size - 1; i++)
	{
		tmp[i] = arr[i + 1];
	}

	delete[] arr;
	arr = new int[size - 1];
	arr = tmp;
}

