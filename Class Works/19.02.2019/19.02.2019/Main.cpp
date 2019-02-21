#include<iostream>	
#include<ctime>

using namespace std;


template<typename T1>
void Product(T1 *pA, T1 *pB, T1 *pC, T1 *pSum )
{
	 *pSum=(*pA)*( *pB)*( *pC);	
	 
}

template<typename T1, typename T2>
void Arithmetic (T1 *pA, T1 *pB, T1 *pC, T2 *pSa)
{
	*pSa = (*pA* *pB* *pC) / 3;
	
}
template<typename T1>
void Min(T1 *pA, T1 *pB, T1 *pC, T1 *pMin)
{
	*pMin = *pA;
	if (*pMin > *pB)
	{
		*pMin = *pB;
	}
	if (*pMin > *pC)
	{
		*pMin = *pC;
	}
	
}


int main()
{
	double a = 11.023, b = 0.25, c = 30.369,sum=0,min=0;
	double *pA = &a, *pB = &b, *pC = &c, *pSum = & sum, *pMin = &min;
	double sa = 0;
	double *pSa = &sa;

	Product(pA, pB, pC, pSum);
	cout << "Sum = " << sum<<endl;

	Arithmetic (pA, pB, pC, pSa);
	cout << "Sa = " << sa << endl;

	Min(pA, pB, pC,pMin);
	cout << "Min = " << min << endl;

	


	system("pause");
	return 0;
}

