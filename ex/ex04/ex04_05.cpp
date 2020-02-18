#include <iostream> 
#include <cstdlib>  
using namespace std;
                     
int main()
{
     cout<<"计1~200丁11计籔13计ぃ11籔13そ计:"<<endl;

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
