#include <iostream>  
#include <cstdlib> 
using namespace std;
 
double Get_Length(int m);   // �ŧi������^�`���禡�쫬�ŧi  
// �Ѽ� m �N����  
int main()  
{  
    register int m;	  // �ŧi��ƫ��A��register�ܼ� m  
    cout << "����\t �^�`" << endl;  
    for (m=10; m<21; m++)	// �p��10��20���ت������^�`�� 
        cout << m << "\t" << Get_Length(m) << endl;  
        
    return 0;
}  

double Get_Length(int m)  
{  
    double ft;	   // �ŧi����T�B�I���ܼ� ft  
    ft = m * 3.28;   // �p��^�`  
    return (ft); 
}
