#include <fstream>	// �B�z�ɮ׿�X�J�����Y��
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int digit = 0;
    ifstream ifile;// �ŧi�ɮ׿�J����
    cout << "�ϥΤ�r�榡�ƼҦ�Ū���ɮ� : " << endl;
    ifile.open("out5.dat");	 // �ϥή榡�ƼҦ��}���ɮ�
    ifile >> digit;	// �ϥ��^���B��l>>Ū���ɮ�
    cout << digit << endl;
    cout << endl;
    cout << "�ϥΤG�i��Ҧ�Ū���ɮ� : " << endl;
    ifile.open("out6.dat", ios::binary);// �ϥΤG�i��Ҧ��}���ɮ�
    ifile.read( (char*) &digit, sizeof( digit ) );
    cout <<digit<< endl;
    ifile.close();
    cout << endl;
    
    return 0;
}
