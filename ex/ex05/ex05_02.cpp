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
	cout << "請輸入長的值：" ;
	cin >> a1;
	cout << "請輸入寬的值：" ;
	cin >> a2;
	a3=CalArea(a1,a2);
	cout << "總面積為：" << a3 << endl;
	

	return 0;
}
