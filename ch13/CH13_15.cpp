#include <iostream>
#include <cstdlib>
#include <fstream>	// �B�z�ɮ׿�X�J�����Y��
#include <cstring> // �ϥ�strlen��� 
using namespace std;

int main()
{
    char str_1[] = "�n�s�[�B��";
    char str_2[] = "��U�M�D��";
    ofstream ofile("out3.txt");	   // �ŧi�ɮ׿�X����
 
    for( int i = 0; i < (int)strlen( str_1 ); i++)
    {
        ofile.put( str_1[ i ] );				
        // �ϥΨ��put()�g�J�r�����ɮ�
    }
    ofile << endl; // ���J����r�����ɮפ�
    ofile.write( str_2, strlen( str_2) ); // �ϥΨ��write()�g�J�r����ɮ�
    ofile.close(); // �����ɮ�
   
    return 0;
 }
