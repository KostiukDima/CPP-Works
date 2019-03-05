#include<iostream>
#include<ctime>
using namespace std;

void Print(int *const arr, const int size);
void Fill(int *const arr, const int size);
void Push(int *&arr, const int size, int value);
int main()
{
	srand(unsigned(time(NULL)));
	//-----------------------------------------------------------------
	/*int size = 0;
	cout << "enter size"<<endl;
	cin >> size;
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t" << arr + i << endl;
	}

	delete[] arr;
	*///----------------------------------------------------------------

	/*int size = 0;	
	cout << "enter size" << endl;
	cin >> size;
	int *arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	delete[] arr;*/

	int size = 0;
	cout << "Enter size" << endl;
	cin >> size;

	int *arr1 = new int[size];
	
	cout << "arr1" << endl;
	Fill(arr1, size);
	Print(arr1, size);	
	
	Push(arr1, size,8);
	
	Print(arr1, size+1);
		
	delete[] arr1; 
	
	system("pause");
	return 0;
}

void Fill(int *const arr,  const int size)
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
		cout << "["<<i<<"] = "<<arr[i] << "\t" << arr + i << endl;
	}
}
void Push(int *&arr, int size, int value)
{
	int *tmp = new int[size+1];

	for (int i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;
	
	delete[] arr;
	arr = new int[size+1];
	arr = tmp;
}