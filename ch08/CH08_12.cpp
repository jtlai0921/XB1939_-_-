#include<iostream>
#include<cstdlib>
using namespace std;
// 定義一個名為Student結構
struct Student {     
    int lang;  
    int math;   
};  
// 定義show_data函式原型
void show_data(struct Student);
// 主函式
int  main()
{
    // 宣告結構變數st1，並指定初值
    Student st1={90,93};
    //呼叫函式show_data，並將結構變數當作參數來傳遞
    show_data(st1);

    return 0;
}
// show_data函式：將結構成員的值顯示在螢幕上
void show_data(struct Student f1)
{
    cout << "將結構變數當做參數來傳遞給函式範例" << endl;
    cout << "國文成績:" << f1.lang << endl;
    cout << "數學成績:" << f1.math << endl;
}
