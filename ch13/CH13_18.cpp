#include <fstream>	// 處理檔案輸出入的標頭檔
#include <cstdlib>
#include <iostream>
using namespace std;

const int MAX_STR = 80;	// 設定字串長度最長為80個字元
int main()
{
    char str[MAX_STR];
    char ch;
    ifstream ifile;	// 宣告檔案輸入物件
  
    cout << "使用函數getline一次讀取一行字串 :" << endl;
    ifile.open("out2.txt");	// 開啟檔案
    while( ifile.good() )	// 判斷檔案的資料是否發生讀取錯誤
    {
        ifile.getline(str, sizeof(str));		   
        // 使用getline()函數一次讀取一行資料
        cout << str << endl;
    }
    ifile.close();
    cout << endl;
    cout << "使用函數rdbuf讀取暫存區的內容 : " << endl;
    ifile.open("out.txt");
    cout << ifile.rdbuf() << endl;			
	// 使用rdbuf()將暫存區的資料
    ifile.close();
    cout << endl;
   
    return 0;
 }
