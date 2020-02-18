#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Num[5]={ 33, 44, 55, 66, 77 };         //定義整數陣列 Num[5] 
    int Count;            //定義整數變數 Count 
 
    for( Count=0; Count < 5; Count++)
    {
        cout<<"Num["<<Count<<"] 的元素值:"<<Num[Count];  /* 輸出陣列元素的值 */
        cout<<"        ";      //輸出空白行調整位置 
        cout<<"Num["<<Count<<"] 的位址:"<<&Num[Count]<<endl;          
        // 換行 
    }
 
    return 0;
}
