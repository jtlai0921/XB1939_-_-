#include <iostream>                                         //�ޤJ<iostream>���Y��
#include <cstdlib> 
#include <fstream>                                           //�ޤJ<fstream>���Y��
using namespace std;                                         //���w�ϥ�C++ Standard Library

class NOTE                                                   //�w�qNOTE���O
{
    protected:                                               //�p����ư�
        char str[20];                                        //�x�s�m�W
        int num;                                             //�x�s�q��
    public:                                                  //���θ�ư�
        void ShowNote()                                      //���O���Ψ禡
        {
             cout<<"�m�W�G"<<str<<endl;
             cout<<"�q�ܡG"<<num<<endl;
        }
};

int main()
{
    ifstream fileInput;                                      //�s�ذ�Ū�ɮת���
    fileInput.open("fileOutput.txt", ios::binary | ios::in); //�H��Ū�G�i��Ҧ��}��fileOutput.txt
    if(!fileInput.is_open())                                 //�ˬd�ɮ׬O�_�}��
    {
         cout<<"�ɮ׶}�ҿ��~�I"<<endl;                       //�}�ɦ��~�A��X���~�T��
         return 1;                                           //�����`�����{��
    }
    else
    {
         NOTE myNOTE;                                        //�s�����O����myNOTE
         fileInput.read((char*) &myNOTE, sizeof(NOTE));      //Ū���Ĥ@�����O����;
         while(!fileInput.eof())                             //�ˬd�O�_Ū���ɧ�
         {
              myNOTE.ShowNote();                             //��X�@�թm�W�P�q��
              fileInput.read((char*) &myNOTE, sizeof(NOTE)); //Ū���U�@�����O����
         }
         cout<<"��ƿ�X����..."<<endl;
    }
    fileInput.close();                                       //�����ɮ�
    
    
    return 0;                                                //���`�����{��
}
