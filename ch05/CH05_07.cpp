#include <iostream>
#include <cstdlib>
using namespace std;

double salary(double pay,double hours=220);	//��ƹw�]�Ѽƭ�	
int main()
{
    cout<<"�i�a�E ���~:"<<95<<"�� �����~��:"<<salary(95)<<endl; 
    cout<<"������ ���~:"<<115<<"�� �����~��:"<<salary(115,240)<<endl;
   
    return 0;
}

double salary(double pay,double hours)	
{
    return pay*hours;
}    
