#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int h=250,day=0;	
	do         
   {                                 
		day++;                          
		if(h-=10)                  
		h+=5;              
   } while(h>0);                       
   printf("»Ý­n %d ¤Ñ\n", day);  
    
    
    return 0;
}
