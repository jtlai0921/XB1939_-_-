#include <iostream>  
#include <cstdlib>

using namespace std;

void Fun1();  
void Fun2();  
   
int main()  
{  
    auto int i=10;     //�ŧi�ϰ��ܼ� i �Ȩ�main()��ƨϥ� 
    
    cout<<"�D�{�����ܫŧi��auto�ܼ� i ���ȡG"<<i<<endl;  
    Fun1();  
    Fun2();  
    cout<<"�I�s��D�{�����ŧi��auto�ܼ� i ���ȡG"<<i<<endl;  
   
    return 0;
}
void Fun1()  
{  
    auto int i=20;    //�ŧi�ϰ��ܼ� i �Ȩ�Function1()�禡�ƨϥ� 
    cout<<"fun1()���ŧi��auto�ܼ� i ���ȡG"<<i<<endl;  
}  
void Fun2()  
{  
    auto int i=30;    
    //�ŧi�ϰ��ܼ� i �Ȩ�Function2()��ƨϥ�   
    cout<<"fun2()���ŧi��auto�ܼ� i ���ȡG"<<i<<endl;  
}
