#include <iostream>                                          //�ޤJ<iostream>���Y��
#include <cstdlib> 
#include <fstream>                                           //�ޤJ<fstream>���Y��
using namespace std;                                         //���w�ϥ�C++ Standard Library

int main()
{   
    ifstream fileInput;                                      //�s�ذ�Ū�ɮת���
    char str[20];                                             //�s��str�r���}�C
    int num,i;                                                 //�s��int���
    fileInput.open("fileOutput.txt", ios::binary | ios::in); //�H��Ū�G�i��Ҧ��}��fileOutput.txt
    if(!fileInput.is_open())                                 //�ˬd�ɮ׬O�_�}��
    {
         cout<<"�ɮ׶}�ҿ��~�I"<<endl;                       //�}�ɦ��~�A��X���~�T��
         return 1;                                           //�����`�����{��
    }
    else
    {
         cout<<"�m�W    �q��"<<endl;
         cout<<"==================="<<endl;
         
         for(i=0;i<3;i++)                       //�ˬd�O�_Ū���ɧ�
         {
              fileInput.read(str, sizeof(str));              //Ū���U�@�ժ��m�W
              fileInput.read((char*)&num,sizeof(num));     //Ū���U�@�ժ��q��
              cout<<str<<"    "<<num<<endl;                  //��X��Ʀܿù��W
         }
    }
    fileInput.close();                                       //�����ɮ�
    
    
    return 0;                                                //���`�����{��
}
