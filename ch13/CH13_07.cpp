#include <iostream>  // �B�z��X�J�����Y��
#include <cstdlib>  
#include <iomanip>  // ���a�l�����Y��
using namespace std;

int main()
{
    // �ϥκX�� ios::showpos
    cout << "�ϥή榡�X��\"ios::showpos\"��ܥ���"<< endl;
    cout << setiosflags( ios::showpos ) << 123<< resetiosflags( ios::showpos ) << endl;
    // �ϥκX�� ios::hex	
    cout << endl<<"�ϥή榡�X��\"ios::hex\"�N��X�ഫ���Q���i��榡"<< endl;
    cout << 123 << " ->   " << endl;
    cout << setiosflags( ios::hex ) << 123 << endl;
    // �ϥκX�� ios::showbase
    cout << endl<< "�ϥή榡�X��\"ios::showbase\"�N��X�ഫ���򩳮榡"<< endl;
    cout << setiosflags( ios::showbase ) << 123 << endl;
    // �ϥκX�� ios::internal
    cout << endl<< "�ϥ�\"ios::internal\"�b�򩳩άO���t���P�Ʀr�������J�ťզr��";
    cout << endl << "�����Msetw()�@�_�ϥ�"<< endl;
    cout << setiosflags( ios::internal ) << setw(10) << 123 << endl;// �ϥκX�� ios::uppercase34	
    cout << endl<< "�ϥή榡�X��\"ios::uppercase\"�N��X�ഫ���j�g�榡"<< endl;
    cout << setiosflags( ios::uppercase ) << 123 << endl;// �ϥκX�� ios::showpoint
    cout << endl<< "�ϥή榡�X��\"ios::showpoint\"�H���Ӹɨ��p���I�ᤣ�������";
    cout << endl << "�����Msetprecision()�@�_�ϥ�"<< endl;
    cout << 12.345 << " ->    " << endl;
    cout << setprecision(8) << setiosflags( ios::showpoint ) << 12.345 << endl;
    cout << endl;	
 
    return 0;
}
