#include<iostream>

using namespace std;

//                                   Створити 3 динамічних змінних різного типу.
//Заповнити їх деякими значеннями.Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних

int main()
{
	int *a= new int;
	float *b = new float;
	double *c = new double;

	*a = 5;
	*b = 5.25;
	*c = 10.78;

	cout << "a = " << *a<< endl;
	cout << "b = " << *b<< endl;
	cout << "c = " << *c<< endl;

	cout << "Multiplication = " << (*a)*(*b)*(*c)<<endl;
	
	delete a;
	delete b;
	delete c;
	
	system("pause");
	return 0;
}