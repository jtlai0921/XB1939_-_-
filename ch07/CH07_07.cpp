#include <iostream>
#include <cstdlib>
using namespace std;

int *min(int *,int *);	// 宣告傳址呼叫函數min()的原型 

int main()
{
    int a,b,*ptr;
   
    cout<<"請輸入兩個整數:"; 
    cin>>a>>b;
   
    ptr=min(&a,&b);// 函數與指標回傳值 
    cout<<"最小值="<<*ptr<<endl;
   
    return 0;
}

int *min(int *a, int *b)
{
    if(*a>*b)
        return b;
    else 
        return a;
}

