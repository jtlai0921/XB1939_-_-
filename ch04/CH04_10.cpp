#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Select;       // �w�q����ܼ� Select�A�x�s�\�I����
    cout << "�ثe���Ѫ���ܦp�U"<<endl;  
    cout << " 0.�d�ߨ�L�������I�߸��"<<endl;
    cout << " 1.�N�ƺ~��" <<endl;
    cout << " 2.�@���ý޹�" <<endl;
    cout << " 3.�������J��"<<endl;
    cout<<"���I��z�n������:"; 
    cin >> Select;            // ��J�\�I������
    cout <<endl;
    if ( Select == 0 )     // ��ܲ�0��?
        cout << "�еy��... ���b�d�ߨ�L�������I�߸��";
    else if ( Select == 1 )      // �O�_��ܲ�1��?
        cout << "�o�Ӷ��ت����:"<< 45;
    else if ( Select == 2 )	 // �O�_��ܲ�2��?
        cout << "�o�Ӷ��ت����:"<< 55;
    else if ( Select == 3 )	  // �O�_��ܲ�3��?
        cout << "�o�Ӷ��ت����:"<< 65;
    else                // ��J���~���B�z
        cout << "�z�i���J���~.... �Э��s��J";
    cout << endl;           // ����*/
    
    return 0;
}

