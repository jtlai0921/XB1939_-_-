#include <iostream>
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
//�Hthis���Цs�����O��Ʀ���
void Baseball::showplayer()          
{
	cout<<"================================"<<endl;
	cout<<"�����̡G"<<this->player<<endl;     
	cout<<"�������ơG"<<this->fires<<endl;
	cout<<"�w�����ơG"<<this->safes<<endl;
}
	
int main()
{
	Baseball b;                
	Baseball *b1=new Baseball;    //�H���Ф覡�ŧi����b1
	b.setplayer("���צw",217,62);
	b1->setplayer("���@�p",115,20);  //�ŧi����b�ña�J��Ʀ�����l��
	
	b.showplayer();
	b1->showplayer();
    
    return 0;	
}		
