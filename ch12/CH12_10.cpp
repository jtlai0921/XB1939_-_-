#include <iostream>
#include <cstdlib>
using namespace std;

#include <cstring>
//�ŧi�@�Ө�ƨϥ�If�P�_���Ӱ������~
int If_Detect(int);
//�ŧi���OBirth
class Birth
{
    int Birth_Year;
    int Nor_Year;
    public:
        //�ŧi�@�����O�H�ѿ��~�B�z����
		class Error_Detect
		{
			char Error_Msg[80];
		    public:
				//�B�z���~�T��
				Error_Detect(char * x)
				{
					strcpy(Error_Msg, x);
                }
				char * Get_Error_Msg()
				{
					return Error_Msg;
				}
		};
		//�L�Ѽƫغc�l
		Birth(){};	
		//�ŧiCheck()��ƨ��ˬd��J���X�ͦ~��
		int Check()
		{
			int a = Birth_Year;
			int b = 2008 - a;
			if (a > 2008)
	          	throw Error_Detect("��J���~�����~��!!�z�|���X�ͩO!!");         	
			if (b > 150)
	         	throw Error_Detect("��J���~�����~��!!�z�~�֤j��150���O!!");
			    Nor_Year = Birth_Year - 1911;
				return Nor_Year;
		}
		//�ŧiGet_Year()��ƨӿ�J�X�ͦ~��
		void Get_Year()
		{
			cout <<"�п�J�X�ͪ��褸�~���G";
			cin >> Birth_Year;
		}
};

int main()
{
	//try�B�@�϶�
	try
	{
		//�إ����OBirth������Object
		Birth Object;
		Object.Get_Year();
		//�ˬd�~��
		Object.Check();
		//���T�h��X
		cout <<endl <<"�z���X�ͦ~�����G����";
		cout <<Object.Check() <<"�~" <<endl;
	}
	//�B�z���~�T��,
	//catch�����ѼƬ��ŧiBirth���O��
	//��Error_Detect���O������Object2
	catch (Birth::Error_Detect Object2)
	{
		//�Q�Ϊ���Object2�өI�sGet_Error_Msg����ܿ��~�T��
		cout <<endl <<Object2.Get_Error_Msg();
	}
	
    return 0;
}

