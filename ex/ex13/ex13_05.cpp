#include <iostream>                                           //�ޤJ<iostream>���Y��
#include <cstdlib>
#include <fstream>                                            //�ޤJ<fstream>���Y��
using namespace std;                                          //���w�ϥ�C++ Standard Library

class NOTE                                                    //�w�qNOTE���O
{
    protected:                                                //�p����ư�
        char str[20];                                         //�x�s�m�W
        int num;                                              //�x�s�q��
    public:                                                   //���θ�ư�
        void ShowNote()                                       //���O���Ψ禡
        {
             cout<<"�m�W�G"<<str<<endl;
             cout<<"�q�ܡG"<<num<<endl;
        }
};

int main()
{
     int n;
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
          int noteLength=sizeof(myNOTE);                      //���omyNOTE�����ƪ���
          fileInput.seekg(0, ios::end);                       //���ʰ�Ū�ɮ׫��Ц��ɧ��B
          int fileLength=fileInput.tellg();                   //���o�ɧ���m
          int numNote=fileLength / noteLength;                //���o�ɮ��`����
          cout<<"fileOutput.txt���ɮפj�p�� "<<fileLength<<" �줸�աC"<<endl;
          cout<<"�C����Ʀ� "<<noteLength<<" �줸�աA�@ "<<numNote<<" ����ơC"<<endl;
          cout<<"�аݭnŪ���ĴX����ơH";
          cin>>n;
          if(n<1 || n>numNote)
          {
               cout<<"�õL������Ʀs�b�I"<<endl;
               return 1;                                      //�����`�����{��
          }
          fileInput.seekg((n-1) * noteLength, ios::beg);      //���ʨ��n������Ʀ�m
          fileInput.read((char*) &myNOTE, noteLength);        //Ū����n�����
          cout<<"�� "<<n<<" ����Ʀp�U�G"<<endl;
          myNOTE.ShowNote();                                  //���Ū�������
          cout<<"��ƿ�X����..."<<endl;
     }
     fileInput.close();                                       //�����ɮ�
     
    
     return 0;                                                //���`�����{��
}
