#include <iostream>
#include <cstdlib>
using namespace std;

int CalArea(int v1,int v2)	
{
	int area;
	area=v1*v2;
	
	return area;
}

int main()
{
	int a1,a2,a3;
	cout << "�п�J�����ȡG" ;
	cin >> a1;
	cout << "�п�J�e���ȡG" ;
	cin >> a2;
	a3=CalArea(a1,a2);
	cout << "�`���n���G" << a3 << endl;
	

	return 0;
}
