#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

   char *ptr="Today is a good day,I will show Mary the way to the Big C superstore.";
   int i=0,count=0;
   cout<<ptr<<endl;   
   while(*(ptr+i) != '\0')
   {   
      if((*(ptr+i)>=65) && (*(ptr+i)<=90))
       cout<<*(ptr+i)<<'\t';
       i++;
   } 
   
  
   return 0;
} 
