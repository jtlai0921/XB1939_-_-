#include <iostream>  
#include <cstdlib> 
#include <iomanip>  // ���a�l�����Y��
using namespace std;

int main()
{
    int i;
    int integer_value=679;
    double double_value=327.36462575;
    cout << "�����X�e�פ��P�ɡA�P�˼Ʀr����X�~�[" << endl;
    for( i = 1; i < 10; i++)
    {
        cout << setw(i) << integer_value << endl;	// �ϥ�setw()���a�l
    }
    cout << endl;
    // resetiosflags()��setprecision()���a�l
    cout<<"resetiosflags()��setprecision()���a�l�ާ@���";
    cout << endl;
    cout << resetiosflags( ios::scientific ) << setprecision(7) << double_value << endl;
    cout << endl;

    return 0;
}
