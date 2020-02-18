#include<iostream>
#include<cstdlib>
using namespace std;
		
//宣告函數原型 
void name(void);
void year(void);

int main(){
//呼叫函數 
    name();
    year();
 
    return 0;
}
void name()
{
    char name[20];
    cout<<"請輸入你的姓名"<<endl;
    cin>>name;
    cout<<name<<"你好!"<<endl;
}
void year()
{
    int a;
    cout<<"請輸入你的年齡"<<endl;
    cin>>a;
    cout<<"唷!你今年"<<a<<"歲"<<endl;
}
