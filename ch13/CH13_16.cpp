#include <fstream> // �B�z�ɮ׿�X�J�����Y��
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX_STR = 80;	// �]�w�r����׳̪���80�Ӧr��

int main()
{
    int i;
    double d;
    char ch;
    char str_e[MAX_STR];
    char str_c[MAX_STR];
    
    ifstream ifile("out.txt");	// �إ��ɮ׿�J����ö}���ɮ�out.txt
    ifile >> i >> d >> ch >> str_e >> str_c;		// �̧�Ū���ɮפ������
    cout << i << endl // �NŪ������ƿ�X�ܿù��W
    << d << endl
    << ch << endl
    << str_e << endl
    << str_c << endl
    << endl;
    ifile.close();// �����ɮ�
    
    return 0;
}
