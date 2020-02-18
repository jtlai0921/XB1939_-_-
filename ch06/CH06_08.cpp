#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char a='0', a_Array[5]={'a','b','c','d','e'};     //定義字元型態變數 a 與字元陣列 a_Array 
    int b=100, b_Array[5]={5,4,3,2,1};    //定義整數型態變數 b 與整數陣列 b_Array 
    float c=120.5, c_Array[5]={44.54,23.88,1211.56,0.9,100.4};
    //定義浮點數型態變數 c 與浮點數陣列 c_Array 
    
    cout<<"字元型態: "<<sizeof(a)<<" 位元組 a_Array字元陣列:"<<sizeof(a_Array)
     <<" 位元組 "<<endl;
    //顯示 a_Array 佔用的記憶體空間 
    cout<<"整數型態: "<<sizeof(b)<<" 位元組 b_Array字元陣列:"<<sizeof(b_Array)
     <<" 位元組 "<<endl;
    // 顯示 b_Array 佔用的記憶體空間 
    cout<<"浮點數數型態: "<<sizeof(c)<<" 位元組 c_Array字元陣列:"<<sizeof(c_Array)
     <<" 位元組 "<<endl;
    // 顯示 c_Array 佔用的記憶體空間 

    return 0; 
}
