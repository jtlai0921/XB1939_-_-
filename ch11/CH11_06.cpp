#include<iostream>
#include<cstdlib>
using namespace std;
	
// �ŧi���Ostudent
class student
{
	private:
		int math;
	public:
		// �������set_math�G���w�������math����
		void set_math(int v1)
		{
			math=v1;
		}
		// �������show_data�G�N�������math��ܦb�ù��W
		void show_data()
		{
			cout << "math=" << math << endl;
		};
};
	// �Hpublic���O�����Ostudent���~��
class s1:public student
{
	public:
		// �мg��¦���Oshow_data�������
		void show_data()
		{
			cout << "�мg��¦���O�������" << endl;
		}
};
	// �D���
int main()
{
    // �ŧi����st1
    s1 st1;
    // �I�s���Os1���������show_data�A�Ӥ��O���Ostudent���������show_data
    st1.show_data();
		
    return 0;
}
