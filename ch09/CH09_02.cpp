#include <iostream>
#include <cstdlib>	
using namespace std;

//�w�q�@��Baseball�����O
class Baseball
{
	//�w�q�p�θ�Ʀ���
	private:
	char player[20];       //�����̩m�W         
	int fires;             //��������
	int safes;             //�w������
	
    float countsafe()     //�w�q�p�Ψ�Ʀ���
	{
	    float counts;     //�ŧi�����v�ܼ�
	    counts=(float(safes) / float(fires));   //�p�⥴���v �w������/��������
	    return counts;    //�Ǧ^�����v
	} 
	
	//�w�q���Ψ�Ʀ���
	public:
	//�ŧi���Ϊ���Ʀ���inputplayer
	void inputplayer()
	{
	    cout<<"�����̡G";                     
	    cin>>player;      //��J�����̩m�W
	    cout<<"�������ơG";
	    cin>>fires;       //��J��������
	    cout<<"�w�����ơG";
	    cin>>safes;	      //��J�w������
    }
    void showplayer()    //showplayer��Ʀ����H��ܥ����̸��
    {
	    cout<<"================================"<<endl;
	    cout<<"�����̡G"<<player<<endl;     //��ܥ����̩m�W
	    cout<<"�������ơG"<<fires<<endl;    //��ܥ�������
	    cout<<"�w�����ơG"<<safes<<endl;    //��ܦw������
	    cout<<"�����v:"<<countsafe()<<endl;
	}
 };

int main()
{
	Baseball b;
	b.inputplayer();    //�I�s����b��inputplayer ��Ʀ����A�H��J�������̸��
	b.showplayer();    //�I�s����b��showplayer  �禡�Ʀ����A�H��ܩҿ�J�������̸��

	return 0;
}
