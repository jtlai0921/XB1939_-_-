#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{	  
    int* m = new int;
    int p = 30;
    *m = 50;
    cout<<"*m = "<<*m<<endl;
    cout<<"����delete m�e�A����m�ҫ��V���O�����} = "<<m<<endl;	
    delete m;	
    cout<<"����delete m��A����m�ҫ��V���O�����} = "<<m<<endl;	
    m = &p;    
    //�N����m���V�ܼ�p	
    (*m)++;    //�����m�ҫ��V����}�����ƭȻ��W1
    cout<<"p = "<<p<<endl;
  
    return 0;
}
