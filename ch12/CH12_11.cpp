#include<iostream>
#include<cstdlib>
using namespace std;
	
int main()
{
    int num;  // �ŧi�@�Ӿ���ܼ�num
    try  // �̥~�h��try...catch �϶�
    {
        try  //�̤��h��try...catch�϶�
        {
            cout<<"��J�@�ӭ�:";
            cin>>num;
            // �P�_�ܼƭ�num�O�_�j��0�B�p��10
            if ((num > 0) && (num < 10))
            {
                throw 1; // ���ܼ�num�Ȥj��0�B�p��10�ɡA�h��X�@�ӫ��O����ƪ��ҥ~
            }
				// �P�_�ܼƭ�num�O�_�j��10�B�p��20
			if ((num > 10) && (num < 20))
			{
			    throw 2.5; // ���ܼ�num�Ȥj��10�B�p��20�ɡA�h��X�@�ӫ��O���B�I�ƪ��ҥ~
			}
        }
        catch(int ex1)  // �������O����ƪ��ҥ~
        {
            cout<<"����̤��h��catch�϶�\n";
        }
    }
    catch(double ex2)  // �������O���B�I�ƪ��ҥ~
    {
        cout<<"����̥~�h��catch�϶�\n";
    }
    cout<<"�{���N�n��������"<<endl;
		
    return 0;
}
