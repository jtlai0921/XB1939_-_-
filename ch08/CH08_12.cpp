#include<iostream>
#include<cstdlib>
using namespace std;
// �w�q�@�ӦW��Student���c
struct Student {     
    int lang;  
    int math;   
};  
// �w�qshow_data�禡�쫬
void show_data(struct Student);
// �D�禡
int  main()
{
    // �ŧi���c�ܼ�st1�A�ë��w���
    Student st1={90,93};
    //�I�s�禡show_data�A�ñN���c�ܼƷ�@�ѼƨӶǻ�
    show_data(st1);

    return 0;
}
// show_data�禡�G�N���c����������ܦb�ù��W
void show_data(struct Student f1)
{
    cout << "�N���c�ܼƷ��ѼƨӶǻ����禡�d��" << endl;
    cout << "��妨�Z:" << f1.lang << endl;
    cout << "�ƾǦ��Z:" << f1.math << endl;
}
