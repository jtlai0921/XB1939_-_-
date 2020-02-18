#include <iostream> //引入<iostream>標頭檔
#include <fstream>  //引入<fstream>標頭檔
#include <string>   //引入<string>標頭檔
using namespace std;  //指定使用C++ Standard Library

int main()
{
    ifstream fileInput; //新建唯讀檔案物件
    string str; //新建str字串
    fileInput.open("out2.txt", ios::in); //以唯讀模式開啟fileOutput.txt
    if(!fileInput.is_open()) //檢查檔案是否開啟
    {
        cout<<"檔案開啟錯誤！"<<endl; //開檔有誤，輸出錯誤訊息
        return 1; //不正常結束程式
    }
    else
    {
        while(!fileInput.eof()) //檢查是否讀到檔尾
        {
            fileInput>>str; //輸出檔案中的字串至str
            cout<<str<<endl; //輸出str字串內容至螢幕
        }
    }
    fileInput.close(); //關閉檔案
    
    return 0; //正常結束程式
}
