#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    struct member
    {
        char name[20];
        int age;
    }m1[5];
 
    cout<<"���c�}�C�Ҧ��j�p"<<sizeof(m1)<<"�줸"<<endl;
    cout<<"���c�}�C��@�����Ҧ��j�p"<<sizeof(m1[1])<<"�줸"<<endl;
    cout<<"����name�j�p"<<sizeof(m1[1].name)<<"�줸"<<endl;
    cout<<"����age�j�p"<<sizeof(m1[1].age)<<"�줸"<<endl;
 
    return 0;
}
