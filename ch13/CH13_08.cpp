#include <iostream>  // �B�z��X�J�����Y��
#include <cstdlib>
#include <iomanip>  // ���a�l�����Y��
using namespace std;

int main()
{
    clog << "clog : ��X�T�� 1 - 1";	// ���N���~�T����m��Ȧs�Ϥ�
    // cout�����J�ާ@�lendl�]���|�۰ʩI�scout.flush()���
    cout  << endl << "cout : ��X�T�� 1 - 2" << endl;
    clog.flush();	// �I�sflush���,��Xclog����Ȧs�Ϥ����T�����
    cout << endl;
    // �ϥκX�� ios::showpos
    clog << endl << setiosflags( ios::unitbuf ) << "clog : ��X�T�� 2 - 1";
    cout << endl << "cout : ��X�T�� 2 - 2" << endl;
    clog.flush();
    cout << endl;

    return 0;
}
