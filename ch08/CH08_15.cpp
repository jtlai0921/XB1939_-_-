#include <iostream>
#include <cstdlib>
using namespace std;

struct member	// �w�q���쪺���cmember 
{
    char name[10];
    int salary;
    char position[10];
};

void max(struct member &,struct member &);   // max()���쫬�ŧi 

int main()
{
    struct member m1,m2;//�ŧi���c�ܼ�m1,m2 
    cout<<"�п�J�Ĥ@����u���m�W �~�� ¾��"<<endl; 
    cin>>m1.name>>m1.salary>>m1.position;
    cout<<"�п�J�ĤG����u���m�W �~�� ¾��"<<endl; 
    cin>>m2.name>>m2.salary>>m2.position;
    max(m1,m2);		//�I�smax()��� 
    cout<<"----------------------------------------"<<endl;
    cout<<"�D�ެO="<<m1.name<<"�D�ު��~��="<<m1.salary<<"�D�ު�¾��="<<m1.position<<endl;
    cout<<"���u�O="<<m2.name<<"���u���~��="<<m2.salary<<"���u��¾��="<<m2.position<<endl;
    
    return 0;
}

void max(struct member &p1,struct member &p2)
{
    struct member tmp;  
    if(p1.salary<p2.salary)
    { 
        tmp=p1;
        p1=p2;
        p2=tmp;// ��Xp1��p2���@���~���� 
    }
}
