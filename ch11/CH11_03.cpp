#include<iostream>
#include<cstdlib>
using namespace std;
	
// �ŧi�@�����O�Gstudent
class student
{
	private:
		int lang;
		int math;
	public:
		student();  // �غc�l
		void get_score();
		void show_score();
};
// ��@�غc�l��Ƶ{���X
student::student()
{
	lang=0;  // ���w�������lang��Ȭ�0
	math=0;  // ���w�������math��Ȭ�0
}
// �������get_score()�G�ΨӨ��o���μƾǦ��Z
void student::get_score()
{
	cout << "��J��妨�Z:";
	cin >> lang;
	cout << "��J�ƾǦ��Z:";
	cin >> math;
}
// �������show_score()�G�N���Z��ܦb�ù��W
void student::show_score()
{
	cout << "��妨�Z:" << lang << endl;
	cout << "�ƾǦ��Z:" << math << endl;
}
	
// ���Ost1�ŧi�A��student���O�Hpublic���O���~��
class st1:public student
{
    private:
		int age; // �ǥͦ~��
	public:
		void show_data();
		void set_age();
};
// �������show_data()�G�ΨӦb�ù��W��ܸ��
void st1::show_data()
{
	cout << "===================================" << endl;
	show_score();
	cout << "�ǥͦ~��:" << age << endl;
}
// �����禡set_age()�G��J�~�֭�
void st1::set_age()
{
	cout << "��J�ǥͦ~��:";
	cin >> age;
}
// �D�禡
int main()
{
	// �ŧi����s1
	st1 s1;
	// �I�s���󪺦������ 
	s1.get_score();
	s1.set_age();
	s1.show_data();
		
	return 0;
}
