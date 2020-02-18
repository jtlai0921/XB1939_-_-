#include <fstream>	// 處理檔案輸出入的標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int digit = 0;
    ifstream ifile;// 宣告檔案輸入物件
    cout << "使用文字格式化模式讀取檔案 : " << endl;
    ifile.open("out5.dat");	 // 使用格式化模式開啟檔案
    ifile >> digit;	// 使用擷取運算子>>讀取檔案
    cout << digit << endl;
    cout << endl;
    cout << "使用二進制模式讀取檔案 : " << endl;
    ifile.open("out6.dat", ios::binary);// 使用二進制模式開啟檔案
    ifile.read( (char*) &digit, sizeof( digit ) );
    cout <<digit<< endl;
    ifile.close();
    cout << endl;
    
    return 0;
}
