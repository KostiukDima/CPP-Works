#include<iostream>
#include<ctime>
using namespace std;

const int COL = 7, ROW = 5;

int Fill(int arrOne[ROW][COL]);
template<typename T1>
T1 Print(T1 arrOne[ROW][COL]);
template<typename T1>
T1 Zero(T1 arrOne[ROW][COL]);


int main()
{
	int arrOne[ROW][COL];

	Fill(arrOne);
	
	Print(arrOne);

	Zero(arrOne);

	cout << endl;

	Print(arrOne);

	system("pause");
	return 0;
}


int Fill(int arrOne[ROW][COL])
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arrOne[i][j] = rand() % 30 + 1;
		}
	}
	return 0;
}
template<typename T1>
T1 Zero(T1 arrOne[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (arrOne[i][j] % 2 == 0)
			{
				arrOne[i][j] = 0;
			}

		}
	}
	return 0;
}
template<typename T1>
T1 Print(T1 arrOne[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arrOne[i][j] << "\t";
			
		}
		cout << endl;
	}	
	return 0;
}