#include<iostream>
#include<ctime>
using namespace std;


void Create(int **arr, int rows, int cols);
void Fill(int **arr, int rows, int cols);
void Print(int **arr, int rows, int cols);
void AddRow(int **arr, int rows, int cols);
//void Delete(int **arr, int rows, int cols);

int main()
{
	int cols = 0;
	int rows = 0;

	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;


	int **arr = new int *[rows];

	Create(arr, rows, cols);

	Fill(arr, rows, cols);

	Print(arr, rows, cols);
	
	AddRow(arr, rows, cols);

	

	


	
	
	
	//Delete(arr, rows, cols);

	system("pause");
	return 0;
}

void Create(int **arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) 
	{
		arr[i] = new int[cols];
	}
}

void Fill(int **arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void Print(int **arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void AddRow(int **arr, int rows, int cols)
{
	int row = 6;

	int **tmp = new int *[row];

	Create(tmp, row, cols);

	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < cols; j++) 
		{
			tmp[i][j] = arr[i][j];
		}
	}

	for (int j = 0; j < cols; j++) 
	{
		tmp[5][j] = rand() % 10;
	}

	Print(arr, row, cols);

	
/*
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;

	int **arr = new int *[rows]+1;
	
	Create(arr, rows, cols);
	
	 arr = tmp;
	
	for (int i = 0; i < rows; i++)
	{
		arr[i] = tmp[i];
	}*/
}

/*void Delete(int **arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;
}*/
