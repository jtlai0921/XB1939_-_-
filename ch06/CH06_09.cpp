#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Num[5]={ 33, 44, 55, 66, 77 };         //�w�q��ư}�C Num[5] 
    int Count;            //�w�q����ܼ� Count 
 
    for( Count=0; Count < 5; Count++)
    {
        cout<<"Num["<<Count<<"] ��������:"<<Num[Count];  /* ��X�}�C�������� */
        cout<<"        ";      //��X�ťզ�վ��m 
        cout<<"Num["<<Count<<"] ����}:"<<&Num[Count]<<endl;          
        // ���� 
    }
 
    return 0;
}
