#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a=1,n;
    cout<<"�п�J�@�Ӿ�ƼƦr�G";
    cin>>n;
    cout<<n<<"���Ҧ����]�Ƭ�:";
   
    while(a<=n)                      //�qwhile�j��
    {
       if(n%a==0)                    //��n����Qa�㰣��~�ha�N�On���]�� 
       {                             //�h����if�����ԭz
         cout<<a;    
		 if(n!=a)cout<<",";
       }
       a++;                          //a�Ȼ��W1
    }
    
    cout<<endl;
    
   
    return 0;
}


