#include<iostream>
#include"Header.h"

using namespace std;

int main()
{
	int size = 0, choise = 0, value = 0, index = 0, sizemin = 0;

	cout << "Enter size array" << endl;
	cin >> size;
	
	int *arr = new int[size];

	bool exit = false;

	while (exit != true)
	{
		cout<<"1 Fill the array\n2 Print an array\n3 Add an item to the specified index\n4 Delete item by index\n0 Exit\n"; 
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


	delete[] arr;

	system("pause");
	return 0;

}