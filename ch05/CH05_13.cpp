#include <iostream>  
#include <cstdlib> 
using namespace std;

void average(int,int,float*); //同時具備傳值與傳址呼叫
int main()  
{  
    int Chi,Eng;  
    float Ave=0;
     
    cout<<"請輸入國文與英文兩科成績:";  
    cin>>Chi>>Eng ;//輸入兩科成績  
    cout<<"國文="<<Chi<<endl;
    cout<<"英文="<<Eng<<endl;
    cout<<"平均成績="<<Ave<<endl; 
    average(Chi,Eng,&Ave); //呼叫函數
    cout<<"----------------------------------"<<endl; 
    cout<<"國文="<<Chi<<endl;
    cout<<"英文="<<Eng<<endl;		
    cout<<"平均成績="<<Ave<<endl; 
     
    return 0;
}  
void average(int a,int b,float*c)  
{  
    *c=(a+b)/2;//c為a,b兩數的平均  
}
