#include<iostream>  
#include<cstdlib>       
using namespace std;

// �w�q�@�ӦW��water���c
struct water {     
	int waterunit;  //�Τ��q
	int basewater;  // �򥻤��O
};  
// �w�qshow_pay_water��ƭ쫬
void show_pay_water(struct water);
// �D�禡
int main()
{
	water mywater;
	int waterdata;
	cout << "��J�Τ��q:" ;
	cin >> waterdata;
	mywater.waterunit=waterdata;
	mywater.basewater=90;
	show_pay_water(mywater);
	
	
	return 0;
}

void show_pay_water(struct water w1)
{
	int paywater=0;

	if ((w1.waterunit>=0) && (w1.waterunit<=10))
		paywater=w1.basewater+10*w1.waterunit;
	if ((w1.waterunit>=11) && (w1.waterunit<=20))
		paywater=w1.basewater+12*w1.waterunit;
	if ((w1.waterunit>=21) && (w1.waterunit<=40))
		paywater=w1.basewater+15*w1.waterunit;
	if ((w1.waterunit>=41) && (w1.waterunit<=50))
		paywater=w1.basewater+18*w1.waterunit;
	if (w1.waterunit>50)
		paywater=w1.basewater+20*w1.waterunit;

		cout << "���O�׼ơG" << w1.waterunit << " ��" << endl;
		cout << "���I���O�G" << paywater << " ��" << endl;
}
