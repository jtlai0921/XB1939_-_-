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
    ofstream ofile;// �ŧi�ɮ׿�X����
    psn.setData();
    ofile.open("out7.dat", ios::binary);
    // �ϥΤG�i��Ҧ��}���ɮ�
    ofile.write( (char*) &psn, sizeof( psn ) );	
    // �ϥ�write()��Ƽg�J��ƨ��ɮפ�
    ofile.close();
    cout << endl;

    return 0;
}
