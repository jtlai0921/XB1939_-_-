#include <iostream>
#include <cstdlib>
using namespace std;
	
#include "CH12_05.h"  // �N�ڭ̩ҩw�q�������˪�include�i��
	
int main()
{
    Stack< int > intStack;  // �إ�int���O������intStack
    int i = 1; // �]�w�Ĥ@�Ӥ�����
    cout << "\n----�N������m�b���|��------\n";
	
    while ( intStack.push( i ) )  // �Y���\�a�N������m�b���|���A�Ǧ^true
    { 
	    cout << i << ' '; // ��ܩ�m�b���|����������
	    ++i; // �N�����ȥ[1
    }
	
    cout << "\nSorry!! ���|�w��"<< "\n���|���@��:"<<i-1<<"��\n";
    cout << "\n--�{�b�}�l�N���|���������M��--\n";
	
    while ( intStack.pop( i ) )  // �Y���\�a�۰��|�����X�����A�Ǧ^true
        cout << i << ' ';  // ��ܳQ���X��������
	
    cout << "\n--���|�{�w�M��--\n";
	
	
    Stack< double > doubleStack( 3 );  //  �إ�double���O������doubleStack
    int i1 = 0; // �Ψӭp�⤸���Ӽ�
    double f = 2.3; // �]�w�Ĥ@�Ӥ�����
    cout << "\n\n\n-- �N������m�b���|�� --\n";
	
    while ( doubleStack.push( f ) )  // �Y���\�a�N������m�b���|���A�Ǧ^true
    { 
        cout << f << ' ';   // ��ܩ�m���|����������
        f += 1.2;        // �N�����ȥ[1.2
        ++i1;
    }
	
    cout << "\nSorry!! ���|�w��"<< "\n���|���@��:"<<i1<<"��\n"; 
    cout << "\n--�{�b�}�l�N���|���������M��--\n";
	
    while ( doubleStack.pop( f ) )  // �Y���\�a�۰��|�����X�����A�Ǧ^true
        cout << f << ' '; // ��ܳQ���X��������
	
    cout << "\n--���|�{�w�M��--\n";
	   
    return 0;	 
}
