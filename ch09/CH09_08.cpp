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
	    //�ŧi�غc�l��� 
	    Baseball();
	    void showplayer();   //���a�ѼƤ��غc�l
	    Baseball(char *name,int fs,int ss);   //�t�ѼƦC���غc�l
	    //�ŧi�Ѻc�l
	    ~Baseball()
	    {
	        cout<<"�Ѻc:"<<player<<endl;   //��ܳQ����غc�l����Ʀ���player
	    }
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
void Baseball::showplayer()          
{
	cout<<"================================"<<endl;
	cout<<"�����̡G"<<player<<endl;
	cout<<"�������ơG"<<fires<<endl;
	cout<<"�w�����ơG"<<safes<<endl;
}
void call_object()
{
    Baseball b1;                //�ŧi�ɫغc�l�۰ʫ��w��l��
	Baseball b("���@�p",115,20);//�ŧi����b�ña�J��Ʀ�����l��
	b1.showplayer();
	b.showplayer();	//���}����ư϶���,�|�I�s�Ѻc�l 
}		
int main()
{
	call_object();
    	
	return 0;
}
