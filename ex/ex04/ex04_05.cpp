#include <iostream> 
#include <cstdlib>  
using namespace std;
                     
int main()
{
     cout<<"列出數值1~200間11的倍數與13的倍數，但不包含11與13的公倍數:"<<endl;

	 for (int count=1; count <= 200; count++)			  
	 {
		 if ( ((count % 11) == 0) && ((count % 13) == 0))    
			 continue;                                    
		 else if ( (count % 11) == 0 )                       
			 cout<<count<<" ";                          
		 else if ( (count % 13) == 0)                   
			 cout<<count<<" ";                   
	 }
	cout<<endl;
	

    return 0;                                      
}
