#include <iostream>
#include <cstdlib> 
using namespace std;

int square(int);  // ��ƭ쫬�ŧi 
int cubic(int);  // ��ƭ쫬�ŧi 

int main()
{
    int (*ptr)(int); //��ƫ��Ыŧi 
    int x;
    
    cout<<"�п�J��ƭ�:���ƫh�p�⥭���,�_�ƫh�p��ߤ��:"; 
    cin>>x;
    
    if(x%2==0)
     ptr=square;//���ƫh���Vsquare()���  
    else
     ptr=cubic; //�_�ƫh���Vcubic()���  
    
     cout<<ptr(x)<<endl;

   
    return 0;
}

int square(int a)
{
    return a*a;
}

int cubic(int a)
{
    return a*a*a;
}

