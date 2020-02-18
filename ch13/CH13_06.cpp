#include <iostream> 
#include <cstdlib> 
#include <iomanip>  // 操縱子的標頭檔
using namespace std;

int main()
{
    int integer_value1=8374836;
    int integer_value2=73446;
    int integer_value3=7;// 使用旗標 ios::right
    cout << "使用格式旗標\"ios::right\"靠右輸出,此為預設值" << endl;
    cout << setiosflags( ios::right ) << setw(10) << integer_value1 << endl;
    cout << resetiosflags( ios::right ) << endl; // 解除設定
    cout << "使用格式旗標\"ios::right\"靠右輸出,此為預設值" << endl;
    cout << setiosflags( ios::right ) << setw(10) << integer_value2 << endl;
    cout << resetiosflags( ios::right ) << endl; // 解除設定
    cout << "使用格式旗標\"ios::right\"靠右輸出,此為預設值" << endl;
    cout << setiosflags( ios::right ) << setw(10) << integer_value3 << endl;
    cout << resetiosflags( ios::right ) << endl; // 解除設定
    // 使用旗標 ios::left
    cout << "使用格式旗標\"ios::left\"將輸出靠左顯示" << endl;
    cout << setiosflags( ios::left ) << setw(10) << integer_value1 << endl;
    cout << resetiosflags( ios::left ) << endl; // 解除設定
    cout << "使用格式旗標\"ios::left\"將輸出靠左顯示" << endl;
    cout << setiosflags( ios::left ) << setw(10) << integer_value2 << endl;
    cout << resetiosflags( ios::left ) << endl; // 解除設定
    cout << "使用格式旗標\"ios::left\"將輸出靠左顯示" << endl;
    cout << setiosflags( ios::left ) << setw(10) << integer_value3 << endl;
    cout << resetiosflags( ios::left ) << endl; // 解除設定
    cout << endl;

    return 0;
}
