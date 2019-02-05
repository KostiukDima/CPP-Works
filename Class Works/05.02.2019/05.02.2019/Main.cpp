#include<iostream>
#include<ctime>
using namespace std;

int Menu();
int Sum(int a, int b);
int Sum(int a, int b, int c);
double Sum(double a, double b);
double Sum(double a, double b, double c);
int Minus(int a, int b);
int Minus(int a, int b, int c);
double Minus(double a, double b);
double Minus(double a, double b, double c);
int Multi(int a, int b);
int Multi(int a, int b, int c);
double Multi(double a, double b);
double Multi(double a, double b, double c);
int Dil(int a, int b);
int Dil(int a, int b, int c);
double Dil(double a, double b);
double Dil(double a, double b, double c);



int main()
{
	int a = 0, b = 0,c=0;
	double ad = 0, bd = 0, cd = 0;
	int choise,amount,choisedo;
	bool v = false;

	while (v != true)
	{
		choise = Menu();
		if (choise == 0)
		{
			v = true;

		}
		else if (choise == 1 || choise == 2 || choise == 3 || choise == 4)
		{
			cout << "Enter amount of number"<<endl;
			cin >> amount;

			if (amount == 2 || amount == 3)
			{
				
				cout << "1 integers\n2 fractional numbers" << endl;
				cin >> choisedo;

				if (choisedo == 1 || choisedo == 2)
				{
					if (choisedo == 1)
					{
						if (amount == 2)
						{
							cout << "Enter a" << endl;
							cin >> a;
							cout << "Enter b" << endl;
							cin >> b;
							if (choise == 1)
							{
								cout << Sum(a, b) << endl;
							}
							else if (choise == 2)
							{
								cout << Minus(a, b) << endl; Minus(a, b);
							}
							else if (choise == 3)
							{
								cout << Multi(a, b) << endl;
							}
							else if (choise == 4)
							{
								cout << Dil(a, b) << endl;
							}
						}
						else if (amount == 3)
						{
							cout << "Enter a" << endl;
							cin >> a;
							cout << "Enter b" << endl;
							cin >> b;
							cout << "Enter c" << endl;
							cin >> c;
							if (choise == 1)
							{
								cout << Sum(a, b, c) << endl;
							}
							else if (choise == 2)
							{
								cout << Minus(a, b, c) << endl; Minus(a, b);
							}
							else if (choise == 3)
							{
								cout << Multi(a, b, c) << endl;
							}
							else if (choise == 4)
							{
								cout << Dil(a, b, c) << endl;
							}
						}

					}
					if (choisedo == 2)
					{
						if (amount == 2)
						{
							cout << "Enter a" << endl;
							cin >> ad;
							cout << "Enter b" << endl;
							cin >> bd;
							if (choise == 1)
							{
								cout << Sum(ad, bd) << endl;
							}
							else if (choise == 2)
							{
								cout << Minus(ad, bd) << endl; Minus(a, b);
							}
							else if (choise == 3)
							{
								cout << Multi(ad, bd) << endl;
							}
							else if (choise == 4)
							{
								cout << Dil(ad, bd) << endl;
							}
						}
						else if (amount == 3)
						{
							cout << "Enter a" << endl;
							cin >> ad;
							cout << "Enter b" << endl;
							cin >> bd;
							cout << "Enter c" << endl;
							cin >> cd;
							if (choise == 1)
							{
								cout << Sum(ad, bd, cd) << endl;
							}
							else if (choise == 2)
							{
								cout << Minus(ad, bd, cd) << endl; Minus(a, b);
							}
							else if (choise == 3)
							{
								cout << Multi(ad, bd, cd) << endl;
							}
							else if (choise == 4)
							{
								cout << Dil(ad, bd, cd) << endl;
							}
						}

					}
				}
				else
				{
					cout << "Select 1 or 2 numbers" << endl;
				}
			}
			else
					{
					cout << "Select two or three numbers" << endl;
					}
			system("pause");
			system("cls");
		}
	}
	
	system("pause");
	return 0;
}

int Sum(int a, int b)
{
	return a + b;
}
int Sum(int a, int b,int c)
{
	return a + b+ c;
}
double Sum(double a, double b)
{
	return a + b;
}
double Sum(double a, double b,double c)
{
	return a + b+c;
}
int Minus(int a, int b)
{
	return a - b;
}
int Minus(int a, int b, int c)
{
	return a - b - c;
}
double Minus(double a, double b)
{
	return a - b;
}
double Minus(double a, double b, double c)
{
	return a - b - c;
}
int Multi(int a, int b)
{
	return a * b;
}
int Multi(int a, int b, int c)
{
	return a * b * c;
}
double Multi(double a, double b)
{
	return a * b;
}
double Multi(double a, double b, double c)
{
	return a * b * c;
}
int Dil(int a, int b)
{
	if (b == 0)
	{
		cout << "to 0 can not be divided" << endl;
	}
	else
	{
		return a/b;
	}	
}
int Dil(int a, int b, int c)
{
	if (b == 0||c==0)
	{
		cout << "to 0 can not be divided" << endl;
	}
	else
	{
		return a / b/c;
	}
	
}
double Dil(double a, double b)
{
	if (b == 0 )
	{
		cout << "to 0 can not be divided" << endl;
	}
	else
	{
		return a / b ;
	}
}
double Dil(double a, double b, double c)
{
	if (b == 0 || c == 0)
	{
		cout << "to 0 can not be divided" << endl;
	}
	else
	{
		return a / b / c;
	}
}

int Menu()
{
	bool a = false;
	while (a != true)
	{

		cout << "Enter action" << endl;
		cout << "1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\nPress 0 to exit\n";
		int choise = 0;
		cin >> choise;

		if (choise == 0 || choise == 1 || choise == 2 || choise == 3 || choise == 4)
		{
			a = true;
			return choise;
		}
		else
		{
			cout << "There is no such action" << endl;
			system("pause");
			system("cls");
		}

	}
}