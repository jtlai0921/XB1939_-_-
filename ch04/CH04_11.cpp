#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char Select;       // �w�q�r���ܼ� Select�A�x�s��ܶ���
    cout << " A)dd    �s�W��ƶ�"   << endl;  // ��ܥi�ѿ�ܶ��ت��T��
    cout << " V)iew   �˵���ƶ�"   << endl;
    cout << " Q)uit   ���}�ާ@�t��" << endl;
    cout << endl;
    cout << "��ܾާ@����:";
    cin >> Select;    // ��J�ާ@����
    cout << endl;         // ����
    switch ( Select )     // ����P�_�� = Select
    {
        case 'a':     // ��J���r���O 'a' ��
        case 'A':     // ��J���r���O 'A' ��
            cout << "�s�W��ƶ�";   // ��ܰT��
            break;        // ���� switch
        case 'v':      // ��J���r���O 'v' ��
        case 'V':         // ��J���r���O 'V' ��
            cout << "�˵���ƶ�";      // ��ܰT��
            break;            // ���� switch
        case 'q':     // ��J���r���O 'q' ��
        case 'Q':       // ��J���r���O 'Q' ��
            cout << "���}�ާ@�t��...";   // ��ܰT��
            break;           // ���� switch
        default:             // ��J���~�r�����B�z
            cout << "��J���~.... ��J���ֳt��S���w�q";  // ��ܰT��
            break;                                     // ���� switch38	   
    }
    cout << endl;                                      // ����
    
    return 0;
}

