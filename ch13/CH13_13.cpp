#include <fstream>	// 處理檔案輸出入的標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int  i = 66;
    double  d = 3.14;
    char	ch = 'a';
    char	str_e[] = "peace";
    char	str_c[] = "您好";
  
    ofstream ofile("out.txt");// 建立檔案輸出物件並開啟檔案out.txt
  
    ofile << i // 將資料寫入檔案中
    << ' ' // 數字間插入空白字元以作分隔
    << d
    << ch
    << ' '	// 字元間插入空白字元以作分隔
    << str_e
    << ' '	// 字元間插入空白字元以作分隔
    << str_c;
  
    ofile.close(); //呼叫函數close()以關閉檔案	
  
  return 0;
}
