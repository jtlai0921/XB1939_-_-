#include <iostream> 
#include <cstdlib>                             
using namespace std;

int main()
{
	int i=1,new_pw,password=101101;
    
    while(i<=3)          /*��J���ƥH�T������*/
		{			
			cout<<"�п�J�K�X:";  
		    cin>>new_pw;
			if (new_pw != password)     /*�p�G��J���K�X�Ppassword���P*/
			{
				cout<<"�K�X���~!!"<<endl;    
				i++;                                     
				continue;             /*���^while�}�l�B*/
			}
			cout<<"�K�X���T!!"<<endl;       /*�K�X���T*/
			break;  	
		} 

    
    return 0;                    
}
