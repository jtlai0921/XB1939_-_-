#include <iostream> 
#include <cstdlib>
#include "CH05_23_1.h"  // ���J�ۭq�����Y��  
using namespace std;

int Enchant;          // �ŧi�����ܼơA�N���m��  
int main()  
{  
    cout << "�ˮ`��=(1-��m��/100)*�ĤH�����O" << endl; 
    cout << "���]�ĤH�����O��1150�A�h" << endl;  
    cout << "��m��\t�ˮ`��" << endl;  
    for (Enchant=0;Enchant<=60; Enchant+=10)  
        cout << "+" << Enchant << "\t" << Damage() << endl;  
        // �I�s�ۭq���Y�ɤ���Damage()���  

    return 0;
}
