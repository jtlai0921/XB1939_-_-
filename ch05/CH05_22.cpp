#include <iostream>  
#include <cstdlib>

using namespace std; 
   
int main()  
{  
    extern float PI; //�ŧi PI ��extern�ܼ� 
    float radius,area;
   
    cout<<"�п�J��b�|��:";
    cin>>radius; 
   
    area=radius*radius*PI;
    cout<<"�ꭱ�n��:"<<area<<endl; 

    return 0;
}
   
float PI=3.14159;//�~���ŧi�ܼ� 
