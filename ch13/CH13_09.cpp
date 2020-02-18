#include <iostream>  // 處理輸出入的標頭檔
#include <cstdlib> 
using namespace std;

int main()
{
    char	character_value = 'x';
    char	English_string[] = "Happy Birthday";
    char	Chinese_string[] = "學習程式設計是一件有趣的事";
    cout.put(character_value);	// 單一字元的輸出
    cout << endl;
    cout << endl;
    cout.write( English_string, 14 );	// 輸出14個字元英文字串
    cout << endl;
    cout << endl;
    cout.write( Chinese_string, 12 );	// 輸出12個位元組的中文字串
    cout << endl << endl;    // 因為一個中文字佔2個位元組，所以只輸出6個字
    
    return 0;
}
