#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;

class person
{
    protected:
        char name[10];
        int	height;
        int  weight;
    public:
        void setData(void) // ��J�ӤH���
        {
            cout << "�п�J�m�W : ";
            cin >> name;
            cout << "�п�J���� : ";
            cin >> height;
            cout << "�п�J�魫 : ";
            cin >> weight;
        }
        void getData(void) // ��X�ӤH���
        {
            cout << "�m�W : " << name << endl;
            cout << "���� : " << height << endl;
            cout << "�魫 : " << weight << endl;
        }
};

int main()
{
    person psn;  // �ŧiperson����
    ifstream ifile;// �ŧi�ɮ׿�J����
  
    ifile.open("out7.dat", ios::binary);	
    // �ϥΤG�i��Ҧ��}���ɮ�
    ifile.read( (char*) &psn, sizeof( psn ) );		
    // �ϥ�read()��ƱN�ɮפ�����Ʀs�쪫��
    ifile.close();
    psn.getData();	// �NŪ���������ܩ�ù��W
    cout << endl;
  
    return 0;
}
