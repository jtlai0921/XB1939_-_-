#include <iostream>
#include <cstdlib>
#include <cstring>	
#include <cctype>//�t�A���P�_�禡�ɮ� 

using namespace std;

int main()
{
	int lower = 0;
	char string[40];
	
	cout<<"�п�J�r��:"; 
    cin.getline(string,40);//��J���r�꦳40�Ӧr�� 
	int len = strlen(string);
	for (int i = 0; i <= len; i++)	
		if (islower(string[i]) != 0)//�O�p�g�r���h�[1	
			lower++;
	cout <<string<<"�r�ꪺ�p�g�r���� " << lower << "��"<<endl;
	

	return 0;
}
