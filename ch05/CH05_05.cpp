#include <iostream>  
#include <cstdlib>  

using namespace std;

int Common_Divisor(); //��ƭ쫬�ŧi 

int main()  
{  
    int Min;  
    Min=Common_Divisor(); //��ƩI�s 
    cout << "���̤j���]�Ƭ��G" << Min << endl;  
    
    return 0;
}  
int Common_Divisor()  
{  
    int Num1,Num2,Temp;  
    cout << "�п�J��Ӽƭ�" << endl;  
    cout << "�ƭ� 1�G";  
    cin >> Num1; 
    cout << "�ƭ� 2�G";  
    cin >> Num2;  
    cout << Num1 << " �� " << Num2;  
    while (Num2 != 0)  //�Q������۰��k�p��̤j���]��
   	{  
        Temp=Num1 % Num2;  
   	    Num1 = Num2;  
	    Num2 = Temp;  
   	}  
    
    return (Num1); 
}
