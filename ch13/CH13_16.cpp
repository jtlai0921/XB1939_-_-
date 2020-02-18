#include <fstream> // 處理檔案輸出入的標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX_STR = 80;	// 設定字串長度最長為80個字元

int main()
{
    int i;
    double d;
    char ch;
    char str_e[MAX_STR];
    char str_c[MAX_STR];
    
    ifstream ifile("out.txt");	// 建立檔案輸入物件並開啟檔案out.txt
    ifile >> i >> d >> ch >> str_e >> str_c;		// 依序讀取檔案中的資料
    cout << i << endl // 將讀取的資料輸出至螢幕上
    << d << endl
    << ch << endl
    << str_e << endl
    << str_c << endl
    << endl;
    ifile.close();// 關閉檔案
    
    return 0;
}
