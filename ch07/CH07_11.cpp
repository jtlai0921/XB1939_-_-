#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    
    int i,arr[6]={312,16,35,65,52,111};
    int *ptr;
 
    ptr = arr;// �ϥΫ����ܼƫ��V�}�C�`�� 
     
    for ( i = 0; i < 6; i++ )
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<'\t';
        cout<<"arr+"<<i<<"="<<arr+i<<'\t';// ��Xarr+i���� 
        cout<<"*(ptr+"<<i<<")="<<*(ptr+i)<<'\t';
        cout<<"ptr+"<<i<<"="<<ptr+i<<endl;/* ��Xptr+i���� */ 
    }

    return 0;
}
