#include<iostream>
#include<cstdlib>
using namespace std;
	
int main()
{
    int num; // �ŧi�ܼ�num
    try 
    {
        cout << "��J�ܼ�num���ȡG";  // ��J�ܼ�num����
        cin>>num;
        // ���p�ܼ�num���Ȥp��10�ɡA�h�|��X�@�ӫ��O����ƪ��ҥ~
        if (num < 10) 
        {
            throw 1;  // ��X��ƫ��O���ҥ~
        }
    }
    catch(int) // ������ƫ��O���ҥ~
    {
        cout << "����catch(int)�϶�" << endl;
    }
    // ��S����X�ҥ~�Τw����catch�϶�����A���|�N�����v�ಾ�ܦ�
    cout << "��S����X�ҥ~�ɡA�|�������榹��" << endl;
		
    return 0;
}
