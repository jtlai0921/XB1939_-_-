#include<iostream>
#include<cstdlib>
using namespace std;
// �w�q�@�ӦW��Student���c
struct Student {     
    int lang;  
    int math;   
};  
// �w�qshow_data��ƭ쫬 
void show_data(int l1,int m1);
// �D�禡
int main()
{
    // �ŧi���c�ܼ�st1�A�ë��w���
    Student st1={100,90};
    //�I�s�禡show_data�A�ñN���c������@�ѼƨӶǻ�
    show_data(st1.lang,st1.math);
	    
    return 0;
}
// show_data�禡�G�N���c����������ܦb�ù��W
void show_data(int l1,int m1)
{
    cout << "��妨�Z:" << l1 << endl;
    cout << "�ƾǦ��Z:" << m1 << endl;
}
