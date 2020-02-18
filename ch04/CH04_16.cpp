//以巢狀for迴圈計算 
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{ 
    
    int count, total=0;   // 宣告變數 count 和 total
    count=10;        // 設定計數器變數 count 的初始值
    while  (count)                  // while 迴圈敘述
    {
        cout << count;
        if (count > 1) cout << "+";
            total+=count;    // 把變數 count 值加到變數total 中
        count--;           // 遞減計數器的值	         
    }
    cout << "=";
    cout << total << endl;
    
    return 0;
}

