#include<iostream>
#include<stdlib.h>
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
	int *tmp = (int*)malloc((size + 1) * sizeof(int));
	

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[index] = value;
	for (int i = index + 1; i < size + 1; i++)
	{
		tmp[i] = arr[i - 1];
	}

	arr = (int*)realloc(arr, (size + 1) * sizeof(int));
	arr = tmp;
}

void DelIndex(int *& arr, int size, int index)
{
	int *tmp = (int*)malloc((size - 1) * sizeof(int));

	for (int i = 0; i < index; i++)
	{
		tmp[i] = arr[i];
	}

	for (int i = index; i < size - 1; i++)
	{
		tmp[i] = arr[i + 1];
	}

	arr = (int*)realloc(arr, (size - 1) * sizeof(int));
	arr = tmp;
}


int main()
{
	int size = 0, choise = 0, value = 0, index = 0, sizemin = 0;

	cout << "Enter size array" << endl;
	cin >> size;

	int *arr = (int*)malloc(size * sizeof(int));
	

	bool exit = false;

	while (exit != true)
	{
		cout << "1 Fill the array\n2 Print an array\n3 Add an item to the specified index\n4 Delete item by index\n0 Exit\n";
		cin >> choise;

		if (choise == 0)
		{
			exit = true;
		}
		if (choise == 1)
		{
			Fill(arr, size);
		}
		else if (choise == 2)
		{
			Print(arr, size);
		}
		else if (choise == 3)
		{
			cout << "Enter value" << endl;
			cin >> value;
			cout << "Enter intex" << endl;
			cin >> index;

			Index(arr, size, value, index);
			size++;
		}
		else if (choise == 4)
		{
			cout << "Enter intex" << endl;
			cin >> index;
			DelIndex(arr, size, index);
			size--;
		}

	}


	free(arr);

	system("pause");
	return 0;

}

//int main()
//{
//	   	  
//
//
//	//========================================================================================================//
//
//	//int *ptr = (int*)calloc(2, sizeof(int));
//	//ptr = (int*)realloc(ptr,3*sizeof(int));
//	//ptr[0] = 10;
//	//ptr[1] = 20;
//	//ptr[2] = 30;
//	//cout << /*ptr[0]<< */"<>" << ptr[0] << endl;
//	//cout << /*ptr[1]<< */"<>" << ptr[1] << endl;	
//	//cout << /*ptr[1]<< */"<>" << ptr[2] << endl;	
//	//free(ptr);
//
//	//========================================================================================================//
//
//	//int *ptr = (int*)calloc(2,sizeof(int));
//	//ptr[0] = 10;
//	//ptr[1] = 20;
//	//cout << /*ptr[0]<< */"<>" << ptr[0] << endl;
//	//cout << /*ptr[1]<< */"<>" << ptr[1] << endl;	
//	//free(ptr);
//
//	//========================================================================================================//
//
//	//int *ptr =(int*)malloc(2*sizeof(int));
//	//ptr[0] = 10;
//	//ptr[1] = 20;
//	//cout << /*ptr[0]<< */"<>" << ptr[0] << endl;
//	//cout << /*ptr[1]<< */"<>" << ptr[1] << endl;
//	//free(ptr);
//
//	//========================================================================================================//
//
//	/*int *ptr = (int*)malloc(sizeof(int));
//	*ptr = 10;
//	cout << ptr << "<>" << *ptr << endl;
//	free(ptr);*/
//
//	//========================================================================================================//
//	
//	system("pause");
//	return 0;
//}