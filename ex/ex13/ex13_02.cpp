#include <iostream>                                    //�ޤJ<iostream>���Y��
#include <cstdlib>   
#include <fstream>                                     //�ޤJ<fstream>���Y��
using namespace std;                                 //���w�ϥ�C++ Standard Library

class NOTE                                               //�w�qNOTE���O
{
    protected:                                         //�p����ư�
        char str[20];                                     //�x�s�m�W
        int num;                                       //�x�s�q��
    public:                                            //���θ�ư�
        void SetNote()                            //���O���Ψ禡
        {
	         cout<<"�п�J�m�W�G";
             cin>>str;
             cout<<"�п�J�q�ܡG";
             cin>>num;
        }
};

int main()
{
    ofstream fileOutput;                                       //�s�ذ߼g�ɮת���
    fileOutput.open("fileOutput.txt", ios::binary | ios::out); //�H�߼g�G�i��Ҧ��}��fileOutput.txt
    if(!fileOutput.is_open())                                  //�ˬd�ɮ׬O�_�}��
    {
         cout<<"�ɮ׶}�ҿ��~�I"<<endl;                         //�}�ɦ��~�A��X���~�T��
         return 1;                                             //�����`�����{��
    }
    else
    {
         NOTE myNOTE;                                          //�s�����O����myNOTE
	      cout<<"�гs���J�T�թm�W�P�q��..."<<endl;
         for(int i=0; i<3; i++)                                //�`�@��J�T��
         {
              myNOTE.SetNote();                                //��J�@�թm�W�P�q��
              fileOutput.write((char*) &myNOTE, sizeof(NOTE)); //�s�J���O����
         }
         cout<<"��ƿ�J����..."<<endl;
    }
    fileOutput.close();                                        //�����ɮ�
    
    
    return 0;                                                  //���`�����{��
}
