#include <iostream>
#include <cstdlib>
using namespace std;

int *min(int *,int *);	// �ŧi�ǧ}�I�s���min()���쫬 

int main()
{
    int a,b,*ptr;
   
    cout<<"�п�J��Ӿ��:"; 
    cin>>a>>b;
   
    ptr=min(&a,&b);// ��ƻP���Ц^�ǭ� 
    cout<<"�̤p��="<<*ptr<<endl;
   
    return 0;
}

int *min(int *a, int *b)
{
    if(*a>*b)
        return b;
    else 
        return a;
}

