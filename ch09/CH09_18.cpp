#include <iostream>
#include <cstdlib>
using namespace std;
	
//�w�q���OAddsum
class Addsum
{
	int x;
	public:
	//�ŧi�غc�l��ƭ쫬
	Addsum(int);
	//�ŧi��ƭ쫬
	void sum(Addsum);   //�ǤJ���O�Ѽ�
	void show();
};
	
//�갵�غc�l��ƨöǤJ��
Addsum::Addsum(int s)
{
	x=s;
}
	
//�갵sum��Ʀ����ǤJ����Ѽ�
void Addsum::sum(Addsum obj)
{
	x+=obj.x;  //���������Ʀ����ȥ[�W�ǤJ���󤧸�Ʀ�����
}
	
void Addsum::show()
{
	cout<<x;
} 
	
int main()
{
	Addsum a(1000),b(1500);
	a.show();
	cout<<"+";
	b.show();
	cout<<"=";
	a.sum(b);   //�I�s����a����Ʀ����A�ñN����b�ǤJ
	a.show();
	cout<<endl;
	
	return 0;
}
