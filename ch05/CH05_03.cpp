#include <iostream>
#include <cstdlib>
 //�޼ơGx ������       
 //y ������       
 //�Ǧ^�ȡG����B�⵲�G 
using namespace std;

float Pow( float x, int y )
{
    float p = 1;
    int i;
    for( i = 1; i <= y; i++ )
    p *= x;

    return p;
}

int main()
{
    float x;
    int y;

    cout<<"�п�J����B��]ex.2^3�^�G" ;
    cin>>x>>y;
    cout<<"����B�⵲�G�G"<<Pow(x, y)<<endl;

    return 0;
}
