#include<iostream>

using namespace std;

//Написати програму, яка отримує від користувача довільний набір cимволів, шифрує його та виводить на екран новоутворений рядок.
//    Для шифрування скористатись звичайними арифметичними операціями++, --, збільшення або зменшення на якесь число тощо.
//									Наприклад, при введенні ABА на екрані буде ВСВ.

void Encryption(char *pStr); 
void Decryption(char *pStr);

int main()
{
	int choise = 0;
	char str[255]="";
	char *pStr = str;

	cout << "1. Encryption\n2. Decryption" << endl;
	cin >> choise;
	
	

	if (choise == 1)
	{
		cout << "Enter text" << endl;
		cin >> str;
		Encryption(pStr);
	}
	else if (choise == 2)
	{
		cout << "Enter ciphertext" << endl;
		cin >> str;
		Decryption(pStr);
	}


	system("pause");
	return 0;
}

void Encryption(char *pStr)
{
	
	int choise = 0, positions = 0, symbol = 0;
	int line = strlen(pStr);
		
	cout << "What side do you want to shift text?\n1. Right\n2. Left" << endl;
	cin >> choise;
	cout << "How many positions to shift?"<<endl;
	cin >> positions;
	
	if (choise == 1)
	{
		for (int i = 0; i < line ; i++)
		{
			if (int(pStr[i]) + positions < 90 && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90) || int(pStr[i]) + positions < 122 && (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
			{			
				symbol = int(pStr[i]) + positions;
				cout << char(symbol);
			}			
			
			else if (int(pStr[i]) + positions>90 || int(pStr[i]) + positions>122)
			{
				if (int(pStr[i]) + positions > 90 && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90))
				{
					symbol = 97 + ((int(pStr[i]) + positions) - 91);						
					cout << char(symbol);
				}
				
				if (int(pStr[i]) + positions > 122 &&  (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
				{
					symbol = 65 + ((int(pStr[i]) + positions) - 123);
					cout << char(symbol);
				}
			}			
		}

		cout << endl;
	}
	else if (choise == 2)
	{
		for (int i = 0; i < line; i++)
		{
			if (int(pStr[i]) - positions > 65 && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90) || int(pStr[i]) - positions > 97 && (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
			{
				symbol = int(pStr[i]) - positions;
				cout << char(symbol);
			}

			else if (int(pStr[i]) - positions < 65 || int(pStr[i]) - positions < 97)
			{
				if (int(pStr[i]) - positions < 65  && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90))
				{
					symbol = 123 - ( positions - (int(pStr[i]) - 65));
					cout << char(symbol);
				}

				if (int(pStr[i]) - positions < 97 && (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
				{
					symbol = 91 - (positions - (int(pStr[i]) - 97));
					cout << char(symbol);
				}
			}
		}

		cout << endl;
	}
}
void Decryption(char *pStr)
{

	int choise = 0, positions = 0, symbol = 0;
	int line = strlen(pStr);

	cout << "Where was it shift text?\n1. Right\n2. Left" << endl;
	cin >> choise;
	cout << "How many positions to shift?" << endl;
	cin >> positions;

	if (choise == 2)
	{
		for (int i = 0; i < line; i++)
		{
			if (int(pStr[i]) + positions < 90 && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90) || int(pStr[i]) + positions < 122 && (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
			{
				symbol = int(pStr[i]) + positions;
				cout << char(symbol);
			}

			else if (int(pStr[i]) + positions > 90 || int(pStr[i]) + positions > 122)
			{
				if (int(pStr[i]) + positions > 90 && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90))
				{
					symbol = 97 + ((int(pStr[i]) + positions) - 91);
					cout << char(symbol);
				}

				if (int(pStr[i]) + positions > 122 && (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
				{
					symbol = 65 + ((int(pStr[i]) + positions) - 123);
					cout << char(symbol);
				}
			}
		}

		cout << endl;
	}
	else if (choise == 1)
	{
		for (int i = 0; i < line; i++)
		{
			if (int(pStr[i]) - positions > 65 && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90) || int(pStr[i]) - positions > 97 && (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
			{
				symbol = int(pStr[i]) - positions;
				cout << char(symbol);
			}

			else if (int(pStr[i]) - positions < 65 || int(pStr[i]) - positions < 97)
			{
				if (int(pStr[i]) - positions < 65 && (int(pStr[i]) >= 65 && int(pStr[i]) <= 90))
				{
					symbol = 123 - (positions - (int(pStr[i]) - 65));
					cout << char(symbol);
				}

				if (int(pStr[i]) - positions < 97 && (int(pStr[i]) >= 97 && int(pStr[i]) <= 122))
				{
					symbol = 91 - (positions - (int(pStr[i]) - 97));
					cout << char(symbol);
				}
			}
		}

		cout << endl;
	}
}