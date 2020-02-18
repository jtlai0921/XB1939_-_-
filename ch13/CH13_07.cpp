#include <iostream>  // 處理輸出入的標頭檔
#include <cstdlib>  
#include <iomanip>  // 操縱子的標頭檔
using namespace std;

int main()
{
    // 使用旗標 ios::showpos
    cout << "使用格式旗標\"ios::showpos\"顯示正號"<< endl;
    cout << setiosflags( ios::showpos ) << 123<< resetiosflags( ios::showpos ) << endl;
    // 使用旗標 ios::hex	
    cout << endl<<"使用格式旗標\"ios::hex\"將輸出轉換為十六進位格式"<< endl;
    cout << 123 << " ->   " << endl;
    cout << setiosflags( ios::hex ) << 123 << endl;
    // 使用旗標 ios::showbase
    cout << endl<< "使用格式旗標\"ios::showbase\"將輸出轉換為基底格式"<< endl;
    cout << setiosflags( ios::showbase ) << 123 << endl;
    // 使用旗標 ios::internal
    cout << endl<< "使用\"ios::internal\"在基底或是正負號與數字之間插入空白字元";
    cout << endl << "必須和setw()一起使用"<< endl;
    cout << setiosflags( ios::internal ) << setw(10) << 123 << endl;// 使用旗標 ios::uppercase34	
    cout << endl<< "使用格式旗標\"ios::uppercase\"將輸出轉換為大寫格式"<< endl;
    cout << setiosflags( ios::uppercase ) << 123 << endl;// 使用旗標 ios::showpoint
    cout << endl<< "使用格式旗標\"ios::showpoint\"以０來補足小數點後不夠的位數";
    cout << endl << "必須和setprecision()一起使用"<< endl;
    cout << 12.345 << " ->    " << endl;
    cout << setprecision(8) << setiosflags( ios::showpoint ) << 12.345 << endl;
    cout << endl;	
 
    return 0;
}
