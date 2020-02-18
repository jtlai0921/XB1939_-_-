#include <iostream> 
#include <cstdlib>                             
using namespace std;

int main()
{
	int i=1,new_pw,password=101101;
    
    while(i<=3)          /*輸入次數以三次為限*/
		{			
			cout<<"請輸入密碼:";  
		    cin>>new_pw;
			if (new_pw != password)     /*如果輸入的密碼與password不同*/
			{
				cout<<"密碼錯誤!!"<<endl;    
				i++;                                     
				continue;             /*跳回while開始處*/
			}
			cout<<"密碼正確!!"<<endl;       /*密碼正確*/
			break;  	
		} 

    
    return 0;                    
}
