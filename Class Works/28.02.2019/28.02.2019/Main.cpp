#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int *p = new int;
	*p = 10;

	cout << *p << " " << p << endl;

	delete p;

	cout << *p << " " << p << endl;

	system("pause");
	return 0;
}