#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct name
    {
        char firstname[10];
        char lastname[10];
    }; //�w�q���cname 
   
   struct member   	//�w�q�_�����c member 
   {
        struct name member_name;
            char ID[12];
            int salary;
   } m1={ {"Helen","Wang"},"E121654321",35000};
    // �]�w���c�ܼ�m1����� 
   
   cout<<"------------------------------------------"<<endl;
   cout<<"�|���m�W:"<<m1.member_name.lastname<<m1.member_name.firstname<<endl;  
   cout<<"�����Ҹ��X:"<<m1.ID<<endl;
   cout<<"�|���~��:"<<m1.salary<<endl;
   cout<<"------------------------------------------"<<endl;
   
   return 0;
}

