#include <iostream>  
#include <cstdlib> 
using namespace std;

void exchange(int*,int*); 
 
int main()  
{  
    int N1,N2;   
    cout<<"叫块ㄢ计"<<endl;  
    cin>>N1>>N2;   
    cout<<"N1="<<N1<<endl;
    cout<<"N2="<<N2<<endl;
    exchange(&N1,&N2); 
    cout<<"------------- exchange()ㄧ计ユ传 ----------------"<<endl; 		
    cout<<"N1="<<N1<<endl;
    cout<<"N2="<<N2<<endl;
     
    return 0;
 }  
void exchange(int *Num1, int *Num2)  
{  
    int Temp;  
     
    Temp=*Num2;//ユ传ㄢ计筁祘 
    *Num2=*Num1;
    *Num1=Temp; 
}
