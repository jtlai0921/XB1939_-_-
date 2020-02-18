#include<iostream>
#include<cstdlib>
using namespace std;
// 定義一個名為Student結構
struct Student 
{     
  int lang;  
  int math;   
};  
// 定義set_data函數原型
struct Student set_data();
// 主函式
int main()
{
    // 宣告結構變數st2
    Student st2;
    //呼叫函數set_data，將使用結構變數st2來接收函式所回的結構
    st2=set_data();
    cout << "================================" << endl;
    cout << "國文成績:" << st2.lang << endl;
    cout << "數學成績:" << st2.math << endl;
	    
    return 0;
}
	// set_data函數：輸入結構成員的值，並將所輸入的值傳回呼叫的敘述句
struct Student set_data()
{
	    // 宣告結構變數st1
	    Student st1;
	    cout << "請輸入國文成績:";
	    cin >> st1.lang;
	    cout << "請輸入數學成績:";
	    cin >> st1.math;
	    // 將結構變數st1傳回
	    return st1;
}
