#include <iostream>
#include <cstdlib>
using namespace std;

struct student1
{
    char name[10];//��10bytes �Ŷ� 
    int score; // �� 4bytes �Ŷ� 
}; //�ŧi���c���A 
 
union student
{
    char name[10];// ��10bytes �Ŷ� 
    int score;// �� 4bytes �Ŷ� 
}; // �ŧi�p�X���A  

int main()
{
    struct student1 s1;// s1�����c�ܼ�  
    union student s; // s���p�X�ܼ�  
     
    cout<<"���c�ܼ�s1="<<sizeof(s1)<<"�줸�� �p�X�ܼ�s="<<sizeof(s)<<"�줸��"<<endl;
     
    return 0;
}
