#include <fstream>	// �B�z�ɮ׿�X�J�����Y��
#include <cstdlib>
#include <iostream>
using namespace std;

const int MAX_STR = 80;	// �]�w�r����׳̪���80�Ӧr��
int main()
{
    char str[MAX_STR];
    char ch;
    ifstream ifile;	// �ŧi�ɮ׿�J����
  
    cout << "�ϥΨ��getline�@��Ū���@��r�� :" << endl;
    ifile.open("out2.txt");	// �}���ɮ�
    while( ifile.good() )	// �P�_�ɮת���ƬO�_�o��Ū�����~
    {
        ifile.getline(str, sizeof(str));		   
        // �ϥ�getline()��Ƥ@��Ū���@����
        cout << str << endl;
    }
    ifile.close();
    cout << endl;
    cout << "�ϥΨ��rdbufŪ���Ȧs�Ϫ����e : " << endl;
    ifile.open("out.txt");
    cout << ifile.rdbuf() << endl;			
	// �ϥ�rdbuf()�N�Ȧs�Ϫ����
    ifile.close();
    cout << endl;
   
    return 0;
 }
