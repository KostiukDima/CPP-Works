#include<iostream>
#include<ctime>
using namespace std;

/*1.                    Написати функції для роботи з динамічним одновимірним масивом :
         Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
         Виводу масиву
         Доповнення масиву одним елементом в кінець масиву.
         Доповнення масиву одним елементом в початокмасиву.
         Меню
*/

void Print(int *const arr, const int size);
void Fill(int *const arr, const int size);
void Push(int *&arr, const int size, int value);
void Beginning(int *&arr, int size, int value);

int main()
{
	srand(unsigned(time(NULL)));
	int size = 0, choise = 0, value = 0, index = 0, sizemin = 0;
	bool exit = false;

	cout << "Enter size" << endl;
	cin >> size;
	int *arr1 = new int[size];

	while (exit != true)
	{


		cout << "1 Fill the array\n2 Print an array\n3 Add item to the beginning\n4 Add item to the end\n0 Exit\n";
		cin >> choise;

		if (choise == 0|| choise == 1|| choise == 2|| choise == 3|| choise == 4)
		{
			if (choise == 0)
			{
				exit = true;
			}

			if (choise == 1)
			{
				Fill(arr1, size);
			}
			else if (choise == 2)
			{
				Print(arr1, size);
			}
			else if (choise == 3)
			{
				cout << "Enter value" << endl;
				cin >> value;
				Beginning(arr1, size, value);
				size++;
			}
			else if (choise == 4)
			{
				cout << "Enter value" << endl;
				cin >> value;
				Push(arr1, size, value);
				size++;
			}
		}
		else
		{
			cout << "Wrong choise" << endl;
		}
	}

	delete[] arr1;
	
	system("pause");
	return 0;

}

	void Fill(int *const arr, const int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;

		}
	}
	void Print(int *const arr, const int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << "[" << i << "] = " << arr[i] << endl;
		}
	}
	void Push(int *&arr, int size, int value)
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
	}
	void Beginning(int *&arr, int size, int value)
	{
		int *tmp = new int[size + 1];

		for (int i = 1; i < size + 1; i++)
		{
			tmp[i] = arr[i - 1];
		}
		tmp[0] = value;

		delete[] arr;
		arr = new int[size + 1];
		arr = tmp;
	}