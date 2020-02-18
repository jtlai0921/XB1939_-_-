#include <iostream>
#include <cstdlib>
using namespace std;

void show(int);

int main()
{
    int i;
    int A[6]={ 8,25,16,13,17,9};//宣告陣列,並給定起始值
    
    for(i=0;i<6;i++)
    {
        show(A[i]);//以a[i]數值當參數傳遞 
         cout<<endl;
    } 
     
    return 0;
 }

void show(int num)
{
    int i;
    for(i=0;i<num;i++)
        cout<<"*";//輸出num個*號 
}   
