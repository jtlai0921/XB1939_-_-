#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int select_a; //�ŧi����ܼ� 
    float a, ans_a;//�ŧi�B�I���ܼ� 
    cout<<"�п�J�ƭȡG";
    cin>>a;//��J�ƭ�  
    cout<<"1.���� 2.�ߤ�"<<endl;
    cin>>select_a;        /* ��J1��2 */
    if(select_a==1)	
    {
        ans_a=a*a;// �p��a����ȫ��w���ܼ�ans_a 
        cout<<"����Ȭ��G"<<ans_a<<endl; // ��ܥ����
    }
    if(select_a==2)	//�P�_select_a �O�_����2
    {
        ans_a=a*a*a;//�p��a�ߤ�ȫ��w���ܼ�ans_a	
        cout<<"�ߤ�Ȭ��G"<<ans_a<<endl; //��ܥߤ�� 
    }
     
    return 0;
}

