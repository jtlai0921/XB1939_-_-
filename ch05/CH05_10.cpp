#include <iostream>  
#include <cstdlib> 
 
using namespace std;
  
int gcd(int,int);  //�ǭȩI�s��ƭ쫬�ŧi 
 
int main()  
{  
    int Num1,Num2,lcd_Num,gcd_Num;  
    cout << "�п�J��Ӽƭ�" << endl;  
    cout << "�ƭ� 1�G"; 
    cin >> Num1; 
    cout << "�ƭ� 2�G";  
    cin >> Num2;  
    gcd_Num=gcd(Num1,Num2);  
	lcd_Num=Num1 * Num2 / gcd_Num;  
    cout << Num1 << " �� " << Num2 << " ���̤j���]�Ƭ��G" << gcd_Num << endl; 
    cout << Num1 << " �� " << Num2 << " ���̤p�����Ƭ��G" << lcd_Num << endl;  
   
    return 0;
}  
int gcd(int Num1, int Num2)  
{ 
    int Temp;  
    while (Num2 != 0) 
    {  
        Temp=Num1 % Num2; 
        Num1 = Num2;  
        Num2 = Temp;  //����۰��k 
    }  
     return (Num1);  
}
