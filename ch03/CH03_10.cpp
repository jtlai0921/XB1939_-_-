#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N1, N2, N3, max;      // �w�q�ܼơAmax �ΨӦs��̤j�ȻP��X
    cout << "�п�J�Ĥ@�ӼƦr�G";    // ��J���@����� 3 �Ӽƭ�
    cin >> N1;
    cout << "�п�J�ĤG�ӼƦr�G";
    cin >> N2;
    cout << "�п�J�ĤT�ӼƦr�G";
    cin >> N3;
    max=N1 > N2 ? N1 : N2;     // �ϥ� ?: ����B��l�@�̤j�Ȫ����
    max=max > N3 ? max : N3;
    cout << endl;      // ����    
    cout << N1 << ", " << N2 << ", " << N3 << "�������̤j�Ƭ��G" << max;
    cout << endl;
    
    return 0;
}

