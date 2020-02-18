#include<iostream>
#include<cstdlib>
	// 引用字串類別
#include<string>
	
using namespace std;
	
int main()
{
	// 宣告字串
	string st1,st2,st3,st4,st5,st6;
	int ap;
	st1="This is a number";
	st2="12345678";
	st4="每一天";
	st5="快樂";
	st6="is";
	
	// 指定字串內容:使用assign函式
	cout << "====== 指定字串內容:使用assign函式 ======" << endl;
	cout << "原st3的內容為:" << st3 << endl;
	st3.assign(st1);
	cout << "使用assign函式將st1內容指定給st3後的內容為:" << st3 << endl << endl;

	// 連接二字串:使用append函式
	cout << "====== 連接字串:使用append函式 ======" << endl;
	cout << "原st6的內容為:" << st4 << endl;
	st4.append(st5);
	cout << "使用append函式將st5與st4連接後的內容為:" << st4 << endl << endl;

	// 比較字串內容:使用compare函式
	cout << "====== 比較字串內容:使用compare函式 ======" << endl;
	cout << "原st1的內容為:" << st1 << endl;
	cout << "原st2的內容為:" << st2 << endl;
	if (st1.compare(st2) == 0 )
		cout << "使用compare函式將st1與st2比較後為：內容相同" << endl << endl;
	else
	    cout << "使用compare函式將st1與st2比較後為：內容不相同" << endl << endl;

	// 搜尋字串：使用find函式
    cout << "====== 搜尋字串:使用find函式 ======" << endl;
	cout << "原st1的內容為:" << st1 << endl;
	cout << "欲搜尋的字串內容:"<< st6 << endl;
	ap=st1.find(st6);
	cout << "使用find函式在st1內搜尋" << st6 << "的結果為第:" << ap << "個位置" << endl << endl;
	
	// 取代字串：使用replace函式
	cout << "====== 取代字串:使用replace函式 ======" << endl;
	cout << "原st4的內容為:" << st4 << endl;
	cout << "欲取代的字串內容:幸福" << endl;
	st4.replace(6,6,"幸福");
    cout << "使用replace函式取代後的st4字串內容為：" << st4 << endl << endl;
	
	// 對換內容：使用swap函式
	cout << "====== 對換內容:使用swap函式 ======" << endl;
	cout << "原st4的內容為:" << st4 << endl;
	cout << "原st5的內容為:" << st5 << endl;
	st4.swap(st5);
	cout << "字串st4與st5內容對換後的st4內容為：" << st4 << endl;
	cout << "字串st4與st5內容對換後的st5內容為：" << st5 << endl << endl;
		
	return 0;
}
