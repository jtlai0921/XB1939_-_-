#include <iostream>
#include <cstdlib>
using namespace std;

int* get_pointer_value();  //�ܽd�p��Ǧ^���Э� 
 
int main()
{
    int *ptr;
    ptr = get_pointer_value();
    cout<<"ptr="<<ptr<<endl;
     
    return 0;
}
 
 //���ϥΪ̿�J��� 
 // �Ǧ^���Э�       
 int* get_pointer_value()
{
    int *x;
    int input;
    x = &input;
    cout<<"�п�J�@�Ӿ�ơG" ;
    cin>>input;
    cout<<"x="<<x<<endl;
    return x;
}
