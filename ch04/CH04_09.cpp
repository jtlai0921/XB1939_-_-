#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Score;      // �w�q����ܼ� Score�A�x�s�ǥͦ��Z
    cout << "��J�ǥͪ�����:";
    cin >> Score;       // ���o�ǥͦ��Z
    if ( (Score > 100) || (Score < 0) )   // �P�_�O�_���� 0 �� 100 ����
        cout << "��J�����Ƥ��b0��100������!!";    // �W�X�d��h��ܿ��~�T��
    else if ( Score == 100 )             // �P�_�O�_����(100)
        cout << "�~�M�Ҩ캡���A�u�O�u�q!";
    else if ( Score >= 90 )	      // �P�_�O�_���� 90 ��
        cout << "�u�i���A�u�t�@�I�N�����F!";
    else if ( Score >= 80 )       // �P�_�O�_���� 80 ��
        cout << "�����ٺ��������A�A�y�L���I��!";
    else if ( Score >= 70 )      // �P�_�O�_���� 70 ��
        cout << "���Z���O�ܲz�Q�A�[�o�I!";
    else if ( Score >= 60 )             // �P�_�O�_���� 60 ��
        cout << "�u�V�A�֭n���ή��o!";
    else              // �C��60��
        cout << "�z��.... �s 60 �����Ҥ����!";
        cout << endl;        // ����
    
    return 0;
}

