#include <iostream>  // �B�z��X�J�����Y��
#include <iomanip>  // ���a�l�����Y��
#include <cstdlib>
using namespace std;

int main()
{
    int i, n;
    cout << "�]�w��X�T�����̤p�e�׬� 3" << endl;
    for( i = 1, n = 0; i < 6; i++)
    {
        n *= 10;
        n += i;
        cout << setw(3) << n << endl;// �ϥ�setw()���a�l
    }
    cout << endl;
    cout << "�]�w�ťն�R�r����'@'" << endl;
    for( i = 1, n = 0; i < 6; i++)
    {
        n *= 10;
        n += i;
        cout << setw(3) << setfill('@') << n << endl;	 // �ϥ�setfill()���a�l
    }
    cout << endl;
    cout << "�]�w�B�I�ƪ���Ƭ�3�P5" << endl;
    cout << setprecision( 3 ) << 12.3456789 << endl	// �ϥ�setprecision()���a�l
    << setprecision( 5 ) << 123.456789 << endl;
    cout << endl;
    cout << "�ϥ�setiosflags()���a�l�Pios�X��\"scientific\"�]�w�B�I�ƥH��ǰO���榡���"
    << endl;// �ϥ�setiosflags()���a�l
    cout << setiosflags( ios::scientific ) << setprecision( 3 ) << 12.3456789 << endl << endl;
    cout << "�ϥ�resetiosflags()���a�l�Pios�X��\"scientific\"�M����ǰO���榡���"
    << endl;// �ϥ�resetiosflags()���a�l
    cout << resetiosflags( ios::scientific ) << setprecision(3) << 12.3456789 << endl;
    cout << endl;
   
    return 0;
}
