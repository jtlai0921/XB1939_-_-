#include <iostream>
#include <cstdlib>
#define Array_size 6
using namespace std;

void Multiple2(int arr[]);		//���Multiple2()���쫬 

int main()
{
    int i,A[Array_size]={ 1,2,3,4,5,6 };
   
    cout<<"�I�sMultiple2()�e,�}�C�����e��: "<<endl;   
    for(i=0;i<Array_size;i++)	//�L�X�}�C���e 
        cout<<A[i]<<" ";
    cout<<endl;
    Multiple2(A); 			//�I�s���Multiple2() 
    cout<<"�I�sMultiple2()��,�}�C�����e��: "<<endl; 
    for(i=0;i<Array_size;i++)	//�L�X�}�C���e 
        cout<<A[i]<<" ";
    cout<<endl;
    
    return 0;
}

void Multiple2(int arr[])
{
    int i;
    for(i=0;i<Array_size;i++)	
        arr[i]*=2;
}

