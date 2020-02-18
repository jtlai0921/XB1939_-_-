#include <iostream>  //引入<fstream>標頭檔
#include <fstream>   //引入<fstream>標頭檔
#include <cstdlib> 
using namespace std;                                  

int main()
{
    ofstream fileOutput; //新建唯讀檔案物件
	fileOutput.open("out2.txt", ios::out); //以唯讀模式開啟
    if(!fileOutput.is_open()) //檢查檔案是否開啟
    {
        cout<<"檔案開啟錯誤！"<<endl; //開檔有誤，輸出錯誤訊息
        return 1;  //不正常結束程式
    }
    else
    {
        fileOutput<<"一切有為法,如夢幻泡影."<<endl; //輸出字串至檔案
    }
    fileOutput.close(); //關閉檔案
    fileOutput.open("out2.txt", ios::app);//以附加模式開啟
    if(!fileOutput.is_open()) //檢查檔案是否開啟
    {
        cout<<"檔案開啟錯誤！"<<endl; //開檔有誤，輸出錯誤訊息
        return 1; //不正常結束程式
    }
    else
    {
        fileOutput<<"如露亦如電,應做如是觀."<<endl; //輸出字串至檔案
    }
    fileOutput.close(); //關閉檔案
    
    return 0; //正常結束程式
}
