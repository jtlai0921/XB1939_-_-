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
	cout << "原先的值： ";
	cout << "變數1 = " << var1 << '\t';	
	cout << "變數2 = " << var2 << endl;	
	swap(&var1, &var2);	
	cout << "對調後的值： ";
	cout << "變數1=" << var1 << '\t';	
	cout << "變數2 = " << var2 << endl;	
	
	
	return 0;
}

