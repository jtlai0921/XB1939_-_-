#include <iostream>
#include <cstdlib>
using namespace std;

void show(int);

int main()
{
    int i;
    int A[6]={ 8,25,16,13,17,9};//�ŧi�}�C,�õ��w�_�l��
    
    for(i=0;i<6;i++)
    {
        show(A[i]);//�Ha[i]�ƭȷ�Ѽƶǻ� 
         cout<<endl;
    } 
     
    return 0;
 }

void show(int num)
{
    int i;
    for(i=0;i<num;i++)
        cout<<"*";//��Xnum��*�� 
}   
