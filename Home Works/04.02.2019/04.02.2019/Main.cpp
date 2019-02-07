#include<iostream>
using namespace std;

void Filling(int arrRating[][6]);
void Calculation(int arrRating[][6], double arrRez[][2]);
void Sort(double arrRez[][2]);
void Print1(int arrRating[][6]);
void Print2(double arrRez[][2]);

/*1.       На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
     Знайти підсумкову оцінку кожного учасника(учасників 3),яка обчислюється як середнє арифметичне, 
		 але без врахування найкращої та найгіршої оцінок.Виконати задачу з функіями.*/
int main()
{
	int arrRating[3][6]; 
	double arrRez[3][2];
		
	Filling(arrRating);
	
	Print1(arrRating);
	
	Calculation(arrRating, arrRez);

	cout << endl;

	Sort(arrRez);

	Print2(arrRez);

	system("pause");
	return 0;	
}

void Filling(int arrRating[][6])
{
	for (int j = 0; j < 3; j++)
	{
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter " << i << " referee points for " << j + 1 << " player (from 1 to 10)" << endl;
			cin >> arrRating[j][i];
			arrRating[j][0] = j;
			system("cls");
		}
	}

}
void Calculation(int arrRating[][6], double arrRez[][2])
{
	double max = 0, min = 0, sum = 0;
	for (int j = 0; j < 3; j++)
	{
		min = arrRating[j][1];
		max = arrRating[j][1];
		sum = 0;
		for (int i = 1; i < 6; i++)
		{
			sum += arrRating[j][i];
			if (arrRating[j][i] < min)
			{
				min = arrRating[j][i];
			}
			if (arrRating[j][i] > max)
			{
				max = arrRating[j][i];
			}
		}
		arrRez[j][0] = j;
		arrRez[j][1] = (sum - min - max) / 5;
	}
}
void Sort(double arrRez[][2])
{
	double  tem = 0, buf = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arrRez[i][1] > arrRez[j][1] && i != j)
			{

				tem = arrRez[i][1];
				arrRez[i][1] = arrRez[j][1];
				arrRez[j][1] = tem;
				buf = arrRez[i][0];
				arrRez[i][0] = arrRez[j][0];
				arrRez[j][0] = buf;
			}
		}
	}
}
void Print1(int arrRating[][6])
{
	cout << "\t\tRef 1\tRef2\tRef 3\tRef 4\tRef 5" << endl;
	for (int j = 0; j < 3; j++)
	{
		cout << "Player " << arrRating[j][0] + 1 << "\t";
		for (int i = 1; i < 6; i++)
		{
			cout << arrRating[j][i] << "\t";

		}
		cout << endl;
	}
}
void Print2(double arrRez[][2])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Player " << arrRez[i][0] + 1 << "\t" << arrRez[i][1] << "\t" << endl;
	}
}