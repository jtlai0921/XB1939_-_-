#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	float Num1;               // �ŧi�ó]�wfloat�ܼƪ���
	double Num2;              // �ŧi�ó]�wdouble�ܼƪ���
	long double Num3=3.144E10;     // �ŧi�ó]�w long double�ܼƪ���
	Num1=1.742f;
	Num2=4.1592;

	cout << "Num1 ���ȡG" << Num1 << endl   // ��X�ܼƤ��e�Ϊ��פj�p
		 << "���פj�p�G" << sizeof(Num1)  
		 << " Byte" << endl << endl;
	cout << "Num2 ���ȡG" << Num2 << endl   // ��X�ܼƤ��e�Ϊ��פj�p
		 << "���פj�p�G" << sizeof(Num2) 
		 << " Byte" << endl << endl;
	cout << "Num3 ���ȡG" << Num3 << endl   // ��X�ܼƤ��e�Ϊ��פj�p
		 << "���פj�p�G" << sizeof(Num3) 
		 << " Byte" << endl;
		 
    return 0;
}

