#include <iostream> 
#include <cstdlib>  
using namespace std;
                     
int main()
{
     cout<<"�C�X�ƭ�1~200��11�����ƻP13�����ơA�����]�t11�P13��������:"<<endl;

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
