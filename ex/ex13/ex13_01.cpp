#include <iostream>             //引入<iostream>標頭檔
#include <iomanip>                //引入<iomanip>標頭檔
#include <cstdlib> 
using namespace std;

int main()
{
    int num;                                            //宣告一個整數來儲存電話號碼
    char name[10];                                      //宣告一個字元陣列來儲存姓名
    char address[10];                                   //宣告一個字元陣列來儲存戶籍地
    cout<<"請輸入姓名：";
    cin>>name;                                          //連續輸入姓名、電話和戶籍地
    cout<<"請輸入電話：";
    cin>>num;                                           //連續輸入姓名、電話和戶籍地
    cout<<"請輸入戶籍地：";
    cin>>address;                                       //連續輸入姓名、電話和戶籍地
    cout<<setw(10)<<"姓名"<<setw(10)<<"電話"<<setw(10)<<"戶籍地"<<endl;
    cout<<"================================"<<endl;
    cout<<setw(10)<<name<<setw(10)<<num<<setw(10)<<address<<endl;
    
    
    return 0;                                           
}
