#include <fstream>	// �B�z�ɮ׿�X�J�����Y��
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int  i = 66;
    double  d = 3.14;
    char	ch = 'a';
    char	str_e[] = "peace";
    char	str_c[] = "�z�n";
  
    ofstream ofile("out.txt");// �إ��ɮ׿�X����ö}���ɮ�out.txt
  
    ofile << i // �N��Ƽg�J�ɮפ�
    << ' ' // �Ʀr�����J�ťզr���H�@���j
    << d
    << ch
    << ' '	// �r�������J�ťզr���H�@���j
    << str_e
    << ' '	// �r�������J�ťզr���H�@���j
    << str_c;
  
    ofile.close(); //�I�s���close()�H�����ɮ�	
  
  return 0;
}
