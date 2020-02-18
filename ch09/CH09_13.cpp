#include <iostream>
#include <cstdlib>	
using namespace std;

//�w�q�@��Baseball�����O
class Baseball
{
	//�w�q�p�θ�ƤΨ禡����
	private:
	char player[20];         //�����̩m�W         
	int fires;               //��������
	int safes;               //�w������
	//�ŧi�p�Ϊ���Ʀ���countsafe���쫬�ΥH�p�⥴���̥����v
	float countsafe(void);
	
	//�w�q���θ��Ʀ���
	public:
	//�ŧi���Ϊ��禡�Ʀ���inputplayer���쫬�ΥH��ܥ����̸��
	void inputplayer();
	//�ŧi���Ϊ��禡�Ʀ���showplayer���쫬�ΥH��ܥ����̸��
	void showplayer();          
};
void Baseball:: inputplayer (void)       //���O�~��{inputplayer�禡����
{
	cout<<"�����̡G";                     
	cin>>player;                         //��J�����̩m�W
	cout<<"�������ơG";
	cin>>fires;                          //��J��������
	cout<<"�w�����ơG";
	cin>>safes;	                         //��J�w������
}
void Baseball::showplayer(void)          //���O�~��{showplayer�禡����
{
	float fs;
	fs=countsafe();                     //�z�Lcountsafe �禡�����p��öǦ^�����v
	cout<<"================================"<<endl;
	cout<<"�����̡G"<<player<<endl;     //��ܥ����̩m�W
	cout<<"�������ơG"<<fires<<endl;    //��ܥ�������
	cout<<"�w�����ơG"<<safes<<endl;    //��ܦw������
	cout<<"�����v�G"<<fs<<endl;         //��ܦw���v
}
float Baseball::countsafe()             //���O�~��{countsafe�禡����
{
	float counts;                           //�ŧi�����v�ܼ�
	counts=(float(safes) / float(fires));   //�p�⥴���v �w������/��������
	return counts;                          //�Ǧ^�����v
} 

int main()
{
	Baseball b[3];         //�ŧi���O�}�C
	int i;
	cout<<"��J���"<<endl;
	cout<<"================================"<<endl;
	
	for (i=0;i<3;i++)
	{
        b[i].inputplayer();
	}
	
	cout<<"================================"<<endl;
	cout<<"��ܸ��"<<endl;
	for (i=0;i<3;i++)
	{
	    b[i].showplayer();
	}
	
	return 0;
}	
