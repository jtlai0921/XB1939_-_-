#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Num[5]={ 11, 22, 33, 44, 55 };  //�w�q��ư}�C Num[2][3] 
    int count;        
  
    for ( count=0; count < 5; count++)
    {
        cout<<"Num["<<count<<"] ����:"<<Num[count];  //��X�}�C�������� 
        cout<<"        ";    //��X�ťզ�վ��m 
        cout<<"Num["<<count<<"] ����}:"<<&Num[count];   
        cout<<"        ";         //��X�ťզ�վ��m 
        cout<<"Num+"<<count<<"����}:"<<Num+count<<endl;     // �ϥΰ}�C�W����ܦ�} 
    }
  
    return 0;
}
