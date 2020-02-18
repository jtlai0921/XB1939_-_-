#include <iostream>  
#include <cstdlib> 
#include <iomanip>  // 操縱子的標頭檔
using namespace std;

int main()
{
    int i;
    int integer_value=679;
    double double_value=327.36462575;
    cout << "比較輸出寬度不同時，同樣數字的輸出外觀" << endl;
    for( i = 1; i < 10; i++)
    {
        cout << setw(i) << integer_value << endl;	// 使用setw()操縱子
    }
    cout << endl;
    // resetiosflags()及setprecision()操縱子
    cout<<"resetiosflags()及setprecision()操縱子操作實例";
    cout << endl;
    cout << resetiosflags( ios::scientific ) << setprecision(7) << double_value << endl;
    cout << endl;

    return 0;
}
