#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *num1, int *num2)	
{
	int buffer;
	buffer = *num1;
	*num1 = *num2;
	*num2 = buffer;
}
int main()
{
	int var1 = 100, var2 = 12;
	cout << "������ȡG ";
	cout << "�ܼ�1 = " << var1 << '\t';	
	cout << "�ܼ�2 = " << var2 << endl;	
	swap(&var1, &var2);	
	cout << "��ի᪺�ȡG ";
	cout << "�ܼ�1=" << var1 << '\t';	
	cout << "�ܼ�2 = " << var2 << endl;	
	
	
	return 0;
}

