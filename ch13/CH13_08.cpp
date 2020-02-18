#include <iostream>  // 處理輸出入的標頭檔
#include <cstdlib>
#include <iomanip>  // 操縱子的標頭檔
using namespace std;

int main()
{
    clog << "clog : 輸出訊息 1 - 1";	// 先將錯誤訊息放置於暫存區中
    // cout有插入操作子endl因此會自動呼叫cout.flush()函數
    cout  << endl << "cout : 輸出訊息 1 - 2" << endl;
    clog.flush();	// 呼叫flush函數,輸出clog物件暫存區中的訊息資料
    cout << endl;
    // 使用旗標 ios::showpos
    clog << endl << setiosflags( ios::unitbuf ) << "clog : 輸出訊息 2 - 1";
    cout << endl << "cout : 輸出訊息 2 - 2" << endl;
    clog.flush();
    cout << endl;

    return 0;
}
