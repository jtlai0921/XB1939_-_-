#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int input;
    int *ptr;
 
    ptr = &input;  //��l�����ܼ� 
    cout<<"�п�J�@�Ӿ�ơG";
    cin>>input;
    *ptr = *ptr * *ptr * *ptr;  //�i��ߤ�B��A�ñN���G�s�^ 
    cout<<"*ptr="<<*ptr<<" input="<<input<<endl;
 
    return 0;
}
