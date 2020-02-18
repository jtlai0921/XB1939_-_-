#include <iostream>
#include <cstdlib>
using namespace std;

#define Use_MACRO 1  

#if Use_MACRO ==1
    #define MAX(a,b) (a>b? a:b)
#endif

int main()
{
    int x, y;
    cout<<"請輸入兩數值進行大小比較:";
    cin >> x >> y;     // 整數變數 x 與 y 儲存輸入值
    cout << x << " 與 " << y << " 中的較大值是 " << MAX(x, y);   // 顯示結果訊息
    cout << endl;            // 換行

    return 0;
}
