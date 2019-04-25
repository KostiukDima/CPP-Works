#include<iostream>	
#include<string>
#include<fstream>


using namespace std;


int main()
{
	bool exit = false;
	int choise = 0;

	string path = "PB.txt";
	
	char Data[256];
	char data;

	char login[256], passwd[256];

	cout << "Login: ";
	cin >> login;
	cout << "Password: ";
	cin >> passwd;

	
	ifstream readFile;

	string log = "Passwd.txt";

	readFile.open(log);
	if (!readFile.is_open())
	{
		cout << "Canot open" << endl;
	}
	else
	{

		
		int i = 0;
		while (readFile.get(data))
		{
			Data[i]=data;
			i++;
		}
		Data[i] = '\0';
	}
	readFile.close();

	char logfile[256];
	char passwdfile[256];
	char waslogin[256];

	int i = -1;
	int j = 0;
	i++;
	while (char(Data[i])!=32)
	{
		logfile[i] = Data[i];
		i++;
		j++;
	}
	logfile[i] = '\0';
	j = 0;
	i++;

	while (char(Data[i]) != 32)
	{
		passwdfile[j] = Data[i];
		i++;
		j++;
	}
	passwdfile[j] = '\0';
	j = 0;
	i++;
	
	while (char(Data[i]) != 10)
	{
		waslogin[j] = Data[i];
		i++;
		j++;
	}
	waslogin[j] = '\0';
		
	if (!(strcmp(login, logfile)))
	{
		if (!(strcmp(passwd, passwdfile)))
		{
			cout << "It was logged in " << waslogin<<endl;
		}
		else
		{
			cout << "Wrong password" << endl;
		}
	}
	else
	{		
		j = 0;
		i++;
		while (char(Data[i]) != 32)
		{
			logfile[j] = Data[i];
			i++;
			j++;
		}
		logfile[j] = '\0';
		i++;
		j = 0;
		
		while (char(Data[i]) != 32)
		{
			passwdfile[j] = Data[i];
			i++;
			j++;
		}
		passwdfile[j] = '\0';
		j = 0;
		i++;
			   
		while (char(Data[i]) != 10)
		{
			waslogin[j] = Data[i];
			i++;
			j++;
		}
		waslogin[j] = '\0';
		
		if (!(strcmp(login, logfile)))
		{
			if (!(strcmp(passwd, passwdfile)))
			{
				cout << "It was logged in " << waslogin << endl;
				exit = true;
			}
			else
			{
				cout << "Wrong password" << endl;
			}
		}
		else
		{
			cout << "Wrong login" << endl;
		}
	}

	system("pause");
	return 0;
}
