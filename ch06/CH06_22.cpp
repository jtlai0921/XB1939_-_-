#include<iostream>
#include<cstdlib>
	// �ޥΦr�����O
#include<string>
	
using namespace std;
	
int main()
{
	// �ŧi�r��
	string st1,st2,st3,st4,st5,st6;
	int ap;
	st1="This is a number";
	st2="12345678";
	st4="�C�@��";
	st5="�ּ�";
	st6="is";
	
	// ���w�r�ꤺ�e:�ϥ�assign�禡
	cout << "====== ���w�r�ꤺ�e:�ϥ�assign�禡 ======" << endl;
	cout << "��st3�����e��:" << st3 << endl;
	st3.assign(st1);
	cout << "�ϥ�assign�禡�Nst1���e���w��st3�᪺���e��:" << st3 << endl << endl;

	// �s���G�r��:�ϥ�append�禡
	cout << "====== �s���r��:�ϥ�append�禡 ======" << endl;
	cout << "��st6�����e��:" << st4 << endl;
	st4.append(st5);
	cout << "�ϥ�append�禡�Nst5�Pst4�s���᪺���e��:" << st4 << endl << endl;

	// ����r�ꤺ�e:�ϥ�compare�禡
	cout << "====== ����r�ꤺ�e:�ϥ�compare�禡 ======" << endl;
	cout << "��st1�����e��:" << st1 << endl;
	cout << "��st2�����e��:" << st2 << endl;
	if (st1.compare(st2) == 0 )
		cout << "�ϥ�compare�禡�Nst1�Pst2����ᬰ�G���e�ۦP" << endl << endl;
	else
	    cout << "�ϥ�compare�禡�Nst1�Pst2����ᬰ�G���e���ۦP" << endl << endl;

	// �j�M�r��G�ϥ�find�禡
    cout << "====== �j�M�r��:�ϥ�find�禡 ======" << endl;
	cout << "��st1�����e��:" << st1 << endl;
	cout << "���j�M���r�ꤺ�e:"<< st6 << endl;
	ap=st1.find(st6);
	cout << "�ϥ�find�禡�bst1���j�M" << st6 << "�����G����:" << ap << "�Ӧ�m" << endl << endl;
	
	// ���N�r��G�ϥ�replace�禡
	cout << "====== ���N�r��:�ϥ�replace�禡 ======" << endl;
	cout << "��st4�����e��:" << st4 << endl;
	cout << "�����N���r�ꤺ�e:����" << endl;
	st4.replace(6,6,"����");
    cout << "�ϥ�replace�禡���N�᪺st4�r�ꤺ�e���G" << st4 << endl << endl;
	
	// �ﴫ���e�G�ϥ�swap�禡
	cout << "====== �ﴫ���e:�ϥ�swap�禡 ======" << endl;
	cout << "��st4�����e��:" << st4 << endl;
	cout << "��st5�����e��:" << st5 << endl;
	st4.swap(st5);
	cout << "�r��st4�Pst5���e�ﴫ�᪺st4���e���G" << st4 << endl;
	cout << "�r��st4�Pst5���e�ﴫ�᪺st5���e���G" << st5 << endl << endl;
		
	return 0;
}
