#include <iostream>
#include <cstdlib>
#include <cmath>//�ޥ�cmath�Y��
using namespace std;

int main()
{
	double rad;
	double deg;
 	double pi=3.14159;
 	cout<<"�п�J����:";
	cin>>deg;
	rad=deg*pi/180;//�N�����ഫ���|��
	//��X���G
	cout<<"sin("<<deg<<"��)="<<sin(rad)<<endl;
	cout<<"cos("<<deg<<"��)="<<cos(rad)<<endl;
	cout<<"tan("<<deg<<"��)="<<tan(rad)<<endl;
	//�����u����
 	cout<<"�����u��sin("<<deg<<"��)="<<sinh(rad)<<endl;
 	cout<<"�����u��cos("<<deg<<"��)="<<cosh(rad)<<endl;
 	cout<<"�����u��tan("<<deg<<"��)="<<tanh(rad)<<endl;
	
 	return 0;
}
