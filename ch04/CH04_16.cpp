//�H�_��for�j��p�� 
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{ 
    
    int count, total=0;   // �ŧi�ܼ� count �M total
    count=10;        // �]�w�p�ƾ��ܼ� count ����l��
    while  (count)                  // while �j��ԭz
    {
        cout << count;
        if (count > 1) cout << "+";
            total+=count;    // ���ܼ� count �ȥ[���ܼ�total ��
        count--;           // ����p�ƾ�����	         
    }
    cout << "=";
    cout << total << endl;
    
    return 0;
}

