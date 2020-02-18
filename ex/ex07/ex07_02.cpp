#include <iostream>
#include <cstdlib>
using namespace std;

int *maximum(int *);	

int main()
{
	int number[6] = {23,56,90,32,11,7};

	cout << "資料列：";
	for (int i=0; i<=5; i++)	
		cout << *(number+i) << ' ';

	cout << "\n最大值："<<*maximum(number);	
	cout << endl;
	
	
	return 0;
}

int *maximum(int *array)	
{
	int value;	
	int *max =array+0;	
	
    for (int i=1; i<=5; i++)	
	{
		if (*max <=*(array+i))	
			*max = *(array+i);
	}
	return max;	
}
