#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Score;      // �w�q����ܼ� Score�A�x�s�ǥͦ��Z
    cout << "��J�ǥͪ�����:";
    cin >> Score;
    if ( Score > 100 )       // �P�_�O�_�W�L 
        cout << "��J�����ƶW�L 100." << endl;
    else 
        if ( Score < 0 )   // �P�_�O�_�C��0 
             cout << "���|���t������??" << endl;
        else	      // ��J�����Ƥ��� 0-100
            if ( Score >= 60 )         // �P�_�O�_�ή�
                cout << "�o�� " << Score << " ���A�٤�����...";
            else
        cout << "���Ӳz�Q��...�A�u�ҤF " << Score << " ��";  // ���Ƥ��ή檺���p
    cout << endl;        // ����
    
    return 0;
}

