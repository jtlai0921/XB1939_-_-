#include <iostream>
#include <cstdlib>
using namespace std;

struct student
{
    char name[10];
    float Eng;
    float Chi;
    float Math;
}; //�w�q���c ,�o��student���c������ʪ����c���A

void calculate(struct student);//���c�ܼƶǭȩI�s��ƭ쫬�ŧi 

int main()
{
   
    struct student stud={"�L����",80,60,97};
    // �w�q�ó]�w���c��l��      
    cout<<stud.name<<"����l���Z �^��:"<<stud.Eng
    <<"���:"<<stud.Chi<<"�ƾ�:"<<stud.Math<<endl;  
    calculate(stud);// �I�s��� 
    cout<<stud.name<<"���̫ᦨ�Z �^��:"<<stud.Eng
    <<"���:"<<stud.Chi<<"�ƾ�:"<<stud.Math<<endl;
    cout<<"------------------------------------------------"<<endl;
   
    return 0;
}

void calculate(struct student s1)// �w�qcalculate()���  
{
    s1.Eng=s1.Eng*1;
    s1.Chi=s1.Chi*1.3;
    s1.Math=s1.Math*1; 
    // ��X�����m�W�r��ΦU�즨�Z 
    cout<<"------------------------------------------------"<<endl;
    cout<<s1.name<<"���[�����Z �^��:"<<s1.Eng
    <<"���:"<<s1.Chi<<"�ƾ�:"<<s1.Math<<endl;    
}
