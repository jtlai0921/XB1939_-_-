#include <iostream>  //�ޤJ<fstream>���Y��
#include <fstream>   //�ޤJ<fstream>���Y��
#include <cstdlib> 
using namespace std;                                  

int main()
{
    ofstream fileOutput; //�s�ذ�Ū�ɮת���
	fileOutput.open("out2.txt", ios::out); //�H��Ū�Ҧ��}��
    if(!fileOutput.is_open()) //�ˬd�ɮ׬O�_�}��
    {
        cout<<"�ɮ׶}�ҿ��~�I"<<endl; //�}�ɦ��~�A��X���~�T��
        return 1;  //�����`�����{��
    }
    else
    {
        fileOutput<<"�@�������k,�p�ڤ۪w�v."<<endl; //��X�r����ɮ�
    }
    fileOutput.close(); //�����ɮ�
    fileOutput.open("out2.txt", ios::app);//�H���[�Ҧ��}��
    if(!fileOutput.is_open()) //�ˬd�ɮ׬O�_�}��
    {
        cout<<"�ɮ׶}�ҿ��~�I"<<endl; //�}�ɦ��~�A��X���~�T��
        return 1; //�����`�����{��
    }
    else
    {
        fileOutput<<"�p�S��p�q,�����p�O�[."<<endl; //��X�r����ɮ�
    }
    fileOutput.close(); //�����ɮ�
    
    return 0; //���`�����{��
}
