#include <iostream>
#include <cstdlib>
using namespace std;

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159 //�w�q�����`�� 

#define R_AREA(r) (r)*(r)*PI //�w�q������� 

int main()
{
    float r;
    cout<<"��J�ꪺ�b�|��:"; 
    cin>>r;
    cout<<R_AREA(r)<<endl;
    
    
    return 0;
}
