#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int math;
        int english;
    }; // �w�q���c 

    struct student class1[3]=
        {{"Helln",87,79},{"Wilson",77,100},{"Kevin",78,90}};
    //�w�q�ó]�w���c�}�C��l��  
    int i;
    float math_Ave=0,english_Ave=0;
   
    for(i=0;i<3;i++)
    {
        math_Ave=math_Ave+class1[i].math;// �p��ƾ��`��  
        english_Ave=english_Ave+class1[i].english;// �p��^���`��  
        cout<<"�m�W:"<<class1[i].name<<"�ƾǦ��Z:"<<class1[i].math<<"�^�妨�n:"<<class1[i].english<<endl; 
    }
    cout<<"--------------------------------------------"<<endl;
    cout<<"�ƾǥ�������:%"<<math_Ave/3<<"�^�奭������:"<<english_Ave/3<<endl;
   
    return 0;
}

