#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    struct member
    {
        char name[20];
        int age;
    };
 
    struct member m1,m2;
    struct member *ptr;    //�ŧi���c���� 
     
    cout<<"�Ĥ@��|���m�W�G";
    cin>>m1.name;
    cout<<"�|���~�֡G";
    cin>>m1.age;
     
    cout<<"�ĤG��|���m�W�G";
    cin>>m2.name;
    cout<<"�|���~�֡G";
    cin>>m2.age;
    cout<<"---------------------------------"<<endl;
    ptr = &m1; // ��l�ƫ��� 
    cout<<"���Ы��V�Ĥ@��|���m�W�G";
    cout<<ptr->name;//�Ĥ@�ص��c���Цs���覡 
    cout<<"\t�|���~�֡G";
    cout<<ptr->age;

    ptr = &m2; // ��l�ƫ��� 
    cout<<endl<<"���Ы��V�ĤG��|���m�W�G";
    cout<<(*ptr).name;//�ĤG�ص��c���Цs���覡 
    cout<<"\t�|���~�֡G";
    cout<<(*ptr).age;
    cout<<endl;

    return 0;
}
