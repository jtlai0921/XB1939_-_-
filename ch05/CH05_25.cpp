#include <iostream>  
#include <cstdlib> 
using namespace std;
 
void Add_Num();    // �إ߲֥[�ܼƭȪ���ƫŧi  

int main() 
{  
    int count;  
    for (count=0; count<5; count++)  
        Add_Num();	// �z�Lfor�j������ƩI�s5��  
     
    return 0;
}  

void Add_Num() 
{  
    auto int auto_Num=1;	// �ŧi�ê�l�Ʀ۰��ܼ� 
    static int static_Num=1;	// �ŧi�ê�l���R�A�ܼ�  
    cout << "�۰��ܼ� auto_Num ���Ȭ��G" << auto_Num << endl;  
    cout << "�R�A�ܼ� static_Num ���Ȭ��G" << static_Num << endl;  
    cout << endl;  	
    auto_Num++;	   // �Nauto�ܼƥ[ 1  
    static_Num++;  // �Nstatic�ܼƥ[ 1  
}
