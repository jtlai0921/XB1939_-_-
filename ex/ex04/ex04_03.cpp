#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n,i,j,n1=1;
    long sum=0;
    
    cout<<"�п�J���@���:"; 
    cin>>n;
    
    for(i=1;i<=n;i++)
     {
      for(j=1;j<=i;j++)
      n1*=j;; // n!����
      sum+=n1;// 1!+2!+3!+..n!
      n1=1;
      }
     cout<<"1!+2!+3!+...+"<<n<<"!"<<"="<<sum;
      
   
    return 0; 
} 

