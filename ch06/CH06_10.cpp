#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Num[3][3]={ {11, 22, 33},{44, 55, 66},{88,77,66} };    //定義整數陣列 Num[2][3] 
    int i, j;             //定義整數變數 i 與 j 
    for ( i=0; i < 3; i++)   //巢狀 for 迴圈 
        for ( j=0; j < 3; j++)
        {
            cout<<"Num["<<i<<"]["<<j<<"] 的值:"<<Num[i][j];   //輸出陣列元素的值 
            cout<<"        ";     //輸出空白行調整位置 
            cout<<"Num["<<i<<"]["<<j<<"] 的位址:"<<&Num[i][j]<<endl;    
            //換行 
        }
       
    return 0;
}
