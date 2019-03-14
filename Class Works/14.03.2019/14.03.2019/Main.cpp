#include<iostream>

using namespace std;

int main()
{
/*
	int number=0 ;
		
	int count = 10;
	

	cout << "Enter count synbol" << endl;
	cin >> count;

	int *a = new int[count];

	for (int i = 0; i < count;)
	{	
		cout << "Enter number (65-90, 97-122)"<<endl;
		cin >> number;

		if (number >= 65 && number <= 90 || number >= 97 && number <= 122)
		{
			a[i] = number;
			i++;
		}
		else
		{
			cout << "Wrong number" << endl;
		}		
	} 

	for (int i = 0; i < count; i++)
	{
		cout << (char)a[i] << " ";	
	}

	cout << endl;
	*/

		
	char str[255] = "";
	int line;
	
	cout << "Enter line" << endl;
	cin >> str;
	

	line = strlen(str);
	

	for (int j = 0; j <line; j++)
	{
		for (int i = 0; i < 255; i++)
		{
			if (str[j] == (char)i)
			{
				cout << i << " ";
			}
			
		}
	}

	cout << endl;



	system("pause");
	return 0;
}
