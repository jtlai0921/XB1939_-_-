#include <iostream>  // 處理輸出入的標頭檔
#include <cstdlib> 
using namespace std;

int main()
{
    int	i = 66;
    double d = 3.14;
    char	ch = 'a';
    char	str_e[] = "peace";
    char	str_c[] = "您好";
    cout << i	// 輸出整數
    << d		// 輸出浮點數
    << ch		// 輸出字元
    << str_e	// 輸出英文字串
    << str_c	// 輸出英文字串
    << endl << endl;
    
    return 0;
}
