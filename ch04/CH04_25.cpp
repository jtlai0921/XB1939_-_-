#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int i,j,n,m;  //�E�E���k�������j��
    cout<<"�п�J�n���X�� n �P m ��(1<=n,m<=9): ";
    cin>>n>>m;
   
    for(i=1; i<=9; i++)	 
    {    
        for(j=1; j<=9; j++)
        {   
            if(i==n & j==m)   
                goto here; 
            cout<<i<<"*"<<j<<"="<<i*j<<"  ";    
        }
        cout<<endl;
    }
     
    here:cout<<"�ڱqgoto���L�Ӫ�"<<endl; 
 
    return 0;
}

