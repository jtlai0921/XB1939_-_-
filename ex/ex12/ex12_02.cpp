#include <iostream>                                            
#include <cstdlib> 
using namespace std;

template <class T1, class T2>                                    // �ŧi�˪��Φ��Ѽ� T1, T2 
void Cal_Num(T1 a, T2 b)                                         // �ŧi�˪���� Cal_Num() 
{
	 /* �i��Ѽ� a �P b ���|�h�B��A�óz�L�j��A�ഫ��ܵ��G�C */
     cout << a << " + " << b << " = " << (double) a+b << endl;
	 cout << a << " - " << b << " = " << (double) a-b << endl;
	 cout << a << " * " << b << " = " << (double) a*b << endl;
	 cout << a << " / " << b << " = " << (double) a/b << endl;
}

int main()
{
     int x=4;                                // �w�q����ܼ� x
	 float y=2.5;                          // �w�q�B�I���ܼ� y
	 double z=8.442;                   // �w�q������ܼ� z

	 Cal_Num(x, y);            // �I�s��� Cal_Num()
	 Cal_Num(y, z);
     cout << endl;
     
     
     return 0;
}
