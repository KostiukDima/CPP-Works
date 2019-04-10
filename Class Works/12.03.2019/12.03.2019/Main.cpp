#include<iostream>
#include<ctime>
using namespace std;

//Написати функції для роботи з динамічною матрицею :
//Функція створення динамічної матриці розміром row x col, де row та col
//Функція заповнення матриці
//Функція виводу матриці
//Функція доповнення матриці новим рядком
//Функція видалення з матриці рядка за вказаним номером
//Функція вставки нового рядка за вказаним номером
//Функція доповнення матриці новим стовпчиком
//Функція видалення з матриці стовпця за вказаним номером
//Функція вставки нового стовпця за вказаним номером

void Create(int **&arr, int rows, int cols);
void Fill(int **&arr, int rows, int cols);
void Print(int **&arr, int rows, int cols);
void AddRow(int **&arr, int rows, int cols);
void AddRowIndex(int **&arr, int rows, int cols, int index);
void DellRowIndex(int **&arr, int rows, int cols, int index);
void AddCol(int **&arr, int rows, int cols);
void AddColIndex(int **&arr, int rows, int cols, int index);
void DellColIndex(int **&arr, int rows, int cols, int index);

int main()
{
	int cols = 0;
	int rows = 0;
	int choise = 0;

	srand(unsigned(time(NULL)));

	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;

	int **arr = new int *[rows];
	Create(arr, rows, cols);

	bool exit = false;
	while (exit != true)
	{
		cout << "1 Fill the array\n2 Print an array\n3 Add new row\n4 Add new row by index\n5 Delete row\n6 Add a new column\n7 Add new column by index\n8 Delete the column\n0 Exit\n";
		cin >> choise;

		if (choise == 0)
		{
			exit = true;
		}
		else if (choise == 1)
		{
			Fill(arr, rows, cols);
		}
		else if (choise == 2)
		{
			Print(arr, rows, cols);
		}
		else if (choise == 3)
		{
			AddRow(arr, rows, cols);
			
			rows++;
		}
		else if (choise == 4)
		{
			int indexRow;
			cout << "Enter row" << endl;
			cin >> indexRow;

			AddRowIndex(arr, rows, cols, indexRow);

			rows++;			
		}
		else if (choise == 5)
		{
			int indexRow;
			cout << "Enter row" << endl;
			cin >> indexRow;

			DellRowIndex(arr, rows, cols, indexRow);

			rows--;
		}
		else if (choise == 6)
		{

			AddCol(arr, rows, cols);

			cols++;		
		}
		else if (choise == 7)
		{
			int indexCol;
			cout << "Enter column" << endl;
			cin >> indexCol;

			AddColIndex(arr, rows, cols, indexCol);

			cols++;
		}
		else if (choise == 8)
		{
			int indexCol;
			cout << "Enter row" << endl;
			cin >> indexCol;

			DellColIndex(arr, rows, cols, indexCol);

			cols--;
		}
		else 
		{
			cout << "Wrong choise"<<endl;
		}
	}
	   	 	
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;

	system("pause");
	return 0;
}

void Create(int **&arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) 
	{
		arr[i] = new int[cols];
	}
}

void Fill(int **&arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void Print(int **&arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void AddRow(int **&arr, int rows, int cols)
{
	int **tmp = new int *[rows + 1];

	Create(tmp, rows + 1, cols);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp[i][j] = arr[i][j];
		}
	}

	for (int j = 0; j < cols; j++)
	{
		tmp[rows][j] = rand() % 10;
	}
	   	  
	for (int i = 0; i < rows; i++) 
	{
		delete[] arr[i];
	}
	delete[] arr;
	
	arr = tmp;	
}

void AddRowIndex(int **&arr, int rows, int cols, int index)
{
	int **tmp = new int *[rows + 1];

	Create(tmp, rows + 1, cols);

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp[i][j] = arr[i][j];
		}
	}
	for (int j = 0; j < cols; j++)
	{
		tmp[index][j] = rand() % 10;
	}
	for (int i = index; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp[i+1][j] = arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;	

	arr = tmp;
	
}

void DellRowIndex(int **&arr, int rows, int cols, int index)
{
	int **tmp = new int *[rows - 1];

	Create(tmp, rows - 1, cols);

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp[i][j] = arr[i][j];
		}
	}	
	for (int i = index; i < rows-1; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp[i][j] = arr[i+1][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	arr = tmp;

}

void AddCol(int **&arr, int rows, int cols)
{
	int **tmp = new int *[rows];

	Create(tmp, rows, cols + 1);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp[i][j] = arr[i][j];
		}
	}

	for (int j = 0; j < rows; j++)
	{
		tmp[j][cols] = rand() % 10;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	arr = tmp;
}

void AddColIndex(int **&arr, int rows, int cols,int index)
{
	int **tmp = new int *[rows];

	Create(tmp, rows, cols + 1);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp[i][j] = arr[i][j];
		}
	}

	for (int j = 0; j < rows; j++)
	{
		tmp[j][index] = rand() % 10;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = index; j < cols; j++)
		{
			tmp[i][j+1] = arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	arr = tmp;
	
}

void DellColIndex(int **&arr, int rows, int cols, int index)
{
	int **tmp = new int *[rows - 1];

	Create(tmp, rows, cols-1);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < index; j++)
		{
			tmp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows ; i++)
	{
		for (int j = index; j < cols-1; j++)
		{
			tmp[i][j] = arr[i][j+1];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	arr = tmp;

}