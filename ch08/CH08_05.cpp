#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct club
    {
        char name[3][10];
        char title[10];
        int age;
    }; //�w�q���c ,���c�����}�C��Ʀ���

    struct club member_name[3]=
        {{"�i���","���ө�","�����","�Ѫ궤",25},
         {"���w��","���A��","�j����","���ඤ",32},
         {"�i�ꩾ","���v�j","���ص�","���Z��",46}};
        //�w�q�ó]�w���c�}�C��l�� 
    int i;
  
    for(i=0;i<3;i++)
    cout<<member_name[i].title<<'\t';
    cout<<endl<<"--------------------------------"<<endl;
   
    for(i=0;i<3;i++)
    {
        cout<<member_name[i].name[0]<<'\t'<<member_name[i].name[1]<<'\t'<<member_name[i].name[2];
        cout<<endl;
    }
    //��X�C�@��club���}�C�����m�W�r�� 
    cout<<"--------------------------------"<<endl;
   
    return 0;
}

