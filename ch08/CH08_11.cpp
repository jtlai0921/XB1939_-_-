#include<iostream>
#include<cstdlib>
using namespace std;
// 定義一個名為Student結構
struct Student {     
    int lang;  
    int math;   
};  
// 定義show_data函數原型 
void show_data(int l1,int m1);
// 主函式
int main()
{
    // 宣告結構變數st1，並指定初值
    Student st1={100,90};
    //呼叫函式show_data，並將結構成員當作參數來傳遞
    show_data(st1.lang,st1.math);
	    
    return 0;
}
// show_data函式：將結構成員的值顯示在螢幕上
void show_data(int l1,int m1)
{
    cout << "國文成績:" << l1 << endl;
    cout << "數學成績:" << m1 << endl;
}
