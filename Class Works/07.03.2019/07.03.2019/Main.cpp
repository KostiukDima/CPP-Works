#include<iostream>
#include<ctime>
using namespace std;

void Print(int *const arr, const int size);
void Fill(int *const arr, const int size);
void Push(int *&arr, const int size, int value);
void Beginning(int *&arr, int size, int value);
void Index(int *&arr, int size, int value, int index);
void DelBeg(int *&arr, int size);
void DelPush(int *&arr, int size);
void DelIndex(int *&arr, int size, int index);
void Bloc(int *&arr, int size, int index, int sizemin);

int main()
{
	srand(unsigned(time(NULL)));
			
	int size = 0, choise=0, value=0, index = 0, sizemin=0;
	bool exit = false;

	cout << "Enter size" << endl;
	cin >> size;
	int *arr1 = new int[size];

	while (exit!=true)
	{
		
		
		cout << "1 Fill the array\n2 Print an array\n3 Add item to the beginning\n4 Add item to the end\n5 Add an item to the specified index\n6 Delete item from beginning of array \n7 Delete item from end of array\n8 Delete item by index\n9 Add an array of numbers\n0 Exit\n";
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
		cout << "[" << i << "] = " << arr[i] << "\t" << arr + i << endl;
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
	arr = new int[size - 1];
	arr = tmp;
}