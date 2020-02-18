#include <iostream>
#include <cstdlib>	
using namespace std;

//�w�q�@��Baseball�����O
class Baseball
{
    //�w�q�p�θ�ƤΨ�Ʀ���
	private:
		char player[20];         //�����̩m�W         
		int fires;               //��������
		int safes;               //�w������
	    //�ŧi�p�Ϊ���Ʀ���countsafe���쫬�ΥH�p�⥴���̥����v
		float countsafe(void);
	   
	//�w�q���θ��Ʀ���
	public:
	    static long sumfires;    //�R�A��Ʀ����`��������
		static long sumsafes;    //�R�A��Ʀ����`�w������
	
	    //�ŧi���Ϊ���Ʀ���inputplayer���쫬�ΥH��ܥ����̸��
	  	void inputplayer();
	    //�ŧi���Ϊ���Ʀ���showplayer���쫬�ΥH��ܥ����̸��
		void showplayer();   	
};
//���w�R�A��Ʀ�������l��
long Baseball::sumfires=0;
long Baseball::sumsafes=0;
	
void Baseball:: inputplayer (void)       //���O�~��{inputplayer��Ʀ���
{
	cout<<"�����̡G";                     
	cin>>player;          //��J�����̩m�W
	cout<<"�������ơG";
	cin>>fires;           //��J��������
	cout<<"�w�����ơG";
	cin>>safes;	                         //��J�w������
}
void Baseball::showplayer(void)          //���O�~��{showplayer��Ʀ���
{
	float fs;
	fs=countsafe();                     //�z�Lcountsafe ��Ʀ����p��öǦ^�����v
	cout<<"================================"<<endl;
	cout<<"�����̡G"<<player<<endl;     //��ܥ����̩m�W
	cout<<"�������ơG"<<fires<<endl;    //��ܥ�������
	cout<<"�w�����ơG"<<safes<<endl;    //��ܦw������
	cout<<"�����v�G"<<fs<<endl;         //��ܦw���v
	sumfires=sumfires+long(fires);      //�֥[�`��������
	sumsafes=sumsafes+long(safes);      //�֥[�`�w������
}
float Baseball::countsafe()             //���O�~��{countsafe��Ʀ���
{
	float counts;                           //�ŧi�����v�ܼ�
	counts=(float(safes) / float(fires));   //�p�⥴���v �w������/��������
	return counts;                          //�Ǧ^�����v
} 
	
//�ŧi�@����sumcountsafe���쫬�ΥH�p���`�����v
float sumcountsafe()           //���O�~��{sumcountsafe��Ʀ���
{
	float sumcounts;
	sumcounts=(float(Baseball::sumsafes) / float(Baseball::sumfires));
	return sumcounts;
} 
	
//�ŧi�@����sumshowplayer���H��ܤέp���`�����v
void sumshowplayer(void)             
{
    float sumfs;
	sumfs=sumcountsafe();
	cout<<"================================"<<endl;
	cout<<"�`�������ơG"<<Baseball::sumfires<<endl;
	cout<<"�`�w�����ơG"<<Baseball::sumsafes<<endl;
	cout<<"�`�����v�G"<<sumfs<<endl;
}
	
//�ŧi�@����clearsum�N���O���R�A��Ʀ����]��0
void clearsum()
{
	Baseball::sumfires=0;          //�N���OBaseball���R�A��Ʀ���sumfires�]��0
		Baseball::sumsafes=0;          //�N���OBaseball���R�A��Ʀ���sumfires�]��0
		cout<<"====================================="<<endl;
		cout<<"�������ƪ�l�ȡG"<<Baseball::sumfires<<endl;
		cout<<"�w�����ƪ�l�ȡG"<<Baseball::sumsafes<<endl;
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
	sumshowplayer();
	clearsum();
		
	return 0;
}
