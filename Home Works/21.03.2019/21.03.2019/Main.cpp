#include<iostream>
using namespace std;

//1) Дано рядок.Видалити із рядка заданий символ.Результат розмістити у новому рядку.

/*int main()
{
	char str[255], str1[255], del[255];
	bool delet = false;

	cout << "Enter text" << endl;
	cin.getline(str,255);

	cout << "Enter text delete" << endl;
	cin >> del;
	int dele = int(del[0]);
	
	int leng=strlen(str);

	for (int i = 0; i < leng+1; i++)
	{
		if (int (str[i])==dele)
		{
			delet = true;
			continue;			
		}
		if (delet == true)
		{
			if (i == leng)
			{
				str1[leng-1] = '\0';
			}
			else
			{
				str1[i - 1] = str[i];
			}			
		}
		if (delet != true)
		{
			str1[i] = str[i];
		}
	}	
	cout << str1;

	system("pause");
	return 0;		
}*/

//2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику : кількість пробільних символів(whitespaces),
//			голосних, приголосних, знаків пунктуації.Введення передбачається англомовним.

int main()
{
	char str[255];
	int whitespaces = 0, vowels = 0, consonant = 0, sign = 0, number = 0;

	cout << "Enter text" << endl;
	cin.getline(str,255);

	for (int i = 0; i < strlen(str); i++)
	{
		if ((int(str[i]) >= 65 && int(str[i]) <= 90) || (int(str[i]) >= 97 && (int(str[i])) <= 122))
		{
			if (int(str[i]) == 65 || int(str[i]) == 69 || int(str[i]) == 73 || int(str[i]) == 79 || int(str[i]) == 85 || int(str[i]) == 97 || int(str[i]) == 101 || int(str[i]) == 105 || int(str[i]) == 111 || int(str[i]) == 117)
			{
				vowels++;
			}
			else 
			{
				consonant++;
			}
		}
		else if (int(str[i]) == 32)
		{
			whitespaces++;

		}
		else if ((int(str[i]) >= 33 && int(str[i]) <= 47) || (int(str[i]) >= 91 && int(str[i]) <= 96) || (int(str[i]) >= 123 && int(str[i]) <= 126))
		{
			sign++;

		}
		else if ((int(str[i]) >= 48 && int(str[i]) <= 57))
		{
			number++;

		}
	}

	cout << "Number = " << number << endl;
	cout << "Vowels = " << vowels <<endl;
	cout << "Consonant = " << consonant << endl;
	cout << "Sign = " << sign << endl;
	cout << "Whitespaces = " << whitespaces << endl;

	

	system("pause");
	return 0;
}