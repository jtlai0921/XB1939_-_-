#include <iostream>
#include <cstdlib>	
using namespace std;
	
//�w�q�@��Baseball�����O
class Baseball
{
	//�w�q���θ�ƤΨ禡����
	public:
	char player[20];       //�����̩m�W         
	int fires;             //��������
	int safes;             //�w������
	//�ŧi���Ϊ��禡����showplayer���쫬�A�ΥH��ܥ����̸��
	void showplayer()          
    {
	    cout<<"===================================="<<endl;
	    cout<<"�����̡G"<<player<<endl;     //��ܥ����̩m�W
	    cout<<"�������ơG"<<fires<<endl;    //��ܥ�������
	    cout<<"�w�����ơG"<<safes<<endl;    //��ܦw������
	}
};
int main()
{
	Baseball b;                         //�ŧi�@��Baseball���O������b 
	cout<<"�����̡G";
	cin>>b.player;                      //��J�����̩m�W
	cout<<"�������ơG";
	cin>>b.fires;                       //��J��������
	cout<<"�w�����ơG";
	cin>>b.safes;                       //��J�w������
	b.showplayer();                     //�I�s����b��showplayer �禡�����A�H��ܩҿ�
	                                //�J�������̸��
    return 0;
}
