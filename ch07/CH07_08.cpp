#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *int_ptr,i,no;    // �ŧi��ƫ��A���� 
    double *dou_ptr,dno;   // �ŧi�B�I�ƫ��A���� 
     
     
    int_ptr=&no;
    dou_ptr=&dno;//���V�ܼƦ�} 
     
    for ( i = 1; i <= 5; i++ )
    {
        int_ptr++;
        dou_ptr++;
        cout<<"int_ptr ="<<int_ptr<<endl;
        cout<<"dou_ptr ="<<dou_ptr<<endl;
    }

    return 0;
}
