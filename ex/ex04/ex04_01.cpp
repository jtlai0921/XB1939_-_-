#include <iostream> 
#include <cstdlib>                             
using namespace std;

int main()
{
int Add_Num, Total;                          // �w�q����ܼ� Add_Num�BTotal
cout << "��J��ƭ�(��J 0 �����{��):";
cin >> Add_Num;                          // ����ܼ� Add_Num �x�s��J��
Total=0;                                 // ����ܼ� Total �k�s�C
//for �ԭz����֥[�B��P�T����� 
for ( int Counter=1; Counter <= Add_Num ; Counter++)
{
cout << Counter<<"^3";
if ( Counter < Add_Num ) cout << " + ";   // ����[��(+)����X�Ӽ�
Total+=Counter*Counter*Counter;
}
if ( Total ) cout << " = " << Total;     // �Y�O����ܼ� Total ���� 0�A�h��ܿ�X�C
cout << endl;                            // ����
cout << "�{����������...";
cout << endl;         


return 0;
                      
}
