#include<iostream>
#include<cstdlib>
	// �ޥΦr�����O
#include<string>
	
using namespace std;
	
int main()
{
	// �ŧi�r��
	string st1;
	string st2("56789012");
	string st3="1234567";
	// �ŧi�r���ܼ�st4���P�ɡA�@�֫��wst4���Ȭ��ܼ�st2����
	string st4(st2);
	// �ŧi�r���ܼ�st5���P�ɡA���w�N�r���u1�v���Сu3�v��
	string st5(3,'1'); 
	// �ŧi�r���ܼ�st6���P�ɡA���w���ܼ�st2���ġu1�v�Ӧr���}�l�^���u4�v�Ӧr��
	string st6(st2,1,4); 
	
	// ��ܦU�r���ܼƪ���
	cout << "st1=" << st1 << endl;
	cout << "st2=" << st2 << endl;
	cout << "st3=" << st3 << endl;
	cout << "st4=" << st4 << endl;
	cout << "st5=" << st5 << endl;
	cout << "st6=" << st6 << endl;
	
	return 0;
}
