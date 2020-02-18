#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int select_a; //宣告整數變數 
    float a, ans_a;//宣告浮點數變數 
    cout<<"請輸入數值：";
    cin>>a;//輸入數值  
    cout<<"1.平方 2.立方"<<endl;
    cin>>select_a;        /* 輸入1或2 */
    if(select_a==1)	
    {
        ans_a=a*a;// 計算a平方值指定給變數ans_a 
        cout<<"平方值為："<<ans_a<<endl; // 顯示平方值
    }
    if(select_a==2)	//判斷select_a 是否等於2
    {
        ans_a=a*a*a;//計算a立方值指定給變數ans_a	
        cout<<"立方值為："<<ans_a<<endl; //顯示立方值 
    }
     
    return 0;
}

