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
    person psn;// �ŧiperson����
    ifstream ifile;// �ŧi�ɮ�Ū��(��J)����
    ifile.open("out8.dat", ios::binary);	// �ϥΤG�i��Ҧ��}���ɮ�
    if( !ifile )// �ˬd�ɮ׬O�_���T�}��
    {
        cerr << "�ɮ׵L�k�}��" << endl;
        return 0;
    }
    while ( 1 ) {
        ifile.read( (char*) &psn, sizeof( psn ) ); 
        // �ϥ�read()��ƱN�ɮפ�����Ʀs�쪫��
        if( !ifile )// �ˬd�ɮ׬O�_���TŪ��
        {
            break;
        }
        psn.getData(); // �NŪ���������ܩ�ù��W
        cout << endl;
   }
   ifile.close();
   cout << endl;
  
   return 0;
}
