#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   int i,a,n,sum=1;
   cout<<"��Ja="; 
   cin>>a;
   cout<<"��Jn="; 
   cin>>n;
   for(i=1;i<=n;i++)
   sum*=a;
   cout<< sum;
    
   
   return 0;
   }

