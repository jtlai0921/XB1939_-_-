#include <iostream>
#include <cstdlib>

using namespace std;


int x=10;//�ŧi x �������ܼ� 

int main()
{
    void setX1();  //�]�w�����ܼƪ��Ȭ� 20 
    void setX2();  //�]�w�����ܼƪ��Ȭ� 30 
    cout<<"�bmain()��Ƥ���x = "<<x<<endl;
    setX1();
    cout<<"�bmain()��Ƥ���x = "<<x<<endl;
    setX2();
    cout<<"�bmain()��Ƥ���x = "<<x<<endl;
    
    return 0;
}
void setX1()
{
    x = 20;
    cout<<"�bsetX1()��Ƥ���x = "<<x<<endl;
}

void setX2()
{
    int x = 30;//��Ƥ����ŧi�P�����ܼƦP�W��x 
    cout<<"�bsetX2()��Ƥ����ϰ��ܼ�x = "<<x<<endl;
    cout<<"�bsetX2()��Ƥ��������ܼ�x = "<<::x<<endl;//�s����Ƥ��P�ϰ��ܼƦP�W��x 
}
