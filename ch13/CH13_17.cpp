#include <iostream> //�ޤJ<iostream>���Y��
#include <fstream>  //�ޤJ<fstream>���Y��
#include <string>   //�ޤJ<string>���Y��
using namespace std;  //���w�ϥ�C++ Standard Library

int main()
{
    ifstream fileInput; //�s�ذ�Ū�ɮת���
    string str; //�s��str�r��
    fileInput.open("out2.txt", ios::in); //�H��Ū�Ҧ��}��fileOutput.txt
    if(!fileInput.is_open()) //�ˬd�ɮ׬O�_�}��
    {
        cout<<"�ɮ׶}�ҿ��~�I"<<endl; //�}�ɦ��~�A��X���~�T��
        return 1; //�����`�����{��
    }
    else
    {
        while(!fileInput.eof()) //�ˬd�O�_Ū���ɧ�
        {
            fileInput>>str; //��X�ɮפ����r���str
            cout<<str<<endl; //��Xstr�r�ꤺ�e�ܿù�
        }
    }
    fileInput.close(); //�����ɮ�
    
    return 0; //���`�����{��
}
