#include <iostream>

using namespace std;
int encode(int);    // �[�K�禡 
int decode(int);    // �ѱK�禡 
	
int main()
{
    int pwd;
    cout<<"�п�J�K�X�G";
    cin>>pwd;
    pwd = encode(pwd);
    cout<<"�[�K��G"<<pwd<<endl;
    pwd = decode(pwd);
    cout<<"�ѱK��G"<<pwd<<endl;
	    
    return 0;
}
// ��  �ơG���[�K���K�X 
// �Ǧ^�ȡG�[�K�᪺�K�X 
int encode(int pwd)
{
    int i;
    union{
        int num;
        char c[sizeof(int)];
    } u1;
    u1.num = pwd;
    for(i = 0; i< sizeof(int); i++)
        u1.c[i] += 32;
    return u1.num;
}
// ��  ��: �[�K�L���K�X
// �Ǧ^��: �٭�᪺�K�X 
int decode(int pwd)
{
    int i;
    union{
        int num;
        char c[sizeof(int)];
    } u1;
    u1.num = pwd;
    for(i = 0; i< sizeof(int); i++)
        u1.c[i] -= 32;
    return u1.num;
}

