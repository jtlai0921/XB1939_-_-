#include <iostream>
#include <cstdlib>
using namespace std;
	
inline int add(int a,int b) {return a+b;} 
		
int main() 
{
    int num1 = 0 ,num2=0;
    cout << "��J�ƭ� 1�G";
    cin >> num1;
    cout << "��J�ƭ� 2�G";
    cin >> num2;
    cout << "�ƭ� 1+�ƭ� 2 =" << add(num1,num2) << endl;
 
    return 0;
}
