#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    char *ptr= "cherry";//�H���Ыŧi�r��覡 
    char name[] = { 'c', 'h', 'e', 'r', 'r','y','\0'};
    //�H�r���}�C�ŧi�r��覡
     
    cout<<"ptr="<<ptr<<" �Ҧ��Ŷ��j�p:"<<sizeof(ptr)<<"�줸  name="
    <<name<<"�Ҧ��Ŷ��j�p:"<<sizeof(name)<<"�줸"<<endl;
     
    for(i=0;i<6;i++)
    { 
        cout<<"ptr+"<<i<<"="<<ptr+i<<endl;
        cout<<"name+"<<i<<"="<<name+i<<endl;
        cout<<"-------------------------------------"<<endl;
    }
    //���O�H�����ܼƤΫ��б`�ƿ�X�r��  
     
    for(i=0;i<6;i++)
    {
        cout<<ptr<<endl;
        ptr++; // �Nptr�[�@ 
    }
    
    return 0;
}
