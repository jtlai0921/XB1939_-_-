#include <iostream> 
#include <cstdlib> 
#include <iomanip>  // ���a�l�����Y��
using namespace std;

int main()
{
    int integer_value1=8374836;
    int integer_value2=73446;
    int integer_value3=7;// �ϥκX�� ios::right
    cout << "�ϥή榡�X��\"ios::right\"�a�k��X,�����w�]��" << endl;
    cout << setiosflags( ios::right ) << setw(10) << integer_value1 << endl;
    cout << resetiosflags( ios::right ) << endl; // �Ѱ��]�w
    cout << "�ϥή榡�X��\"ios::right\"�a�k��X,�����w�]��" << endl;
    cout << setiosflags( ios::right ) << setw(10) << integer_value2 << endl;
    cout << resetiosflags( ios::right ) << endl; // �Ѱ��]�w
    cout << "�ϥή榡�X��\"ios::right\"�a�k��X,�����w�]��" << endl;
    cout << setiosflags( ios::right ) << setw(10) << integer_value3 << endl;
    cout << resetiosflags( ios::right ) << endl; // �Ѱ��]�w
    // �ϥκX�� ios::left
    cout << "�ϥή榡�X��\"ios::left\"�N��X�a�����" << endl;
    cout << setiosflags( ios::left ) << setw(10) << integer_value1 << endl;
    cout << resetiosflags( ios::left ) << endl; // �Ѱ��]�w
    cout << "�ϥή榡�X��\"ios::left\"�N��X�a�����" << endl;
    cout << setiosflags( ios::left ) << setw(10) << integer_value2 << endl;
    cout << resetiosflags( ios::left ) << endl; // �Ѱ��]�w
    cout << "�ϥή榡�X��\"ios::left\"�N��X�a�����" << endl;
    cout << setiosflags( ios::left ) << setw(10) << integer_value3 << endl;
    cout << resetiosflags( ios::left ) << endl; // �Ѱ��]�w
    cout << endl;

    return 0;
}
