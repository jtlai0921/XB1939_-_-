#include <iostream>
#include <cstdlib>
using namespace std;

void show(int*); //�ǧ}�I�s�쫬�ŧi

int main()
{
    int i;
    int A[6]={ 8,25,16,13,17,9};//�ŧi�}�C,�õ��w�_�l��
    
    for(i=0;i<6;i++)
    {
        show(&A[i]);//�Ha[i]��}��Ѽƶǻ� 
        cout<<endl;
    } 
    for(i=0;i<6;i++)
        cout<<"A["<<i<<"]="<<A[i]<<endl;
     
    return 0;
 }

void show(int *num)
{
   int i;
   for(i=0;i<*num;i++)
       printf("*");//��Xnum��*�� 
   *num=0;//�Ѽƭ��k�s   
}   
