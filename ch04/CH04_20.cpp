#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char check;    // �w�q�r���ܼ� check�A�Ψ��x�s do...while ���P�_��
    int chinese, english, math;   // �w�q�T�Ӿ���ܼơA���O�x�s���B�^��B�ƾǪ����n
    do
    {
        cout << "�п�J��妨�Z:";
        cin >> chinese;  // Ū����妨�Z
        cout << "�п�J�^�妨�Z:";
        cin >> english;          // Ū���^�妨�Z
        cout << "�п�J�ƾǦ��Z:";
        cin >> math;      // Ū���ƾǦ��Z
        cout << "�T�쪺�������Z=" << (chinese+english+math)/3 << endl;
        cout << "�A�p��U�@��ǥͪ��������Z(y/n):";
        cin >> check;    // �b�ܼ� check �s�J�P�_��
    }
    while ( check == 'y' );   // ��J 'y' ��h�A�p��U�@��ǥͪ��������Z
	
    return 0;	
}

