#include <iostream>


using namespace std;
 
int main()
{
    //�ŧi�ܼ�
    int a = 12;  
    int b = 38;  //���զ줸�B��l
    
    cout << "NOT�B��G~a = " << (~a) <<endl;
    cout << "AND�B��Ga & b = " << (a & b) <<endl;
    cout << "OR�B��Ga | b = " << (a | b) <<endl;
    cout << "XOR�B��Ga ^ b = " << (a ^ b) <<endl;
    cout << "�����B��Ga << 2 = " << (a << 2) <<endl;
    cout << "�k���B��Ga >> 2 = " << (a >> 2) <<endl;
    
    return 0;
}

