#include<iostream>
#include<string>
#include<ctime>

using namespace std;

/*
void Fill(int *arr, int SIZE);
void Print(int *arr, int SIZE);
bool Bigger(int a, int b);
bool Smaller(int a, int b);
void SortArr(int *arr, const int SIZE, bool(*funk)(int a, int b));


int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	
	Fill(arr, SIZE);

	Print(arr, SIZE);

	

	SortArr(arr, SIZE, Bigger);
	
	cout << endl;
	
	Print(arr, SIZE);

	system("pause");
	return 0;
}

void Fill(int *arr, const int SIZE)
{
	srand(unsigned(time(NULL)));

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
	}	
}

void Print(int *arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
}
bool Bigger(int a, int b)
{
	if (a > b)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Smaller(int a, int b)
{
	if (a < b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void SortArr(int *arr, const int SIZE, bool(*funk)(int a, int b))
{

	int a, b;
	cout << "\nEnter two number\n";
	cin >> a >> b;
	int tmp;

	if (funk(a, b))
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (*(arr + i) < *(arr + j) && i != j)
				{
					tmp = *(arr + i);
					*(arr + i) = *(arr + j);
					*(arr + j) = tmp;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (*(arr + i) > *(arr + j) && i != j)
				{
					tmp = *(arr + i);
					*(arr + i) = *(arr + j);
					*(arr + j) = tmp;
				}
			}
		}
	}
}*/
 
int main() 
{
	char str[255];
	bool exit = false;
	
	cout << "Enter text" << endl;
	cin >> str;

	for(int i = 0; i<255; i++)
	{
		if (int(str[i]) == 46)
		{
			i = 256;
			
		}
		if (int(str[i]) == 32)
		{
			cout << endl;

		}
		else
		{
			cout << str[i];
		}
		
	}

	cout << str;


	system("pause");
	return 0;
}

