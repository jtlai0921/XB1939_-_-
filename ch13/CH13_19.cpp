#include <fstream>	// �B�z�ɮ׿�X�J�����Y��
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int digit = 123456789;
    ofstream ofile;	// �ŧi�ɮ׿�X����
    ofile.open("out5.dat");	// �ϥή榡�ƼҦ��}���ɮ�
    ofile << digit;	// �ϥδ��J�B��l<<�g�J��ƨ��ɮ�
    ofile.close();
    ofile.open("out6.dat", ios::binary);// �ϥΤG�i��Ҧ��}���ɮ�
    ofile.write( (char*) &digit, sizeof( digit ) );	// �ϥ�write()��Ƽg�J��ƨ��ɮ�
    ofile.close();
  
    return 0;
}
