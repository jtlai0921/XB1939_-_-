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
		}
	};
	// �Hpublic���O�����Ostudent���~��
class s1:public student
{
	public:
		double math;
		void set_math(double a1)
		{
			math=a1;
		}
		void show_math()
		{
			cout << "math=" << math << endl;
		}
};
	// �D���
int main()
{
    // �ŧi����st1
    s1 st1;
    // ���w�l�����O�����������math���Ȭ�12.35
    st1.set_math(12.35);
    // �I�s��¦���O���������show_data�A�N��¦���O���������math��ܦb�ù��W
    // �]����¦���O���������math�èS�����w��ȡA�]���|��ܵL�k�w������
    st1.show_data();
    // �I�s�l�����O���������show_data�A�N�l�����O���������math��ܦb�ù��W
    st1.show_math();
		
    return 0;
}
