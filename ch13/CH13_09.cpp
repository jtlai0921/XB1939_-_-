#include <iostream>  // �B�z��X�J�����Y��
#include <cstdlib> 
using namespace std;

int main()
{
    char	character_value = 'x';
    char	English_string[] = "Happy Birthday";
    char	Chinese_string[] = "�ǲߵ{���]�p�O�@�󦳽쪺��";
    cout.put(character_value);	// ��@�r������X
    cout << endl;
    cout << endl;
    cout.write( English_string, 14 );	// ��X14�Ӧr���^��r��
    cout << endl;
    cout << endl;
    cout.write( Chinese_string, 12 );	// ��X12�Ӧ줸�ժ�����r��
    cout << endl << endl;    // �]���@�Ӥ���r��2�Ӧ줸�աA�ҥH�u��X6�Ӧr
    
    return 0;
}
