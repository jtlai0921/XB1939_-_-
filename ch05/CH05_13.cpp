#include <iostream>  
#include <cstdlib> 
using namespace std;

void average(int,int,float*); //�P�ɨ�ƶǭȻP�ǧ}�I�s
int main()  
{  
    int Chi,Eng;  
    float Ave=0;
     
    cout<<"�п�J���P�^���즨�Z:";  
    cin>>Chi>>Eng ;//��J��즨�Z  
    cout<<"���="<<Chi<<endl;
    cout<<"�^��="<<Eng<<endl;
    cout<<"�������Z="<<Ave<<endl; 
    average(Chi,Eng,&Ave); //�I�s���
    cout<<"----------------------------------"<<endl; 
    cout<<"���="<<Chi<<endl;
    cout<<"�^��="<<Eng<<endl;		
    cout<<"�������Z="<<Ave<<endl; 
     
    return 0;
}  
void average(int a,int b,float*c)  
{  
    *c=(a+b)/2;//c��a,b��ƪ�����  
}
