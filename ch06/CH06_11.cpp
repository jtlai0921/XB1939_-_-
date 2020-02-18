#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Num[5]={ 11, 22, 33, 44, 55 };  //定義整數陣列 Num[2][3] 
    int count;        
  
    for ( count=0; count < 5; count++)
    {
        cout<<"Num["<<count<<"] 的值:"<<Num[count];  //輸出陣列元素的值 
        cout<<"        ";    //輸出空白行調整位置 
        cout<<"Num["<<count<<"] 的位址:"<<&Num[count];   
        cout<<"        ";         //輸出空白行調整位置 
        cout<<"Num+"<<count<<"的位址:"<<Num+count<<endl;     // 使用陣列名稱顯示位址 
    }
  
    return 0;
}
