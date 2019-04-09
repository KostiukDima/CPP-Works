#include<iostream>
//#define days 365
//#define space "\t"

using namespace std;
#define sum(a,b,c)\
{\
if (a < b)\
{\
cout << b \
}\
else if (c > b)\
{\
	cout << c \
}\
else\
{\
	cout << a \
}\
}

////#define DEBUG
//#define PROD 9




//union Test 
//{
//	short a;
//	int b;
//	double c;
//
//};
int main()
{
	//Test un;
	//un.a = 48;
	//un.b = 451;
	////un.c = 45.369;

	cout << sum(5, 6, 7);



//	//cout << days<<endl;
//	//cout << "sds" << space << "afaf"<<endl;
//	//cout << sum(5, 5);
//
//#ifdef DEBUG
//	cout << "Start loop" << endl;
//#endif // DEBUG
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << i << endl;
//
//	}
//
//#ifdef DEBUG
//	cout << "End loop" << endl;
//#endif // DEBUG
//
//
//#ifdef DEBUG
//	cout << "if" << endl;
//#else
//	cout << "else" << endl;
//#endif // DEBUG
//
//#if PROD > 40
//	cout << "PROD < 40" << endl;
//#elif PROD >10
//	cout << "PROD>10" << endl;
//#else
//	cout << "error" << endl;
//#endif // DEBUG


	system("pause");
	return 0;
}