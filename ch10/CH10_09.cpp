#include<iostream>
#include<cstdlib>
using namespace std;
	
// �ŧi���OScore
class Score
{
	public:
		int var1;  // �w�q�ܼ�var1
		Score()
		{
			var1=9;
		}
		Score(int a)
		{
			var1=a;
		}
		Score operator++();  // �����w�q�����O�������禡
		Score operator--();	 // �����w�q�����O�������禡
};
	
// �ŧi++�B��l�h��
Score Score::operator++()
{
	return Score(++var1);
}
	
// �ŧi--�B��l�h��
Score Score::operator--()
{
	return Score(--var1);
}
	
int main()
{
	Score st1(3);   // �w�qScore������st1,���Ѽ�
	Score st2;      // �w�qScore������st2,�L�Ѽ�
	cout << "st1=" << st1.var1  << endl;
	cout << "st2=" << st2.var1  << endl;
    ++st1;          
	++st2;
	// ���O��ܵ��G
	cout << "===== ����e�m�h��++�B��l =====" << endl;
	cout << "st1=" << st1.var1  << endl;
	cout << "st2=" << st2.var1  << endl;
	--st1;
	--st2;
	cout << "===== ����e�m�h��--�B��l =====" << endl;
	cout << "st1=" << st1.var1  << endl;
	cout << "st2=" << st2.var1  << endl;
		
	return 0;
}
