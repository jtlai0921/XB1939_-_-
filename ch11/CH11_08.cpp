#include<iostream>
#include<cstdlib>
using namespace std;
	
// �ŧi���Ostclass
class stclass
{
	private:
		int item;
	public:
		void set_item(int v1)
		{
            this->item=v1;
		}
		int get_item()
		{
			return item;
      	}
};
	// �ŧi���Oscore
class score
{
	private:
		int math;
		int lang;
	public:
		void set_math(int math)
		{
			this->math=math;
		}
		int get_math()
		{
			return math;
		}
		void set_lang(int lang)
		{
			this->lang=lang;
			
		}
		int get_lang()
		{
			return lang;
		}
};
	// �ŧi���Ostudent�A�ä��O�Hpublic���O�~�����Ostclass��score
class student : public stclass,public score
{
	private:
		int sum;
	public:
		student() // �غc�l
		{
			int sum=0;
		}
		void show_no()
		{
			// �s�����Ostclass���������item
			cout << "�Z�Ŭ�:��" << get_item() << "�Z" << endl;
		}
		void show_score()
		{
			// �s�����Oscore���������lang��math
			cout << "��妨�Z��:" << get_lang() << endl;
			cout << "�ƾǦ��Z��:" << get_math() << endl;
		}
		void add1()
		{
			// �N�������sum���ȫ��w�����O�������lang��math���[�`�᪺��
			sum=get_lang()+get_math();
			cout << "�`���Z��:" << sum << endl;
		}
};
	// �D���
int main()
{
    // �ŧi����st1;
	student st1;
	int s1,s2;
	// �I�s���Ostclass���������set_item
	st1.set_item(2);
	cout << "�п�J��妨�Z:";
	cin >> s1;
	// �I�s���Oscore���������set_lang
	st1.set_lang(s1);
	cout << "�п�J�ƾǦ��Z:";
	cin >> s2;
	// �I�s���Oscore���������set_math
	st1.set_math(s2);
	cout << "===========================================" << endl;
	// �I�s���Ostudent���������show_score
	st1.show_no();
	st1.show_score();
	// �I�s���Ostudent���������add1
	st1.add1();
		
	return 0;
}
