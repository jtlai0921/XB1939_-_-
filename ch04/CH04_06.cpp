#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Score;  // �w�q����ܼ� Score�A�x�s�ǥͦ��Z
    cout << "��J�ǥͪ�����:";
    cin >> Score;
    if ( Score >= 60 )      // if ����ԭz
        cout << "�o�� " << Score << " ���A�٤�����...";
    else
        cout << "���Ӳz�Q��...�A�u�ҤF " << Score << " ��";
    cout << endl;      // ����
     
    return 0;
}

