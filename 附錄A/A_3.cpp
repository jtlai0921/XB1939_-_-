#include<iostream>
#include<cstdlib>
#include<cmath>//�ޥ�cmatn���Y��
using namespace std;

int main()
{
	double number;
	cout<<"�п�J�@��double��ƫ��A���Ʀr:";
    cin>>number;
    //��X���G
   	cout<<number<<"�������="<<fabs(number)<<endl;
   	cout<<number<<"�L����i�J��="<<ceil(number)<<endl;
   	cout<<number<<"�L����˥h��="<<floor(number)<<endl;
      	
    return 0;
}
