#include <iostream> 
#include <cstdlib>
using namespace std;

int main()
{
    int i,arr[6]={312,16,35,65,52,111};
   
    cout<<"arr="<<arr<<'\t'<<"&arr="<<&arr<<endl;		
    //�L�X���б`��arr���ȻP���б`��arr����} 
   
    for(i=0;i<6;i++)
        cout<<"&arr["<<i<<"]="<<&arr[i]<<'\t'<<"arr+"<<i<<"="<<arr+i<<endl;  
        //�L�X�}�Ca�C�@�Ӥ�������} 
    cout<<"--------------------------------------"<<endl;
    for(i=0;i<6;i++)
        cout<<"*(&arr["<<i<<"])="<<*(&arr[i])<<'\t'<<"*arr(+"<<i<<")="<<*(arr+i)<<endl; 
       // �L�X�}�Ca�C�@�Ӥ������� 
     
    return 0;
}

