#include<iostream>	
#include<ctime>
using namespace std;
/*
template<typename T1>
void Fill(T1 arr[], const int SIZE);
template<typename T1>
void Print(T1 arr[], const int SIZE);
template<typename T1>
void Sum(T1 arr[], const int SIZE);

int main()
{
	
	const int SIZE = 11;
	int arr1[SIZE], arr2[SIZE], arr3[SIZE], arr4[SIZE], arr5[SIZE], arr6[SIZE], arr7[SIZE], arr8[SIZE], arr9[SIZE], arr10[SIZE], arrRez[2][10], max = 0;

	srand(unsigned(time(NULL)));

	Fill(arr1,SIZE);
	Fill(arr2, SIZE);
	Fill(arr3, SIZE);
	Fill(arr4, SIZE);
	Fill(arr5, SIZE);
	Fill(arr6, SIZE);
	Fill(arr7, SIZE);
	Fill(arr8, SIZE);
	Fill(arr9, SIZE);
	Fill(arr10, SIZE);
	
	Sum(arr1, SIZE);
	Sum(arr2, SIZE);
	Sum(arr3, SIZE);
	Sum(arr4, SIZE);
	Sum(arr5, SIZE);
	Sum(arr6, SIZE);
	Sum(arr7, SIZE);
	Sum(arr8, SIZE);
	Sum(arr9, SIZE);
	Sum(arr10, SIZE);


	Print(arr1,SIZE);
	Print(arr2, SIZE);
	Print(arr3, SIZE);
	Print(arr4, SIZE); 
	Print(arr5, SIZE);
	Print(arr6, SIZE);
	Print(arr7, SIZE);
	Print(arr8, SIZE);
	Print(arr9, SIZE);
	Print(arr10, SIZE);

	
	
	arrRez[0][0] = arr1[10];
	arrRez[1][0] = 1;
	arrRez[0][1] = arr2[10];
	arrRez[1][1] = 2;
	arrRez[0][2] = arr3[10];
	arrRez[1][2] = 3;
	arrRez[0][3] = arr4[10];
	arrRez[1][3] = 4;
	arrRez[0][4] = arr5[10];
	arrRez[1][4] = 5;
	arrRez[0][5] = arr6[10];
	arrRez[1][5] = 6;
	arrRez[0][6] = arr7[10];
	arrRez[1][6] = 7;
	arrRez[0][7] = arr8[10];
	arrRez[1][7] = 8;
	arrRez[0][8] = arr9[10];
	arrRez[1][8] = 9;
	arrRez[0][9] = arr10[10];
	arrRez[1][9] = 10;

	

	int  tem = 0, buf = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arrRez[0][i] > arrRez[0][j] && i != j)
			{

				tem = arrRez[1][i];
				arrRez[1][i] = arrRez[1][j];
				arrRez[1][j] = tem;
				buf = arrRez[0][i];
				arrRez[0][i] = arrRez[0][j];
				arrRez[0][j] = buf;
			}
		}
	}
	
	
	cout << "Max arr No " << arrRez[1][0]<<endl;
	cout << "Sum max arr " << arrRez[0][0] << endl;
	
	if (arrRez[0][0]==arr1[10])
	{
		Print(arr1, SIZE);
	}
	else if (arrRez[0][0] == arr2[10])
	{
		Print(arr2, SIZE);
	}
	else if (arrRez[0][0] == arr3[10])
	{
		Print(arr3, SIZE);
	}
	else if (arrRez[0][0] == arr4[10])
	{
		Print(arr4, SIZE);
	}
	else if (arrRez[0][0] == arr5[10])
	{
		Print(arr5, SIZE);
	}
	else if (arrRez[0][0] == arr6[10])
	{
		Print(arr6, SIZE);
	}
	else if (arrRez[0][0] == arr7[10])
	{
		Print(arr7, SIZE);
	}
	else if (arrRez[0][0] == arr8[10])
	{
		Print(arr8, SIZE);
	}
	else if (arrRez[0][0] == arr9[10])
	{
		Print(arr9, SIZE);
	}
	else if (arrRez[0][0] == arr10[10])
	{
		Print(arr10, SIZE);
	}

	system("pause");
	return 0;
}
template<typename T1>
void Fill(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE-1; i++)
	{
		arr[i] = rand() % 50;
		arr[10] = 0;
	}
}
template<typename T1>
void Print(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout<<endl;
}
template<typename T1>
void Sum(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE-1 ; i++)
	{
		arr[10] +=  arr[i];
	}
}
*/

int main()
{
	int arrPhone[2][3]{1,2,3,19863,56932,85963}, arrLogin[2][3]{ 1,2,3,85634,12369,56984 }, arrNumber[2][3]{ 1,2,3,123698,85694,63248 }, arrMoney[2][3]{ 1,2,3,125,56932,362 }, arrPass[2][3]{ 1,2,3,125,56932,362 };
	int phone = 0, login = 0, password = 0,choise=0;

	cout << "Authorization via login(0) or phone(1)" << endl;
	cin >> choise;
	if (choise == 0)
	{
		cout << "Enter your login" << endl;
		cin >> login;
		for (int i = 0; i < 3; i++)
		{
			if (login== arrLogin[][])
			{

			}
		}
	}
	else if (choise==1)
	{
		cout << "Enter your phone" << endl;
		cin >> phone;
	}
	cout << "Enter your password";
	cin >> password;
	



	
	system("pause");
	return 0;
}