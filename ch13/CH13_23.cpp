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
    ofstream ofile;// �ŧi�ɮ�Ū��(��X)����
  
    char ch = ' ';
    ofile.open("out8.dat", ios::binary);		
    // �ϥΤG�i��Ҧ��}���ɮ�
    if( !ofile )	// �ˬd�ɮ׬O�_���T�}��
    {
        cerr << "�ɮ׵L�k�}��" << endl;
        ofile.close();
         return 0;
    }
   
    do {
        psn.setData();
        ofile.write( (char*) &psn, sizeof( psn ) );	
        // �ϥ�write()��Ƽg�J��ƨ��ɮפ�
        if( !ofile )// �ˬd�ɮ׬O�_���T�g�J
        {
            cerr << "�ɮ׵L�k�g�J" << endl;
            break;
        }
        cout << "�O�_�n�~���J���( y / n )?";
        cin >> ch;
    } while ( ch == 'y' ); 
    ofile.close();
    cout << endl;
  
    return 0;
}
