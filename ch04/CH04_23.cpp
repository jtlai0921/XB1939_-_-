//continue�m��
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //�w�q�@�Ӿ�ư}�C�A�s��ǥͦ��Z�C 
    int Student_Score[10]={ 58, 61, 77, 89, 48, 67, 92, 44, 47, 56};
     
    for (int count=0; count < 10; count++)   // for �j��
    {
        if(Student_Score[count] >= 60)    // �P�_���Z�O�_�ή�
            continue;        // continue ���O
        cout << count+1 << "���ǥͪ����Ƥ��ή�!" << "����:" <<   Student_Score[count];
        cout << endl;                   // ����
    }
 
    return 0;
}

