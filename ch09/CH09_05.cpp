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
	    //�ŧi�غc�l��� 
	    Baseball();          
};
	
//�Q�Ϋغc�l��ƫ��w��Ʀ�����l��
Baseball::Baseball()
{
	strcpy(player,"�����");
	fires=68;
	safes=20;
};
void Baseball::showplayer(void)          
{
	cout<<"================================"<<endl;
	cout<<"�����̡G"<<player<<endl;
	cout<<"�������ơG"<<fires<<endl;
	cout<<"�w�����ơG"<<safes<<endl;
}

int main()
{
	Baseball b;    //�ŧi�ɫغc�l�۰ʫ��w��l��
	b.showplayer();
	  
	return 0;
}
