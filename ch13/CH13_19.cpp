#include <fstream>	// 處理檔案輸出入的標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int digit = 123456789;
    ofstream ofile;	// 宣告檔案輸出物件
    ofile.open("out5.dat");	// 使用格式化模式開啟檔案
    ofile << digit;	// 使用插入運算子<<寫入資料到檔案
    ofile.close();
    ofile.open("out6.dat", ios::binary);// 使用二進制模式開啟檔案
    ofile.write( (char*) &digit, sizeof( digit ) );	// 使用write()函數寫入資料到檔案
    ofile.close();
  
    return 0;
}
