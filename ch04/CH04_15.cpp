//�H�_��for�j��p�� 
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{ 
    
    int count=5;  // �w�q����ܼ� count
    {
        for(int count=1; count <= 3; count++) // for �j�餺�w�q�ܼ� count
        { 
            cout << "����Ĥ@�Ӱj��ɪ�count��:" << count;   // ��X�ܼƭ� count
            cout << endl;
        }
    }
    cout << endl;  // ����
    for(; count <= 10; count++)   // �S����l�Ȫ� for �j��
    {
        cout << "����ĤG�Ӱj��ɪ�count��:" << count;    // ��X�ܼƭ� count
        cout << endl;
    }
    cout << endl;
    cout << "���X�ĤG�Ӱj��᪺count��:" << count << "\n";
    // �[�d�ܼ� count ���ܤ�
    cout << endl;
    
    return 0;
}

