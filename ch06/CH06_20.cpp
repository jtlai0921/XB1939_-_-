#include<iostream>
#include<cstdlib>
	// 引用字串類別
#include<string>
	
using namespace std;
	
int main()
{
	// 宣告字串
	string st1;
	string st2("56789012");
	string st3="1234567";
	// 宣告字串變數st4的同時，一併指定st4的值為變數st2的值
	string st4(st2);
	// 宣告字串變數st5的同時，指定將字元「1」重覆「3」次
	string st5(3,'1'); 
	// 宣告字串變數st6的同時，指定自變數st2中第「1」個字元開始擷取「4」個字元
	string st6(st2,1,4); 
	
	// 顯示各字串變數的值
	cout << "st1=" << st1 << endl;
	cout << "st2=" << st2 << endl;
	cout << "st3=" << st3 << endl;
	cout << "st4=" << st4 << endl;
	cout << "st5=" << st5 << endl;
	cout << "st6=" << st6 << endl;
	
	return 0;
}
