#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int score;
        int ID;
    } s1,s2; // �ŧistudent���c��s1,s2�ܼ�  
    float total,average;
     
    strcpy(s1.name, "Justin");// �]�ws1.name��l��  
    s1.score = 90;
    s1.ID=10001;
    cout<<"�Ĥ@�Ӿǥͪ��m�W="<<s1.name<<"���Z="<<s1.score<<"�Ǹ�="<<s1.ID<<endl;
    cout<<"�п�J�ĤG�Ӿǥͪ��m�W:";
    cin>>s2.name;// ��Js2.name��l�� 
    cout<<"�п�J�ĤG�Ӿǥͪ����Z�P�Ǹ�:";
    cin>>s2.score>>s2.ID;// ��Js2����L��Ʀ���  
    cout<<"�ĤG�Ӿǥͪ��m�W="<<s2.name<<"���Z="<<s2.score<<"�Ǹ�="<<s2.ID<<endl;
    
    total=s1.score+s2.score;// �p���`�� 
    average=total/2;  // �p�⥭�� 
    cout<<"================================================="<<endl;
    cout<<"���ǥ��`��:"<<total<<"���ǥͥ���:"<<average<<endl;
    
    return 0;
}
