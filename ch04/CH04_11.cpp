#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char Select;       // 定義字元變數 Select，儲存選擇項目
    cout << " A)dd    新增資料項"   << endl;  // 顯示可供選擇項目的訊息
    cout << " V)iew   檢視資料項"   << endl;
    cout << " Q)uit   離開操作系統" << endl;
    cout << endl;
    cout << "選擇操作項目:";
    cin >> Select;    // 輸入操作項目
    cout << endl;         // 換行
    switch ( Select )     // 條件判斷式 = Select
    {
        case 'a':     // 輸入的字元是 'a' 時
        case 'A':     // 輸入的字元是 'A' 時
            cout << "新增資料項";   // 顯示訊息
            break;        // 跳離 switch
        case 'v':      // 輸入的字元是 'v' 時
        case 'V':         // 輸入的字元是 'V' 時
            cout << "檢視資料項";      // 顯示訊息
            break;            // 跳離 switch
        case 'q':     // 輸入的字元是 'q' 時
        case 'Q':       // 輸入的字元是 'Q' 時
            cout << "離開操作系統...";   // 顯示訊息
            break;           // 跳離 switch
        default:             // 輸入錯誤字元的處理
            cout << "輸入錯誤.... 輸入的快速鍵沒有定義";  // 顯示訊息
            break;                                     // 跳離 switch38	   
    }
    cout << endl;                                      // 換行
    
    return 0;
}

