#include <iostream>
#include <cstdlib> 
using namespace std;

struct student
   {
    char name[10];
    int score;
    }; // �w�q���c ,���c�����}�C��Ʀ��� 

void min(struct student s[]); // �H�ǧ}�I�s����ƭ쫬�ŧi 

int main()
{
     
     int i;
     
     struct student s[5]={
     {"�i���",77},{"�i�ؤ�",88},{"���Ӽw",69},{"����^",58},
     {"�J���P",98}}; //�w�q�ó]�w���c�}�C��l��  
     
     min(s);  //�I�s�öǻ��}�C���Ƥ�  
     
     
     return 0;
}
 
 void min(struct student s1[])
 {   
     int i,min_score;
     char min_name[10];
     
     min_score=s1[0].score;//�]�w�Ĥ@����min 
     for(i=0;i<5;i++)
      if(s1[i].score<min_score)
      {
       min_score=s1[i].score;
       strcpy(min_name,s1[i].name);
       }
      cout<<"�̧C���ƬO"<<min_name<<"��"<<min_score<<"��"<<endl;         
      cout<<"-------------------------------"<<endl;   
}
