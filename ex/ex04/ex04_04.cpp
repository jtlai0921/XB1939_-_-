#include <iostream> 
#include <cstdlib>                             
using namespace std;
                 
int main()
{
	 int Num_1, Num_2, Tmp_Num;            

	 cout<<"�D�̤j���]��(g.c.d):"<<endl;
	 cout<<"��J��ӥ����:";
	 cin>>Num_1;
     cin>>Num_2;                  

	 if (Num_1 < Num_2)                   
	 {                                     
		 Tmp_Num=Num_1;                           
		 Num_1=Num_2;
		 Num_2=Tmp_Num;
	 }

	 while (Num_2 != 0)                
	 {                                      
	 	Tmp_Num=Num_1 % Num_2;            
		Num_1=Num_2;                              
		Num_2=Tmp_Num;
	 }	  
     cout<<"�̤j���]��(g.c.d):"<<Num_1<<endl; 
       
     
      return 0;                    
}
