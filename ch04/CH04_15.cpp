//以巢狀for迴圈計算 
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{ 
    
    int count=5;  // 定義整數變數 count
    {
        for(int count=1; count <= 3; count++) // for 迴圈內定義變數 count
        { 
            cout << "執行第一個迴圈時的count值:" << count;   // 輸出變數值 count
            cout << endl;
        }
    }
    cout << endl;  // 換行
    for(; count <= 10; count++)   // 沒有初始值的 for 迴圈
    {
        cout << "執行第二個迴圈時的count值:" << count;    // 輸出變數值 count
        cout << endl;
    }
    cout << endl;
    cout << "跳出第二個迴圈後的count值:" << count << "\n";
    // 觀查變數 count 的變化
    cout << endl;
    
    return 0;
}

