#include<iostream>

using namespace std;

int main()
{	
	
	short int number1=0200;//�ŧi�u����ܼ�,�åH�K�i��Ƴ]�w���
    int number2=0x33f;//�ŧi����ܼ�,�åH�Q���i��Ƴ]�w���
    long int number3=1234567890;//�ŧi������ܼ�,�åH�Q�i��Ƴ]�w���
    unsigned long int number4=978654321;//�ŧi�L��������ܼ�,�åH�Q�i��Ƴ]�w���
 	
    //��X�U�ؾ�Ƹ�ƫ��A�ȻP�Ҧ��줸�� 
     
	cout<<"�u���="<<number1<<"�Ҧ��줸��:"<<sizeof(number1)<<endl;
	cout<<"���="<<number2<<"�Ҧ��줸��:"<<sizeof(number2)<<endl;
	cout<<"�����="<<number3<<"�Ҧ��줸��:"<<sizeof(number3)<<endl;
    cout<<"�L�������="<<number4<<"�Ҧ��줸��:"<<sizeof(number4)<<endl;
	
	
    
    return 0;
}

