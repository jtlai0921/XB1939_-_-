//�λ��j��ƨD n���h����
#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int);  //��ƭ쫬
int main()
{  
    int i,n;
    
    cout<<"�п�J���h��:"; 
    cin>>n;
    
    for (i=0;i<=n;i++)
        cout<<i<<"!�Ȭ�"<<factorial(i)<<endl;
    
    return 0;
}

int factorial(int i)
{  
    int sum;
    if(i == 0)//���j�פ���� 
        return(1);
    else
        sum = i * factorial(i-1); //sum=n*(n-1)!�ҥH�����I�s���� 
    return sum;
}
