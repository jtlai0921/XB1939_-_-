#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num=0;	 //�ŧi�r���ܼ�
    cout<<"�п�J�@�ӼƦr(1~100):";
    cin>>num;     //��J�ƭ�
    if(num%2)	   //�p�G��ư��H2���l�Ƶ���0
        cout<<"�z��J���Ƭ��_�ơC"<<endl;     //�h��ܩ_��
    else                 //�_�h
        cout<<"�z��J���Ƭ����ơC"<<endl;    //�h��X����
    
    return 0;
}

