#include <iostream>
#include <cstdlib>
using namespace std;

void show(int*); //傳址呼叫原型宣告

int main()
{
    int i;
    int A[6]={ 8,25,16,13,17,9};//宣告陣列,並給定起始值
    
    for(i=0;i<6;i++)
    {
        show(&A[i]);//以a[i]位址當參數傳遞 
        cout<<endl;
    } 
    for(i=0;i<6;i++)
        cout<<"A["<<i<<"]="<<A[i]<<endl;
     
    return 0;
 }

void show(int *num)
{
   int i;
   for(i=0;i<*num;i++)
       printf("*");//輸出num個*號 
   *num=0;//參數值歸零   
}   
