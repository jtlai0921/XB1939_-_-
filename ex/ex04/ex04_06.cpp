#include <iostream> 
#include <cstdlib>  
using namespace std;
                     
int main()
{
     int n;
     
     cout<<"請輸入一數值:"; 
     cin>>n;
     while (n!=0)
     {
     cout<<n%10;
     n/=10;
      }
   	
	
    return 0;                                      
}
