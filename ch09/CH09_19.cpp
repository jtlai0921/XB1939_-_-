#include <iostream>
#include <cstring>
using namespace std;	
//�w�q���OFires
class Fires
{
    int fires;     //��������
		
	public:
		//�ŧi�غc�l���
		Fires(int fs)
		{
			fires=fs;
		}
		//�ŧi�@�ӹ٦��ơA�ǤJFires������
		friend int getfires(Fires obj)
		{
			return obj.fires;  //�Ǧ^���󪺸�Ʀ���
		}
};
	
	//�w�q���OPlayer
class Player
{
    char player[20];    //�����̩m�W
	public:
		//�ŧi�غc�l���
		Player(char *name)
		{
			strcpy(player,name);
}	
	    
		//�ŧi��Ʀ���showplayer�A�H���OFires������@���ǤJ���Ѽ�
		void showplayer(Fires obj)
		{
			cout <<"�����̡G"<<player<<endl;
			cout <<"�������ơG"<<getfires(obj)<<endl;
		}
};

int main()
{
		Player P("���E��");
		Fires F(206);
     	P.showplayer(F);
     	
        return 0;
}
