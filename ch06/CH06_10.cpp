#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Num[3][3]={ {11, 22, 33},{44, 55, 66},{88,77,66} };    //�w�q��ư}�C Num[2][3] 
    int i, j;             //�w�q����ܼ� i �P j 
    for ( i=0; i < 3; i++)   //�_�� for �j�� 
        for ( j=0; j < 3; j++)
        {
            cout<<"Num["<<i<<"]["<<j<<"] ����:"<<Num[i][j];   //��X�}�C�������� 
            cout<<"        ";     //��X�ťզ�վ��m 
            cout<<"Num["<<i<<"]["<<j<<"] ����}:"<<&Num[i][j]<<endl;    
            //���� 
        }
       
    return 0;
}
