//�H�_��for�j��p�� 
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{ 
    int i,j,sum = 1;
    for(i=0;i<=10;i++)	 //���h 
    {  
        for(j=i;j>0;j--) //n!=n*(n-1)*(n-2)*...*1 
            sum *= j;		 //sum=sum*j 
        cout<<i<<"!="<<sum<<endl;
        sum	= 1;
    }
     
    return 0;
}

