#include<iostream>
#include<cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    int i, j;    // 定義整數變數 i 與 j
    while (true)         // 無窮迴圈
    {            // 第一層 for 迴圈
        for (i=1; i<=9; i++)
        {
            for (j=1; j<=9; j++) // 第二層 for 迴圈
            {
            cout << j << "*" << i << "=" << i*j << " ";  // 輸出九九乘法表
            if ((i*j) < 10) cout << " ";   // 控制輸出的調整
                if (kbhit()) goto pro_end; // 碰觸任一鍵則跳至 pro_end 執行
            }
            cout << endl;	  // 換行
        }
    }
    pro_end:  // pro_end 標名
    cout << endl << "結束九九乘法表的顯示!";
       
    cout<<endl;
       
    return 0;
}

