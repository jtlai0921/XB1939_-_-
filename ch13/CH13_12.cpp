#include <iostream>    
#include <cstdlib>                             
#include <iomanip> 
using namespace std;                                   

int main()
{
    int num;
    while(1)
    {
        cout<<endl<<"請輸入正整數：";
        cin>>num;
        if(!cin)                                        //輸入的是字元
        {
            cout<<"輸入的是字元，資料型態不符！"<<endl;
            break;
        }
        else if(num<1)                                  //輸入的不是正整數
        {
            cout<<"輸入的是整數，但不是正整數！"<<endl;
            cin.clear(ios::failbit);                    //設定failbit
        }
        else if(cin.good())                             //輸入的是正整數
            cout<<"輸入的是正整數！"<<endl;
        cin.clear();
    }
    return 0;                                           //正常結束程式
}
