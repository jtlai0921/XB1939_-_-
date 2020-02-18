//用遞迴函數求 n階層的值
#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int);  //函數原型
int main()
{  
    int i,n;
    
    cout<<"請輸入階層數:"; 
    cin>>n;
    
    for (i=0;i<=n;i++)
        cout<<i<<"!值為"<<factorial(i)<<endl;
    
    return 0;
}

int factorial(int i)
{  
    int sum;
    if(i == 0)//遞迴終止的條件 
        return(1);
    else
        sum = i * factorial(i-1); //sum=n*(n-1)!所以直接呼叫本身 
    return sum;
}
