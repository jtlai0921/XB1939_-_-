#include <fstream>	// �B�z�ɮ׿�X�J�����Y��
#include <iostream>	
#include <cstdlib>	
using namespace std;

struct person
{
 char name[10];
 int	height;
 int weight;
};

int main()
{
    person psn;	// �ŧiperson���O
    const int objSize = sizeof(psn);// �������󪺤j�p
    int i=0;
    fstream file;	// �ŧi�ɮ׿�X����
    char ch = ' ';
    int pos = 0;
    file.open("out8.dat", ios::out | ios::in | ios::binary);
    do
    {
        cout << "�z�n�q�ĴX����Ƽg�J?";
        cin >> pos;
        pos--;
        file.seekp( pos * objSize );	// �]�w�g�J��m
        cout << "�п�J�m�W : ";
        cin >> psn.name;
        cout << "�п�J���� : ";
        cin >> psn.height;
        cout << "�п�J�魫 : ";
        cin >> psn.weight;
        file.write( (char*) &psn, objSize );	
        // �ϥ�write()��Ƽg�J��ƨ��ɮפ�
        cout << "�O�_�n�~���J���( y / n )?";
        cin >> ch;
    } while ( ch == 'y' );
      
        cout << endl;
      
        // �NŪ����ƪ���m�]���ɮװ_�l�B
        file.seekg( 0 );
        while ( 1 )
        {
            file.read( (char*) &psn, objSize ); 
            // �ϥ�read()��ƱN�ɮפ�����Ʀs�쪫��
            if( !file )	// �ˬd�ɮ׬O�_���TŪ��
            {
                break;
            }
            cout << "�m�W : " << psn.name << endl;
       	    cout << "���� : " << psn.height << endl;
            cout << "�魫 : " << psn.weight << endl;
            cout << endl;
        }
      
    file.close();
    cout << endl;
      
    return 0;
}
