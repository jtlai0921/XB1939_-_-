#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    float Money;     // �w�q����ܼ� Money
    cout << "�п�J���O�����B:";
    cin >> Money;
    if (Money < 1200)   // if ����ԭz
        Money*=1.1;// ���O���� 1200�A�[���A�ȶO1��
    cout << "��ú�I����ڪ��B�O " << Money << " ��";
    cout << endl;    // ����
    
    return 0;
}

