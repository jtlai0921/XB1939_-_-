//�p��10! ����
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i,sum=1;
    for (i=1;i<=10;i++)  /*�w�qfor�j��*/
    {
        sum*=i;     /*sum=sum+i*/
    } 
    cout<<"i="<<i-1<<"! sum="<<sum<<endl;   //�L�Xi�Msum����

    return 0;
}

