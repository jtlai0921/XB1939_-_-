#include <iostream>
#include <cstring>
using namespace std;
	
class Baseball
{
	private:
	    char player[20];            //�����̩m�W   
	    int fires;                  //��������	int safes;                 
        int safes; //�w����
	
	public:
	    void showplayer();   
	    //�ŧi�غc�l��� 
	    Baseball();                     //���a�ѼƤ��غc�l
	    Baseball(char *name,int fs,int ss);   //�a�J�ѼƤ��غc�l
};
	
//�Q�Ϋغc�l��ƫ��w��Ʀ�����l��
Baseball::Baseball()
{
	strcpy(player,"�����");
	fires=68;
	safes=20;
}
//�Q�ζǤJ���Ѽƫ��w��Ʀ�����l��
Baseball::Baseball(char *name,int fs,int ss)
{
	strcpy(player,name);
	fires=fs;
	safes=ss;
}
	
void Baseball::showplayer(void)          
{
	cout<<"================================"<<endl;
	cout<<"�����̡G"<<player<<endl;
	cout<<"�������ơG"<<fires<<endl;
	cout<<"�w�����ơG"<<safes<<endl;
}
	
int main()
{
	Baseball b1;                //�ŧi�ɫغc�l�۰ʫ��w��l��
	Baseball b("���@�p",115,20);//�ŧi����b�ña�J��Ʀ�����l��
	b.showplayer();
	b1.showplayer();

    return 0;
}
