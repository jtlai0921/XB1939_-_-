#include <iostream> 
#include <cstdlib>

using namespace std;

int main()
{
    int a=100;		//�ŧi����ܼ�a 
    double b=113.14;	// �ŧi�B�I���ܼ�a 
    char c[]="apple";   	// �ŧi�r���ܼ�a 
   
    cout<<"a="<<a<<" sizeof(a)="<<sizeof(a)<<" ��}��:"<<&a<<endl;
    cout<<"b="<<b<<" sizeof(b)="<<sizeof(b)<<" ��}��:"<<&b<<endl;
    cout<<"c="<<c<<" sizeof(c)="<<sizeof(c)<<" ��}��:"<<&c<<endl;

    //�ϥ�&�B��l��X�ܼƦ�}  
    return 0;
}
