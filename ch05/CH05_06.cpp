#include <iostream>
#include <cstdlib>
using namespace std;
		
int main()
{
    float f_abs(float);//���f_abs()���쫬�ŧi 
    float cubic_abs(float o1);//���cubic_abs()���쫬�ŧi 
    float f1;
   
    cout<<"�п�J�@���:";		//��J��� 
    cin>>f1;
    cout<<"f_abs("<<f1<<")="<<f_abs(f1)<<endl;//�L�X����� 
    cout<<"cubic_abs("<<f1<<")="<<cubic_abs(f1)<<endl; 
   
    return 0;
}
 
float cubic_abs(float o1)
{  
    float f_abs(float);
    return f_abs(o1*o1*o1);
}

float f_abs(float o)	//�ۭq���f_abs()�Ǧ^����� 
{
    if (o<0)
        return -1*o;
    else
        return o;
}

