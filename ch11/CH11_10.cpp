#include<iostream>
#include<cstdlib>
using namespace std;
	
// �ŧi���Obuilding
class building
{
	public :
		virtual void open(){}; // �ŧi�������
};
// �ŧi�l�����Ofirs_building
class first_building : public building
{
	public:
		virtual void open()
		{
			cout << "�}�ҲĤ@�ɤj�Ӫ���" << endl;
		}
};
	// �ŧi�l�����Osecond_building
class second_building : public first_building
{
	public:
		virtual void open()
		{
			cout << "�}�ҲĤG�ɤj�Ӫ���" << endl;
		}
};
// �D���
int main()
{
    // �ŧifirst_building���O���O�������ܼ�b1�A�æP�ɫإߪ���
    first_building *b1 = new first_building();
    // �ŧisecond_building���O���O�������ܼ�b2�A�æP�ɫإߪ���
    second_building *b2 = new second_building();
    // �I�sfirst_building���O�������open
    b1->open();
    // �I�ssecond_building���O�������open
    b2->open();
		
    return 0;
}
