#include<iostream>
#include<cstdlib>
using namespace std;
// �w�q�@�ӦW��Student���c
struct Student 
{     
  int lang;  
  int math;   
};  
// �w�qset_data��ƭ쫬
struct Student set_data();
// �D�禡
int main()
{
    // �ŧi���c�ܼ�st2
    Student st2;
    //�I�s���set_data�A�N�ϥε��c�ܼ�st2�ӱ����禡�Ҧ^�����c
    st2=set_data();
    cout << "================================" << endl;
    cout << "��妨�Z:" << st2.lang << endl;
    cout << "�ƾǦ��Z:" << st2.math << endl;
	    
    return 0;
}
	// set_data��ơG��J���c�������ȡA�ñN�ҿ�J���ȶǦ^�I�s���ԭz�y
struct Student set_data()
{
	    // �ŧi���c�ܼ�st1
	    Student st1;
	    cout << "�п�J��妨�Z:";
	    cin >> st1.lang;
	    cout << "�п�J�ƾǦ��Z:";
	    cin >> st1.math;
	    // �N���c�ܼ�st1�Ǧ^
	    return st1;
}
