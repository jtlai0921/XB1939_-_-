#include <iostream>  
#include <cstdlib> 

using namespace std;
 
int main()  
{  
    auto int i,Sum=0;    //�ŧi�ϰ��ܼơA�ó]�wSum����l��  
    for (i=0; i<4; i++) 
    {  
        Sum +=i;		  //�bfor�j�餤���WSum��  
        cout << "Sum ���Ȭ��G" << Sum << endl;  
        {  
		    auto int Sum=100;  //�bfor�j�餤�إߥt�@�Ӥ����϶� 
            //�ëŧi�Ϊ�l�ưϰ��ܼ�Sum����  
            Sum += 10;	      //�b�ϰ줤�NSum�ȥ[10�æC�L�X��  
            cout << "�����϶��� Sum �Ȭ��G" << Sum << endl;  
       	}  
    }  
       
    return 0;
}
