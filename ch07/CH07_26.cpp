#include <iostream>  
#include <cstdlib> 
using namespace std;

int main()  
{  
    int* num = new int[5];  
    int temp,i = 0;  
    cout<<"[�п�J���ӼƦr]"<<endl;  
    while(i < 5) {  
        cout<<"�Ʀr"<<i + 1<<"> ";  
        cin>>*(num + i);        //���O��J���ӼƦr  
   	    i++;  
    }  
    for(i=0;i<4;i++)  
        for(int j=i+1;j<5;j++)  
     	{  
            if(*(num + i) > *(num + j))    //�p�G*(num+i)�j��*(num+j)�N����  
          	{ 
                temp = *(num + i); 
                *(num + i) = *(num + j);  
          	    *(num + j) = temp; 
            }  
        }  
    cout<<"[�Ѥp�Ӥj�����ǬO]";  
    for(i=0;i<5;i++)    //��X�Ƨǫ᪺���G  
        cout<<*(num + i)<<'\t';
    cout<<endl;
    delete [] num;       //����ʺA�t�m���}�C�O���� 
      
    return  0;
}
