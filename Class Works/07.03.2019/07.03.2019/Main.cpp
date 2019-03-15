#include<iostream>
#include<ctime>
using namespace std;

/*        Написати функції для роботи з динамічним одновимірним масивом :
   Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
   Виводу масиву
   Доповнення масиву одним елементом в кінець масиву.
   Доповнення масиву одним елементом в початок масиву.
   Видалення елемента за вказаною позицією.
   Вставка нового елемента у довільну допустиму позицію у масиві
   Вставка  в кінець, в початок, за вказаною позицією блоку елементів
   Видалення  з кінеця, з початоку, за вказаною позицією блоку елементів
   Меню*/


void Print(int *const arr, const int size);
void Fill(int *const arr, const int size);
void Push(int *&arr, const int size, int value);
void Beginning(int *&arr, int size, int value);
void Index(int *&arr, int size, int value, int index);
void DelBeg(int *&arr, int size);
void DelPush(int *&arr, int size);
void DelIndex(int *&arr, int size, int index);
void Bloc(int *&arr, int size, int index, int sizemin);
void BlocBeg(int *&arr, int size,  int sizemin);
void BlocEnd(int *&arr, int size,  int sizemin);
void DellBlocBeg(int *&arr, int size, int sizemin);
void DellBlocEnd(int *&arr, int size, int sizemin);
void DellBloc(int *&arr, int size, int index ,int sizemin);


int main()
{
	srand(unsigned(time(NULL)));
			
	int size = 0, choise=0, value=0, index = 0, sizemin=0;
	bool exit = false;

	cout << "Enter size array" << endl;
	cin >> size;
	int *arr1 = new int[size];

	while (exit!=true)
	{
		
		
		cout << "1 Fill the array\n2 Print an array\n3 Add item to the beginning\n4 Add item to the end\n5 Add an item to the specified index\n6 Delete item from beginning of array \n7 Delete item from end of array\n8 Delete item by index\n9 Add an array of numbers by index\n10 Add an array of numbers to the beginning\n11 Add an array of numbers to the end\n12 Delete an array of numbers to the beginning\n13 Delete an array of numbers to the end\n14 Delete an array of numbers by index\n0 Exit\n";
		cin >> choise;
		                               
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
		else if (choise == 5)
		{
			cout << "Enter value" << endl;
			cin >> value;
			cout << "Enter intex" << endl;
			cin >> index;
			
			Index(arr1, size, value, index);
			size++;
		}	
		else if (choise == 6)
		{
			DelBeg(arr1, size);
			size--;
		}
		else if (choise == 7)
		{
			DelPush(arr1, size);
			size--;

		}		
		else if (choise == 8)
		{
			cout << "Enter intex" << endl;
			cin >> index;
			DelIndex(arr1, size,index);
			size--;
		}
		else if (choise == 9)
		{
			cout << "Enter size number";
			cin >> sizemin;
			cout << "Enter intex" << endl;
			cin >> index;

			Bloc(arr1, size, index, sizemin);
			size += sizemin;
			
		}
		else if (choise == 10)
		{
			cout << "Enter size number"<<endl;
			cin >> sizemin;
			
			BlocBeg(arr1, size,  sizemin);
			size += sizemin;

		}
		else if (choise == 11)
		{
			cout << "Enter size number"<<endl;
			cin >> sizemin;
			
			BlocEnd(arr1, size,  sizemin);
			size += sizemin;

		}
		else if (choise == 12)
		{
			cout << "Enter size number" << endl;
			cin >> sizemin;
			

			DellBlocBeg(arr1, size, sizemin);
			size -= sizemin;
		}
		else if (choise == 13)
		{
			cout << "Enter size number" << endl;
			cin >> sizemin;
			

			DellBlocEnd(arr1, size, sizemin);
			size -= sizemin;
		}
		else if (choise == 14)
		{
			cout << "Enter size number" << endl;
			cin >> sizemin;
			cout << "Enter intex" << endl;
			cin >> index;

			DellBloc(arr1, size, index , sizemin);
			size -= sizemin;

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

	for (int i = 1; i < size+1; i++)
	{
		tmp[i] = arr[i-1];
	}
	tmp[0] = value;

	delete[] arr;
	arr = new int[size + 1];
	arr = tmp;
}
void Index(int *&arr, int size, int value,int index)
{
	int *tmp = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[index] = value;
	for (int i = index+1; i < size+1; i++)
	{
		tmp[i] = arr[i-1];
	}
	

	delete[] arr;
	arr = new int[size + 1];
	arr = tmp;
}
void DelBeg(int *&arr, int size)
{
	int *tmp = new int[size - 1];

	for (int i = 0; i < size -1; i++)
	{
		tmp[i] = arr[i+1];
	}

	delete[] arr;
	arr = new int[size -1];
	arr = tmp;
}
void DelPush(int *&arr, int size)
{
	int *tmp = new int[size - 1];

	for (int i = 0; i < size - 1; i++)
	{
		tmp[i] = arr[i];
	}

	delete[] arr;
	arr = new int[size - 1];
	arr = tmp;
}
void DelIndex(int *&arr, int size, int index)
{
	int *tmp = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}
	
	for (int i = index ; i < size-1; i++)
	{
		tmp[i] = arr[i+1];
	}

	delete[] arr;
	arr = new int[size -1];
	arr = tmp;
}
void Bloc(int *&arr, int size,int index,int sizemin)
{
	
	int *sizem = new int[sizemin];

	for (int i = 0; i < sizemin; i++)
	{
		cout << "Enter [" << i << "] = ";
		cin>>sizem[i];
	}
		
	int *tmp = new int[size + sizemin];

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}

	int num = 0;

	for (int i = index; i < index+sizemin; i++)
	{
		
		tmp[i] = sizem[num];
		num++;
	}	
	
	for (int i = index+sizemin; i < size + sizemin; i++)
	{
		tmp[i] = arr[i-sizemin];
	}
	delete[] arr;
	arr = new int[size + sizemin];
	arr = tmp;
}
void BlocBeg(int *&arr, int size,  int sizemin)
{

	int *sizem = new int[sizemin];

	for (int i = 0; i < sizemin; i++)
	{
		cout << "Enter [" << i << "] = ";
		cin >> sizem[i];
	}

	int *tmp = new int[size + sizemin];

	for (int i = 0; i < sizemin; i++)
	{
		tmp[i] = sizem[i];
	}
	int num = 0;
	for (int i = sizemin; i < size + sizemin; i++)
	{
		tmp[i] = arr[num];
		num++;
	}
	
	delete[] arr;
	arr = new int[size + sizemin];
	arr = tmp;
}
void BlocEnd(int *&arr, int size,  int sizemin)
{

	int *sizem = new int[sizemin];

	for (int i = 0; i < sizemin; i++)
	{
		cout << "Enter [" << i << "] = ";
		cin >> sizem[i];
	}

	int *tmp = new int[size + sizemin];

	for (int i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	
	int num = 0;
	
	for (int i = size; i < size + sizemin; i++)
	{
		tmp[i] = sizem[num];
		num++;
	}

	delete[] arr;
	arr = new int[size + sizemin];
	arr = tmp;
}
void DellBlocBeg(int *&arr, int size, int sizemin)
{

	int *tmp = new int[size - sizemin];

	int num = 0;

	for (int i = sizemin; i < size; i++)
	{
		tmp[num] = arr[i];
		num++;
	}	

	delete[] arr;
	arr = new int[size - sizemin];
	arr = tmp;
}
void DellBlocEnd(int *&arr, int size, int sizemin)
{

	int *tmp = new int[size - sizemin];

	for (int i = 0; i < size-sizemin; i++)
	{
		tmp[i] = arr[i];		
	}

	delete[] arr;
	arr = new int[size - sizemin];
	arr = tmp;
	
}
void DellBloc(int *&arr, int size, int index ,int sizemin)
{

	int *tmp = new int[size + sizemin];

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}	
	
	int num = index+sizemin;
	for (int i = index ; i < size - sizemin; i++)
	{
		tmp[i] = arr[num];
		num++;
	}

	delete[] arr;
	arr = new int[size - sizemin];
	arr = tmp;
}