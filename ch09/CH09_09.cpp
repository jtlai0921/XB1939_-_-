#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
	
class Baseball
{
	private:
	    char player[20];            //�����̩m�W   
	    int fires;                  //��������
	    int safes;                  //�w����
	
	public:
	    void showplayer();   
	    void setplayer(char *name,int fs,int ss);   //�]�w��Ʀ�����Ʀ���
};
	
//�Q�ζǤJ���Ѽƫ��w��Ʀ�������
void Baseball::setplayer(char *name,int fs,int ss)
{
	strcpy(player,name);
	fires=fs;
	safes=ss;
}
void Baseball::showplayer()          
{
	cout<<"================================"<<endl;
	cout<<"�����̡G"<<player<<endl;
	cout<<"�������ơG"<<fires<<endl;
	cout<<"�w�����ơG"<<safes<<endl;
}
	
int main()
{
	Baseball b;                
	Baseball *b1=new Baseball;    //�H���Ф覡�ŧi����b1
	b.setplayer("���צw",217,62);
	b1->setplayer("���@�p",115,20);  //�ŧi����b�ña�J��Ʀ�����l��
	b.showplayer();
	b1->showplayer();//���񪫥�O���� 
	delete b1;
	
	return 0;
}
