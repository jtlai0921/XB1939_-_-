#include <iostream>                             
#include <cstdlib> 
using namespace std;

int main()
{
    bool error=true;
    char str[13]="Good Morning"; //宣告一個字元陣列來儲存字串
    cout<<"cout 1: "<<str<<endl; //輸出字串至螢幕畫面
    if(error)
    {
        cerr<<"cerr 1: 程式執行錯誤！"<<endl; //輸出錯誤訊息
        cerr<<"cerr 2: 程式執行錯誤！"<<endl; //輸出錯誤訊息
        clog<<"clog 1: 程式執行錯誤記錄！\n"; //輸出錯誤執行記錄
        clog<<"clog 2: 程式執行錯誤記錄！\n"; //輸出錯誤執行記錄
    }
    cout<<"cout 2: 開始清除緩衝區..."<<endl;
    clog.flush(); //清除緩衝區
    
    return 0;  //正常結束程式
}
