#include<iostream>
#include<string>

using namespace std;

int strlengt( char *str )
{
	int counter = 0;

	while (str[counter]!='\0')
	{
		counter++;
	}
	
	return counter;
}

int main()
{
	/*char str[255];
	int a = 0, o = 0;

	cout << "Enter text" << endl;
	cin >> str;



	for (int i = 0; i < strlen(str); i++)
	{
		if (int(str[i]) == 97)
		{
			cout << "a if = " << a << endl;
			a++;
		}
		else if (int(str[i]) == 111)
		{
			cout << "0 if  = " << o << endl;
			o++;
		}
	}
	cout << "a aftrer = " << a << endl;
	cout << "0 after = " << o << endl;

	if(a>o)
	{
		cout << "a = " << a << " > " << "o = " << o << endl;
	}
	else if (o>a)
	{
		cout << "o = " << o << " > " << "a = " << a << endl;
	}
	else if (a = o)
	{
		cout << "a = " << a << " = " << "o = " << o << endl;
	}*/

	char str[255];
	int number = 0, letter = 0, sign =0 ;

	cout << "Enter text" << endl;
	cin >> str;



	for (int i = 0; i < strlen(str); i++)
	{
		if (  (int(str[i])>=65 && int(str[i]) <= 90) || (int(str[i])>= 97&& (int(str[i])) <= 122))
		{
			letter++;
			
		}
		else if ( (int(str[i]) >=32 && int(str[i]) <=47) || (int(str[i]) >= 91 && int(str[i]) <= 96) || (int(str[i]) >= 123 && int(str[i]) <= 126))
		{
			sign++;
			
		}
		else if ((int(str[i]) >=48 && int(str[i]) <= 57))
		{
			number++;
			
		}
	}

	cout << "Number = " << number<<endl;
	cout << "Letter = " << letter<<endl;
	cout << "Sign = " << sign<<endl;
	
	

	//char str[255];
	/*
	char str1[255], str2[255];

	cout << "Enter text 1 "<<endl;
	cin >> str1;
	cout << "Enter text 2 " << endl;
	cin >> str2 ;

	strcat_s(str1, str2);

	cout << str1<<endl;*/
	system("pause");
	return 0;
}